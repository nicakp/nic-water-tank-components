from esphome.components import tft_display
from esphome.const import CONF_ID

CODEOWNERS = ["@nicakp"]

uart.UARTDevice.register_component("ultrasonic_sensor", CONF_ID)
