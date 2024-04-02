
#include <M5UnitGLASS2.h>
#include <M5Unified.h>
#include <Avatar.h>

using namespace m5avatar;
Avatar avatar;

void setup(void) {
    auto cfg = M5.config();
    cfg.unit_glass2.pin_sda=1;
	cfg.unit_glass2.pin_scl=2;
    cfg.unit_glass2.i2c_freq = 400000;
    M5.begin(cfg);
	M5.setPrimaryDisplayType({m5::board_t::board_M5UnitGLASS2});
    M5.Display.setBrightness(255);
    avatar.setScale(0.3);
    avatar.setPosition(-76, -96);
    avatar.init();
}

void loop(void) {
   delay(100);
}
