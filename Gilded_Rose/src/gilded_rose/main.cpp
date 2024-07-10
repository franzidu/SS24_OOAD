#include "ConcreteItemCreator.h"
#include "ItemCreator.h"
#include "GildedRose.h"

#include <iostream>
#include <memory>

using namespace std;

void initItems(vector<shared_ptr<Item>> &items, const GildedRose &Tavern);


int main() {
  auto* itemCreator = new ConcreteItemCreator();
  vector<shared_ptr<Item>> items;
  GildedRose Tavern(items, itemCreator);
  initItems(items, Tavern);

  cout << "OMGHAI!" << endl;

  for (int day = 0; day <= 30; day++) {
    cout << "-------- day " << day << " --------" << endl;
    cout << "name, sellInDays, quality" << endl;
    for (vector<shared_ptr<Item>>::iterator i = items.begin(); i != items.end(); i++) {
      cout << *(*i) << endl;
    }
    cout << endl;

    Tavern.updateQuality();
  }
}
void initItems(vector<shared_ptr<Item>> &items, const GildedRose &Tavern) {
  items.push_back(Tavern.createItem("+5 Dexterity Vest", 10, 20));
  items.push_back(Tavern.createItem("Aged Brie", 2, 0));
  items.push_back(Tavern.createItem("Elixir of the Mongoose", 5, 7));
  items.push_back(Tavern.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  items.push_back(Tavern.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  items.push_back(Tavern.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
  items.push_back(Tavern.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
  items.push_back(Tavern.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));
  // this Conjured item doesn't yet work properly
  items.push_back(Tavern.createItem("Conjured Mana Cake", 3, 6));
}
