#include <Arduino.h>
#include <TriangleWatchy.h>

#include "settings.h"

TriangleWatchy watchy(settings);

void setup() {
  watchy.init();
}

void loop() {
  // put your main code here, to run repeatedly:
}