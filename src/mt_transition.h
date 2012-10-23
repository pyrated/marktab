#ifndef MT_TRANSITION_H
#define MT_TRANSITION_H

#include "mt_type.h"

typedef enum MtTransitionType
{
  MT_TRANSITION_NONE,
  MT_TRANSITION_BEND,
  MT_TRANSITION_SLIDE_UP,
  MT_TRANSITION_SLIDE_DOWN,
  MT_TRANSITION_HAMMER_ON,
  MT_TRANSITION_PULL_OFF
} MtTransitionType;

typedef struct MtTransition
{
  MtTransitionType type;
  int strings[MAX_STRINGS];
} MtTransition;

MtTransition* mt_transition_new(MtTransitionType type, int strings[]);

#endif
