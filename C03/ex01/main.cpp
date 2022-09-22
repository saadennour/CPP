#include "ScavTrap.hpp"

int main()
{
    ScavTrap    vis;
    ScavTrap    ana("saad");

    vis = ana;
    vis.attack("aemon");
    vis.attack("aemon");
    vis.attack("aemon");
    vis.attack("aemon");
    vis.attack("aemon");
    vis.attack("aemon");
    vis.attack("aemon");
    vis.attack("aemon");
    vis.attack("aemon");
    vis.attack("aemon");
    vis.attack("aemon");
    vis.attack("aemon");
    vis.guardGate();
    return (0);
}