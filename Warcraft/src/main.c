#include <stdio.h>
#include <stdlib.h>

#include "Hero.h"

Hero *DarkKnight;
Hero *DrawRanger;
Hero *BaseArchmage;
Archmage *Archmage;

int main(void) {
  char name[MAX_HERO_NAME_SIZE + 1];
  int maxMana = 0;
  int baseManaRegenRate = 0;
  int manaRegenModifier = 0;

  //read Archmage data
  scanf("%s %d %d %d", name, &maxMana, &baseManaRegenRate, &manaRegenModifier);

  heroBaseInit(BaseArchmage, name, maxMana, baseManaRegenRate); // da se izmesti
  archmageBaseInit(Archmage, BaseArchmage, manaRegenModifier); // da se izmesti 
  //read Death Knight data
  scanf("%s %d %d", name, &maxMana, &baseManaRegenRate);

  //read Draw Ranger data
  scanf("%s %d %d", name, &maxMana, &baseManaRegenRate);

  int commandsCount = 0;
  int currAction = 0;
  scanf("%d", &commandsCount);

  for (int i = 0; i < commandsCount; ++i) {
    scanf("%d", &currAction);
  }

  return EXIT_SUCCESS;
}
