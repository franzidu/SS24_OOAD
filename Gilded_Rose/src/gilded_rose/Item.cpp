//
// Created by Ralf on 06.10.2022.
//

#include "Item.h"
#include "ItemTypes.h"

ostream &operator<<(ostream &s, const Item &item) {
  s << item.name << ", " << item.daysTillExpiration << ", " << item.quality;
  return s;
}

bool operator==(const Item &item1, const Item &item2) {
  return item1.name == item2.name && item1.daysTillExpiration == item2.daysTillExpiration && item1.quality == item2.quality;
}


void Item::increaseQuality() {
  quality++;
}
void Item::decreaseQuality() {
  quality--;
}
void Item::decreaseExpirationDate() {
  daysTillExpiration--;
}
