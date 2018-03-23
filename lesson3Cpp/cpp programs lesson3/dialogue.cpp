#include <iostream>
#include <string>

void messagePc( std::string pcMessage ){
    std::cout << pcMessage << std::endl;
}

int main()
{
    std::string userMessage, pcMessage;
    bool state = true;
    pcMessage = "Barev.inchpes es?";
    while ( state == true ) {
        messagePc( pcMessage );
        std::cin >> userMessage;
        if( userMessage == "hajoxutyun" ){
            state = false;
        } else if ( userMessage == "barev.lav du?") {
            pcMessage = "Lav shnnorhakalutyun. gorcert lav en?";
        } else if ( userMessage == "ayo.qezanic patmir" ) {
            pcMessage = "amen inch nuynn e inchpes gites...verjy chamusnacar der?";
        } else if ( userMessage == "che ha inch amusnanal" ) {
            pcMessage = "de mec txa es...amusnaci mi lav qef anenq!";
        } else if ( userMessage == "vonc ases" ) {
            pcMessage = "lav indz kneres es shtap tex petqa gnam...arden ushaca..ctesutyun";
        } else {
            pcMessage = "temayic shexvecir jigyar";
        }
    }
}
