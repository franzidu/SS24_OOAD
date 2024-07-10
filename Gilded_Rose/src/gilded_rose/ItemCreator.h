//
// Created by nils on 08.07.24.
//

#ifndef GILDEDROSE_ITEMCREATOR_H
#define GILDEDROSE_ITEMCREATOR_H

#include "Item.h"
#include <memory>
#include <string>
class ItemCreator {
public:
  [[nodiscard]] virtual std::shared_ptr<Item> createItem(std::string name , int daysTillExpiration, int quality) const = 0;
};

#endif // GILDEDROSE_ITEMCREATOR_H
