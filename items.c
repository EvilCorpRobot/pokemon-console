#include "items.h"
#include <string.h>

t_item createItems(char name[50], int stack, int heal, int damage)
{
    t_item item;

    strcpy(item.name, name);
    item.stack = stack;
    item.heal = heal;
    item.damage = damage;
    return item;
}