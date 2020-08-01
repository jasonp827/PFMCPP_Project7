#include "AttackItem.h"
#include "Utility.h"
#include "DragonSlayer.h"

AttackItem::AttackItem() : Item("attack item", 10){}

void AttackItem::use(Character* character)
{
    useAttackItem(character, this);
}
