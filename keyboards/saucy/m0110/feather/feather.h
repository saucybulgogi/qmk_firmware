#ifndef FEATHER_H
#define FEATHER_H

#include "m0110.h"

#define KEYMAP( \
   k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, k013, \
   k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113, \
   k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k211, k212, \
   k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311, \
   k40, k41, k42, k43, k44, k45, k46 \
) \
{ \
    { k08,   k07,   k06,   k09, k010,   k011,  k012, k013,   KC_NO, KC_NO, k02, k01, k00, k03,   k04,   k05 }, \
    { k18,   k17,   k16,   k19, k110,   k111,  k112, k113,   KC_NO, KC_NO, k12, k11, k10, k13,   k14,   k15 }, \
    { k28,   k27,   k26,   k29, k210,   k211,  k212, KC_NO,  KC_NO, KC_NO, k22, k21, k20, k23,   k24,   k25 }, \
    { k38,   k37,   k36,   k39, k310,   KC_NO, k311, KC_NO,  KC_NO, KC_NO, k32, k31, k30, k33,   k34,   k35 }, \
    { KC_NO, KC_NO, KC_NO, k44, k45,    KC_NO, k46, KC_NO,  KC_NO, KC_NO, k42, k41, k40, KC_NO, KC_NO, k43 } \
}

#endif
