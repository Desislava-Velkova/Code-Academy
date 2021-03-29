#ifndef HERO_H_
#define HERO_H_

#include "Defines.h"

#define MAX_SPELL_NAME_SIZE 20
#define MAX_HERO_NAME_SIZE 20
#define MAX_SPELLS 2

typedef struct {
  char name[MAX_SPELL_NAME_SIZE];
  int manaCost;
} Spell;

typedef struct {
  Spell spells[MAX_SPELLS];
  char name[MAX_HERO_NAME_SIZE]; /*name of the hero*/
  int maxMana; /*this is the pool with the mana of the hero (mana is  the resurs for the spells)*/
  int currMana; /*current available mana for the hero*/
  int manaRegenRate; /*this tells how much mana points character restores when REGENERATE_MANA is performed*/
} Hero;

typedef struct {
  Hero hero;
  int manaRegenModifier; /*scales up mana each time the character performs REGENERATE_MANA. */
} Archmage;


extern Hero *DarkKnight;
extern Hero *DrawRanger;
extern Hero *BaseArchmage;
extern Archmage *Archmage;

void heroBaseInit(Hero *hero, const char *inputName, int inputMaxMana, int inputManaRegenRate);

void archmageBaseInit(Archmage *archmage, Hero *hero, int manaRegenModifier);

void heroSpellsInit(Hero *hero, const char *basicSpellName, int basicSpellManaCost, const char *ultimateSpellName, int ultimateSpellManaCost);

#endif /* HERO_H_ */
