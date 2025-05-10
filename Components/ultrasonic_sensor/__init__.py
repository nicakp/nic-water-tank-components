from esphome.components import uart
from esphome.const import CONF_ID

CODEOWNERS = ["@nicakp"]

uart.UARTDevice.register_component("ultrasonic_sensor", CONF_ID)
