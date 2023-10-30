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

    int getDamage() const {
        return damage;
    }
    int getRecoil() const {
        return recoil;
    }
    const std::string &getGNume() const {
        return G_Name;
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

    Player(const std::string& name, int hp, const int& sp, const int& pp,const Gun& pg) {
        this->name=name;
        this->health_points=hp;
        this->speed_points=sp;
        this->power_points=pp;
        this->P_Gun=pg;
    }
    friend std::ostream& operator<<(std::ostream &out,const Player &p) {
        out<<"Player name: "<<p.name<<"; ";
        out<<"Player health: "<<p.health_points<<"; ";
        out<<"Player speed: "<<p.speed_points<<"; ";
        out<<"Player power: "<<p.power_points<<"; ";
        out<<"Player gun: "<<p.P_Gun.getGNume()<<"\n";
        return out;
    }
    int getPAttack() const {
        return power_points*P_Gun.getDamage();
    }
    void P_Damage_Taken(const int& x) {
        health_points=health_points-x;
    }
    int getPRecoil() const {
        return P_Gun.getRecoil();
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
    int getEAttack() const {
        return Mob_Damage;
    }
    void E_Damage_Taken(const int& x) {
        Mob_Health=Mob_Health-x;
    }

};
int main() {

    Gun gun1("Pistol",50,7,1);
    Gun gun4("Big Iron",100,7,10);
    std::cout<<gun1<<'\n';

    Player p1("Police man",300,100,1,gun1);
    Player p2("Soldier",300,120,2,gun4);

    std::cout<<p1<<'\n';
    Enemy mob1("Zombi",100,50,50);
    Enemy mob2("Golem",500,10,100);
    std::cout<<mob1<<'\n';
    std::cout<<"------------------------------------------------------\n";
    mob1.E_Damage_Taken(p1.getPAttack());
    p1.P_Damage_Taken(p1.getPRecoil());
    std::cout<<mob1<<'\n';
    std::cout<<p1<<'\n';
    p1.P_Damage_Taken(mob1.getEAttack());
    std::cout<<p1<<'\n';
    std::cout<<"------------------------------------------------------\n";
    Enemy m2(mob1);
    std::cout<<m2<<'\n';
    Gun gun2,gun3;
    gun3 = gun2 = gun1;
    std::cout<<gun2<<'\n';
    std::cout<<gun3<<'\n';
    std::cout<<"------------------------------------------------------\n";
    std::cout<<"Chose your character (press 1 or 2)";
    int n;
    std::cin>>n;
    if(n==1)
        std::cout<<p1<<'\n';
    if(n==2)
        std::cout<<p2<<'\n';
    return 0;
}
