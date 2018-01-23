
//this .cpp file contains the definitions for the constructors & member functions in the class "Person"

#include "Person.h"
//function definitions

Person::Person(){
    name = "";
    score = 0;
    
}

Person::Person(std::string playerName, int totalScore){
    name = playerName;
    score = totalScore;
}

std::string Person::getName() const{
    return name;
}

int Person::getScore() const{
    return score;
}

void Person::storeName(std::string playerName){
    name = playerName;
}

void Person::updateScore(){
    score++ ;
}



