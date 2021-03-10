#include <vector>

class Player{
    private:
        std::vector<int> scoreChanson;
    public:
        void moyenne();
        void scoreTotal();
        void chansonBestScore();
        void chasonWorstScore();
        void afficheScore();
        int ajouteScore(int scoreAEcraser, int newScore);
        Player();
};