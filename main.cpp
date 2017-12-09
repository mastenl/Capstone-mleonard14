#include <iostream>
#include <fstream>
#include <string>
#include "TicTacToe.h"

using namespace std;




int main()
{
  bool initiate=false;
  TicTacToe game;
  int turns=1;
  char player;

  initiate = game.welcome();
  while(initiate==true)
  {
    game.boardReset();
    turns=1;
    while(game.checkWinner(turns)==false)
    {
    player=game.switchTurns(turns);
    game.drawBoard();
    game.place(player);
    turns++;
    continue;

    }
    game.drawBoard();
    initiate = game.welcome();
  }
  return 0;
}
