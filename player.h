#include "items.h"
typedef struct s_player
{
    t_item *items;
    int nbrItemsAllocate;
    int nbrItems;
}t_player;


t_player createPlayer();
void destroyPlayer();
void addItemsPlayer(t_player *player, t_item item);