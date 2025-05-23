#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define LETTERS 26

bool check_arg(string arg[], int narg);
void print_ciphertext(string t, string a);

int main(int argc, string argv[])
{
    bool argok = false;
    argok = check_arg(argv, argc);
    if (!argok)
    {
        return 1;
    }
    else
    {
        string text = get_string("plaintext: ");
        print_ciphertext(text, argv[1]);
        printf("\n");
        return 0;
    }

}

bool check_arg(string arg[], int narg) // , int larg
{
    if (narg < 2 || narg > 2)
    {
        printf("Arguments given: %i, arguments required: 1\n", narg - 1);
        return false;
    }
    else
    {
        int lenarg = strlen(arg[1]);
        if (lenarg != 26)
        {
            printf("The argument given is not 26 chars long!\n");
            return false;
        }
        else
        {
            int cntletters[LETTERS];
            for (int l = 0; l < LETTERS; l++)
            {
                cntletters[l] = 0;
            }
            for (int i = 0; i < lenarg; i++)
            {
                if ((arg[1][i] >= 'A' && arg[1][i] <= 'Z') || (arg[1][i] >= 'a' && arg[1][i] <= 'z'))
                {
                    bool upper = (arg[1][i] >= 'A' && arg[1][i] <= 'Z') ? true : false;
                    if (upper)
                    {
                        cntletters[arg[1][i] - 'A']++;
                    }
                    else
                    {
                        cntletters[arg[1][i] - 'a']++;
                    }
                }
                else
                {
                    printf("Argument does contain non-admitted char: %c\n", arg[1][i]);
                    return false;
                }
            }
            for (int j = 0; j < LETTERS; j++)
            {
                if (cntletters[j] != 1)
                {
                    printf("Arguments contains duplicated letters!\n");
                    return false;
                }
            }
            return true;
        }
    }
}

void print_ciphertext(string t, string a)
{
    int lent = strlen(t);
    int lena = strlen(a);
    char result[lent + 1];
    for (int i = 0; i < lent; i++)
    {
        if (t[i] < 'A' || (t[i] > 'Z' && t[i] < 'a') || t[i] > 'z')
        {
            result[i] = t[i];
        }
        else
        {
            bool upper = (t[i] >= 'A' && t[i] <= 'Z') ? true : false;
            if (upper)
            {
                result[i] = toupper(a[t[i] - 'A']);
            }
            else
            {
                result[i] = tolower(a[t[i] - 'a']);
            }
        }
    }
    result[lent] = '\0';
    printf("ciphertext: %s", result);
}
