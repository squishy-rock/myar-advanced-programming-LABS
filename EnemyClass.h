#include<iostream>
#include<string>    
using namespace std;

class Enemy {
protected:
    float damage;
    string warcry;

public:
    Enemy() {
        damage = 10;
        warcry = "Roar!";
    }
    void attack() {
        cout << warcry << endl;
        cout << "Deal " << damage << " damage to opponent\n";
    }
};

class Skeleton : public Enemy {
public:
    Skeleton() {
        warcry = warcry + "Hssssssssssss\n";
    }
    void attack() {
        cout << warcry << endl;
        cout << "Deal " << damage << " damage to opponent\n";
    }
};


class Troll : public Enemy {
public:
    Troll() {
        damage = 1.5 * damage; //base enemy dmg
        warcry = warcry + "Grrrrrrrr";
    }
    void attack() {
        cout << warcry << endl;
        cout << "Deal " << damage << " damage to opponent\n";
    }
};

class Orc : public Enemy {
public:
    Orc() {
        damage = 2.0 * damage; //base enemy dmg
        warcry = warcry + "AHHHHHHHHHH";
    }
    void attack() {
        cout << warcry << endl;
        cout << "Deal " << damage << " damage to opponent\n";
    }
};

class DarkOrc : public Enemy {
    string darkorb;
public:

    DarkOrc() {
        damage = 0;
        darkorb = "Dark orb was super effective!";
        warcry = "*cast's dark orb*";
    }
    void attack() {
        cout << warcry << endl;
        cout << darkorb << endl;
    }
};