# CS50 Scrabble
A command-line Scrabble scoring program written in the C programming language that calculates and compares the scores of two players' words.

## Features:
- Letter Scoring: Assigns points to individual letters using a predefined array of Scrabble values.
- Score Calculation: Uses the `findScore()` function to iterate through each character and calculate the total word score.
- Case Handling: Supports both uppercase and lowercase alphabetical characters using `isupper()` and `islower()`.
- ASCII Indexing: Uses character arithmetic to map alphabetical characters to their corresponding positions in the points array.
- Two-Player Scoring: Calculates and compares the scores of two players.
- Winner Detection: Determines the winning player or declares a tie.
- Score Output: Displays both players' scores alongside the result.

#

Developed as apart of the curriculum for [Harvard University's CS50X: Introduction to Computer Science](https://cs50.harvard.edu/x/2025/psets/2/scrabble/)
