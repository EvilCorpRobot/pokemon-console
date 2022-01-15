#include "pokemon.h"
#include "player.h"
#include <stdio.h>
#include <string.h>
int main()
{
    t_player player;
    player = createPlayer();
    printf("2");
    printf("nbr d'items : %d\n", player.nbrItems);
    destroyPlayer(player);
}
