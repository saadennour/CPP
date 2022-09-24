#include "FragTrap.hpp"

int main()
{
    FragTrap    vis;
    FragTrap    ana("saad");

    vis = ana;
    for (int i = 0; i <= 100; i++)
        vis.attack("aemon");
    vis.HighFivesGuys();
    return (0);
}