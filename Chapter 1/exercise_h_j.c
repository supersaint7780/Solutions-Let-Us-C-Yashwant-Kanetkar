#include <stdio.h>

int main() {
    int population = 80000;
    int men = 52 * population/100;
    int women = population - men;
    int literate = 42 * population/100;
    int literateMen = 35 * population/100;
    int literateWomen = literate - literateMen;
    int illiterateMen = men - literateMen;
    int illiterateWomen = women - literateWomen;
    printf("illiterate men are %d\n",illiterateMen);
    printf("illiterate women are %d\n",illiterateWomen);
    return 0;
}