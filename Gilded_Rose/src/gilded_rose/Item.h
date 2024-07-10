//
// Created by Ralf on 06.10.2022.
//

// Probably Item should have some methods, too.
// But be aware! Did you read the requirements?
// So do not touch this!

#ifndef ITEM_H
#define ITEM_H

#include <ostream>
#include <string>
#include <vector>

using namespace std;

class Item {
protected:
  const int maxQuality = 50;
  const int minQuality = 0;
  const int qualityDoubling = 10;
  const int qualityTripling = 5;

  void increaseQuality();
  void decreaseQuality();
  void decreaseExpirationDate();


public:
  string name;
  int daysTillExpiration;
  int quality;
  virtual void updateQuality() = 0;
  Item(std::string name, int sellIn, int quality)
      : name(name)
      , daysTillExpiration(sellIn)
      , quality(quality){};
  friend ostream &operator<<(ostream &os, const Item &item);
  friend bool operator==(const Item &item1, const Item &item2);

protected:
};

#endif // ITEM_H
