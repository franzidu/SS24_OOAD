#include "Item.h"
#include "ItemCreator.h"
#include <memory>
#include <string>
#include <vector>

using namespace std;

class GildedRose {
public:
  vector<shared_ptr<Item>> &items;
  GildedRose(vector<shared_ptr<Item>> &items, ItemCreator* itemCreator);
  shared_ptr<Item> createItem(string, int, int) const;
  virtual ~GildedRose();
  void updateQuality();
private:
  ItemCreator* itemCreator;

};
