#include <iostream>
#include "Karaoke.h"

void Karaoke::addPlayer(Player newPlayer){
    listeJoueurs.push_back(newPlayer);
}

void Karaoke::deletePlayer(int playerYouWantToDel){
    if(listeJoueurs.size == 1){
        std::cout << "Impossible de supprimer le dernier joueur";
    } else{
        listeJoueurs.erase(playerYouWantToDel);
    }
}

void Karaoke::bestScoreSong(){

}

void Karaoke::highScorePlayer(){

}

void Karaoke::bestScore(){

}

void Karaoke::bestMoyenne(){

}

Karaoke::Karaoke(){
    
}