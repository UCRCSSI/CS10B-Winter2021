#ifndef _NUMBER2_H_
#define _NUMBER2_H_
#include <string>

class Player {  // class declaration (default private)
private:
    string username;
    int hp;
    int dps;
public:
    Player();
    Player(string, int, int);
    string GetUsername() { return this->username; }
    int GetHp() { return this->hp; }
    int GetDPS() { return this->dps; }
};

#endif

Player::Player() {
    this->username = "";
    this->hp = 0;
    this->dps = 0;
}
Player::Player(string username, int hp, int dps) {
    this->username = username;
    this->hp = hp;
    this->dps = dps;
}