#include <string>
#include <iostream>
#include "Player.cpp"
#include "Karaoke.cpp"
using namespace std;

// moins bon score : 50/10
/*
UML question A/
+-------------------------+
|         Player          |
+-------------------------+
|-vector int tableauScore |
+-------------------------+
|moyenne()                |
|scoreTotal()             |
|chansonBestScore()       |
|chasonWorstScore()       |
|afficheScore()           |
|ajouteScore()            |
+-------------------------+

- = private

UML question B/
+---------------------------------+         +-------------------------+
|             Karaoké             |         |         Player          | 
+---------------------------------+         +-------------------------+
|-vector string listeChanson      |         |-vector int tableauScore |
|-vector class listeJoueurs       |         +-------------------------+
+---------------------------------+  ---->  |moyenne()                |
|addPlayer()                      |         |scoreTotal()             |
|deletePlayer()                   |         |chansonBestScore()       |
|bestScoreSong                    |         |chasonWorstScore()       |
|highScorePlayer()                |         |afficheScore()           |
|bestScore()                      |         |ajouteScore()            |
|bestMoyenne()                    |         +-------------------------+
+---------------------------------+

question C/ Il est possible d'ajouter ou de supprimer des chanson avec les tableaux dynamiques "vector".
*/

int main(){
    // vector<int> test;
    // test.push_back(0);
    // test.push_back(1);
    // cout << test[0] << endl << test[1] << endl;
    
    /*Question A/*/
    Player michel;
    michel.ajouteScore(0, 80);
    michel.ajouteScore(1, 100);
    michel.ajouteScore(2, 50);
    michel.ajouteScore(4, 70);

    michel.afficheScore();
    michel.scoreTotal();
    michel.moyenne();
    michel.chansonBestScore();
    michel.chasonWorstScore();

    /*Question B/*/
    //Karaoke karaoke;

}