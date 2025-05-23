#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

#define CLCONST1 0.0588
#define CLCONST2 0.296
#define CLCONST3 15.8

int count_letters(string text, int l);
int count_words(string text, int l);
int count_sentences(string text, int l);

int main(void)
{
    string text = get_string("Text: ");
    int len = strlen(text);
    int letters = count_letters(text, len);
    int words = count_words(text, len);
    int sentences = count_sentences(text, len);
    double cll = ((double) letters / words) * 100;
    double cls = ((double) sentences / words) * 100;
    double index = round(CLCONST1 * cll - CLCONST2 * cls - CLCONST3);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 1 && index < 16)
    {
        printf("Grade %i\n", (int) index);
    }
    else
    {
        printf("Grade 16+\n");
    }
}

int count_letters(string text, int l)
{
    int cnt = 0;
    for (int i = 0; i < l; i++)
    {
        if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))
        {
            cnt++;
        }
    }
    return cnt;
}

int count_words(string text, int l)
{
    int cnt = 0;
    for (int i = 0; i < l; i++)
    {
        if (text[i] == ' ')
        {
            cnt++;
        }
    }
    return cnt + 1;
}

int count_sentences(string text, int l)
{
    int cnt = 0;
    for (int i = 0; i < l; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            cnt++;
        }
    }
    return cnt;
}

