#ifndef TFT_DISPLAY_H
#define TFT_DISPLAY_H

#include <TFT_eSPI.h>

class TFTDisplay {
 public:
  TFT_eSPI tft = TFT_eSPI();

  void setup();
  void show_wifi_info(const char* ip_address, const char* mac_address);
};

#endif
