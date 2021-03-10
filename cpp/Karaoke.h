#include <string>
#include <vector>
#include "Player.h"
#include "Player.cpp"

class Karaoke{
    private:
        std::vector<std::string> listeChanson;
        std:vector<Player> listeJoueurs;
    public:
        void addPlayer(Player newPlayer);
        void deletePlayer(int playerYouWantToDel);
        void bestScoreSong();
        void highScorePlayer();
        void bestScore();
        void bestMoyenne();
        Karaoke();
};