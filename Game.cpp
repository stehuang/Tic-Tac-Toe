
//this .cpp file contains the definitions for the constructors & member functions in the class "Game"

#include "Game.h"

// default constructor: sets the number of rounds and three vectors for printing the board to default values
Game::Game(){
    //    Person* person1 = new Person("", 0);
    //    Person* person2 = new Person("", 0);
    rounds = 0;
    std::vector<std::string>row1;
    std::vector<std::string>row2;
    std::vector<std::string>row3;
}

// constructor: sets the number of rounds to the number indicated by the users
Game::Game(int numOfRounds){
    //    Person* person1 = player1;
    //    Person* person2 = player2;
    rounds = numOfRounds;
//    std::vector<std::string>row1 = vec1;
//    std::vector<std::string>row2 = row2;
//    std::vector<std::string>row3 = row3;
}

// ACCESSOR MEMBER FUNCTIONS

// returns the number of rounds the users wish to play
int Game::getRounds() const{
    return rounds;
}


// MUTATOR MEMBER FUNCTIONS

// sets up the game by asking for the users' names and number of rounds, then proceeds to store the information into a pointer
// takes in the pointers that point to objects in the Person class as parameters in order to store new info
void Game::setUp(Person* person1, Person* person2){
    std::string name1, name2;
    int rounds;
    std::cout << "Number of games: ";
    std::cin >> rounds;
    setRounds(rounds);
    std::cin.ignore();
    std::cout << "Player 1 Name = ";
    getline(std::cin,name1);
    person1->storeName(name1);
    
    std::cout << "Player 2 Name = ";
    getline(std::cin,name2);
    person2->storeName(name2);
}

// changes the number of rounds to the number of rounds entered
void Game::setRounds (int numOfRounds){
    rounds = numOfRounds;
}

// prints the title "Tic Tac Toe" and the users' names
// takes in the pointers that point to objects in the Person class as parameters in order to obtain their names
void Game::printTitle(Person* person1, Person* person2){
    std::cout << "\t   " << "Tic Tac Toe" << std::endl;
    std::cout << "     " << person1->getName() << " (X) - " << person2->getName() << " (O)" << std::endl;
}


// sets the vector size to 3, which will be utilized for the game
//void Game::setVecSize(){
//    std::vector<std::string>vector(3);
//    row1 = vector;
//    row2 = vector;
//    row3 = vector;
//}

void Game::printNewVec(){
//    row1.push_back(" ");
//    row1.push_back(" ");
//    row1.push_back(" ");
//    row2.push_back(" ");
//    row2.push_back(" ");
//    row2.push_back(" ");
//    row3.push_back(" ");
//    row3.push_back(" ");
//    row3.push_back(" ");
    row1 = {" ", " ", " "};
    row2 = {" ", " ", " "};
    row3 = {" ", " ", " "};
    
}

// prints out a blank board at the beginning of every round
void Game::printGrid(){
   
    
    std::cout << "    1    " << "    2    " << "    3    " << std::endl;
    std::cout << "         " << "|" << "       " << "|" << "        " << std::endl;
    std::cout << 1 << "    " << row1[0] << "   |   " << row1[1] << "   |   " << row1[2] << std::endl;
    std::cout << " --------" << "|" << "-------" << "|" << "--------" << std::endl;
    std::cout << "         " << "|" << "       " << "|" << "        " << std::endl;
    std::cout << 2 << "    " << row2[0] << "   |   " << row2[1] << "   |   " << row2[2] <<std::endl;
    std::cout << " --------" << "|" << "-------" << "|" << "--------" << std::endl;
    std::cout << "         " << "|" << "       " << "|" << "        " << std::endl;
    std::cout << 3 << "    " << row3[0] << "   |   " << row3[1] << "   |   " << row3[2] << std::endl;
    std::cout << "         " << "|" << "       " << "|" << "        " << std::endl;
    
}

// sets all board entries to blank spaces at the beginning of every round
// takes in vector as parameters; vectors are passed by reference because the program needs to clear the entries for each new round
//void Game::setGrid(std::vector<std::string> &vec1, std::vector<std::string> &row2, std::vector<std::string> &row3){
////    for (int i=0;i<vec1.size();i++){
////        vec1[i] = " ";
////    }
////    for (int i=0;i<row2.size();i++){
////        row2[i] = " ";
////    }
////    for (int i=0;i<row3.size();i++){
////        row3[i] = " ";
////    }
//    vec1.push_back(" ");
//    vec1.push_back(" ");
//    vec1.push_back(" ");
//    row2.push_back(" ");
//    row2.push_back(" ");
//    row2.push_back(" ");
//    row3.push_back(" ");
//    row3.push_back(" ");
//    row3.push_back(" ");
//}

// updates the board as a player makes a move
// takes in vector as parameters; vectors are passed by reference because the program needs to update the board as players enter coordinates
//void Game::refreshGrid(std::vector<std::string> &vec1, std::vector<std::string> &row2, std::vector<std::string> &row3){
//    std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
//    std::cout << "    1    " << "    2    " << "    3    " << std::endl;
//    std::cout << "         " << "|" << "       " << "|" << "        " << std::endl;
//    std::cout << 1 << "    " << vec1[0] << "   |   " << vec1[1] << "   |   " << vec1[2] << std::endl;
//    std::cout << " --------" << "|" << "-------" << "|" << "--------" << std::endl;
//    std::cout << "         " << "|" << "       " << "|" << "        " << std::endl;
//    std::cout << 2 << "    " << row2[0] << "   |   " << row2[1] << "   |   " << row2[2] <<std::endl;
//    std::cout << " --------" << "|" << "-------" << "|" << "--------" << std::endl;
//    std::cout << "         " << "|" << "       " << "|" << "        " << std::endl;
//    std::cout << 3 << "    " << row3[0] << "   |   " << row3[1] << "   |   " << row3[2] << std::endl;
//    std::cout << "         " << "|" << "       " << "|" << "        " << std::endl;
//}

/* runs the game by:
    1. allows players to enter their coordinates by taking turns
    2. prevents players from entering invalid coordinates (ie taken, nonexistent ones)
    3. checks the horizontal, vertical, and diagonal rows after every move
    4. if detected a win, the program will report the winner of the round and restart the game
    5. reports the final winner after all rounds
 
 takes in the pointers as parameters to update their scores, and obtain their names & scores
 
 */
void Game::runGame(Person* person1, Person* person2){
    std::string location;
//    std::vector<std::string> vec1(3);
//    std::vector<std::string> row2(3);
//    std::vector<std::string> row3(3);
    int rounds = getRounds();
    std::cout << rounds << std::endl;
    int i = 1;
    while (rounds > 0){
            if (i%2 == 1){
                std::cout << person1 -> getName() << "(X) mark location: ";
                std::cin >> location;
                if (location == "11"){
                    if (row1[0] == " "){
                        row1[0] = "X";
                        printGrid();
                    }
                    else if(row1[0] != " "){
                        printGrid();
                        std::cout << "Invalid coordinate" << std::endl;
                        continue;
                    }
                }
                else if (location == "12"){
                    if (row1[1] == " "){
                        row1[1] = "X";
                        printGrid();
                    }
                    else if(row1[1] != " "){
                        printGrid();
                        std::cout << "Invalid coordinate" << std::endl;
                        continue;
                    }
                }
                else if (location == "13"){
                    if (row1[2] == " "){
                        row1[2] = "X";
                        printGrid();
                    }
                    else if(row1[2] != " "){
                        printGrid();
                        std::cout << "Invalid coordinate" << std::endl;
                        continue;
                    }
                }
                else if (location == "21"){
                    if (row2[0] == " "){
                        row2[0] = "X";
                        printGrid();
                    }
                    else if(row2[0] != " "){
                        printGrid();
                        std::cout << "Invalid coordinate" << std::endl;
                        continue;
                    }
                }
                else if (location == "22"){
                    if (row2[1] == " "){
                        row2[1] = "X";
                        printGrid();
                    }
                    else if(row2[1] != " "){
                        printGrid();
                        std::cout << "Invalid coordinate" << std::endl;
                        continue;
                    }
                }
                else if (location == "23"){
                    if (row2[2] == " "){
                        row2[2] = "X";
                        printGrid();
                    }
                    else if(row2[2] != " "){
                        printGrid();
                        std::cout << "Invalid coordinate" << std::endl;
                        continue;
                    }
                }
                else if (location == "31"){
                    if (row3[0] == " "){
                    row3[0] = "X";
                    printGrid();
                    }
                    else if(row3[0] != " "){
                        printGrid();
                        std::cout << "Invalid coordinate" << std::endl;
                        continue;
                    }
                }
                else if (location == "32"){
                    if (row3[1] == " "){
                        row3[1] = "X";
                        printGrid();
                    }
                    else if(row3[1] != " "){
                        printGrid();
                        std::cout << "Invalid coordinate" << std::endl;
                        continue;
                    }
                }
                else if (location == "33"){
                    if (row3[2] == " "){
                        row3[2] = "X";
                        printGrid();
                    }
                    else if(row3[2] != " "){
                        printGrid();
                        std::cout << "Invalid coordinate" << std::endl;
                        continue;
                    }
                }
                else {
                    printGrid();
                    std::cout << "Invalid coordinate" << std::endl;
                    continue;
                }
            }
            if (i%2 == 0){
                std::cout << person2->getName() << "(O) mark location: ";
                std::cin >> location;
                if (location == "11"){
                    if (row1[0] == " "){
                        row1[0] = "O";
                        printGrid();
                    }
                    else if(row1[0] != " "){
                        printGrid();;
                        std::cout << "Invalid coordinate" << std::endl;
                        continue;
                    }
                }
                else if (location == "12"){
                    if (row1[1] == " "){
                        row1[1] = "O";
                        printGrid();
                    }
                    else if(row1[1] != " "){
                        printGrid();;
                        std::cout << "Invalid coordinate" << std::endl;
                        continue;
                    }
                }
                else if (location == "13"){
                    if (row1[2] == " "){
                        row1[2] = "O";
                        printGrid();
                    }
                    else if(row1[2] != " "){
                        printGrid();
                        std::cout << "Invalid coordinate" << std::endl;
                        continue;
                    }
                }
                else if (location == "21"){
                    if (row2[0] == " "){
                        row2[0] = "O";
                        printGrid();
                    }
                    else if(row2[0] != " "){
                        printGrid();
                        std::cout << "Invalid coordinate" << std::endl;
                        continue;
                    }
                }
                else if (location == "22"){
                    if (row2[1] == " "){
                        row2[1] = "O";
                        printGrid();
                    }
                    else if(row2[1] != " "){
                        printGrid();
                        std::cout << "Invalid coordinate" << std::endl;
                        continue;
                    }
                }
                else if (location == "23"){
                    if (row2[2] == " "){
                        row2[2] = "O";
                        printGrid();
                    }
                    else if(row2[2] != " "){
                        printGrid();
                        std::cout << "Invalid coordinate" << std::endl;
                        continue;
                    }
                }
                else if (location == "31"){
                    if (row3[0] == " "){
                        row3[0] = "O";
                        printGrid();
                    }
                    else if(row3[0] != " "){
                        printGrid();
                        std::cout << "Invalid coordinate" << std::endl;
                        continue;
                    }
                }
                else if (location == "32"){
                    if (row3[1] == " "){
                        row3[1] = "O";
                        printGrid();
                    }
                    else if(row3[1] != " "){
                        printGrid();
                        std::cout << "Invalid coordinate" << std::endl;
                        continue;
                    }
                }
                else if (location == "33"){
                    if (row3[2] == " "){
                        row3[2] = "O";
                        printGrid();
                    }
                    else if(row3[2] != " "){
                        printGrid();
                        std::cout << "Invalid coordinate" << std::endl;
                        continue;
                    }
                }
                else {
                    printGrid();
                    std::cout << "Invalid coordinate" << std::endl;
//                    std::cout << person2->getName() << "(X) mark location: ";
//                    std::cin >> location;
                    continue;
                    }
            }
        i++;
            if (
                ((row1[0]==row1[1] && row1[1]==row1[2]) && row1[1]!=" ") ||
                ((row2[0]==row2[1] && row2[1]==row2[2]) && row2[1]!=" ") ||
                ((row3[0]==row3[1] && row3[1]==row3[2]) && row3[1]!=" ") ||
                ((row1[0]==row2[0] && row2[0]==row3[0]) && row2[0]!=" ") ||
                ((row1[1]==row2[1] && row2[1]==row3[1]) && row2[1]!=" ") ||
                ((row1[2]==row2[2] && row2[2]==row3[2]) && row2[2]!=" ") ||
                ((row1[0]==row2[1] && row2[1]==row3[2]) && row2[1]!=" ") ||
                ((row1[3]==row2[1] && row2[1]==row1[3]) && row1[1]!=" ") ){
                if (i%2 == 0){
                    std::cout << "The winner of this round is " << person1 -> getName() << std::endl;
                    person1->updateScore();
                    rounds--;
                    if (rounds > 0){
                    
                    printGrid();
                    i = 1;
                    }
                }
                else if (i%2 == 1){
                    std::cout << "The winner of this round is " << person2 -> getName()<< std::endl;
                    person2->updateScore();
                    rounds--;
                    if (rounds > 0){
                    printGrid();
                    i = 1;
                    }
                }
            }
            
            else if (row1[0]!= " " && row1[1]!=" " && row1[2]!=" " && row2[0]!=" " && row2[1]!=" " && row2[2]!=" " && row3[0]!=" " && row3[1]!=" " && row3[2]!=" "){
                std::cout << "Tie" << std::endl;
                rounds--;
                if (rounds > 0){
                    printGrid();
                    i = 1;
                }
            }
    }
    if (rounds == 0){
    std::cout << std::endl << person1->getName() << " : " << person1-> getScore() << std::endl;
    std::cout << person2->getName() << " : " << person2-> getScore() << std::endl;
    if (person1 -> getScore() > person2 -> getScore()){
        std::cout << "Congratulations " << person1 -> getName() << " you won" << std::endl << std::endl;
    }
    if (person2 -> getScore() > person1 -> getScore()){
        std::cout << "Congratulations " << person2 -> getName() << " you won" << std::endl << std::endl;
    }
    if (person1 -> getScore() == person2 -> getScore()){
        std::cout << "There is a tie" << std::endl << std::endl;
    }
        }
        }

