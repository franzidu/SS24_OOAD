//
// Created by nils on 08.07.24.
//

#ifndef GILDEDROSE_CONCRETEITEMCREATOR_H
#define GILDEDROSE_CONCRETEITEMCREATOR_H

#include "Item.h"
#include <memory>
#include <string>
#include "ItemCreator.h"
class ConcreteItemCreator: public ItemCreator {
public:
  [[nodiscard]] std::shared_ptr<Item> createItem(const std::string name, int daysTillExpiration, int quality) const override;
};

#endif // GILDEDROSE_CONCRETEITEMCREATOR_H
