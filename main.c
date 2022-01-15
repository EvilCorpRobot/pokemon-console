#include "pokemon.h"
#include "player.h"
#include <stdio.h>
#include <string.h>
int main()
{
    t_player *player;
    t_item a1;
    t_item a2;
    t_item a3;
    t_item a4;
    player = createPlayer();
    addItemsPlayer(player, a1);
    addItemsPlayer(player, a2);
    addItemsPlayer(player, a3);
    addItemsPlayer(player, a4);
    printf("nbr d'items : %d\n", player->nbrItems);
    destroyPlayer(player);
}
