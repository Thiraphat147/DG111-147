#include <stdio.h>
int main()
{
    int MaxHP;
    int damage;
    int attack_count;
    _Bool is_poisoned;

    printf("Enter Max HP: ");
    scanf("%d", &MaxHP);
    printf("Enter damage: ");
    scanf("%d", &damage);
    printf("Enter attack count: ");
    scanf("%d", &attack_count);
    printf("Is poisoned (1 for yes, 0 for no): ");
    scanf("%d", &is_poisoned);

    int hp = MaxHP - damage;
    if (hp <= 0)
    {
        printf("DEAD");
    }
    else if (is_poisoned == 1)
    {
        printf("poisoned");
    }
    return 0;
}