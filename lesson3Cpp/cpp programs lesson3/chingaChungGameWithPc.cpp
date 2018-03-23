#include <iostream>
#include <string>

void welcomeToGame(){
    std::cout << "Hellooo my friend...Let's play Chinga-Chung...The game ends when you or Pc already have 3 points...C'mon!! \n";
}

void moveComputer( int movePc ){
    std::cout << "Move Pc: " << movePc << std::endl;
}

void userPoints( int pointsUser ){
    std::cout << "Your points: " << pointsUser << std::endl;
}

void pcPoints( int pointsPc ){
    std::cout << "Pc points: " << pointsPc << std::endl;
}

void hr(){
    std::cout << "--------------------- \n";
}

void userWin(){
    std::cout << "You win my friend \n";
}

void pcWin(){
    std::cout << "Game over...You lost!!! \n";
}

int main(){
    int qar = 1, tuxt = 2, mkrat = 3;
    int movePc, moveUser;
    int pointsPc = 0, pointsUser = 0;
    welcomeToGame();
    while ( pointsPc < 3 && pointsUser < 3 ) {
        std::cout << "Your move!! ";
        std::cin >> moveUser;
        movePc = 1 + rand() % 3;
        if ( ( moveUser == tuxt && movePc == qar ) || ( moveUser == qar && movePc == mkrat ) || ( moveUser == mkrat && movePc == tuxt ) ) {
            moveComputer( movePc );
            userPoints( ++pointsUser );
            pcPoints( pointsPc );
            hr();
        } else if ( ( movePc == tuxt && moveUser == qar ) || ( movePc == qar && moveUser == mkrat ) || ( movePc == mkrat && moveUser == tuxt ) ) {
            moveComputer( movePc );
            userPoints( pointsUser );
            pcPoints( ++pointsPc );
            hr();
        } else {
            moveComputer( movePc );
            userPoints( pointsUser );
            pcPoints( pointsPc );
            hr();
        }
    }
    if ( pointsPc == 3 ) {
        pcWin();
    } else {
        userWin();
    }
    return 0;
}
