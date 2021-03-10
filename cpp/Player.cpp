#include <iostream>
#include "Player.h"

void Player::moyenne(){std::cout << "Moyenne de votre score : " << ((scoreChanson[0] + scoreChanson[1] + scoreChanson[2] + scoreChanson[3] + scoreChanson[4])/5) << std::endl << std::endl;}

void Player::scoreTotal(){std::cout << "Total de votre score : " << (scoreChanson[0] + scoreChanson[1] + scoreChanson[2] + scoreChanson[3] + scoreChanson[4]) << std::endl << std::endl;}

void Player::chansonBestScore(){
    int save;
    for(int i = 0; i < 5; i++){
        for(int j = 1; j < 4; i++){
            if(scoreChanson[i] < scoreChanson[j]){
                save = scoreChanson[j];
                scoreChanson[j] = scoreChanson[i];
                scoreChanson[i] = save;
            }
        }
    }
    std::cout << "Votre chanson ayant eu le meilleure score : " << scoreChanson[0] << std::endl << std::endl;
}

void Player::chasonWorstScore(){
    int save;
    for(int i = 0; i < 5; i++){
        for(int j = 1; j < 4; i++){
            if(scoreChanson[i] > scoreChanson[j]){
                save = scoreChanson[j];
                scoreChanson[j] = scoreChanson[i];
                scoreChanson[i] = save;
            }
        }
    }
    std::cout << "Votre chanson ayant eu le pire score : " << scoreChanson[0] << std::endl << std::endl;
}

void Player::afficheScore(){
    std::cout << "Score chanson n°0 : " << scoreChanson[0] << std::endl;
    std::cout << "Score chanson n°1 : " << scoreChanson[1] << std::endl;
    std::cout << "Score chanson n°2 : " << scoreChanson[2] << std::endl;
    std::cout << "Score chanson n°3 : " << scoreChanson[3] << std::endl;
    std::cout << "Score chanson n°4 : " << scoreChanson[4] << std::endl << std::endl;
}

int Player::ajouteScore(int scoreAEcraser, int newScore){
    if(newScore < 50){
        newScore = 50;
    } else if (newScore > 100){
        newScore = 100;
    }
    
    for(int i = 0; i < 5; i++){
        if(scoreAEcraser == i){
            return scoreChanson.insert(scoreAEcraser, newScore);
        }
    }
}

Player::Player(): scoreChanson.push_back(0), scoreChanson.push_back(0), scoreChanson.push_back(0), scoreChanson.push_back(0), scoreChanson.push_back(0){

}