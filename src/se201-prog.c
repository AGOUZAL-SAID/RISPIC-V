#include <stdint-gcc.h>

#define START1_x17 x17
#define START1_x15 x15
#define START2_x11 x11
#define STARTR_x12 x12
#define NINTS_x13 x13
#define NBYTE_x14 x14
#define END1_x17 x17

int sum(int x10 ,int x11 , int x12 ,int x13) { 

    // Initialisation des registres
    uint32_t START1_x17 = x10 + 0;
    x10 = NINTS_x13 + 0;

    // Comparaisons et branchements
    if (START1_x17 == 0) goto L48;
    if (START2_x11 == 0) goto L50;
    if (STARTR_x12 == 0) goto L48;
    if (0 >= x13) goto L54;

    uint32_t START1_x15 = START1_x17;

    // Boucle principale
    uint32_t NBYTE_x14 = NINTS_x13 << 2;  // SLLI
    END1_x17 = START1_x17 + NBYTE_x14;
L24:
    x14 = *(uint32_t *)(START1_x15);
    uint32_t x16 = *(uint32_t *)(START2_x11);
    x14 = x14 + x16;
    *(uint32_t *)(x12) = x14;
    // Incréments
    START1_x15 = START1_x15 + 4;
    START2_x11 = START2_x11 + 4;
    STARTR_x12 = STARTR_x12 + 4;

    // Vérification de la condition de la boucle
    if (START1_x15 != END1_x17) goto L24;

    // Instructions de saut
    return x10;

L48:
    x10 = -1;
    return x10;

L50:
    x10 = -1;
L54:
    return x10;

}