//
// Created by SRI CHARAN on 23-02-2026.
//

#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoices(char choice);
void chooseWinner(char userchoice , char computerchoice);
int main() {
    char userchoice;
    char computerchoice;
    userchoice = getUserChoice();
    showChoices(userchoice);
    computerchoice = getComputerChoice();
    showChoices(computerchoice);
    chooseWinner(userchoice, computerchoice);
    return 0;
}
char getUserChoice() {
    char player;
    do {
        std::cin>>player;
    }
    while (player == 'r' && player == 'p' && player == 's');
    return player;
}
char getComputerChoice() {
    srand(time(NULL));
    int num =rand()%3+1;
    switch (num) {
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }
return 0;
}
void showChoices(char choice) {
    switch (choice) {
        case 'r':
            std::cout<<"rock "<<std::endl;
            break;
        case 'p':
            std::cout<<"paper "<<std::endl;
            break;
        case 's':
            std::cout<<"scissor "<<std::endl;
            break;
    }
}
void chooseWinner(char userchoice , char computerchoice) {
        switch (userchoice) {
            case 'r': if (computerchoice == 'r') std::cout<<"tie";
                    else if (computerchoice == 'p') std::cout<<"lose";
                    else  std::cout<<"win";
                break;

                case 'p': if (computerchoice == 'p') std::cout<<"tie";
                else if (computerchoice == 's') std::cout<<"lose";
                else  std::cout<<"win";
                break;
                case 's': if (computerchoice == 's') std::cout<<"tie";
                else if (computerchoice == 'r') std::cout<<"lose";
                else  std::cout<<"win";
                break;
        }

}