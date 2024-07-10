//
// Created by nils on 08.07.24.
//

#include "ItemTypes.h"
#include "ConcreteItemCreator.h"

#include <memory>

std::shared_ptr<Item> ConcreteItemCreator::createItem(const string name, int daysTillExpiration, int quality) const {

  if (name == "Backstage passes to a TAFKAL80ETC concert") {
    return make_shared<ExpiringItem>(name, daysTillExpiration, quality);
  }
  else if (name == "Sulfuras, Hand of Ragnaros") {
    return make_shared<LegendaryItem>(name, daysTillExpiration, quality);
  }
  else if (name == "Aged Brie") {
    return make_shared<MaturingItem>(name, daysTillExpiration, quality);
  }
  else if (name == "Conjured Mana Cake") {
    return make_shared<ConjuredItem>(name, daysTillExpiration, quality);
  }
  else {
    return make_shared<NormalItem>(name, daysTillExpiration, quality);
  }
}
