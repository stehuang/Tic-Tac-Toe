
// this header file contains the class "Game"

#ifndef Person_h
#define Person_h
#include <iostream>
#include <string>
#include "Game.h"

class Game;
class Person{
public:
    Person();
    Person(std::string playerName, int totalScore);
    
  // accessor functions
    std::string getName() const;
    int getScore()const;
 
                        
  // mutator functions
    void storeName(std::string playerName);
    void updateScore();


    
private:
    std::string name;
    int score;
};


////function definitions
//
//Person::Person(){
//    name = "";
//    score = 0;
//
//}
//
//Person::Person(std::string playerName, int totalScore){
//    name = playerName;
//    score = totalScore;
//}
//
//std::string Person::getName() const{
//    return name;
//}
//
//int Person::getScore() const{
//    return score;
//}
//
//void Person::storeName(std::string playerName){
//    name = playerName;
//}





#endif /* Person_h */







