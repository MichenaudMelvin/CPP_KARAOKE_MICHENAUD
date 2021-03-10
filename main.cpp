#include <string>
#include <iostream>
#include "Player.h"
#include "Player.cpp"
using namespace std;

// moins bon score : 50/10
/*
UML
+-------------------+
|      Player       |
+-------------------+
|-scoreChanson0     |
|-scoreChanson1     |
|-scoreChanson2     |
|-scoreChanson3     |
|-scoreChanson4     |
+-------------------+
|moyenne()          |
|scoreTotal()       |
|chansonBestScore() |
|chasonWorstScore() |
|afficheScore()     |
|ajouteScore()      |
+-------------------+

- = private

question C/ il est possible d'ajouter ou de supprimer des chanson avec les tableaux dynamiques "vector".
*/
int main(){
    Player michel;
    michel.scoreTotal();
    michel.ajouteScore(1, 70);
}