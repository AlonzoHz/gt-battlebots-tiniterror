#include <Particle.h>

LEDStatus blinkRed(RGB_COLOR_RED, LED_PATTERN_BLINK);

void setup() {

}

void loop() {
	blinkRed.setActive(true);
	delay(3000);
	blinkRed.setActive(false);
	delay(3000);
}
