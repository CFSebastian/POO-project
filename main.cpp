#include <iostream>
class Gun{
private:
    std::string G_Name;
    int damage, magazine, recoil;
public:
    Gun() = default;
    ~Gun() = default;
    Gun(const std::string& gn,const int& dmg,const int& mag,const int& recoil) {
        this->G_Name=gn;
        this->damage=dmg;
        this->magazine=mag;
        this->recoil=recoil;
    }
    friend std::ostream& operator<<(std::ostream& out, const Gun& gun) {
        out<<"Gun name: "<<gun.G_Name<<"; ";
        out<<"Gun damage: "<<gun.damage<<"; ";
        out<<"Gun magazine capacity "<<gun.magazine<<"; ";
        out<<"Gun recoil"<<gun.recoil<<"\n";
        return out;
    }

};
class Player {
private:
    std::string name;
    int health_points,speed_points,power_points;
    Gun P_Gun;
public:
    Player() = default;
    ~Player() = default;

    Player(const std::string& name, int hp, const int& sp, const int& pp,Gun gun) {
        this->name=name;
        this->health_points=hp;
        this->speed_points=sp;
        this->power_points=pp;
        this->P_Gun=gun;
    }
    friend std::ostream& operator<<(std::ostream &out,const Player &p) {
        out<<"Player name: "<<p.name<<"; ";
        out<<"Player health: "<<p.health_points<<"; ";
        out<<"Player speed: "<<p.speed_points<<"; ";
        out<<"Player power: "<<p.power_points<<"\n";
        return out;
    }

};
class Enemy {
private:
    std::string Mob_Name;
    int Mob_Health, Mob_Speed, Mob_Damage;
public:
    Enemy() = default;
    ~Enemy() = default;

    Enemy(const std::string& mn, int mh, const int& ms, const int& md) {
        this->Mob_Name = mn;
        this->Mob_Health = mh;
        this->Mob_Speed =ms;
        this->Mob_Damage = md;
    }
    friend std::ostream& operator<<(std::ostream &out,const Enemy &m) {
        out<<"Enemy name: "<<m.Mob_Name<<"; ";
        out<<"Enemy health: "<<m.Mob_Health<<"; ";
        out<<"Enemy speed: "<<m.Mob_Speed<<"; ";
        out<<"Enemy damage: "<<m.Mob_Damage<<"\n";
        return out;
    }
};
int main() {
    std::cout << "Hello, world!\n";
    return 0;
}
