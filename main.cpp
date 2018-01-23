//
//  main.cpp
//  Homework 1
//
//  Created by Stella Huang on 10/1/17.
//  Copyright © 2017 Stella Huang. All rights reserved.
//


#include "Game.h"
#include "Person.h"


int main(){

    // creates pointers (that point to objects in the Person class) and object in the Game class
    
    Person* player1=new Person("", 0);
    Person* player2=new Person("", 0);
    Game newGame;

    // calls functions
    newGame.setUp(player1, player2);
    newGame.printTitle(player1, player2);
    newGame.printNewVec();
    newGame.printGrid();
    newGame.runGame(player1, player2);

    

    return 0;
}


