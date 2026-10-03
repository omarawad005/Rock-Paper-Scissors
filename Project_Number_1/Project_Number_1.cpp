

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

//  ÕœÌœ „—«  «·›Ê“ 
struct stGameStats
{
    int PlayerWins = 0;
    int ComputerWins = 0;
    int DrawTime = 0;
};

//„Õ ÊÌ «··⁄»… 
enum enGameChoice
{
    Rock = 1,     // «·ÕÃ—…
    Paper = 2,    // «·Ê—ﬁ…
    Scissors = 3  // «·„ﬁ’
};

//  ÕœÌœ «·›«∆“ „‰ ﬂ· ÃÊ·…
enum enRoundWinner
{
    PlayerWin = 1,
    ComputerWin = 2,
    Draw = 3
};

// œ«·… «·«Œ Ì«— «·⁄‘Ê«∆Ì 
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

// ﬁ—«… ⁄œœ «·ÃÊ·«  
int ReadRound(string Message)
{
    int Round = 0;
    do
    {
        cout << Message;
        cin >> Round;
    } while (Round <= 0 || Round > 10);

    return Round;
}

// «Œ Ì«— «·„” Œœ„ 
enGameChoice GetPlayerChoice()
{
    int Num = 0;
    do
    {
        cout << "\nYour Choice [1]:Rock, [2]:Paper, [3]:Scissors ?";
        cin >> Num;

    } while (Num <= 0 || Num > 3);
    
    
    return enGameChoice(Num);
}

// «Œ Ì«— «·ﬂ„»ÌÊ — 
enGameChoice GetComputerChoice()
{
    return enGameChoice(RandomNumber(1, 3));
}

// string  ÕÊÌ· «·«Œ Ì«— «·Ì 
string GetChoice(enGameChoice GameChoice)
{
    if (GameChoice == enGameChoice::Paper)
        return "Paper";
    else if (GameChoice == enGameChoice::Rock)
        return "Rock";
    else
        return "Scissors"; 
}

//  ÕœÌœ «·›«∆“ ›Ì ﬂ· ÃÊ·… 
enRoundWinner GetRoundResult(enGameChoice PlayerChoice, enGameChoice ComputerChoice)
{

    if (PlayerChoice == ComputerChoice)
    {
         return enRoundWinner::Draw;
         
    }
    else if (PlayerChoice == enGameChoice ::Paper && ComputerChoice == enGameChoice::Rock)
    {
        return enRoundWinner::PlayerWin;
    }
    else if(PlayerChoice == enGameChoice::Rock && ComputerChoice == enGameChoice::Scissors)
    {
        return enRoundWinner::PlayerWin;
    }
    else if(PlayerChoice == enGameChoice::Scissors && ComputerChoice == enGameChoice::Paper)
    {
        return enRoundWinner::PlayerWin;
    }
    else
    {
        return enRoundWinner::ComputerWin;
    }
  
}

// ÿ»«⁄… «·›«∆“ ›Ì ﬂ· ÃÊ·… +  ÕœÌœ ·Ê‰ «·‘«‘…
string PrintRoundWinner(enRoundWinner RoundResult)
{
    if (RoundResult == enRoundWinner::PlayerWin)
    {
        system("color 2f");
        return "Player 1";
    }
    else if (RoundResult == enRoundWinner::ComputerWin)
    {
        system("color 4f");
         return "\aComputer";
    }
    else
    {
        system("color 6f");
        return "No Winner";
    }
}

// Õ”«» „—«  «·›Ê“ 
void UpdateGameStats(enRoundWinner RoundWinner, stGameStats& GameCount)
{
    
    if (RoundWinner == enRoundWinner::PlayerWin)
    {
        GameCount.PlayerWins++;
    }
    else if (RoundWinner == enRoundWinner::ComputerWin)
    {
        GameCount.ComputerWins++;
    }
    else
    {
        GameCount.DrawTime++;
    }

}

// „⁄·Ê„«  ﬂ· ÃÊ·… 
void ShowRoundResult(enGameChoice PlayerChoice, enGameChoice ComputerChoice, stGameStats &stats)
{
    
    enRoundWinner RoundWinner = GetRoundResult(PlayerChoice, ComputerChoice);

    cout << "\nPlayer1  Choice : " << GetChoice(PlayerChoice);
    cout << "\nComputer Choice : " << GetChoice(ComputerChoice);
    cout << "\nRound Winner    : " << PrintRoundWinner(RoundWinner);
    UpdateGameStats(RoundWinner, stats);
    
}

// «ŸÂ«— 
void ShowGameOver()
{
    cout << "\t\t\t______________________________________________________\n";
    cout << "\t\t\t                  +++ Game Over +++ \n";
    cout << "\t\t\t______________________________________________________\n";
 }

//  ÕœÌœ «·›«∆“ «·«ŒÌ—
string FinalWinner(stGameStats gameResult)
{
    if (gameResult.PlayerWins > gameResult.ComputerWins)
        return "Player1";
    else if (gameResult.ComputerWins > gameResult.PlayerWins)
        return "Computer";
    else
        return "No Winner";

}

// «ŸÂ«— «·‰ «∆Ã «·«ŒÌ—…
void ShowFinalResult(stGameStats gameResult, int Round) 
{
    cout << "\n\t\t\t___________________[ Game Results ]___________________\n";
    cout << "\t\t\tGame Round          : " << Round << endl;
    cout << "\t\t\tPlayer 1  won times : " << gameResult.PlayerWins << endl;
    cout << "\t\t\tComputer  won times : " << gameResult.ComputerWins << endl;
    cout << "\t\t\tDraw times          : " << gameResult.DrawTime << endl;
    cout << "\t\t\tFinal Winner        : " << FinalWinner(gameResult) << endl;
    cout << "\t\t\t______________________________________________________\n";
 }

// «⁄«œ… «·‘«‘… «·Ì «·«’·Ì…
void ResetScreen()
{
        // Ì„”Õ «·‘«‘…
    system("cls"); 
    system("color 0f"); 
        
}


// «·»œ«Ì…
void StartGame()
{
    char PlayAgain = 'Y';


    do
    {

        ResetScreen();


        int NumOfRound = ReadRound("Enter Number of Round 1 to 10 : ");

        stGameStats gamestate;

        for (int i = 0; i < NumOfRound; i++)
        {
            cout << "\nRound [" << i + 1 << "] begins : \n";

            enGameChoice PlayerChoice = GetPlayerChoice();
            enGameChoice ComputerChoice = GetComputerChoice();

            cout << "\n__________Round " << i + 1 << "_______________\n";
            ShowRoundResult(PlayerChoice, ComputerChoice, gamestate);
            cout << "\n________________________________\n";
        }

        ShowGameOver();
        ShowFinalResult(gamestate, NumOfRound);

        cout << "\n\t\t\tDo You want Play Again [ Y \ N ] ? ";
        cin >> PlayAgain;


    } while (PlayAgain == 'Y' || PlayAgain == 'y');

}


int main()
{
    srand((unsigned)time(NULL));
    
    StartGame();

    return 0;
}

