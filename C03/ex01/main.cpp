#include "ScavTrap.hpp"

int main()
{
    ScavTrap    vis;
    ScavTrap    ana("saad");

    vis = ana;
    for (int i = 0; i <= 50; i++)
        vis.attack("aemon");
    vis.guardGate();
    return (0);
}