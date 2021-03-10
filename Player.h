#include <string>
#include <vector>

class Player{
    private:
        std::vector<int> scoreChanson;
    public:
        int moyenne();
        int scoreTotal();
        int chansonBestScore();
        int chasonWorstScore();
        void afficheScore();
        int ajouteScore(int scoreAEcraser, int newScore);
        Player();
};