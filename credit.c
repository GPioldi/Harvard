#include <cs50.h>
#include <stdio.h>

int number_of_digits (long n);
string get_card_type(long card, int lenght);
bool luhns_validation(long number, int ndig);
int ipow(int base, int exp);

int main(void)
{
    int numberofdigit = 0;
    long cardnumber = 0;
    cardnumber = get_long("Provide your credit card number: ");
    numberofdigit = number_of_digits(cardnumber);
    string cardtype = get_card_type(cardnumber, numberofdigit);
    printf("%s\n", cardtype);
}

int number_of_digits (long n)
{
    if (n < 10) return 1;
    if (n < 100) return 2;
    if (n < 1000) return 3;
    if (n < 10000) return 4;
    if (n < 100000) return 5;
    if (n < 1000000) return 6;
    if (n < 10000000) return 7;
    if (n < 100000000) return 8;
    if (n < 1000000000) return 9;
    if (n < 10000000000) return 10;
    if (n < 100000000000) return 11;
    if (n < 1000000000000) return 12;
    if (n < 10000000000000) return 13;
    if (n < 100000000000000) return 14;
    if (n < 1000000000000000) return 15;
    if (n < 10000000000000000) return 16;
    if (n < 100000000000000000) return 17;
    if (n < 1000000000000000000) return 18;
    // if (n < 10000000000000000000) return 19;
    // if (n < 100000000000000000000) return 20;
    return 0;
}

string get_card_type(long card, int lenght)
{
    if (lenght != 13 && lenght != 15 && lenght != 16)
    {
        return "INVALID";
    }
    int firstdigit = 0;
    int firsttwodigits = 0;
    bool res = false;
    if (lenght == 15)
    {
        firstdigit = card / 100000000000000;
        firsttwodigits = card / 10000000000000;
        if (firsttwodigits == 34 || firsttwodigits == 37)
        {
            res = luhns_validation(card, lenght);
            if (res == true) return "AMEX";
            else return "INVALID";
        }
        else
        {
            return "INVALID";
        }
    }
    else if (lenght == 13)
    {
        firstdigit = card / 1000000000000;
        firsttwodigits = card / 100000000000;
        if (firstdigit == 4)
        {
            res = luhns_validation(card, lenght);
            if (res == true) return "VISA";
            else return "INVALID";
        }
        else
        {
            return "INVALID";
        }
    }
    else if (lenght == 16)
    {
        firstdigit = card / 1000000000000000;
        firsttwodigits = card / 100000000000000;
        if (firsttwodigits >= 51 && firsttwodigits <= 55)
        {
            res = luhns_validation(card, lenght);
            if (res == true) return "MASTERCARD";
            else return "INVALID";
        }
        else if (firstdigit == 4)
        {
            res = luhns_validation(card, lenght);
            if (res == true) return "VISA";
            else return "INVALID";
        }
        else
        {
            return "INVALID";
        }
    }
    else
    {
        return "INVALID";
    }
}

bool luhns_validation(long number, int ndig)
{
    int sum = 0;
    bool second = false;

    while (number > 0)
    {
        int digit = number % 10;

        if (second)
        {
            int doubled = digit * 2;
            sum += (doubled / 10) + (doubled % 10);  // add digits separately
        }
        else
        {
            sum += digit;
        }

        second = !second;
        number /= 10;
    }
    if (sum % 10 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int ipow(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}
