#include "Tree.h"


Tree::Tree()
{
    // default values
    x = 0;
    y = 0;
    scale = 1;
}

void Tree::update()
{
    x+=vel;
    y+=vel/2;
}
