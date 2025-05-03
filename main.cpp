#include <iostream>
#include<vector>
#include <cstdlib>
#include <ctime>

#include "functions.hpp"



int main(){


    std::vector<char> board = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};

    int uinput;
    
    int tcount = 0;

    int c_move;

    std::string pwin = "Player wins!";
    std::string cwin = "Computer wins!";

    bool turn = true;

    for(int i = 0; i < 9; i++){
        tcount++;
        std::cout << "\nTurn: " << tcount << "\n";
        
        board_display(board);

        p_turn(uinput, board);
        c_turn(c_move, uinput, board);

        //check if player wins
        if(board[0] == 'x' && board[1] == 'x' && board[2] == 'x'){
            board_display(board);
            std::cout << pwin;
            i = 9;
        }else if(board[3] == 'x' && board[4] == 'x' && board[5] == 'x'){
            board_display(board);
            std::cout << pwin;
            i = 9;
        }else if(board[6] == 'x' && board[7] == 'x' && board[8] == 'x'){
            board_display(board);
            std::cout << pwin;
            i = 9;
        }else if(board[0] == 'x' && board[3] == 'x' && board[6] == 'x'){
            board_display(board);
            std::cout << pwin;
            i = 9;
        }else if(board[1] == 'x' && board[4] == 'x' && board[7] == 'x'){
            board_display(board);
            std::cout << pwin;
            i = 9;
        }else if(board[2] == 'x' && board[5] == 'x' && board[8] == 'x'){
            board_display(board);
            std::cout << pwin;
            i = 9;
        }else if(board[0] == 'x' && board[4] == 'x' && board[8] == 'x'){
            board_display(board);
            std::cout << pwin;
            i = 9;
        }else if(board[2] == 'x' && board[4] == 'x' && board[6] == 'x'){
            board_display(board);
            std::cout << pwin;
            i = 9;
        }

        //check if computer wins
        if(board[0] == 'o' && board[1] == 'o' && board[2] == 'o'){
            board_display(board);
            std::cout << cwin;
            i = 9;
        }else if(board[3] == 'o' && board[4] == 'o' && board[5] == 'o'){
            board_display(board);
            std::cout << cwin;
            i = 9;
        }else if(board[6] == 'o' && board[7] == 'o' && board[8] == 'o'){
            board_display(board);
            std::cout << cwin;
            i = 9;
        }else if(board[0] == 'o' && board[3] == 'o' && board[6] == 'o'){
            board_display(board);
            std::cout << cwin;
            i = 9;
        }else if(board[1] == 'o' && board[4] == 'o' && board[7] == 'o'){
            board_display(board);
            std::cout << cwin;
            i = 9;
        }else if(board[2] == 'o' && board[5] == 'o' && board[8] == 'o'){
            board_display(board);
            std::cout << cwin;
            i = 9;
        }else if(board[0] == 'o' && board[4] == 'o' && board[8] == 'o'){
            board_display(board);
            std::cout << cwin;
            i = 9;
        }else if(board[2] == 'o' && board[4] == 'o' && board[6] == 'o'){
            board_display(board);
            std::cout << cwin;
            i = 9;
        }


    }

    

}