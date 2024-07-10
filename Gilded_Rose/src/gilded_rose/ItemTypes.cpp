#include "ItemTypes.h"
void ExpiringItem::updateQuality() {
  if (daysTillExpiration > 0) {
    increaseQuality();
    if (daysTillExpiration <= qualityDoubling) {
      increaseQuality();
    }
    if (daysTillExpiration <= qualityTripling) {
      increaseQuality();
    }
  } else {
    quality = minQuality;
  }
  if (quality > maxQuality) {
    quality = maxQuality;
  }
  decreaseExpirationDate();
}
void NormalItem::updateQuality() {
  decreaseQuality();
  if (daysTillExpiration <= 0) {
    decreaseQuality();
  }
  if (quality < minQuality) {
    quality = minQuality;
  }
  decreaseExpirationDate();
}
void MaturingItem::updateQuality() {
  increaseQuality();
  if (daysTillExpiration <= 0) {
    increaseQuality();
  }
  if (quality > maxQuality) {
    quality = maxQuality;
  }
  decreaseExpirationDate();
}
void ConjuredItem::updateQuality() {
  decreaseQuality();
  decreaseQuality();
  if (daysTillExpiration <= 0) {
    decreaseQuality();
    decreaseQuality();
  }
  if (quality < minQuality) {
    quality = minQuality;
  }
  decreaseExpirationDate();

}
void LegendaryItem::updateQuality() {}
