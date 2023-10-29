#include <iostream>
class Gun{
private:
    std::string G_Name;
    int damage, magazine, recoil;
   ///friend class Player;
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
        out<<"Gun magazine capacity: "<<gun.magazine<<"; ";
        out<<"Gun recoil: "<<gun.recoil<<"\n";
        return out;
    }
    Gun& operator=(const Gun& g) {
        this->G_Name = g.G_Name;
        this->damage = g.damage;
        this->magazine =g.magazine;
        this->recoil =g.recoil;
        return *this;
    }
    /*Gun(const Gun& g) {
        this->G_Name = g.G_Name;
        this->damage = g.damage;
        this->magazine =g.magazine;
        this->recoil =g.recoil;
    }*/
    //friend Attack;
};
class Player {
private:
    std::string name;
    int health_points,speed_points,power_points;
/*private:
    Gun P_Gun;*/
public:
    Player() = default;
    ~Player() = default;

    Player(const std::string& name, int hp, const int& sp, const int& pp) {
        this->name=name;
        this->health_points=hp;
        this->speed_points=sp;
        this->power_points=pp;
       // this->P_Gun=gun;
    }
    friend std::ostream& operator<<(std::ostream &out,const Player &p) {
        out<<"Player name: "<<p.name<<"; ";
        out<<"Player health: "<<p.health_points<<"; ";
        out<<"Player speed: "<<p.speed_points<<"; ";
        out<<"Player power: "<<p.power_points<<"\n";
        return out;
    }
    /*friend class Gun int Attack(const int& pp, int& hp,const friend Gun g) {
        hp = hp - (g.recoil-pp);
        return pp+g.damage;

    }*/
    void P_Damage_Taken(Player& P,const int& x) {
        P.health_points = P.health_points-x;
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
    Enemy(const Enemy &m) {
        this->Mob_Name = m.Mob_Name;
        this->Mob_Health = m.Mob_Health;
        this->Mob_Speed =m.Mob_Speed;
        this->Mob_Damage = m.Mob_Damage;
    }
    friend std::ostream& operator<<(std::ostream &out,const Enemy &m) {
        out<<"Enemy name: "<<m.Mob_Name<<"; ";
        out<<"Enemy health: "<<m.Mob_Health<<"; ";
        out<<"Enemy speed: "<<m.Mob_Speed<<"; ";
        out<<"Enemy damage: "<<m.Mob_Damage<<"\n";
        return out;
    }
    int E_Attack(const Enemy& mob) {
        return mob.Mob_Damage;
    }
    void E_Damage_Taken(Enemy& m, const int& x) {
        m.Mob_Health=m.Mob_Health-x;
    }

};
int main() {

    Gun gun1("Pistol",25,7,0);
    std::cout<<gun1<<'\n';
    Player p1("Player1",300,100,50);
    std::cout<<p1<<'\n';
    Enemy m1("Zombi",100,50,50);
    std::cout<<m1<<'\n';
    //----------------------------------------
   // Enemy::E_Damage_Taken(m1,10);
    //----------------------------------------
    Enemy m2(m1);
    std::cout<<m2<<'\n';
    Gun gun2,gun3;
    gun3 = gun2 = gun1;
    std::cout<<gun2<<'\n';
    std::cout<<gun3<<'\n';
    return 0;
}
