#include "player.h"
#include "attack.h"
#include "pokemon.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

t_player* createPlayer()
{
    t_player *player;

    player = malloc(sizeof(t_player));
    if(player == NULL)
    {
        printf("Erreur allocation player.createPlayer().player\n");
        return NULL;
    }
    t_pokemon *pokemonStart = malloc(sizeof(t_pokemon));
    if (pokemonStart == NULL)
    {
        printf("Erreur allocation player.createPlayer().player->pokemonStart\n");
    }
    pokemonStart->attacks = malloc(sizeof(t_attack) * 5);
    t_attack *attack = malloc(sizeof(t_attack));
    
    player->pokemonTeam->attacks[0] = *attack;
    printf("1\n");
    player->pokemonTeam->attacks[0].attackType.water = 10;
    strcpy(pokemonStart->attacks[0].name, "Boule de feu.");
    strcpy(pokemonStart->name, "pikachu");
    player->pokemonTeam[0] = *pokemonStart;
    if (player->pokemonTeam == NULL)
    {
        printf("Erreur allocation player.createPlayer().player->pokemonTeam\n");
    }
    
    player->items = NULL;
    player->items = malloc(sizeof(t_item) * 3);
    if(player->items == NULL)
    {
        printf("Erreur allocation player.createPlayer().player->items\n");
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
    free(player->pokemonTeam->attacks);
    free(player->pokemonTeam);
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
