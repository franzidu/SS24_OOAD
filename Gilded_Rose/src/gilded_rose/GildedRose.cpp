#include "GildedRose.h"

#include <utility>
#include "ItemTypes.h"
#include "ConcreteItemCreator.h"

GildedRose::GildedRose(vector<shared_ptr<Item>> &items, ItemCreator* itemCreator)
    : items(items), itemCreator(itemCreator) {}

GildedRose::~GildedRose() {
  for (auto &item : items) {
    item.reset();
  }
}

std::shared_ptr<Item> GildedRose::createItem(string name, int daysTillExpiration, int quality) const {

  return itemCreator->createItem(std::move(name), daysTillExpiration, quality);

}

// The name updateQuality should not be replaced, because the method is not only used in the main.cpp, but also in all
// tests. Replacing the name would be more time-consuming and is not part of refactoring.
void GildedRose::updateQuality() {

  for(const auto& item : items) {
    item->updateQuality();
  }
}



