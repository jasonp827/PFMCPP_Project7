#include "AttackItem.h"
#include "Utility.h"
#include "DragonSlayer.h"

void AttackItem::use(Character *character)
{
    useAttackItem(character, this);
}
