#ifndef PLANCK_UNIT_TEST_IINQ_H
#define PLANCK_UNIT_TEST_IINQ_H

#if defined(__cplusplus)
extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "../../planckunit/src/planck_unit.h"
#include "../../../iinq/iinq.h"

#if defined(ARDUINO)
#include "../../../file/kv_stdio_intercept.h"
#include "../../../file/SD_stdio_c_iface.h"
#endif

void
run_all_tests_iinq(
);

#if defined(__cplusplus)
}
#endif

#endif /* PLANCK_UNIT_TEST_IINQ_H */
