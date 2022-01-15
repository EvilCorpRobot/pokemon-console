#include "player.h"
#include <stdio.h>
#include <stdlib.h>

t_player createPlayer()
{
    t_player *player;
    player->items = NULL;
    player->items = malloc(sizeof(t_item) * 3);
    printf("1");
    if(player->items == NULL)
    {
        printf("Erreur allocation player.createPlayer()");
        return;
    }
    
    player->nbrItemsAllocate + 2;
    player->nbrItems = 0;
}

void destroyPlayer(t_player *player)
{
    free(player);
}

void addItemsPlayer(t_player *player, t_item item)
{
    if (player->nbrItems >= player->nbrItemsAllocate)
    {
        realloc(player->items, (sizeof(t_item) * 3) + (sizeof(t_item) *3));
        if (player->items == NULL)
        {
            printf("Erreur allocation player.addItemsPlayer()");
            return;
        }
        player->nbrItemsAllocate += 3;
    }

    player->items[player->nbrItems] = item;
    player->nbrItems += 1;   
}
