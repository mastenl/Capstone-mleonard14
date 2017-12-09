#ifndef _TicTacToe_H_
#define _TicTacToe_H_
#include <string>
#include <vector>

class TicTacToe
{
private:
  char board[3][3];
public:
  char player;
  void boardReset();
  bool welcome();
  void drawBoard();
  char switchTurns(int);
  void place(char &player);//move
  bool checkWinner(int);

};
#endif
