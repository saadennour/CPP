#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap vis("daemon");
    DiamondTrap ana("viserys");
    DiamondTrap lol(ana);

   // vis = ana;
    for (int i = 0; i <= 50; i++)
        vis.attack("aemon");
    vis.HighFivesGuys();
    vis.whoAmI();
    return (0);
}