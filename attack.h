#ifndef ATTACK_H
#define ATTACK_H
typedef struct s_attack_type
{
    int water;
    int fire;
    int earth;
}t_attack_type;


typedef struct s_attack
{
    char name[50];
    t_attack_type attackType;
} t_attack;


#endif