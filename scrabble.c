#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int binary_search(char ch, int matrix[][2], int len);

int main(void)
{
    int scores[26][2] = {
        {'A', 1}, {'B', 3}, {'C', 3}, {'D', 2}, {'E', 1},
        {'F', 4}, {'G', 2}, {'H', 4}, {'I', 1}, {'J', 8},
        {'K', 5}, {'L', 1}, {'M', 3}, {'N', 1}, {'O', 1},
        {'P', 3}, {'Q', 10}, {'R', 1}, {'S', 1}, {'T', 1},
        {'U', 1}, {'V', 4}, {'W', 4}, {'X', 8}, {'Y', 4}, {'Z', 10}
    };
    string word1 = get_string("Player 1 word: ");
    string word2 = get_string("Player 2 word: ");
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int score1 = 0;
    int score2 = 0;
    for (int i = 0; i < len1; i++)
    {
        int ind1 = binary_search(toupper(word1[i]), scores, 26);
        if (ind1 >= 0)
        {
            score1 += scores[ind1][1];
        }
    }
    for (int j = 0; j < len2; j++)
    {
        int ind2 = binary_search(toupper(word2[j]), scores, 26);
        if (ind2 >= 0)
        {
            score2 += scores[ind2][1];
        }
    }
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int binary_search(char ch, int matrix[][2], int len)
{
    int left = 0;
    int right = len - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (matrix[mid][0] == ch)
        {
            return mid;
        }
        if (matrix[mid][0] < ch)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
