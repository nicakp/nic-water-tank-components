#include "tft_display.h"

void TFTDisplay::setup() {
  tft.init();
  tft.setRotation(1);  // Adjust rotation as needed
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setTextSize(2);
  tft.setCursor(10, 10);
  tft.print("Initializing...");
}

void TFTDisplay::show_wifi_info(const char* ip_address, const char* mac_address) {
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(10, 10);
  tft.print("Wi-Fi Connected!");
  tft.setCursor(10, 30);
  tft.print("IP: ");
  tft.print(ip_address);
  tft.setCursor(10, 50);
  tft.print("MAC: ");
  tft.print(mac_address);
}
