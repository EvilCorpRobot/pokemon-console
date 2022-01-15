#include "player.h"
#include <stdio.h>
#include <stdlib.h>

t_player* createPlayer()
{
    t_player *player;

    player = malloc(sizeof(t_player));
    if(player == NULL)
    {
        printf("Erreur allocation player.createPlayer().player");
        return NULL;
    }
    player->items = NULL;
    player->items = malloc(sizeof(t_item) * 3);
    if(player->items == NULL)
    {
        printf("Erreur allocation player.createPlayer().player->items");
        return NULL;
    }
    
    player->nbrItemsAllocate = 0;
    player->nbrItemsAllocate += 2;
    player->nbrItems = 0;
    return player;
}

void destroyPlayer(t_player *player)
{
    free(player->items);
    free(player);
}

int addItemsPlayer(t_player *player, t_item item)
{

    if (player->nbrItems >= player->nbrItemsAllocate)
    {
        realloc(player->items, (sizeof(t_item) * (player->nbrItems + 1)) + (sizeof(t_item) *3));
        if (player->items == NULL)
        {
            printf("Erreur allocation player.addItemsPlayer()");
            return EXIT_FAILURE;
        }
        player->nbrItemsAllocate += 3;
    }

    player->items[player->nbrItems] = item;
    player->nbrItems += 1;   
}
