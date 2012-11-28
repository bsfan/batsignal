// batsignal.h
//
// Here's the definition of the various batsignal patterns.
// And the colors they're built from.
//
#define MAX_BATNUM 7

// IN GRB format, because.
//
#define BLACK 0x80, 0x80, 0x80
#define RED 0x80, 0xff, 0x80
#define GREEN 0xff, 0x80, 0x80
#define BLUE 0x80, 0x80, 0xff
#define WHITE 0xff, 0xff, 0xff
#define YELLOW 0xff, 0xff, 0x80

uint8_t batsignal_off[4][3] = {
	BLACK, BLACK, BLACK, BLACK 
};

uint8_t batsignal_fail[4][3] = {
	RED, RED, RED, RED 
};

uint8_t batsignal_ok[4][3] = {
	GREEN, GREEN, GREEN, GREEN
};

uint8_t batsignal_swans[4][3] = {
	RED, WHITE, RED, WHITE 
};

uint8_t batsignal_bulldogs[4][3] = {
	WHITE, BLUE, WHITE, BLUE 
};

uint8_t batsignal_oioioi[4][3] = {
	GREEN, YELLOW, GREEN, YELLOW 
};

uint8_t batsignal_china[4][3] = {
	RED, YELLOW, RED, YELLOW
};

static uint8_t *batsignals[MAX_BATNUM] = {
	(uint8_t*) &batsignal_off,
	(uint8_t*) &batsignal_fail,
	(uint8_t*) &batsignal_ok,
	(uint8_t*) &batsignal_swans,
	(uint8_t*) &batsignal_bulldogs,	
	(uint8_t*) &batsignal_oioioi,
	(uint8_t*) &batsignal_china,
};