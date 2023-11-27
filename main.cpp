/*
 * Nume fisier: main.cpp
 * Autor: Colt Sebastian
 * Data: 26/11/2023
 *
 */

#include <iostream>
#include <vector>
#include <memory>
//#include <random>
//#include <fstream>
#include "headers/Player.hpp"
#include "headers/Enemy.hpp"
#include "headers/Gun.hpp"
#include "headers/User.hpp"
#include "headers/Mischievous.hpp"
#include "headers/Potions.hpp"
void use_item(const std::vector<std::shared_ptr<Item>> &inv, Player p) {
    int wichItem;
    std::cout<<"select the item you wnt to use:";
    std::cin>>wichItem;
    const std::shared_ptr<Item> &itemUsed=inv[wichItem];
    itemUsed->use();
    //inv[wichItem]->use();
    if (auto potionItem = dynamic_cast<Potions*>(itemUsed.get())) {
        potionItem->interact(p); // 27
    }
        // Attempt to downcast to Weapons
    else if (auto mischievousItem = dynamic_cast<Mischievous*>(itemUsed.get())) {
        std::cout<<"Nu pot face nimic cu asta";
        mischievousItem->print();
    }
}
int main() {
    ///create the list of guns, enemys and items that will apear in game and playeble character and invetory that the user will select
    std::vector<std::shared_ptr<Item>> listItems;
    listItems.push_back(std::make_shared<Mischievous>("Chandelier", "fancy", 10));
    listItems.push_back(std::make_shared<Mischievous>("Statue", "old", 15));
    listItems.push_back(std::make_shared<Potions>("healing", 1, 10));
    listItems.push_back(std::make_shared<Potions>("Buff", 2, 10));
    /*Mischievous i1("Chandelier","fancy",10);
    Mischievous i2("Statue","old",15);
    Potions b1("healing",1,10);
    Potions b2("Buff",2,10);
    std::vector<Item> listItems{i1,i2,b1,b2};*/
    ///enemys posible for spawn
    Enemy mob1("circle","red","Zombi",100,50,50);
    Enemy mob2("circle","red","Golem",500,10,100);
    std::vector<Enemy> listEnemys{mob1,mob2};
    ///list of player archetypes
    Gun gun1("circle","red","Pistol", 50, 7, 1);
    Gun gun4("circle","red","Big Iron", 100, 7, 10);
    Player p1("circle","red","Police man",300,100,1,gun1);
    Player p2("circle","red","Soldier",300,120,2,gun4);
    std::vector<Player> listPlayers{p1,p2};
   /* int gameOn=1;
    int navigater=1;
   while(gameOn){

        switch (navigater) {
            case 1:/// Create a user to asociate to the score you will obtain when you play
            {*/
                int invalidName=1;
                std::vector<User> userScore;
                std::cout<<"insert name:";
                while(invalidName){
                    std::string userName;

                    std::cin>>userName;
                    try{

                        User curentUser(userName);
                        invalidName=0;
                    }
                    catch(std::exception& e) {
                        std::cerr<<e.what()<<'\n';
                    }
                }
                //std::shared_ptr<Item>inventory=std::make_shared<Item>("inventory");
                //std::cout<<listPlayers[0]<<'\n';
                std::vector<std::shared_ptr<Item>> inventory;
                inventory.push_back(std::make_shared<Item>());
                inventory.push_back(std::make_shared<Item>());
                inventory[0] = listItems[0];
                inventory[1] = listItems[2];
                use_item(inventory,p1);
                for(const auto&ptr : inventory) {
                    ptr->use();
                    ptr->print();
                }
                std::cout<<p1<<'\n';

                //mob1.afisare();
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
                //  writeScoresToFile(userScore, "Score.txt");
                /* for(const auto&ptr : inventory)
                     delete ptr;*/
        /*        break;
            }
            case 2:///exit
            {
                gameOn=0;
                break;
            }
            default:
            {
                std::cout<<"What?!";
                break;
            }
        }
        if(gameOn)
            std::cin>>navigater;
   }*/



}
