#ifndef _APPLICATION_H
#define _APPLICATION_H

#ifndef VERSION
#define VERSION "vdev"
#endif

#ifndef LED_STRIP_COUNT
#define LED_STRIP_COUNT 144
#endif

#ifndef LED_STRIP_TYPE
#define LED_STRIP_TYPE 4
#endif

#include <bcl.h>

typedef struct
{
    uint8_t channel;
    float value;
    bc_tick_t next_pub;

} event_param_t;

#endif // _APPLICATION_H
