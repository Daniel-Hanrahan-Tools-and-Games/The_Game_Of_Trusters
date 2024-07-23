// neccessary libraries
// printf, scanf library
#include <stdio.h>
// string library
#include <string>
// boundary checking library
#include <ctype.h>
// random library
#include <stdlib.h>
// namespace needed for string library
using namespace std;

// D20/20 sided dice function
int D20() {
    int intResult;
    intResult = rand() % 25 + 1;
    return intResult;
};

// D12/12 sided dice function
int D12() {
    int intResult;
    intResult = rand() % 12 + 1;
    return intResult;
};

// D10/10 sided dice function
int D10() {
    int intResult;
    intResult = rand() % 10 + 1;
    return intResult;
};

// D8/8 sided dice function
int D8() {
    int intResult;
    intResult = rand() % 8 + 1;
    return intResult;
};

// D6/6 sided dice function
int D6() {
    int intResult;
    intResult = rand() % 6 + 1;
    return intResult;
};

// D4/4 sided dice function
int D4() {
    int intResult;
    intResult = rand() % 4 + 1;
    return intResult;
};

// trap function
void trap() {
    
    // enemy intellegence stat
    int intTrapIntellegence;
    intTrapIntellegence = rand() % 10 + 1;
    // escape variable
    int intEscapeVariable;
        
    intEscapeVariable = D20();
    if (intEscapeVariable > intTrapIntellegence) {
       printf("Your party escaped the trap. \n");
    }
    else {
        printf("Your party did not escape the trap, Game Over") ;
        exit(0);
    }
    
};

// enemy function
void enemy() {
    // enemy type variable
    int intEnemyType;
    // action variables
    char charAction;
    int intAction;
    // trust state variable
    int intTrustState;
    // enemy outline color
    int intOutlineColor;
    intOutlineColor = rand() % 7 + 1;
    // enemy color
    int intColor;
    intColor = rand() % 7 + 1;
    // enemy strength stat
    int intEnemyStrength;
    intEnemyStrength = rand() % 10 + 1;
    // enemy intellegence stat
    int intEnemyIntellegence;
    intEnemyIntellegence = rand() % 10 + 1;
    // enemy trust stat
    int intEnemyTrust;
    intEnemyTrust = rand() % 3 + 1;
    // determines enemy type
    intEnemyType = rand() % 10 + 1;
    // convince variable
    int intConvinceVariable;
    // attack variable
    int intAttackVariable;
    // case statement for enemy outlinecolors
    switch (intOutlineColor) {
        case 1:
            printf("The enemy outline color is: red \n");
            break;
        case 2:
            printf("The enemy outline color is: orange \n");
            break;
        case 3:
            printf("The enemy outline color is: yellow \n");
            break;
        case 4:
            printf("The enemy outline color is: green \n");
            break;
        case 5:
            printf("The enemy outline color is: blue \n");
            break;
        case 6:
            printf("The enemy outline color is: purple \n");
            break;
        case 7:
            printf("The enemy outline color is: black \n");
            break;
        default:
            break;
    }
    // case statement for enemy color
    switch (intColor) {
        case 1:
            printf("The enemy color is: red \n");
            break;
        case 2:
            printf("The enemy color is: orange \n");
            break;
        case 3:
            printf("The enemy color is: yellow \n");
            break;
        case 4:
            printf("The enemy color is: green \n");
            break;
        case 5:
            printf("The enemy color is: blue \n");
            break;
        case 6:
            printf("The enemy color is: purple \n");
            break;
        case 7:
            printf("The enemy color is: black \n");
            break;
        default:
            break;
    }
    // case statement for enemy types
    switch (intEnemyType) {
        case 1:
            printf("You have encountered a fingerblade killer, what will you do, 0:attack, 1:Talk: ");
            scanf("%s", &charAction);
            break;
        case 2:
            printf("You have encountered a vampire, what will you do, 0:attack, 1:Talk: ");
            scanf("%s", &charAction);
            break;
        case 3:
            printf("You have encountered a giant ant, what will you do, 0:attack, 1:Talk: ");
            scanf("%s", &charAction);
            break;
        case 4:
            printf("You have encountered a tree monster, what will you do, 0:attack, 1:Talk: ");
            scanf("%s", &charAction);
            break;
        case 5:
            printf("You have encountered a chair monster, what will you do, 0:attack, 1:Talk: ");
            scanf("%s", &charAction);
            break;
        case 6:
            printf("You have encountered a barrel monster, what will you do, 0:attack, 1:Talk: ");
            scanf("%s", &charAction);
            break;
        case 7:
            printf("You have encountered a robot with chainsaws for teeth, what will you do, 0:attack, 1:Talk: ");
            scanf("%s", &charAction);
            break;
        case 8:
            printf("You have encountered a dragon, what will you do, 0:attack, 1:Talk: ");
            scanf("%s", &charAction);
        case 9:
            printf("You have encountered a wyvern, what will you do, 0:attack, 1:Talk: ");
            scanf("%s", &charAction);
            break;
        case 10:
            printf("You have encountered a tree monster, what will you do, 0:attack, 1:Talk: ");
            scanf("%s", &charAction);
            break;
        default:
            break;
    }

    // boundary/error checking
    if (isdigit(charAction)){
        intAction = charAction;
        if (intAction < 0) {
            if (intAction > 1) {
                printf("not an option");
                exit(0);
            }
        }
    }
    else {
        printf("Only single digit integers are allowed.");
        exit(0);
    }
    // if statement for action
    if (intAction = 0){
        
        intAttackVariable = D20();
        if (intAttackVariable > intEnemyStrength){
           printf("You defeated the enemy. \n");
        }
        else {
           printf("Game Over") ;
           exit(0);
        }

    }
    else if (intAction = 1){
        // case statement for enemy trust
        switch (intEnemyTrust) {
            case 1:
                intConvinceVariable = D12();
                if (intConvinceVariable == 12){
                    printf("You convinced the enemy to leave you alone \n");
                }
                else {
                   printf("Game Over") ;
                   exit(0);
                }
                break;
            case 2:
                intConvinceVariable = D6();
                if (intConvinceVariable == 6){
                    printf("You convinced the enemy to leave you alone \n");
                }
                else {
                   printf("Game Over") ;
                   exit(0);
                }
                break;
            case 3:
                intConvinceVariable = D4();
                if (intConvinceVariable == 4){
                    printf("You convinced the enemy to leave you alone \n");
                }
                else {
                   printf("Game Over") ;
                   exit(0);
                }
                break;
            default:
                break;
    }
    
}
};

// Main function
int main() {
    // declaring character name values
    string strCharacter1Name, strCharacter2Name, strCharacter1Backstory, strCharacter2Backstory;
    // declaring how many personalities each character has
    char charCharacter1Personalities, charCharacter2Personalities;
    int intCharacter1Personalities, intCharacter2Personalities;
    // declaring statpoints for each character
    int intCharacter1StatPoints, intCharacter2StatPoints;
    // declaring int strength stats for character 1s personalities
    int intCharacter1Personality1Strength, intCharacter1Personality2Strength, intCharacter1Personality3Strength, intCharacter1Personality4Strength, intCharacter1Personality5Strength, intCharacter1Personality6Strength, intCharacter1Personality7Strength, intCharacter1Personality8Strength, intCharacter1Personality9Strength;
    // declaring int strength stats for character 2s personalities
    int intCharacter2Personality1Strength, intCharacter2Personality2Strength, intCharacter2Personality3Strength, intCharacter2Personality4Strength, intCharacter2Personality5Strength, intCharacter2Personality6Strength, intCharacter2Personality7Strength, intCharacter2Personality8Strength, intCharacter2Personality9Strength;
    // declaring int intellegence stats for character 1s personalities
    int intCharacter1Personality1Intellegence, intCharacter1Personality2Intellegence, intCharacter1Personality3Intellegence, intCharacter1Personality4Intellegence, intCharacter1Personality5Intellegence, intCharacter1Personality6Intellegence, intCharacter1Personality7Intellegence, intCharacter1Personality8Intellegence, intCharacter1Personality9Intellegence;
    // declaring int intellegence stats for character 2s personalities
    int intCharacter2Personality1Intellegence, intCharacter2Personality2Intellegence, intCharacter2Personality3Intellegence, intCharacter2Personality4Intellegence, intCharacter2Personality5Intellegence, intCharacter2Personality6Intellegence, intCharacter2Personality7Intellegence, intCharacter2Personality8Intellegence, intCharacter2Personality9Intellegence;
    // declaring int trust stats for character 1s personalities
    int intCharacter1Personality1Trust, intCharacter1Personality2Trust, intCharacter1Personality3Trust, intCharacter1Personality4Trust, intCharacter1Personality5Trust, intCharacter1Personality6Trust, intCharacter1Personality7Trust, intCharacter1Personality8Trust, intCharacter1Personality9Trust;
    // declaring int trust stats for character 2s personalities
    int intCharacter2Personality1Trust, intCharacter2Personality2Trust, intCharacter2Personality3Trust, intCharacter2Personality4Trust, intCharacter2Personality5Trust, intCharacter2Personality6Trust, intCharacter2Personality7Trust, intCharacter2Personality8Trust, intCharacter2Personality9Trust;
    // declaring char strength stats for character 1s personalities
    char charCharacter1Personality1Strength, charCharacter1Personality2Strength, charCharacter1Personality3Strength, charCharacter1Personality4Strength, charCharacter1Personality5Strength, charCharacter1Personality6Strength, charCharacter1Personality7Strength, charCharacter1Personality8Strength, charCharacter1Personality9Strength;
    // declaring char strength stats for character 2s personalities
    char charCharacter2Personality1Strength, charCharacter2Personality2Strength, charCharacter2Personality3Strength, charCharacter2Personality4Strength, charCharacter2Personality5Strength, charCharacter2Personality6Strength, charCharacter2Personality7Strength, charCharacter2Personality8Strength, charCharacter2Personality9Strength;
    // declaring char intellegence stats for character 1s personalities
    char charCharacter1Personality1Intellegence, charCharacter1Personality2Intellegence, charCharacter1Personality3Intellegence, charCharacter1Personality4Intellegence, charCharacter1Personality5Intellegence, charCharacter1Personality6Intellegence, charCharacter1Personality7Intellegence, charCharacter1Personality8Intellegence, charCharacter1Personality9Intellegence;
    // declaring char intellegence stats for character 2s personalities
    char charCharacter2Personality1Intellegence, charCharacter2Personality2Intellegence, charCharacter2Personality3Intellegence, charCharacter2Personality4Intellegence, charCharacter2Personality5Intellegence, charCharacter2Personality6Intellegence, charCharacter2Personality7Intellegence, charCharacter2Personality8Intellegence, charCharacter2Personality9Intellegence;
    // declaring char trust stats for character 1s personalities
    char charCharacter1Personality1Trust, charCharacter1Personality2Trust, charCharacter1Personality3Trust, charCharacter1Personality4Trust, charCharacter1Personality5Trust, charCharacter1Personality6Trust, charCharacter1Personality7Trust, charCharacter1Personality8Trust, charCharacter1Personality9Trust;
    // declaring char trust stats for character 2s personalities
    char charCharacter2Personality1Trust, charCharacter2Personality2Trust, charCharacter2Personality3Trust, charCharacter2Personality4Trust, charCharacter2Personality5Trust, charCharacter2Personality6Trust, charCharacter2Personality7Trust, charCharacter2Personality8Trust, charCharacter2Personality9Trust;
    // declaring relationship variables
    char charCharactersRelationship;
    int intCharactersRelationship;
    // fusion state variable
    char charFusionState;
    int intFusionState;
    // direction and option variables
    char charOptionVariable;
    int intOptionVariable;
    // player state variable
    int intPlayerStateVariable; 
    // Fusion Result
    int intFusionResult;

    //function declarations
    void enemy();
    void trap();

    // GNU GPL disclaimer
    printf("This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the license, or (at your option) any later version. This program is distributed in hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have recieved a copy of the GNU General Public License along with this program. If not, see https://www.gnu.org/licenses \n");
    // Creative Commons Attribution-Sharealike disclaimer
    printf("Information just about the stuff in this software not covered by the GNU General Public License version 3 (i.e.: the ruleset of this game):  This work is licensed under Attribution-ShareAlike 4.0 International \n");
    // Copyright Notice
    printf("Copyright (C) 2024 Daniel Hanrahan Tools and Games \n");
    // Parody Notice
    printf("The fingerblade killer enemy is a parody of Freddy Kruger, We are not affiliated with anyone affiliated in any way, shape or form with the creators of the Nightmare On Elm Street series. \n");

    // characters relationship input
    printf("What is the Characters relationship(1.Married, 2.General Romantic, 3.Other): ");
    scanf("%c", &charCharactersRelationship);
    // boundary/error checking
    if (isdigit(charCharactersRelationship)){
        intCharactersRelationship = charCharactersRelationship;
        if (intCharactersRelationship < 1) {
            if (intCharactersRelationship > 3) {
                printf("not an option");
                exit(0);
            }
        }
    }
    else {
        printf("Only single digit integers are allowed.");
        exit(0);
    }
    
    // name and information of character 1 input
    printf("Enter first characters name: ");
    scanf("%s", &strCharacter1Name);
    printf("Enter first characters Personalities(1-9 personalities): ");
    scanf("%s", &charCharacter1Personalities);
    // boundary/error checking
    if (isdigit(charCharacter1Personalities)){
        intCharacter1Personalities = charCharacter1Personalities;
        if (intCharacter1Personalities < 1) {
            printf("cannot have a number less than 1");
            exit(0);
        }
    }
    else {
        printf("Only single digit integers are allowed.");
        exit(0);
    }
    
    printf("Enter first characters backstory: ");
    scanf("%s", &strCharacter1Backstory);
    printf("First Characters name is: %s \t First characters backstory is: %s \n" ,&strCharacter1Name , &strCharacter1Backstory);
    // gets stat points for character 1
    intCharacter1StatPoints = D20();
    printf("First characters amount of stat points is: %lu \n" ,intCharacter1StatPoints);
    // case statement for multiple personalities
    // case statement for multiple personalities not working and I do not Understand why?
    switch (intCharacter1Personalities) {
        case 1:
            // enter characters stats
            printf("Enter character 1s personality 1s strength 0-9: ");
            scanf("%lu", &charCharacter1Personality1Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Strength)){
                intCharacter1Personality1Strength = charCharacter1Personality1Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 1s intellegence 0-9:");
            scanf("%lu", &charCharacter1Personality1Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Intellegence)){
                intCharacter1Personality1Intellegence = charCharacter1Personality1Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 1s trust 0-9");
            scanf("%lu", &charCharacter1Personality1Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Trust)){
                intCharacter1Personality1Trust = charCharacter1Personality1Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            break;
        case 2:
            // enter characters stats
            printf("Enter character 1s personality 1s strength 0-9");
            scanf("%lu", &charCharacter1Personality1Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Strength)){
                intCharacter1Personality1Strength = charCharacter1Personality1Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 1s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality1Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Intellegence)){
                intCharacter1Personality1Intellegence = charCharacter1Personality1Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 1s trust 0-9");
            scanf("%lu", &charCharacter1Personality1Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Trust)){
                intCharacter1Personality1Trust = charCharacter1Personality1Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 2s strength 0-9");
            scanf("%lu", &charCharacter1Personality2Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Strength)){
                intCharacter1Personality2Strength = charCharacter1Personality2Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 2s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality2Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Intellegence)){
                intCharacter1Personality2Intellegence = charCharacter1Personality2Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 2s trust 0-9");
            scanf("%lu", &charCharacter1Personality2Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Trust)){
                intCharacter1Personality2Trust = charCharacter1Personality2Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            break;
        case 3:
            // enter characters stats
            printf("Enter character 1s personality 1s strength 0-9");
            scanf("%lu", &charCharacter1Personality1Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Strength)){
                intCharacter1Personality1Strength = charCharacter1Personality1Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 1s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality1Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Intellegence)){
                intCharacter1Personality1Intellegence = charCharacter1Personality1Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 1s trust 0-9");
            scanf("%lu", &charCharacter1Personality1Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Trust)){
                intCharacter1Personality1Trust = charCharacter1Personality1Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 2s strength 0-9");
            scanf("%lu", &charCharacter1Personality2Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Strength)){
                intCharacter1Personality2Strength = charCharacter1Personality2Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 2s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality2Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Intellegence)){
                intCharacter1Personality2Intellegence = charCharacter1Personality2Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 2s trust 0-9");
            scanf("%lu", &charCharacter1Personality2Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Trust)){
                intCharacter1Personality2Trust = charCharacter1Personality2Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 3s strength 0-9");
            scanf("%lu", &charCharacter1Personality3Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Strength)){
                intCharacter1Personality3Strength = charCharacter1Personality3Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 3s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality3Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Intellegence)){
                intCharacter1Personality3Intellegence = charCharacter1Personality3Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 3s trust 0-9");
            scanf("%lu", &charCharacter1Personality3Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Trust)){
                intCharacter1Personality3Trust = charCharacter1Personality3Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            break;
        case 4:
             // enter characters stats
            printf("Enter character 1s personality 1s strength 0-9");
            scanf("%lu", &charCharacter1Personality1Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Strength)){
                intCharacter1Personality1Strength = charCharacter1Personality1Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 1s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality1Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Intellegence)){
                intCharacter1Personality1Intellegence = charCharacter1Personality1Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 1s trust 0-9");
            scanf("%lu", &charCharacter1Personality1Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Trust)){
                intCharacter1Personality1Trust = charCharacter1Personality1Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 2s strength 0-9");
            scanf("%lu", &charCharacter1Personality2Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Strength)){
                intCharacter1Personality2Strength = charCharacter1Personality2Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 2s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality2Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Intellegence)){
                intCharacter1Personality2Intellegence = charCharacter1Personality2Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 2s trust 0-9");
            scanf("%lu", &charCharacter1Personality2Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Trust)){
                intCharacter1Personality2Trust = charCharacter1Personality2Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 3s strength 0-9");
            scanf("%lu", &charCharacter1Personality3Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Strength)){
                intCharacter1Personality3Strength = charCharacter1Personality3Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 3s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality3Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Intellegence)){
                intCharacter1Personality3Intellegence = charCharacter1Personality3Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 3s trust 0-9");
            scanf("%lu", &charCharacter1Personality3Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Trust)){
                intCharacter1Personality3Trust = charCharacter1Personality3Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 4s strength 0-9");
            scanf("%lu", &charCharacter1Personality4Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality4Strength)){
                intCharacter1Personality4Strength = charCharacter1Personality4Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality4Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality4Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 4s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality4Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality4Intellegence)){
                intCharacter1Personality4Intellegence = charCharacter1Personality4Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality4Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality4Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 4s trust 0-9");
            scanf("%lu", &charCharacter1Personality4Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality4Trust)){
                intCharacter1Personality4Trust = charCharacter1Personality4Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality4Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality4Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            break;
        case 5:
            // enter characters stats
            printf("Enter character 1s personality 1s strength 0-9");
            scanf("%lu", &charCharacter1Personality1Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Strength)){
                intCharacter1Personality1Strength = charCharacter1Personality1Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 1s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality1Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Intellegence)){
                intCharacter1Personality1Intellegence = charCharacter1Personality1Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 1s trust 0-9");
            scanf("%lu", &charCharacter1Personality1Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Trust)){
                intCharacter1Personality1Trust = charCharacter1Personality1Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 2s strength 0-9");
            scanf("%lu", &charCharacter1Personality2Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Strength)){
                intCharacter1Personality2Strength = charCharacter1Personality2Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 2s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality2Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Intellegence)){
                intCharacter1Personality2Intellegence = charCharacter1Personality2Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 2s trust 0-9");
            scanf("%lu", &charCharacter1Personality2Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Trust)){
                intCharacter1Personality2Trust = charCharacter1Personality2Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 3s strength 0-9");
            scanf("%lu", &charCharacter1Personality3Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Strength)){
                intCharacter1Personality3Strength = charCharacter1Personality3Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 3s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality3Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Intellegence)){
                intCharacter1Personality3Intellegence = charCharacter1Personality3Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 3s trust 0-9");
            scanf("%lu", &charCharacter1Personality3Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Trust)){
                intCharacter1Personality3Trust = charCharacter1Personality3Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 4s strength 0-9");
            scanf("%lu", &charCharacter1Personality4Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality4Strength)){
                intCharacter1Personality4Strength = charCharacter1Personality4Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality4Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality4Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 4s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality4Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality4Intellegence)){
                intCharacter1Personality4Intellegence = charCharacter1Personality4Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality4Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality4Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 4s trust 0-9");
            scanf("%lu", &charCharacter1Personality4Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality4Trust)){
                intCharacter1Personality4Trust = charCharacter1Personality4Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality4Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality4Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 5s strength 0-9");
            scanf("%lu", &charCharacter1Personality5Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality5Strength)){
                intCharacter1Personality5Strength = charCharacter1Personality5Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality5Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality5Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 5s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality5Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality5Intellegence)){
                intCharacter1Personality5Intellegence = charCharacter1Personality5Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality5Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality5Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 5s trust 0-9");
            scanf("%lu", &charCharacter1Personality5Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality5Trust)){
                intCharacter1Personality5Trust = charCharacter1Personality5Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality5Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality5Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            break;
        case 6:
            // enter characters stats
            printf("Enter character 1s personality 1s strength 0-9");
            scanf("%lu", &charCharacter1Personality1Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Strength)){
                intCharacter1Personality1Strength = charCharacter1Personality1Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 1s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality1Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Intellegence)){
                intCharacter1Personality1Intellegence = charCharacter1Personality1Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 1s trust 0-9");
            scanf("%lu", &charCharacter1Personality1Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Trust)){
                intCharacter1Personality1Trust = charCharacter1Personality1Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 2s strength 0-9");
            scanf("%lu", &charCharacter1Personality2Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Strength)){
                intCharacter1Personality2Strength = charCharacter1Personality2Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 2s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality2Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Intellegence)){
                intCharacter1Personality2Intellegence = charCharacter1Personality2Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 2s trust 0-9");
            scanf("%lu", &charCharacter1Personality2Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Trust)){
                intCharacter1Personality2Trust = charCharacter1Personality2Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 3s strength 0-9");
            scanf("%lu", &charCharacter1Personality3Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Strength)){
                intCharacter1Personality3Strength = charCharacter1Personality3Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 3s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality3Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Intellegence)){
                intCharacter1Personality3Intellegence = charCharacter1Personality3Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 3s trust 0-9");
            scanf("%lu", &charCharacter1Personality3Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Trust)){
                intCharacter1Personality3Trust = charCharacter1Personality3Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 4s strength 0-9");
            scanf("%lu", &charCharacter1Personality4Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality4Strength)){
                intCharacter1Personality4Strength = charCharacter1Personality4Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality4Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality4Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 4s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality4Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality4Intellegence)){
                intCharacter1Personality4Intellegence = charCharacter1Personality4Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality4Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality4Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 4s trust 0-9");
            scanf("%lu", &charCharacter1Personality4Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality4Trust)){
                intCharacter1Personality4Trust = charCharacter1Personality4Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality4Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality4Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 5s strength 0-9");
            scanf("%lu", &charCharacter1Personality5Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality5Strength)){
                intCharacter1Personality5Strength = charCharacter1Personality5Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality5Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality5Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 5s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality5Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality5Intellegence)){
                intCharacter1Personality5Intellegence = charCharacter1Personality5Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality5Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality5Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 5s trust 0-9");
            scanf("%lu", &charCharacter1Personality5Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality5Trust)){
                intCharacter1Personality5Trust = charCharacter1Personality5Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality5Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality5Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 6s strength 0-9");
            scanf("%lu", &charCharacter1Personality6Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality6Strength)){
                intCharacter1Personality6Strength = charCharacter1Personality6Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality6Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality6Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 6s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality6Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality6Intellegence)){
                intCharacter1Personality6Intellegence = charCharacter1Personality6Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality6Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality6Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 6s trust 0-9");
            scanf("%lu", &charCharacter1Personality6Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality6Trust)){
                intCharacter1Personality6Trust = charCharacter1Personality6Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality6Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality6Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            break;
        case 7:
            // enter characters stats
            printf("Enter character 1s personality 1s strength 0-9");
            scanf("%lu", &charCharacter1Personality1Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Strength)){
                intCharacter1Personality1Strength = charCharacter1Personality1Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 1s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality1Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Intellegence)){
                intCharacter1Personality1Intellegence = charCharacter1Personality1Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 1s trust 0-9");
            scanf("%lu", &charCharacter1Personality1Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Trust)){
                intCharacter1Personality1Trust = charCharacter1Personality1Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 2s strength 0-9");
            scanf("%lu", &charCharacter1Personality2Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Strength)){
                intCharacter1Personality2Strength = charCharacter1Personality2Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 2s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality2Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Intellegence)){
                intCharacter1Personality2Intellegence = charCharacter1Personality2Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 2s trust 0-9");
            scanf("%lu", &charCharacter1Personality2Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Trust)){
                intCharacter1Personality2Trust = charCharacter1Personality2Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 3s strength 0-9");
            scanf("%lu", &charCharacter1Personality3Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Strength)){
                intCharacter1Personality3Strength = charCharacter1Personality3Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 3s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality3Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Intellegence)){
                intCharacter1Personality3Intellegence = charCharacter1Personality3Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 3s trust 0-9");
            scanf("%lu", &charCharacter1Personality3Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Trust)){
                intCharacter1Personality3Trust = charCharacter1Personality3Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 4s strength 0-9");
            scanf("%lu", &charCharacter1Personality4Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality4Strength)){
                intCharacter1Personality4Strength = charCharacter1Personality4Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality4Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality4Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 4s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality4Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality4Intellegence)){
                intCharacter1Personality4Intellegence = charCharacter1Personality4Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality4Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality4Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 4s trust 0-9");
            scanf("%lu", &charCharacter1Personality4Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality4Trust)){
                intCharacter1Personality4Trust = charCharacter1Personality4Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality4Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality4Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 5s strength 0-9");
            scanf("%lu", &charCharacter1Personality5Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality5Strength)){
                intCharacter1Personality5Strength = charCharacter1Personality5Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality5Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality5Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 5s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality5Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality5Intellegence)){
                intCharacter1Personality5Intellegence = charCharacter1Personality5Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality5Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality5Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 5s trust 0-9");
            scanf("%lu", &charCharacter1Personality5Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality5Trust)){
                intCharacter1Personality5Trust = charCharacter1Personality5Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality5Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality5Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 6s strength 0-9");
            scanf("%lu", &charCharacter1Personality6Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality6Strength)){
                intCharacter1Personality6Strength = charCharacter1Personality6Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality6Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality6Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 6s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality6Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality6Intellegence)){
                intCharacter1Personality6Intellegence = charCharacter1Personality6Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality6Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality6Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 6s trust 0-9");
            scanf("%lu", &charCharacter1Personality6Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality6Trust)){
                intCharacter1Personality6Trust = charCharacter1Personality6Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality6Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality6Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 7s strength 0-9");
            scanf("%lu", &charCharacter1Personality7Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality7Strength)){
                intCharacter1Personality7Strength = charCharacter1Personality7Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality7Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality7Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 7s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality7Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality7Intellegence)){
                intCharacter1Personality7Intellegence = charCharacter1Personality7Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality7Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality7Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 7s trust 0-9");
            scanf("%lu", &charCharacter1Personality7Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality7Trust)){
                intCharacter1Personality7Trust = charCharacter1Personality7Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality7Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality7Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            break;
        case 8:
            // enter characters stats
            printf("Enter character 1s personality 1s strength 0-9");
            scanf("%lu", &charCharacter1Personality1Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Strength)){
                intCharacter1Personality1Strength = charCharacter1Personality1Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 1s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality1Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Intellegence)){
                intCharacter1Personality1Intellegence = charCharacter1Personality1Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 1s trust 0-9");
            scanf("%lu", &charCharacter1Personality1Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Trust)){
                intCharacter1Personality1Trust = charCharacter1Personality1Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 2s strength 0-9");
            scanf("%lu", &charCharacter1Personality2Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Strength)){
                intCharacter1Personality2Strength = charCharacter1Personality2Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 2s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality2Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Intellegence)){
                intCharacter1Personality2Intellegence = charCharacter1Personality2Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 2s trust 0-9");
            scanf("%lu", &charCharacter1Personality2Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Trust)){
                intCharacter1Personality2Trust = charCharacter1Personality2Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 3s strength 0-9");
            scanf("%lu", &charCharacter1Personality3Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Strength)){
                intCharacter1Personality3Strength = charCharacter1Personality3Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 3s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality3Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Intellegence)){
                intCharacter1Personality3Intellegence = charCharacter1Personality3Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 3s trust 0-9");
            scanf("%lu", &charCharacter1Personality3Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Trust)){
                intCharacter1Personality3Trust = charCharacter1Personality3Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 4s strength 0-9");
            scanf("%lu", &charCharacter1Personality4Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality4Strength)){
                intCharacter1Personality4Strength = charCharacter1Personality4Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality4Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality4Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 4s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality4Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality4Intellegence)){
                intCharacter1Personality4Intellegence = charCharacter1Personality4Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality4Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality4Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 4s trust 0-9");
            scanf("%lu", &charCharacter1Personality4Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality4Trust)){
                intCharacter1Personality4Trust = charCharacter1Personality4Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality4Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality4Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 5s strength 0-9");
            scanf("%lu", &charCharacter1Personality5Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality5Strength)){
                intCharacter1Personality5Strength = charCharacter1Personality5Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality5Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality5Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 5s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality5Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality5Intellegence)){
                intCharacter1Personality5Intellegence = charCharacter1Personality5Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality5Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality5Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 5s trust 0-9");
            scanf("%lu", &charCharacter1Personality5Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality5Trust)){
                intCharacter1Personality5Trust = charCharacter1Personality5Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality5Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality5Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 6s strength 0-9");
            scanf("%lu", &charCharacter1Personality6Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality6Strength)){
                intCharacter1Personality6Strength = charCharacter1Personality6Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality6Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality6Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 6s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality6Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality6Intellegence)){
                intCharacter1Personality6Intellegence = charCharacter1Personality6Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality6Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality6Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 6s trust 0-9");
            scanf("%lu", &charCharacter1Personality6Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality6Trust)){
                intCharacter1Personality6Trust = charCharacter1Personality6Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality6Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality6Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 7s strength 0-9");
            scanf("%lu", &charCharacter1Personality7Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality7Strength)){
                intCharacter1Personality7Strength = charCharacter1Personality7Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality7Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality7Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 7s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality7Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality7Intellegence)){
                intCharacter1Personality7Intellegence = charCharacter1Personality7Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality7Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality7Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 7s trust 0-9");
            scanf("%lu", &charCharacter1Personality7Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality7Trust)){
                intCharacter1Personality7Trust = charCharacter1Personality7Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality7Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality7Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 8s strength 0-9");
            scanf("%lu", &charCharacter1Personality8Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality8Strength)){
                intCharacter1Personality8Strength = charCharacter1Personality8Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality8Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality8Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 8s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality8Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality8Intellegence)){
                intCharacter1Personality8Intellegence = charCharacter1Personality8Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality8Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality8Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 8s trust 0-9");
            scanf("%lu", &charCharacter1Personality8Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality8Trust)){
                intCharacter1Personality8Trust = charCharacter1Personality8Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality8Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            break;
        case 9:
            // enter characters stats
            printf("Enter character 1s personality 1s strength 0-9");
            scanf("%lu", &charCharacter1Personality1Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Strength)){
                intCharacter1Personality1Strength = charCharacter1Personality1Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 1s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality1Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Intellegence)){
                intCharacter1Personality1Intellegence = charCharacter1Personality1Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 1s trust 0-9");
            scanf("%lu", &charCharacter1Personality1Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality1Trust)){
                intCharacter1Personality1Trust = charCharacter1Personality1Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality1Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality1Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 2s strength 0-9");
            scanf("%lu", &charCharacter1Personality2Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Strength)){
                intCharacter1Personality2Strength = charCharacter1Personality2Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 2s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality2Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Intellegence)){
                intCharacter1Personality2Intellegence = charCharacter1Personality2Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 2s trust 0-9");
            scanf("%lu", &charCharacter1Personality2Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality2Trust)){
                intCharacter1Personality2Trust = charCharacter1Personality2Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality2Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 3s strength 0-9");
            scanf("%lu", &charCharacter1Personality3Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Strength)){
                intCharacter1Personality3Strength = charCharacter1Personality3Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 3s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality3Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Intellegence)){
                intCharacter1Personality3Intellegence = charCharacter1Personality3Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 3s trust 0-9");
            scanf("%lu", &charCharacter1Personality3Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality3Trust)){
                intCharacter1Personality3Trust = charCharacter1Personality3Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality3Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality3Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 4s strength 0-9");
            scanf("%lu", &charCharacter1Personality4Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality4Strength)){
                intCharacter1Personality4Strength = charCharacter1Personality4Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality4Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality4Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 4s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality4Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality4Intellegence)){
                intCharacter1Personality4Intellegence = charCharacter1Personality4Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality4Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality4Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 4s trust 0-9");
            scanf("%lu", &charCharacter1Personality4Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality4Trust)){
                intCharacter1Personality4Trust = charCharacter1Personality4Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality4Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality4Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 5s strength 0-9");
            scanf("%lu", &charCharacter1Personality5Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality5Strength)){
                intCharacter1Personality5Strength = charCharacter1Personality5Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality5Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality5Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 5s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality5Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality5Intellegence)){
                intCharacter1Personality5Intellegence = charCharacter1Personality5Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality5Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality5Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 5s trust 0-9");
            scanf("%lu", &charCharacter1Personality5Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality5Trust)){
                intCharacter1Personality5Trust = charCharacter1Personality5Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality5Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality5Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 6s strength 0-9");
            scanf("%lu", &charCharacter1Personality6Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality6Strength)){
                intCharacter1Personality6Strength = charCharacter1Personality6Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality6Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality6Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 6s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality6Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality6Intellegence)){
                intCharacter1Personality6Intellegence = charCharacter1Personality6Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality6Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality6Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 6s trust 0-9");
            scanf("%lu", &charCharacter1Personality6Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality6Trust)){
                intCharacter1Personality6Trust = charCharacter1Personality6Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality6Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality6Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 7s strength 0-9");
            scanf("%lu", &charCharacter1Personality7Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality7Strength)){
                intCharacter1Personality7Strength = charCharacter1Personality7Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality7Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality7Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 7s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality7Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality7Intellegence)){
                intCharacter1Personality7Intellegence = charCharacter1Personality7Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality7Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality7Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 7s trust 0-9");
            scanf("%lu", &charCharacter1Personality7Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality7Trust)){
                intCharacter1Personality7Trust = charCharacter1Personality7Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality7Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality7Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 8s strength 0-9");
            scanf("%lu", &charCharacter1Personality8Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality8Strength)){
                intCharacter1Personality8Strength = charCharacter1Personality8Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality8Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality8Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 8s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality8Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality8Intellegence)){
                intCharacter1Personality8Intellegence = charCharacter1Personality8Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality8Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality8Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 8s trust 0-9");
            scanf("%lu", &charCharacter1Personality8Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality8Trust)){
                intCharacter1Personality8Trust = charCharacter1Personality8Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality8Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 1s personality 9s strength 0-9");
            scanf("%lu", &charCharacter1Personality9Strength);
            // boundary/error checking
            if (isdigit(charCharacter1Personality9Strength)){
                intCharacter1Personality9Strength = charCharacter1Personality9Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality9Strength;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality9Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 9s intellegence 0-9");
            scanf("%lu", &charCharacter1Personality9Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter1Personality9Intellegence)){
                intCharacter1Personality9Intellegence = charCharacter1Personality9Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality9Intellegence;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality9Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 1s personality 9s trust 0-9");
            scanf("%lu", &charCharacter1Personality9Trust);
            // boundary/error checking
            if (isdigit(charCharacter1Personality9Trust)){
                intCharacter1Personality9Trust = charCharacter1Personality9Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter1StatPoints = intCharacter1StatPoints - intCharacter1Personality9Trust;
                printf("First characters amount of stat points is: %lu" ,intCharacter1StatPoints);
                if (intCharacter1StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter1Personality9Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            break;
        default:
            break;
    }

    
    // name and information of character 2 input
    printf("Enter second characters name: ");
    scanf("%s", &strCharacter2Name);
    printf("Enter second characters Personalities(1-9 personalities): ");
    scanf("%s", &charCharacter2Personalities);
    // boundary/error checking
    if (isdigit(charCharacter2Personalities)){
        intCharacter2Personalities = charCharacter2Personalities;
        if (intCharacter2Personalities < 1) {
            printf("cannot have a number less than 1");
            exit(0);
        }
    }
    else {
        printf("Only single digit integers are allowed.");
        exit(0);
    }

    printf("Enter second characters backstory: ");
    scanf("%s", &strCharacter2Backstory);
    printf("Second Characters name is: %s \t Second characters backstory is: %s \n" ,&strCharacter2Name , &strCharacter2Backstory);
    // gets stat points for character 2
    intCharacter2StatPoints = D20();
    printf("Second characters amount of stat points is: %lu \n" ,intCharacter2StatPoints);
    // case statement for multiple personalities
    switch (intCharacter2Personalities) {
        case 1:
            // enter characters stats
            printf("Enter character 2s personality 2s strength 0-9:");
            scanf("%lu", &charCharacter2Personality1Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Strength)){
                intCharacter2Personality1Strength = charCharacter2Personality1Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 1s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality1Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Intellegence)){
                intCharacter2Personality1Intellegence = charCharacter2Personality1Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 1s trust 0-9");
            scanf("%lu", &charCharacter2Personality1Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Trust)){
                intCharacter2Personality1Trust = charCharacter2Personality1Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            break;
        case 2:
            // enter characters stats
            printf("Enter character 2s personality 1s strength 0-9");
            scanf("%lu", &charCharacter2Personality1Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Strength)){
                intCharacter2Personality1Strength = charCharacter2Personality1Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 1s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality1Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Intellegence)){
                intCharacter2Personality1Intellegence = charCharacter2Personality1Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 1s trust 0-9");
            scanf("%lu", &charCharacter2Personality1Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Trust)){
                intCharacter2Personality1Trust = charCharacter2Personality1Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 2s strength 0-9");
            scanf("%lu", &charCharacter2Personality2Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Strength)){
                intCharacter2Personality2Strength = charCharacter2Personality2Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 2s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality2Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Intellegence)){
                intCharacter2Personality2Intellegence = charCharacter2Personality2Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 2s trust 0-9");
            scanf("%lu", &charCharacter2Personality2Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Trust)){
                intCharacter2Personality2Trust = charCharacter2Personality2Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            break;
        case 3:
            // enter characters stats
            printf("Enter character 2s personality 1s strength 0-9");
            scanf("%lu", &charCharacter2Personality1Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Strength)){
                intCharacter2Personality1Strength = charCharacter2Personality1Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 1s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality1Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Intellegence)){
                intCharacter2Personality1Intellegence = charCharacter2Personality1Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 1s trust 0-9");
            scanf("%lu", &charCharacter2Personality1Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Trust)){
                intCharacter2Personality1Trust = charCharacter2Personality1Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 2s strength 0-9");
            scanf("%lu", &charCharacter2Personality2Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Strength)){
                intCharacter2Personality2Strength = charCharacter2Personality2Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 2s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality2Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Intellegence)){
                intCharacter2Personality2Intellegence = charCharacter2Personality2Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 2s trust 0-9");
            scanf("%lu", &charCharacter2Personality2Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Trust)){
                intCharacter2Personality2Trust = charCharacter2Personality2Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 3s strength 0-9");
            scanf("%lu", &charCharacter2Personality3Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Strength)){
                intCharacter2Personality3Strength = charCharacter2Personality3Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 3s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality3Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Intellegence)){
                intCharacter2Personality3Intellegence = charCharacter2Personality3Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 3s trust 0-9");
            scanf("%lu", &charCharacter2Personality3Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Trust)){
                intCharacter2Personality3Trust = charCharacter2Personality3Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            break;
        case 4:
             // enter characters stats
            printf("Enter character 2s personality 1s strength 0-9");
            scanf("%lu", &charCharacter2Personality1Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Strength)){
                intCharacter2Personality1Strength = charCharacter2Personality1Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 1s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality1Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Intellegence)){
                intCharacter2Personality1Intellegence = charCharacter2Personality1Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 1s trust 0-9");
            scanf("%lu", &charCharacter2Personality1Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Trust)){
                intCharacter2Personality1Trust = charCharacter2Personality1Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 2s strength 0-9");
            scanf("%lu", &charCharacter2Personality2Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Strength)){
                intCharacter2Personality2Strength = charCharacter2Personality2Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 2s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality2Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Intellegence)){
                intCharacter2Personality2Intellegence = charCharacter2Personality2Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 2s trust 0-9");
            scanf("%lu", &charCharacter2Personality2Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Trust)){
                intCharacter2Personality2Trust = charCharacter2Personality2Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 3s strength 0-9");
            scanf("%lu", &charCharacter2Personality3Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Strength)){
                intCharacter2Personality3Strength = charCharacter2Personality3Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 3s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality3Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Intellegence)){
                intCharacter2Personality3Intellegence = charCharacter2Personality3Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 3s trust 0-9");
            scanf("%lu", &charCharacter2Personality3Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Trust)){
                intCharacter2Personality3Trust = charCharacter2Personality3Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 4s strength 0-9");
            scanf("%lu", &charCharacter2Personality4Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality4Strength)){
                intCharacter2Personality4Strength = charCharacter2Personality4Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality4Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality4Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 4s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality4Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality4Intellegence)){
                intCharacter2Personality4Intellegence = charCharacter2Personality4Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality4Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality4Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 4s trust 0-9");
            scanf("%lu", &charCharacter2Personality4Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality4Trust)){
                intCharacter2Personality4Trust = charCharacter2Personality4Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality4Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality4Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            break;
        case 5:
            // enter characters stats
            printf("Enter character 2s personality 1s strength 0-9");
            scanf("%lu", &charCharacter2Personality1Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Strength)){
                intCharacter2Personality1Strength = charCharacter2Personality1Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 1s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality1Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Intellegence)){
                intCharacter2Personality1Intellegence = charCharacter2Personality1Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 1s trust 0-9");
            scanf("%lu", &charCharacter2Personality1Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Trust)){
                intCharacter2Personality1Trust = charCharacter2Personality1Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 2s strength 0-9");
            scanf("%lu", &charCharacter2Personality2Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Strength)){
                intCharacter2Personality2Strength = charCharacter2Personality2Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 2s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality2Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Intellegence)){
                intCharacter2Personality2Intellegence = charCharacter2Personality2Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 2s trust 0-9");
            scanf("%lu", &charCharacter2Personality2Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Trust)){
                intCharacter2Personality2Trust = charCharacter2Personality2Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 3s strength 0-9");
            scanf("%lu", &charCharacter2Personality3Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Strength)){
                intCharacter2Personality3Strength = charCharacter2Personality3Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 3s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality3Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Intellegence)){
                intCharacter2Personality3Intellegence = charCharacter2Personality3Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 3s trust 0-9");
            scanf("%lu", &charCharacter2Personality3Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Trust)){
                intCharacter2Personality3Trust = charCharacter2Personality3Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 4s strength 0-9");
            scanf("%lu", &charCharacter2Personality4Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality4Strength)){
                intCharacter2Personality4Strength = charCharacter2Personality4Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality4Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality4Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 4s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality4Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality4Intellegence)){
                intCharacter2Personality4Intellegence = charCharacter2Personality4Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality4Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality4Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 4s trust 0-9");
            scanf("%lu", &charCharacter2Personality4Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality4Trust)){
                intCharacter2Personality4Trust = charCharacter2Personality4Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality4Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality4Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 5s strength 0-9");
            scanf("%lu", &charCharacter2Personality5Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality5Strength)){
                intCharacter2Personality5Strength = charCharacter2Personality5Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality5Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality5Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 5s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality5Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality5Intellegence)){
                intCharacter2Personality5Intellegence = charCharacter2Personality5Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality5Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality5Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 5s trust 0-9");
            scanf("%lu", &charCharacter2Personality5Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality5Trust)){
                intCharacter2Personality5Trust = charCharacter2Personality5Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality5Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality5Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            break;
        case 6:
            // enter characters stats
            printf("Enter character 2s personality 1s strength 0-9");
            scanf("%lu", &charCharacter2Personality1Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Strength)){
                intCharacter2Personality1Strength = charCharacter2Personality1Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 1s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality1Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Intellegence)){
                intCharacter2Personality1Intellegence = charCharacter2Personality1Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 1s trust 0-9");
            scanf("%lu", &charCharacter2Personality1Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Trust)){
                intCharacter2Personality1Trust = charCharacter2Personality1Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 2s strength 0-9");
            scanf("%lu", &charCharacter2Personality2Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Strength)){
                intCharacter2Personality2Strength = charCharacter2Personality2Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 2s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality2Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Intellegence)){
                intCharacter2Personality2Intellegence = charCharacter2Personality2Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 2s trust 0-9");
            scanf("%lu", &charCharacter2Personality2Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Trust)){
                intCharacter2Personality2Trust = charCharacter2Personality2Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 3s strength 0-9");
            scanf("%lu", &charCharacter2Personality3Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Strength)){
                intCharacter2Personality3Strength = charCharacter2Personality3Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 3s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality3Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Intellegence)){
                intCharacter2Personality3Intellegence = charCharacter2Personality3Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 3s trust 0-9");
            scanf("%lu", &charCharacter2Personality3Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Trust)){
                intCharacter2Personality3Trust = charCharacter2Personality3Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 4s strength 0-9");
            scanf("%lu", &charCharacter2Personality4Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality4Strength)){
                intCharacter2Personality4Strength = charCharacter2Personality4Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality4Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality4Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 4s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality4Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality4Intellegence)){
                intCharacter2Personality4Intellegence = charCharacter2Personality4Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality4Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality4Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 4s trust 0-9");
            scanf("%lu", &charCharacter2Personality4Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality4Trust)){
                intCharacter2Personality4Trust = charCharacter2Personality4Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality4Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality4Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 5s strength 0-9");
            scanf("%lu", &charCharacter2Personality5Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality5Strength)){
                intCharacter2Personality5Strength = charCharacter2Personality5Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality5Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality5Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 5s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality5Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality5Intellegence)){
                intCharacter2Personality5Intellegence = charCharacter2Personality5Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality5Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality5Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 5s trust 0-9");
            scanf("%lu", &charCharacter2Personality5Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality5Trust)){
                intCharacter2Personality5Trust = charCharacter2Personality5Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality5Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality5Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 6s strength 0-9");
            scanf("%lu", &charCharacter2Personality6Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality6Strength)){
                intCharacter2Personality6Strength = charCharacter2Personality6Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality6Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality6Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 6s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality6Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality6Intellegence)){
                intCharacter2Personality6Intellegence = charCharacter2Personality6Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality6Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality6Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 6s trust 0-9");
            scanf("%lu", &charCharacter2Personality6Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality6Trust)){
                intCharacter2Personality6Trust = charCharacter2Personality6Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality6Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality6Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            break;
        case 7:
            // enter characters stats
            printf("Enter character 2s personality 1s strength 0-9");
            scanf("%lu", &charCharacter2Personality1Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Strength)){
                intCharacter2Personality1Strength = charCharacter2Personality1Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 1s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality1Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Intellegence)){
                intCharacter2Personality1Intellegence = charCharacter2Personality1Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 1s trust 0-9");
            scanf("%lu", &charCharacter2Personality1Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Trust)){
                intCharacter2Personality1Trust = charCharacter2Personality1Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 2s strength 0-9");
            scanf("%lu", &charCharacter2Personality2Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Strength)){
                intCharacter2Personality2Strength = charCharacter2Personality2Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 2s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality2Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Intellegence)){
                intCharacter2Personality2Intellegence = charCharacter2Personality2Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 2s trust 0-9");
            scanf("%lu", &charCharacter2Personality2Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Trust)){
                intCharacter2Personality2Trust = charCharacter2Personality2Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 3s strength 0-9");
            scanf("%lu", &charCharacter2Personality3Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Strength)){
                intCharacter2Personality3Strength = charCharacter2Personality3Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 3s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality3Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Intellegence)){
                intCharacter2Personality3Intellegence = charCharacter2Personality3Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 3s trust 0-9");
            scanf("%lu", &charCharacter2Personality3Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Trust)){
                intCharacter2Personality3Trust = charCharacter2Personality3Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 4s strength 0-9");
            scanf("%lu", &charCharacter2Personality4Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality4Strength)){
                intCharacter2Personality4Strength = charCharacter2Personality4Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality4Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality4Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 4s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality4Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality4Intellegence)){
                intCharacter2Personality4Intellegence = charCharacter2Personality4Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality4Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality4Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 4s trust 0-9");
            scanf("%lu", &charCharacter2Personality4Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality4Trust)){
                intCharacter2Personality4Trust = charCharacter2Personality4Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality4Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality4Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 5s strength 0-9");
            scanf("%lu", &charCharacter2Personality5Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality5Strength)){
                intCharacter2Personality5Strength = charCharacter2Personality5Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality5Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality5Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 5s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality5Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality5Intellegence)){
                intCharacter2Personality5Intellegence = charCharacter2Personality5Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality5Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality5Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 5s trust 0-9");
            scanf("%lu", &charCharacter2Personality5Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality5Trust)){
                intCharacter2Personality5Trust = charCharacter2Personality5Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality5Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality5Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 6s strength 0-9");
            scanf("%lu", &charCharacter2Personality6Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality6Strength)){
                intCharacter2Personality6Strength = charCharacter2Personality6Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality6Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality6Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 6s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality6Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality6Intellegence)){
                intCharacter2Personality6Intellegence = charCharacter2Personality6Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality6Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality6Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 6s trust 0-9");
            scanf("%lu", &charCharacter2Personality6Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality6Trust)){
                intCharacter2Personality6Trust = charCharacter2Personality6Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality6Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality6Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 7s strength 0-9");
            scanf("%lu", &charCharacter2Personality7Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality7Strength)){
                intCharacter2Personality7Strength = charCharacter2Personality7Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality7Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality7Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 7s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality7Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality7Intellegence)){
                intCharacter2Personality7Intellegence = charCharacter2Personality7Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality7Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality7Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 7s trust 0-9");
            scanf("%lu", &charCharacter2Personality7Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality7Trust)){
                intCharacter2Personality7Trust = charCharacter2Personality7Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality7Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality7Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            break;
        case 8:
            // enter characters stats
            printf("Enter character 2s personality 1s strength 0-9");
            scanf("%lu", &charCharacter2Personality1Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Strength)){
                intCharacter2Personality1Strength = charCharacter2Personality1Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 1s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality1Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Intellegence)){
                intCharacter2Personality1Intellegence = charCharacter2Personality1Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 1s trust 0-9");
            scanf("%lu", &charCharacter2Personality1Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Trust)){
                intCharacter2Personality1Trust = charCharacter2Personality1Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 2s strength 0-9");
            scanf("%lu", &charCharacter2Personality2Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Strength)){
                intCharacter2Personality2Strength = charCharacter2Personality2Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 2s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality2Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Intellegence)){
                intCharacter2Personality2Intellegence = charCharacter2Personality2Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 2s trust 0-9");
            scanf("%lu", &charCharacter2Personality2Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Trust)){
                intCharacter2Personality2Trust = charCharacter2Personality2Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 3s strength 0-9");
            scanf("%lu", &charCharacter2Personality3Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Strength)){
                intCharacter2Personality3Strength = charCharacter2Personality3Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 3s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality3Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Intellegence)){
                intCharacter2Personality3Intellegence = charCharacter2Personality3Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 3s trust 0-9");
            scanf("%lu", &charCharacter2Personality3Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Trust)){
                intCharacter2Personality3Trust = charCharacter2Personality3Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 4s strength 0-9");
            scanf("%lu", &charCharacter2Personality4Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality4Strength)){
                intCharacter2Personality4Strength = charCharacter2Personality4Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality4Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality4Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 4s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality4Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality4Intellegence)){
                intCharacter2Personality4Intellegence = charCharacter2Personality4Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality4Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality4Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 4s trust 0-9");
            scanf("%lu", &charCharacter2Personality4Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality4Trust)){
                intCharacter2Personality4Trust = charCharacter2Personality4Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality4Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality4Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 5s strength 0-9");
            scanf("%lu", &charCharacter2Personality5Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality5Strength)){
                intCharacter2Personality5Strength = charCharacter2Personality5Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality5Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality5Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 5s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality5Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality5Intellegence)){
                intCharacter2Personality5Intellegence = charCharacter2Personality5Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality5Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality5Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 5s trust 0-9");
            scanf("%lu", &charCharacter2Personality5Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality5Trust)){
                intCharacter2Personality5Trust = charCharacter2Personality5Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality5Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality5Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 6s strength 0-9");
            scanf("%lu", &charCharacter2Personality6Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality6Strength)){
                intCharacter2Personality6Strength = charCharacter2Personality6Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality6Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality6Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 6s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality6Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality6Intellegence)){
                intCharacter2Personality6Intellegence = charCharacter2Personality6Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality6Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality6Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 6s trust 0-9");
            scanf("%lu", &charCharacter2Personality6Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality6Trust)){
                intCharacter2Personality6Trust = charCharacter2Personality6Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality6Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality6Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 7s strength 0-9");
            scanf("%lu", &charCharacter2Personality7Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality7Strength)){
                intCharacter2Personality7Strength = charCharacter2Personality7Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality7Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality7Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 7s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality7Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality7Intellegence)){
                intCharacter2Personality7Intellegence = charCharacter2Personality7Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality7Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality7Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 7s trust 0-9");
            scanf("%lu", &charCharacter2Personality7Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality7Trust)){
                intCharacter2Personality7Trust = charCharacter2Personality7Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality7Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality7Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 8s strength 0-9");
            scanf("%lu", &charCharacter2Personality8Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality8Strength)){
                intCharacter2Personality8Strength = charCharacter2Personality8Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality8Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality8Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 8s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality8Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality8Intellegence)){
                intCharacter2Personality8Intellegence = charCharacter2Personality8Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality8Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality8Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 8s trust 0-9");
            scanf("%lu", &charCharacter2Personality8Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality8Trust)){
                intCharacter2Personality8Trust = charCharacter2Personality8Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality8Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            break;
        case 9:
            // enter characters stats
            printf("Enter character 2s personality 1s strength 0-9");
            scanf("%lu", &charCharacter2Personality1Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Strength)){
                intCharacter2Personality1Strength = charCharacter2Personality1Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 1s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality1Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Intellegence)){
                intCharacter2Personality1Intellegence = charCharacter2Personality1Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 1s trust 0-9");
            scanf("%lu", &charCharacter2Personality1Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality1Trust)){
                intCharacter2Personality1Trust = charCharacter2Personality1Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality1Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality1Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 2s strength 0-9");
            scanf("%lu", &charCharacter2Personality2Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Strength)){
                intCharacter2Personality2Strength = charCharacter2Personality2Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 2s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality2Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Intellegence)){
                intCharacter2Personality2Intellegence = charCharacter2Personality2Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 2s trust 0-9");
            scanf("%lu", &charCharacter2Personality2Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality2Trust)){
                intCharacter2Personality2Trust = charCharacter2Personality2Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality2Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 3s strength 0-9");
            scanf("%lu", &charCharacter2Personality3Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Strength)){
                intCharacter2Personality3Strength = charCharacter2Personality3Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 3s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality3Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Intellegence)){
                intCharacter2Personality3Intellegence = charCharacter2Personality3Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 3s trust 0-9");
            scanf("%lu", &charCharacter2Personality3Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality3Trust)){
                intCharacter2Personality3Trust = charCharacter2Personality3Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality3Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality3Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 4s strength 0-9");
            scanf("%lu", &charCharacter2Personality4Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality4Strength)){
                intCharacter2Personality4Strength = charCharacter2Personality4Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality4Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality4Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 4s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality4Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality4Intellegence)){
                intCharacter2Personality4Intellegence = charCharacter2Personality4Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality4Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality4Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 4s trust 0-9");
            scanf("%lu", &charCharacter2Personality4Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality4Trust)){
                intCharacter2Personality4Trust = charCharacter2Personality4Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality4Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality4Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 5s strength 0-9");
            scanf("%lu", &charCharacter2Personality5Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality5Strength)){
                intCharacter2Personality5Strength = charCharacter2Personality5Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality5Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality5Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 5s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality5Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality5Intellegence)){
                intCharacter2Personality5Intellegence = charCharacter2Personality5Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality5Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality5Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 5s trust 0-9");
            scanf("%lu", &charCharacter2Personality5Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality5Trust)){
                intCharacter2Personality5Trust = charCharacter2Personality5Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality5Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality5Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 6s strength 0-9");
            scanf("%lu", &charCharacter2Personality6Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality6Strength)){
                intCharacter2Personality6Strength = charCharacter2Personality6Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality6Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality6Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 6s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality6Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality6Intellegence)){
                intCharacter2Personality6Intellegence = charCharacter2Personality6Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality6Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality6Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 6s trust 0-9");
            scanf("%lu", &charCharacter2Personality6Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality6Trust)){
                intCharacter2Personality6Trust = charCharacter2Personality6Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality6Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality6Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 7s strength 0-9");
            scanf("%lu", &charCharacter2Personality7Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality7Strength)){
                intCharacter2Personality7Strength = charCharacter2Personality7Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality7Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality7Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 7s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality7Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality7Intellegence)){
                intCharacter2Personality7Intellegence = charCharacter2Personality7Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality7Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality7Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 7s trust 0-9");
            scanf("%lu", &charCharacter2Personality7Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality7Trust)){
                intCharacter2Personality7Trust = charCharacter2Personality7Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality7Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality7Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 8s strength 0-9");
            scanf("%lu", &charCharacter2Personality8Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality8Strength)){
                intCharacter2Personality8Strength = charCharacter2Personality8Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality8Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality8Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 8s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality8Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality8Intellegence)){
                intCharacter2Personality8Intellegence = charCharacter2Personality8Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality8Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality8Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 8s trust 0-9");
            scanf("%lu", &charCharacter2Personality8Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality8Trust)){
                intCharacter2Personality8Trust = charCharacter2Personality8Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality8Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality2Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            // enter characters stats
            printf("Enter character 2s personality 9s strength 0-9");
            scanf("%lu", &charCharacter2Personality9Strength);
            // boundary/error checking
            if (isdigit(charCharacter2Personality9Strength)){
                intCharacter2Personality9Strength = charCharacter2Personality9Strength;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality9Strength;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality9Strength < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 9s intellegence 0-9");
            scanf("%lu", &charCharacter2Personality9Intellegence);
            // boundary/error checking
            if (isdigit(charCharacter2Personality9Intellegence)){
                intCharacter2Personality9Intellegence = charCharacter2Personality9Intellegence;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality9Intellegence;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality9Intellegence < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            printf("Enter character 2s personality 9s trust 0-9");
            scanf("%lu", &charCharacter2Personality9Trust);
            // boundary/error checking
            if (isdigit(charCharacter2Personality9Trust)){
                intCharacter2Personality9Trust = charCharacter2Personality9Trust;
                // removing stat points to be put in each stat category and showing it to the player
                intCharacter2StatPoints = intCharacter2StatPoints - intCharacter2Personality9Trust;
                printf("Second characters amount of stat points is: %lu" ,intCharacter2StatPoints);
                if (intCharacter2StatPoints < 0) {
                    printf("too many stat points selected for the amount of points the character has.");
                    exit(0);
                }
                if (intCharacter2Personality9Trust < 0) {
                    printf("cannot have a number less than 0");
                    exit(0);
                }
            }
            else {
                printf("Only single digit integers are allowed.");
                exit(0);
            }
            break;
        default:
            break; 
    }


    // fusion state set to default
    intFusionState = 0;
    // while loop value to keep looping
    int i = 5;
    // while loop needed for game
    while (i == 5) {
        intPlayerStateVariable = rand() % 6 + 1;
        switch (intPlayerStateVariable) {
            case 1:
                // telling the player what directions they can go
                printf("What direction do you want to go, Left(1), Right(2), Straight(3), Up(4), Down(5):");
                scanf("%s", &charOptionVariable);
                // boundary/error checking
                if (isdigit(charOptionVariable)){
                    intOptionVariable = charOptionVariable;
                    if (intOptionVariable < 1) {
                        if (intOptionVariable > 5) {
                            printf("Not an option.");
                            exit(0);
                        }
                    }
                }
                else {
                    printf("Only single digit integers are allowed.");
                    exit(0);
                }
                break;
            case 2:
                // telling the player what directions they can go
                printf("What direction do you want to go, Left(1), Right(2), Straight(3), Up(4):");
                scanf("%s", &charOptionVariable);
                // boundary/error checking
                if (isdigit(charOptionVariable)){
                    intOptionVariable = charOptionVariable;
                    if (intOptionVariable < 1) {
                        if (intOptionVariable > 4) {
                            printf("Not an option.");
                            exit(0);
                        }
                    }
                }
                else {
                    printf("Only single digit integers are allowed.");
                    exit(0);
                }
                break;
            case 3:
                // telling the player what directions they can go
                printf("What direction do you want to go, Left(1), Right(2), Straight(3):");
                scanf("%s", &charOptionVariable);
                // boundary/error checking
                if (isdigit(charOptionVariable)){
                    intOptionVariable = charOptionVariable;
                    if (intOptionVariable < 1) {
                        if (intOptionVariable > 3) {
                            printf("Not an option.");
                            exit(0);
                        }
                    }
                }
                else {
                    printf("Only single digit integers are allowed.");
                    exit(0);
                }
                break;
            case 4:
                // telling the player what directions they can go
                printf("What direction do you want to go, Left(1), Right(2):");
                scanf("%s", &charOptionVariable);
                // boundary/error checking
                if (isdigit(charOptionVariable)){
                    intOptionVariable = charOptionVariable;
                    if (intOptionVariable < 1) {
                        if (intOptionVariable > 2) {
                            printf("Not an option.");
                            exit(0);
                        }
                    }
                }
                else {
                    printf("Only single digit integers are allowed.");
                    exit(0);
                }
                break;
            case 5:
                enemy();
                break;
            case 6:
                trap();
                break;
            default:
                break; 
        }
        switch (intOptionVariable){
            case 1:
                printf("Your Party went left.");
                break;
            case 2:
                printf("Your Party went right.");
                break;
            case 3:
                printf("Your Party went straight.");
                break;
            case 4:
                printf("Your Party went up.");
                break;
            case 5:
                printf("Your Party went down.");
                break;
            default:
                break; 
        }
        
        // telling the player what directions they can go
        printf("What is your preferred fusion state, two members(0), fused consciousnesses(1), fused consciousnesses with multiple personalities(2), One member dominant(3):");
        scanf("%s", &charFusionState);
        // boundary/error checking
        if (isdigit(charFusionState)){
            intFusionState = charFusionState;
            if (intFusionState < 0) {
                if (intFusionState > 3) {
                    printf("Not an option.");
                    exit(0);
                }
            }
        }
        else {
            printf("Only single digit integers are allowed.");
            exit(0);
        }
        switch (intCharactersRelationship){
            case 1:
                intFusionResult = D8();
                if (intFusionResult < 8){
                    printf("your party fused");
                }
                else {
                    printf("Your party did not fuse");
                }
                break; 
            case 2:
                intFusionResult = D10();
                if (intFusionResult < 8){
                    printf("your party fused");
                }
                else {
                    printf("Your party did not fuse");
                }
                break;
            case 3:
                intFusionResult = D20();
                if (intFusionResult < 8){
                    printf("your party fused");
                }
                else {
                    printf("Your party did not fuse");
                }
                break; 
            default:
                break;       
        }   
    }


    // exits out of software
    return 0;
}
