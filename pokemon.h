


typedef struct s_pokemon
{
    char name[50];
    int level;
    int hp;
} t_pokemon;

t_pokemon createPokemon(char name[50], int level_pokemon, int hp_pokemon);
void afficherPokemon(t_pokemon pokemon);
void damagePokemon(t_pokemon *pokemon, int damage);