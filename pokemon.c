#include "pokemon.h"
#include "items.h"
#include "string.h"
#include <stdlib.h>
#include <stdio.h>

t_pokemon createPokemon(char name[50], int level_pokemon, int hp_pokemon)
{
    t_pokemon pokemon;
    //crée un pokemon avec les paramétre
    strcpy(pokemon.name, name);
    pokemon.level = level_pokemon;
    pokemon.hp = hp_pokemon;
    
    return pokemon;
}




void afficherPokemon(t_pokemon pokemon)
{
    printf("Le pokemon s'appele : %s.\n", pokemon.name);
    printf("Il est level : %d.\n", pokemon.level);
    printf("Il a : %d hp.\n", pokemon.hp);
}


void damagePokemon(t_pokemon *pokemon, int damage)
{
    pokemon->hp -= damage;
}