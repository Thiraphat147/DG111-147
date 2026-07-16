#include <stdio.h>
#include <math.h>
int main()
{
    int player_ATK;
    int enemy_DEF;
    int hitNumber;
    int damage_best;
    float criticalHit;
    printf("Enter player's attack power: ");
    scanf("%d", &player_ATK);
    printf("Enter enemy's defense: ");
    scanf("%d", &enemy_DEF);
    printf("Enter number of hits: ");
    scanf("%d", &hitNumber);

    criticalHit = hitNumber % 5 == 0;

    if (hitNumber % 5 == 0)
    {
        criticalHit = (float)ceil((float)(player_ATK - enemy_DEF) * 1.5f);
        printf("Damage: %.0f ***CRITICAL HIT! x1.5***\n", criticalHit);
    }
    else
    {
        int damage_best = player_ATK - enemy_DEF;
        printf("Damage: %d Normal Hit\n", damage_best);
    }

    return 0;
}