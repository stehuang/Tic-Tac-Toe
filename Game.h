
// this header file contains the class "Game"

#ifndef Game_h
#define Game_h

#include <iostream>
#include <string>
#include <vector>
#include "Person.h"

class Person;
class Game{
public:
    //default constructor
    Game();
    
    // constructor
    Game(int numOfRounds);
    
    // accessor functions
    int getRounds() const;
    
    
    // mutator functions
    void setUp(Person* person1, Person* person2);
    void setRounds(int numOfRounds);
    void printTitle(Person* person1, Person* person2);
    void printGrid();
    void printNewVec();
    void runGame(Person* person1, Person* person2);
    void refreshGrid(std::vector<std::string> &vec1, std::vector<std::string> &vec2, std::vector<std::string> &vec3);
    void newBoard(std::vector<std::string> &vec1, std::vector<std::string> &vec2, std::vector<std::string> &vec3);  

private:
    Person* person1;
    Person* person2;
    int rounds;
    std::vector<std::string> row1 = std::vector<std::string>(3);
    std::vector<std::string> row2 = std::vector<std::string>(3);
    std::vector<std::string> row3 = std::vector<std::string>(3);

//function definitions

//Game::Game(){
////    Person* person1 = new Person("", 0);
////    Person* person2 = new Person("", 0);
//    rounds = 0;
//}
//Game::Game(int numOfRounds, std::vector<std::string>row1, std::vector<std::string>row2, std::vector<std::string>row3){
////    Person* person1 = player1;
////    Person* person2 = player2;
//    rounds = numOfRounds;
//    std::vector<std::string>vec1 = row1;
//    std::vector<std::string>vec2 = row2;
//    std::vector<std::string>vec3 = row3;
//}
//
//void Game::setRounds (int numOfRounds){
//    rounds = numOfRounds;
//}
//
//int Game::getRounds() const{
//    return rounds;
//}
//
//
//void Game::printGrid(){
//    std::vector<std::string> vec1(3);
//    std::vector<std::string> vec2(3);
//    std::vector<std::string> vec3(3);
//    
//    std::cout << "    1    " << "    2    " << "    3    " << std::endl;
//    std::cout << "         " << "|" << "       " << "|" << "        " << std::endl;
//    std::cout << 1 << "     " << vec1[0] << "   |   " << vec1[1] << "    |   " << vec1[2] << std::endl;
//    std::cout << " --------" << "|" << "-------" << "|" << "--------" << std::endl;
//    std::cout << "         " << "|" << "       " << "|" << "        " << std::endl;
//    std::cout << 2 << "     " << vec2[0] << "   |   " << vec2[1] << "    |   " << vec2[2] <<std::endl;
//    std::cout << " --------" << "|" << "-------" << "|" << "--------" << std::endl;
//    std::cout << "         " << "|" << "       " << "|" << "        " << std::endl;
//    std::cout << 3 << "     " << vec3[0] << "   |   " << vec3[1] << "    |   " << vec3[2] << std::endl;
//    std::cout << "         " << "|" << "       " << "|" << "        " << std::endl;
//    
//}
//
//
//
//void Game::runGame(int &numOfRounds, std::string location,std::vector<std::string>vec1,std::vector<std::string>vec2, std::vector<std::string>vec3, Person* person1, Person* person2){
//    
//    do{
//    for (int i=9;i>0;i--){
//        if (i%2 == 1){
//            std::cout << person1->getName() << "(X) mark location: ";
//            std::cin >> location;
//            if (location == "11"){
//                if (vec1[0] == ""){
//                vec1[0] = "X";
//                printGrid();
//            }
//            }
//            else if (location == "12"){
//                if (vec1[1] == ""){
//                vec1[1] = "X";
//                printGrid();
//            }
//            }
//            else if (location == "13"){
//                if (vec1[2] == ""){
//                vec1[2] = "X";
//                printGrid();
//            }
//            }
//            else if (location == "21"){
//                if (vec2[0] == ""){
//                vec2[0] = "X";
//                printGrid();
//            }
//            }
//            else if (location == "22"){
//                if (vec2[1] == ""){
//                vec2[1] = "X";
//                printGrid();
//            }
//            }
//            else if (location == "23"){
//                if (vec2[2] == ""){
//                vec2[2] = "X";
//                printGrid();
//            }
//            }
//            else if (location == "31"){
//                vec3[0] = "X";
//                printGrid();
//            }
//            else if (location == "32"){
//                if (vec3[1] == ""){
//                vec3[1] = "X";
//                printGrid();
//            }
//            }
//            else if (location == "33"){
//                if (vec3[2] == ""){
//                vec3[2] = "X";
//                printGrid();
//            }
//            }
//            else {
//                std::cin >> location;
//            }
//        }
//        if (i%2 == 0){
//            std::cout << person2->getName() << "(X) mark location: ";
//            std::cin >> location;
//            if (location == "11"){
//                if (vec1[0] == ""){
//                    vec1[0] = "O";
//                }
//            }
//            else if (location == "12"){
//                if (vec1[1] == ""){
//                    vec1[1] = "O";
//                }
//            }
//            else if (location == "13"){
//                if (vec1[2] == ""){
//                    vec1[2] = "O";
//                }
//            }
//            else if (location == "21"){
//                if (vec2[0] == ""){
//                    vec2[0] = "O";
//                }
//            }
//            else if (location == "22"){
//                if (vec2[1] == ""){
//                    vec2[1] = "O";
//                }
//            }
//            else if (location == "23"){
//                if (vec2[2] == ""){
//                    vec2[2] = "O";
//                }
//            }
//            else if (location == "31"){
//                if (vec3[0] == ""){
//                    vec3[0] = "O";
//                }
//            }
//            else if (location == "32"){
//                if (vec3[1] == ""){
//                    vec3[1] = "O";
//                }
//            }
//            else if (location == "33"){
//                if (vec3[2] == ""){
//                    vec3[2] = "O";
//                }
//            }
//            else {
//                std::cin >> location;
//            }
//        }
//        if ((vec1[0]==vec1[1] && vec1[1]==vec1[2]) || (vec2[0]==vec2[1] && vec2[1]==vec2[2]) || (vec3[0]==vec3[1] && vec3[1]==vec3[2]) || (vec1[0]==vec2[0] && vec2[0]==vec3[0]) || (vec1[1]==vec2[1] && vec2[1]==vec3[1]) || (vec1[2]==vec2[2] && vec2[2]==vec3[2]) || (vec1[0]==vec2[1] && vec2[1]==vec3[2]) || (vec1[3]==vec2[1] && vec2[1]==vec1[3])){
//            if (i%2 == 1){
//                std::cout << "The winner of this round is " << person1 -> getName();
//            }
//            else if (i%2 == 0){
//                std::cout << "The winner of this round is " << person2 -> getName();
//            }
//        }
//
//        else{
//            std::cout << "Tie" << std::endl;
//            printGrid();
//        }
//        rounds--;
//    }
//        
//    }
//    while (rounds > 0);
//}
//
//
//void Game::printTitle(Person* person1, Person* person2){
////    int rounds;
////    std::string name1, name2;
////    //    Person player1, player2;
////    Game newGame;
////    std::cout << "Number of games: ";//link it with the class function
////    std::cin >> rounds;
////    newGame.setRounds(rounds);
////    std::cin.ignore();
////    std::cout << "Player 1 Name = ";
////    getline(std::cin,name1);
////    //    player1.storeName(name1);
////    //    player1.setSign("X");
////    Person* player1 = new Person (name1, 0, "X");
////    std::cout << "Player 2 Name = ";
////    getline(std::cin,name2);
////    //    player2.storeName(name2);
////    //    player2.setSign("O");
////    Person* player2 = new Person (name2, 0, "O");
//    std::cout << "\t   " << "Tic Tac Toe" << std::endl;
//    std::cout << "     " << person1->getName() << " (X) - " << person2->getName() << " (O)" << std::endl;
//    }

};




#endif /* Game_h */



