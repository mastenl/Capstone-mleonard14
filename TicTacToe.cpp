#include "TicTacToe.h"
#include <string>
#include <iostream>
#include <fstream>

//TicTacToe::TicTacToe()
void TicTacToe::boardReset()
{
  char posNumber='0';
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      posNumber++;
      board[i][j]=posNumber;
    }
  }
}

bool TicTacToe::welcome()
{
  std::string answer;
  bool play;
  bool valid=false;
  std::ifstream file("welcome.txt");
  if (file.is_open())
  std::cout << file.rdbuf();
  file.close();


  while(valid==false)
  {
    std::cin>>answer;
    if(answer == "y")
    {
      play = true;
      valid=true;
    }

    else if(answer == "n")
    {
      std::cout << ":( ok, Goodbye."<<std::endl;
      play= false;
      valid=true;
    }

    else
    {
      std::cout << "Please input a proper answer. (y/n)" << std::endl;
      continue;
    }
  }
  return play;
}



void TicTacToe::drawBoard()
{

  std::cout << "    |     |    " << std::endl;
  std::cout << " " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << std::endl;

  std::cout << "____|_____|____" << std::endl;
  std::cout << "    |     |    " << std::endl;

  std::cout << " " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << std::endl;

  std::cout << "____|_____|____" << std::endl;
  std::cout << "    |     |    " << std::endl;
  std::cout << " " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << std::endl;
  std::cout << "    |     |    " << std::endl;
}



void TicTacToe::place(char &player)
{
  std::string move;
  bool validMove=false;
  std::cout <<"Enter the position you would like to mark."<<std::endl;

  while(validMove==false)
  {

    std::cin >> move;
    if( move == "1" && board[0][0]!='X' && board[0][0]!='O')//checks if valid move
    {
        board[0][0] = player;//place marker
        validMove=true;
    }
    else if(move == "2" && board[0][1]!='X' && board[0][1]!='O')
    {
        board[0][1] = player;
        validMove=true;
    }
    else if(move == "3" && board[0][2]!='X' && board[0][2]!='O')
    {
        board[0][2] = player;
        validMove=true;
    }
    else if(move == "4" && board[1][0]!='X' && board[1][0]!='O')
    {
        board[1][0] = player;
        validMove=true;
    }
    else if(move == "5" && board[1][1]!='X' && board[1][1]!='O')
    {
        board[1][1] = player;
        validMove=true;
    }
    else if(move == "6" && board[1][2]!='X' && board[1][2]!='O')
    {
        board[1][2] = player;
        validMove=true;
    }
    else if(move == "7" && board[2][0]!='X' && board[2][0]!='O')
    {
        board[2][0] = player;
        validMove=true;
    }
    else if(move == "8" && board[2][1]!='X' && board[2][1]!='O')
    {
        board[2][1] = player;
        validMove=true;
    }
    else if(move == "9" && board[2][2]!='X' && board[2][2]!='O')
    {
        board[2][2] = player;
        validMove=true;
    }
    else
    {
      std::cout<<"Invalid move"<<std::endl;
      continue;
    }
  }

}

char TicTacToe::switchTurns(int turns)
{

  if (turns==1||turns==3||turns==5||turns==7||turns==9)
  {
    player = 'X';
  }
  else
  {
    player = 'O';
  }
  return(player);
}


bool TicTacToe::checkWinner(int turns)
{
  bool winner=false;
  bool tieGame=false;

        if(board[0][0] == board[0][1] && board[0][1] == board[0][2])
        {
            winner=true;
        }
        else if(board[1][0] == board[1][1] && board[1][1] == board[1][2])
        {
            winner=true;
        }
        else if(board[2][0] == board[2][1] && board[2][1] == board[2][2])
        {
            winner=true;
        }
        else if(board[0][0] == board[1][0] && board[1][0] == board[2][0])
        {
            winner=true;
        }
        else if(board[0][1] == board[1][1] && board[1][1] == board[2][1])
        {
            winner=true;
        }
        else if(board[0][2] == board[1][2] && board[1][2] == board[2][2])
        {
            winner=true;
        }
        else if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
        {
            winner=true;
        }
        else if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
        {
            winner=true;
        }

        else if(turns>9 && winner==false)
        {
          std::cout<<"Tie Game!"<<std::endl;
          tieGame=true;
          return(tieGame);
        }

    if(winner==true)
    {
        if(player == 'X')
        {
            std::cout << std::endl << "Congratulations Player 1!  You Win!" << std::endl;
        }
        else
        {
            std::cout << std::endl << "Congratulations Player 2!  You Win!" << std::endl;
        }
    }

    return(winner);

}
