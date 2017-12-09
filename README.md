# Capstone-mleonard14

# Input/Output
I needed to know where the player wanted to put their piece so I outputted a simple message asking them.
Then I had them input the position that they wanted to put it in.
[TicTacToe.cpp lines 81,86](/TicTacToe.cpp))



#Control Flow
Here I used if and its counter part else if in order to set up conditions to tell if the user can mark in that position or not. I also used an else in order to call any inputs that are not a position "invalid".
[TicTacToe.cpp lines 87-136](/TicTacToe.cpp))



#Iteration

##while
I put a while loop here so I could run the game in a loop until the game is finished.
[main.cpp lines 23-31](/main.cpp))

##for
put a nested for loop in for my array. This will allow each square to have a sequential number.
[TicTacToe.cpp lines 10-17](/TicTacToe.cpp))




#Data Structure

##Array
I declare an array here so I can reference it throughout my code and I only need 3x3 square.
[TicTacToe.h line 9](/TicTacToe.h))



#Function
##void function
I have a function that prints out the Tic-Tac-Toe board. Does not need to return anything so it is a void.
[TicTacToe.cpp lines 58-73](/TicTacToe.cpp))

##pass-by-reference
Player is passed by reference so that we can tell if it is 'X'or 'O' that is being placed down in a
position chosen by the player.
[TicTacToe.cpp lines 77-139](/TicTacToe.cpp))

#non-void type function
I have a function that switches the character of 'X' to 'O' and vice versa. Because it switched what player was equal too I needed the function to return a char.
[TicTacToe.cpp lines 141-153](/TicTacToe.cpp))



#File IO
I have it open a file called "welcome.txt" and it prints out the entire file as a greeting. It is a roundabout way of doing it but it has the correct effect.
[TicTacToe.cpp lines 25-28](/TicTacToe.cpp))


#Class
Here I declare a class called TicTacToe so that I am able to easily pass information between files. 
[TicTacToe.h lines 1-20](/TicTacToe.h))
