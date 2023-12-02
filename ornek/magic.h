// Arup Guha
// 11/8/07

// 2-D Array Example done in COP 3223 - This program determines whether
// or not a 3x3 grid of integers is a magic square. A 3x3 magic square 
// has each integer from 1 to 9 appearing exactly once in the square and
// the sum of each row, column and diagonal is the same, 15.

#include <stdio.h>

int main() {

    int square[3][3], i;

    // Read in the user's magic square.
    printf("Please enter your magic square.\n");
    for (i=0; i<9; i++)
        scanf("%d", &square[i/3][i%3]);

    // Output the result.
    if (checksquare(square))
        printf("You have a magic square\n");
    else
        printf("Not a magic square\n");
}

// Returns 1 if square is a magic square, 0 otherwise.
int checksquare(int square[][3]) {

    // Checks the two requirements of a magic square and returns 1 only
    // if both are satisfied.
    return checknum(square)&&checksum(square);
}

// Returns 1 if the square contains each of the integers from 1 to 9
// exactly once. Returns 0 otherwise.
int checknum(int square[][3]) {

    int freq[10];
    int i,j;

    // Initialize all frequencies to 0.
    // Note: We will NOT use index 0 and we will store how many 1s we see
    //       in index 1, etc.
    for (i=0; i<10; i++)
        freq[i] = 0;

    // Go through each value in the square.
    for (i=0; i<3; i++)
        for (j=0; j<3; j++) {

            // Invalid value - not a magic square.
            if (square[i][j] < 1 || square[i][j] > 9)
                return 0;

            // Adjust the appropriate frequency counter.
            freq[square[i][j]]++;
        }

    // If any number from 1 to 9 doesn't appear once,
    // it's not a magic square.
    for (i=1; i<10; i++)
        if (freq[i] != 1)
            return 0;

    // Passed all the tests for this function.
    return 1;
}

// Returns 1 if the sum of each row, column and diagonal is 15. Returns 0
// otherwise.
int checksum(int square[][3]) {

    int i, j, sum;

    // check each row 
    for (i=0; i<3; i++) {

        // Here we find the sum of the values on row #i.
        sum = 0;
        for (j=0; j<3; j++)
            sum += square[i][j];

        // If this row doesn't pass, immediately return the result.
        if (sum != 15)
            return 0;
    }

    // Check each column.
    for (j=0; j<3; j++) {

        // Here we find the sum of column j.
        sum = 0;
        for (i=0; i<3; i++)
            sum += square[i][j];

        // If this column doesn't pass, immediately return the result.
        if (sum != 15)
            return 0;
    }

    // check forward diagonal
    if (square[0][0]+square[1][1]+square[2][2] != 15)
        return 0;

    // check backward diagonal
    if (square[0][2]+square[1][1]+square[2][0] != 15)
        return 0;

    // Yeah, it's a magic square!
    return 1;
}