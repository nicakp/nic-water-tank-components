#include "esphome.h"

class UltrasonicSensor : public Component, public UARTDevice {
public:
  UltrasonicSensor(UARTComponent *parent) : UARTDevice(parent) {}

  void loop() override {
    while (available()) {
      uint8_t data[4];
      if (read_array(data, 4) && data[0] == 0xFF && data[3] == (data[0] + data[1] + data[2]) % 256) {
        int raw_distance_mm = (data[1] << 8) | data[2];
        int water_level_mm = 300 - raw_distance_mm;
        float current_level_0_1 = (float)std::max(0, std::min(water_level_mm, 250)) / 250.0;
        id(water_level).publish_state(current_level_0_1);
        id(raw_distance).publish_state(raw_distance_mm);
      }
    }
  }
};
