#include <iostream>
#include <string>

void welcomeToGame(){
    std::cout << "Hellooo my friend...Let's play Chinga-Chung...The game ends when you or your opponent already have 3 points...C'mon!! \n";
}

void user1Points( int pointsUser1 ){
    std::cout << "User 1 points: " << pointsUser1 << std::endl;
}

void user2Points( int pointsUser2 ){
    std::cout << "User 2 points: " << pointsUser2 << std::endl;
}

void hr(){
    std::cout << "--------------------- \n";
}

void user1Win(){
    std::cout << "User 1: You win!!! \n";
}

void user2Win(){
    std::cout << "User 2: You win!!! \n";
}

int main(){
    int qar = 1, tuxt = 2, mkrat = 3;
    int moveUser2, moveUser1;
    int pointsUser2 = 0, pointsUser1 = 0;
    welcomeToGame();
    while ( pointsUser2 < 3 && pointsUser1 < 3 ) {
        std::cout << "User 1: input your move!! ";
        std::cin >> moveUser1;
        std::cout << "User 2: input your move!! ";
        std::cin >> moveUser2;
        if ( ( moveUser1 == tuxt && moveUser2 == qar ) || ( moveUser1 == qar && moveUser2 == mkrat ) || ( moveUser1 == mkrat && moveUser2 == tuxt ) ) {
            user1Points( ++pointsUser1 );
            user2Points( pointsUser2 );
            hr();
        } else if ( ( moveUser2 == tuxt && moveUser1 == qar ) || ( moveUser2 == qar && moveUser1 == mkrat ) || ( moveUser2 == mkrat && moveUser1 == tuxt ) ) {
            user1Points( pointsUser1 );
            user2Points( ++pointsUser2 );
            hr();
        } else {
            user1Points( pointsUser1 );
            user2Points( pointsUser2 );
            hr();
        }
    }
    if ( pointsUser2 == 3 ) {
        user2Win();
    } else {
        user1Win();
    }
    return 0;
}
