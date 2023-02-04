#include "gtest/gtest.h"
#include "game.cpp"
#include "narrative.cpp"
#include <sstream>
#include <string>

TEST(EquipmentTest, validsmallHeal)
{
    Inventory inventory;
    Heal *heal = new SmallPotion;
    inventory.addHeal(heal);
    EXPECT_EQ(1, inventory.showHealSize());
}

TEST(EquipmentTest, validLargeHeal)
{
    Inventory inventory;
    Heal *heal = new LargePotion;
    inventory.addHeal(heal);
    EXPECT_EQ(1, inventory.showHealSize());
}

TEST(EquipmentTest, validMaxHeal)
{
    Inventory inventory;
    Heal *heal = new MaxPotion;
    inventory.addHeal(heal);
    EXPECT_EQ(1, inventory.showHealSize());
}

TEST(EquipmentTest, validShortSword)
{
    Inventory inventory;
    Weapon *weapon = new ShortSword;
    inventory.addWeapon(weapon);
    EXPECT_EQ(1, inventory.showWeaponSize());
}

TEST(EquipmentTest, validShortBow)
{
    Inventory inventory;
    Weapon *weapon = new ShortBow;
    inventory.addWeapon(weapon);
    EXPECT_EQ(1, inventory.showWeaponSize());
}

TEST(EquipmentTest, validShortSpear)
{
    Inventory inventory;
    Weapon *weapon = new ShortSpear;
    inventory.addWeapon(weapon);
    EXPECT_EQ(1, inventory.showWeaponSize());
}

TEST(EquipmentTest, validLongSword)
{
    Inventory inventory;
    Weapon *weapon = new LongSword;
    inventory.addWeapon(weapon);
    EXPECT_EQ(1, inventory.showWeaponSize());
}

TEST(EquipmentTest, validLongBow)
{
    Inventory inventory;
    Weapon *weapon = new LongBow;
    inventory.addWeapon(weapon);
    EXPECT_EQ(1, inventory.showWeaponSize());
}

TEST(EquipmentTest, validLongSpear)
{
    Inventory inventory;
    Weapon *weapon = new LongSpear;
    inventory.addWeapon(weapon);
    EXPECT_EQ(1, inventory.showWeaponSize());
}

TEST(EquipmentTest, validGreatSword)
{
    Inventory inventory;
    Weapon *weapon = new GreatSword;
    inventory.addWeapon(weapon);
    EXPECT_EQ(1, inventory.showWeaponSize());
}

TEST(EquipmentTest, validGreatBow)
{
    Inventory inventory;
    Weapon *weapon = new GreatBow;
    inventory.addWeapon(weapon);
    EXPECT_EQ(1, inventory.showWeaponSize());
}

TEST(EquipmentTest, validGreatSpear)
{
    Inventory inventory;
    Weapon *weapon = new GreatSpear;
    inventory.addWeapon(weapon);
    EXPECT_EQ(1, inventory.showWeaponSize());
}

TEST(EquipmentTest, validLightArmor)
{
    Inventory inventory;
    Armor *armor = new LightArmor;
    inventory.addArmor(armor);
    EXPECT_EQ(1, inventory.showArmorSize());
}

TEST(EquipmentTest, validHeavyArmor)
{
    Inventory inventory;
    Armor *armor = new HeavyArmor;
    inventory.addArmor(armor);
    EXPECT_EQ(1, inventory.showArmorSize());
}

TEST(EquipmentTest, validGreatArmor)
{
    Inventory inventory;
    Armor *armor = new GreatArmor;
    inventory.addArmor(armor);
    EXPECT_EQ(1, inventory.showArmorSize());
}

TEST(EnemyTest, validSlimeHealth)
{
    Enemy *enemy = new Slime;
    EXPECT_EQ(31, enemy->getHealth());
}  

TEST(EnemyTest, validSlimeName)
{
    Enemy *enemy = new Slime;
    EXPECT_EQ("slime", enemy->getName());
}

TEST(EnemyTest, validGoblinName)
{
    Enemy *enemy = new Goblin;
    EXPECT_EQ("goblin", enemy->getName());
}

TEST(EnemyTest, validWitchName)
{
    Enemy *enemy = new Witch;
    EXPECT_EQ("witch", enemy->getName());
}

TEST(EnemyTest, validWitchHealth)
{
    Enemy *enemy = new Witch;
    EXPECT_EQ(35, enemy->getHealth());
}  

TEST(EnemyTest, validGoblinHealth)
{
    Enemy *enemy = new Goblin;
    EXPECT_EQ(33, enemy->getHealth());
}  

TEST(HealTest, validSmallHeal)
{
    Character character;
    character.setHealth(1);
    character.addSmallPotion();
    character.useSmallPotion();
    EXPECT_EQ(21, character.getHealth());
}

TEST(HealTest, validLargeHeal)
{
    Character character;
    character.setHealth(1);
    character.addLargePotion();
    character.useLargePotion();
    EXPECT_EQ(25, character.getHealth());
}

TEST(HealTest, validMaxHeal)
{
    Character character;
    character.setHealth(1);
    character.addMaxPotion();
    character.useMaxPotion();
    EXPECT_EQ(1, character.getHealth());
}

TEST(CharacterTest, characterLevel)
{
    Character character;
    character.levelUp();
    EXPECT_EQ(2, character.getLevel());
}

TEST(CharacterTest, characterHealth)
{
    Character character;
    character.levelUp();
    EXPECT_EQ(29, character.getMaxHp());
}

TEST(enemyTest, validLevelUp)
{
    Enemy *enemy = new Slime;
    enemy->setLevel(2);
    EXPECT_EQ(2, enemy->getLevel());
}

/*TEST(AttackTest, CharacterAttack)
{
    Character character;
    std::string name = "short sword";
    character.createWeapon(name);
    Enemy *enemy = new Slime;
    int attackDmg = 0;
    int enemyHp = 0;
    attackDmg = character.hit();
    enemyHp = enemy->getHealth() - attackDmg;
    enemy->setHealth(enemyHp);
    EXPECT_EQ(16, enemy->getHealth());
}*/



int main(int argc, char **argv)
{
   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}
