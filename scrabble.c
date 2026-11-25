// Include Librarys
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Array of score alphabetised
const int points[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                      1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Define prototypes
int findScore(string word);

int main(void)
{
    string playerOne = get_string("Player One: "); // Prompt player one for input
    string playerTwo = get_string("Player Two: "); // Prompt player two for input

    int scoreOne = findScore(playerOne);
    int scoreTwo = findScore(playerTwo);

    if (scoreOne > scoreTwo)
    {
        printf("Player 1 Wins! \n");
        printf("Player 1 Score: %i\n", scoreOne);
        printf("Player 2 Score: %i\n", scoreTwo);
    }
    else if (scoreOne < scoreTwo)
    {
        printf("Player 2 Wins! \n");
        printf("Player 1 Score: %i\n", scoreOne);
        printf("Player 2 Score: %i\n", scoreTwo);
    }
    else
    {
        printf("Tie! \n");
        printf("Player 1 Score: %i\n", scoreOne);
        printf("Player 2 Score: %i\n", scoreTwo);
    }
}

int findScore(string word)
{
    int score = 0;
    int x = strlen(word);

    for (int i = 0; i < x; i++) // Iterates over length of word
    {
        if (isupper(word[i]))
        {
            score = score +
                    points[word[i] -
                           'A']; /* 'a' ASCII code is subtracted from the 'i'th char in word, then
                                 uses that number as an index from points to add to score */
        }
        else if (islower(word[i]))
        {
            score = score +
                    points[word[i] -
                           'a']; /* 'a' ASCII code is subtracted from the 'i'th char in word, then
                                 uses that number as an index from points to add to score */
        }
    }
    return score;
}
