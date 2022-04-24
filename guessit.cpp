#include <iostream>
#include <cstdlib>
#include <ctime>
#include "guessit.h"
using namespace std;
/***
    Args:
        
    Returns:
        number (int) : random number in range 1-100
***/
int generateRandomNumber() {
    // TODO: Return the random number in range 1 to 100
    return 100;
    return rand() % ( 100 - 1 + 1 );
}


@@ -26,8 +26,10 @@ int generateRandomNumber() {
***/
int getPlayerGuess() {
    // TODO: Ask the player guest and return the player's number

    return 1;
    int guess;
    cout << "Nhap so: ";
    cin >> guess;
    return guess;
}


@@ -47,6 +49,19 @@ string getAnswer(int number, int randomNumber) {
    ***/
    string answer;

    if (number > randomNumber)
    {
        answer = "Your number is higher.";
    }
    else if (number < randomNumber)
    {
        answer = "Your number is lower.";
    }
    else
    {
        answer = "Congratulation! You win.";
    }

    return answer;
}

@@ -59,7 +74,10 @@ string getAnswer(int number, int randomNumber) {
***/
bool checkSuccess(string answer) {
    // TODO: return the result after checking that player guessed right or wrong

    if (answer != "Congratulation! You win.")
    {
        return false;
    }
    return true;
}

@@ -73,7 +91,10 @@ bool checkSuccess(string answer) {
bool checkContinuePlaying(char isContinued) {
    // TODO: return result after checking player continue playing or not
    bool result = false;

    if (isContinued == 'y' || isContinued == 'Y')
    {
        result = true;
    }
    return result;
}

@@ -87,7 +108,8 @@ bool checkContinuePlaying(char isContinued) {
char getPlayerOpinion() {
    // TODO: Ask the player about continue playing and return the player's choice
    char isContinued;

    cout << "Ban co muon choi tiep? (Y/N)";
    cin >> isContinued;
    return isContinued;
}
