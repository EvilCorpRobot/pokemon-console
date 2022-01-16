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
    printf("Le joueur a comme pokemon : %s\n", player->pokemonTeam[0].name);
    printf("Le joueur à pour nom d'attaque : %s\n", player->pokemonTeam[0].attacks->name);
    printf("Le pokemon a comme attack %d", player->pokemonTeam[0].attacks->attackType.water);
    destroyPlayer(player);
}
