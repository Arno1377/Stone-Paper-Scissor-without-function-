#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string elements[3] = { "stone","paper","scissor" };
    string player;
    string AI;
    cout << "please choose between Stone Or Paper Or Scissor : ";
    cin >> player;
    srand(time(0));
    int randchoice = (rand() % 3) + 1;
    cout << randchoice;
    switch (randchoice)
    {
    case 1:
        AI = "stone";
        break;
    case 2:
        AI = "paper";
        break;
    case 3:
        AI = "scissor";
        break;
    }
    cout << "AI CHOOSED : " << AI << endl;
    if (player == "stone" && AI == "stone  " ||
        player == "paper" && AI == "paper  " ||
        player == "scissor" && AI == "scissor")
    {
        cout << "*** TIE ***" << endl;
    }
    else if (player == "stone" && AI == "scissor" ||
             player == "paper" && AI == "stone  " ||
             player == "scissor" && AI == "paper  ")
    {
        cout << "*** PLAYER IS WINNER ***" << endl;
    }
    else if (player == "stone" && AI == "paper  " ||
        player == "paper" && AI == "scissor" ||
        player == "scissor" && AI == "stone  ")
    {
        cout << "*** AI IS WINNER ***" << endl;
    }
    return 0;

}

