//
// Created by Ralf on 06.10.2022.
//


#ifndef GILDEDROSE_ITEMTYPES_H
#define GILDEDROSE_ITEMTYPES_H

#include <string>
#include <vector>
using namespace std;

#include "Item.h"


class LegendaryItem : public Item {
public:
  LegendaryItem(string name, int daysTillExpiration, int quality) : Item(name, daysTillExpiration, quality){};
  void updateQuality() override;
};

class ConjuredItem : public Item {
public:
  ConjuredItem(string name, int daysTillExpiration, int quality) : Item(name, daysTillExpiration, quality){};
  void updateQuality() override;
};

class MaturingItem : public Item {
public:
  MaturingItem(string name, int daysTillExpiration, int quality) : Item(name, daysTillExpiration, quality){};
  void updateQuality() override;
};


class ExpiringItem : public Item {
public:
  ExpiringItem(string name, int daysTillExpiration, int quality) : Item(name, daysTillExpiration, quality){};
  void updateQuality() override;
};
class NormalItem : public Item {
public:
  NormalItem(string name, int daysTillExpiration, int quality) : Item(name, daysTillExpiration, quality){};
  void updateQuality() override;
};

#endif // GILDEDROSE_ITEMTYPES_H
