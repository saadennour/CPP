#include "ClapTrap.hpp"

int main()
{
    ClapTrap    aemon("aemon");
    ClapTrap    vis(aemon);
    ClapTrap    ana("eagon");

    vis = ana;
    for(int i = 0; i <= 10; i++)
        vis.attack("aemon");
    return (0);
}