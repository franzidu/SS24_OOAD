#include <gtest/gtest.h>

#include "ConcreteItemCreator.h"
#include "GildedRose.h"
#include "Item.h"

// Uncomment the following line after implementing conjured items (follow-up of Lab 2)
#define TEST_CONJURED_ITEMS

TEST(GildedRoseTest, AfterDay01) {
  auto* itemCreator = new ConcreteItemCreator();

  vector<shared_ptr<Item>> items;
  GildedRose G(items, itemCreator);

  items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
  items.push_back(G.createItem("Aged Brie", 2, 0));
  items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

  G.updateQuality();
  std::string s;
  EXPECT_EQ(*G.items[0], *G.createItem("+5 Dexterity Vest", 9, 19));
  EXPECT_EQ(*G.items[1], *G.createItem("Aged Brie", 1, 1));
  EXPECT_EQ(*G.items[2], *G.createItem("Elixir of the Mongoose", 4, 6));
  EXPECT_EQ(*G.items[3], *G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  EXPECT_EQ(*G.items[4], *G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  EXPECT_EQ(*G.items[5], *G.createItem("Backstage passes to a TAFKAL80ETC concert", 14, 21));
  EXPECT_EQ(*G.items[6], *G.createItem("Backstage passes to a TAFKAL80ETC concert", 9, 50));
  EXPECT_EQ(*G.items[7], *G.createItem("Backstage passes to a TAFKAL80ETC concert", 4, 50));
}

TEST(GildedRoseTest, AfterDay02) {
  auto* itemCreator = new ConcreteItemCreator();
  vector<shared_ptr<Item>> items;
  GildedRose G(items, itemCreator);

  items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
  items.push_back(G.createItem("Aged Brie", 2, 0));
  items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

  G.updateQuality();
  G.updateQuality();

  EXPECT_EQ(*G.items[0], *G.createItem("+5 Dexterity Vest", 8, 18));
  EXPECT_EQ(*G.items[1], *G.createItem("Aged Brie", 0, 2));
  EXPECT_EQ(*G.items[2], *G.createItem("Elixir of the Mongoose", 3, 5));
  EXPECT_EQ(*G.items[3], *G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  EXPECT_EQ(*G.items[4], *G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  EXPECT_EQ(*G.items[5], *G.createItem("Backstage passes to a TAFKAL80ETC concert", 13, 22));
  EXPECT_EQ(*G.items[6], *G.createItem("Backstage passes to a TAFKAL80ETC concert", 8, 50));
  EXPECT_EQ(*G.items[7], *G.createItem("Backstage passes to a TAFKAL80ETC concert", 3, 50));
}

TEST(GildedRoseTest, AfterDay05) {
  const int NO_OF_DAYS = 5;
  auto* itemCreator = new ConcreteItemCreator();
  vector<shared_ptr<Item>> items;
  GildedRose G(items, itemCreator);

  items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
  items.push_back(G.createItem("Aged Brie", 2, 0));
  items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

  for (int i = 1; i <= NO_OF_DAYS; i++) {
    G.updateQuality();
  }

  EXPECT_EQ(*G.items[0], *G.createItem("+5 Dexterity Vest", 5, 15));
  EXPECT_EQ(*G.items[1], *G.createItem("Aged Brie", -3, 8));
  EXPECT_EQ(*G.items[2], *G.createItem("Elixir of the Mongoose", 0, 2));
  EXPECT_EQ(*G.items[3], *G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  EXPECT_EQ(*G.items[4], *G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  EXPECT_EQ(*G.items[5], *G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 25));
  EXPECT_EQ(*G.items[6], *G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 50));
  EXPECT_EQ(*G.items[7], *G.createItem("Backstage passes to a TAFKAL80ETC concert", 0, 50));
}

TEST(GildedRoseTest, AfterDay20) {
  const int NO_OF_DAYS = 20;
  auto* itemCreator = new ConcreteItemCreator();
  vector<shared_ptr<Item>> items;
  GildedRose G(items, itemCreator);

  items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
  items.push_back(G.createItem("Aged Brie", 2, 0));
  items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

  for (int i = 1; i <= NO_OF_DAYS; i++) {
    G.updateQuality();
  }

  EXPECT_EQ(*G.items[0], *G.createItem("+5 Dexterity Vest", -10, 0));
  EXPECT_EQ(*G.items[1], *G.createItem("Aged Brie", -18, 38));
  EXPECT_EQ(*G.items[2], *G.createItem("Elixir of the Mongoose", -15, 0));
  EXPECT_EQ(*G.items[3], *G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  EXPECT_EQ(*G.items[4], *G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  EXPECT_EQ(*G.items[5], *G.createItem("Backstage passes to a TAFKAL80ETC concert", -5, 0));
  EXPECT_EQ(*G.items[6], *G.createItem("Backstage passes to a TAFKAL80ETC concert", -10, 0));
  EXPECT_EQ(*G.items[7], *G.createItem("Backstage passes to a TAFKAL80ETC concert", -15, 0));
}

TEST(GildedRoseTest, AfterDay30) {
  const int NO_OF_DAYS = 30;
  auto* itemCreator = new ConcreteItemCreator();
  vector<shared_ptr<Item>> items;
  GildedRose G(items,itemCreator);

  items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
  items.push_back(G.createItem("Aged Brie", 2, 0));
  items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

  for (int i = 1; i <= NO_OF_DAYS; i++) {
    G.updateQuality();
  }

  EXPECT_EQ(*G.items[0], *G.createItem("+5 Dexterity Vest", -20, 0));
  EXPECT_EQ(*G.items[1], *G.createItem("Aged Brie", -28, 50));
  EXPECT_EQ(*G.items[2], *G.createItem("Elixir of the Mongoose", -25, 0));
  EXPECT_EQ(*G.items[3], *G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  EXPECT_EQ(*G.items[4], *G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  EXPECT_EQ(*G.items[5], *G.createItem("Backstage passes to a TAFKAL80ETC concert", -15, 0));
  EXPECT_EQ(*G.items[6], *G.createItem("Backstage passes to a TAFKAL80ETC concert", -20, 0));
  EXPECT_EQ(*G.items[7], *G.createItem("Backstage passes to a TAFKAL80ETC concert", -25, 0));
}

TEST(GildedRoseTest, MaturingItemLimitTests) {
 auto* itemCreator = reinterpret_cast<ItemCreator *>(new ConcreteItemCreator());
vector<shared_ptr<Item>> items;
  GildedRose G(items, itemCreator);

  items.push_back(G.createItem("Aged Brie", 0, 49));
  items.push_back(G.createItem("Aged Brie", 0, 50));
  items.push_back(G.createItem("Aged Brie", 1, 49));
  items.push_back(G.createItem("Aged Brie", 1, 50));
  items.push_back(G.createItem("Aged Brie", -1, 49));
  items.push_back(G.createItem("Aged Brie", -1, 50));

  G.updateQuality();

  EXPECT_EQ(*G.items[0], *G.createItem("Aged Brie", -1, 50));
  EXPECT_EQ(*G.items[1], *G.createItem("Aged Brie", -1, 50));
  EXPECT_EQ(*G.items[2], *G.createItem("Aged Brie", 0, 50));
  EXPECT_EQ(*G.items[3], *G.createItem("Aged Brie", 0, 50));
  EXPECT_EQ(*G.items[4], *G.createItem("Aged Brie", -2, 50));
  EXPECT_EQ(*G.items[5], *G.createItem("Aged Brie", -2, 50));
}

TEST(GildedRoseTest, ExpiringQualityTests) {
 auto* itemCreator = reinterpret_cast<ItemCreator *>(new ConcreteItemCreator());
vector<shared_ptr<Item>> items;
  GildedRose G(items, itemCreator);

  items.push_back(G.createItem("Normal", 1, 10));
  items.push_back(G.createItem("Normal", 0, 10));
  items.push_back(G.createItem("Normal", -1, 10));
  items.push_back(G.createItem("Aged Brie", 1, 10));
  items.push_back(G.createItem("Aged Brie", 0, 10));
  items.push_back(G.createItem("Aged Brie", -1, 10));

  G.updateQuality();

  EXPECT_EQ(*G.items[0], *G.createItem("Normal", 0, 9));
  EXPECT_EQ(*G.items[1], *G.createItem("Normal", -1, 8));
  EXPECT_EQ(*G.items[2], *G.createItem("Normal", -2, 8));
  EXPECT_EQ(*G.items[3], *G.createItem("Aged Brie", 0, 11));
  EXPECT_EQ(*G.items[4], *G.createItem("Aged Brie", -1, 12));
  EXPECT_EQ(*G.items[5], *G.createItem("Aged Brie", -2, 12));
}

#ifdef TEST_CONJURED_ITEMS

TEST(NewConjuredItemsTest, AfterDay01) {
  const int NO_OF_DAYS = 1;

 auto* itemCreator = reinterpret_cast<ItemCreator *>(new ConcreteItemCreator());
vector<shared_ptr<Item>> items;
  GildedRose G(items, itemCreator);

  items.push_back(G.createItem("Conjured Mana Cake", 3, 6));

  for (int i = 1; i <= NO_OF_DAYS; i++) {
    G.updateQuality();
  }
  cout << "\"Conjured\" items degrade in Quality twice as fast as normal items";

  EXPECT_EQ(*G.items[0], *G.createItem("Conjured Mana Cake", 2, 4));
}

TEST(NewConjuredItemsTest, AfterDay02) {
  const int NO_OF_DAYS = 2;

 auto* itemCreator = reinterpret_cast<ItemCreator *>(new ConcreteItemCreator());
vector<shared_ptr<Item>> items;
  GildedRose G(items, itemCreator);

  items.push_back(G.createItem("Conjured Mana Cake", 3, 50));

  for (int i = 1; i <= NO_OF_DAYS; i++) {
    G.updateQuality();
  }

  EXPECT_EQ(*G.items[0], *G.createItem("Conjured Mana Cake", 1, 46));
}

TEST(NewConjuredItemsTest, AfterDay05) {
  const int NO_OF_DAYS = 5;

 auto* itemCreator = reinterpret_cast<ItemCreator *>(new ConcreteItemCreator());
vector<shared_ptr<Item>> items;
  GildedRose G(items, itemCreator);

  items.push_back(G.createItem("Conjured Mana Cake", 3, 50));

  for (int i = 1; i <= NO_OF_DAYS; i++) {
    G.updateQuality();
  }

  // Expectaction:
  // 2, 48
  // 1, 46
  // 0, 44
  // -1, 40
  // -2, 36

  EXPECT_EQ(*G.items[0], *G.createItem("Conjured Mana Cake", -2, 36));
}

TEST(NewConjuredItemsTest, AfterDay20) {
  const int NO_OF_DAYS = 20;

 auto* itemCreator = reinterpret_cast<ItemCreator *>(new ConcreteItemCreator());
vector<shared_ptr<Item>> items;
  GildedRose G(items, itemCreator);

  items.push_back(G.createItem("Conjured Mana Cake", 3, 50));

  for (int i = 1; i <= NO_OF_DAYS; i++) {
    G.updateQuality();
  }

  EXPECT_EQ(*G.items[0], *G.createItem("Conjured Mana Cake", -17, 0));
}

TEST(NewConjuredItemsTest, AfterDay30) {
  const int NO_OF_DAYS = 30;

 auto* itemCreator = reinterpret_cast<ItemCreator *>(new ConcreteItemCreator());
vector<shared_ptr<Item>> items;
  GildedRose G(items, itemCreator);

  items.push_back(G.createItem("Conjured Mana Cake", 3, 50));

  for (int i = 1; i <= NO_OF_DAYS; i++) {
    G.updateQuality();
  }

  EXPECT_EQ(*G.items[0], *G.createItem("Conjured Mana Cake", -27, 0));
}
#endif
