typedef struct s_item
{
    char name[50];
    int stack;
    int heal;
    int damage;
}t_item;


t_item createItems(char name[50], int stack, int heal, int damage);