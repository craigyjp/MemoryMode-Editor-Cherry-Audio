#include "usb_names.h"

#define MIDI_NAME   {'M','E','M','O','R','Y',' ','M','O','D','E'}
#define MIDI_NAME_LEN  11

#define MANUFACTURER_NAME  {'C','r','a','i','g',' ','B','a','r','n','e','s'}
#define MANUFACTURER_NAME_LEN 12

struct usb_string_descriptor_struct usb_string_product_name = {
  2 + MIDI_NAME_LEN * 2,
  3,
  MIDI_NAME
};

struct usb_string_descriptor_struct usb_string_manufacturer_name = {
  2 + MANUFACTURER_NAME_LEN * 2,
  3,
  MANUFACTURER_NAME
};
