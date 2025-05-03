#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

void board_display(std::vector<char> board){
 
    std::cout << board[0] << board[1] << board[2] << "\n" << board[3] << board[4] << board[5] << "\n" << board[6] << board[7] << board[8] << "\n";

}

void c_turn(int &c_move, int uinput, std::vector<char> &board){
    srand(time(NULL));
    
    c_move = std::rand() % 8;
    if(c_move == uinput){
        c_move = std::rand() % 8;
    }else if(c_move != uinput){

        switch(c_move){
            case 1:
                if(board[0] != 'x'){
                board[0] = 'o';
                }
                break;
            case 2:
                if(board[1] != 'x'){
                board[1] = 'o';
                }
                break;
            case 3:
                if(board[2] != 'x'){
                board[2] = 'o';    
                }
                break;
            case 4:
                if(board[3] != 'x'){
                board[3] = 'o';    
                }
                break;
            case 5:
                if(board[4] != 'x'){
                board[4] = 'o';    
                }
                break;
            case 6:
                if(board[5] != 'x'){
                board[5] = 'o';    
                }
                break;
            case 7:
                if(board[6] != 'x'){
                board[6] = 'o';    
                }
                break;
            case 8:
                if(board[7] != 'x'){
                board[7] = 'o';    
                }
                break;
            case 9:
                if(board[8] != 'x'){
                board[8] = 'o';    
                }
                break;
            default:
                std::cout << "Error\n";
        }
    }
}

void p_turn(int uinput, std::vector<char> &board){
    std::cout << "Type the number for the following options: \n";
    std::cout << "1) Upper left box   2) Upper middle box   3) Upper right box\n4) Middle left box  5) Middle middle box  6) Middle right box\n7) Bottom left box  8) Bottom middle box  9) Bottom right box\n\n";

    std::cin >> uinput;

    switch(uinput){
        case 1:
            board[0] = 'x';
            break;
        case 2:
            board[1] = 'x';
            break;
        case 3:
            board[2] = 'x';
            break;
        case 4:
            board[3] = 'x';
            break;
        case 5:
            board[4] = 'x';
            break;
        case 6:
            board[5] = 'x';
            break;
        case 7:
            board[6] = 'x';
            break;
        case 8:
            board[7] = 'x';
            break;
        case 9:
            board[8] = 'x';
            break;
        default:
            std::cout << "Error, choose a number 1-9.\n";
    }

}