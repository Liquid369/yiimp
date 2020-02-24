#include "yespower-1.0.1/yespower-opt.c"
#include "yespower-1.0.1/yespower.h"

static const yespower_params_t yespower_1_0_SUGAR = {
	.version = YESPOWER_1_0,
	.N = 2048,
	.r = 32,
	.pers = "Satoshi Nakamoto 31/Oct/2008 Proof-of-work is essentially one-CPU-one-vote",
	.perslen = 74
};

void yespowerSUGAR_hash(const char *input, char *output, uint32_t len) {
	yespower_tls(input, len, &yespower_1_0_SUGAR, output );
}
