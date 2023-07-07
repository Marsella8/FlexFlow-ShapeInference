#ifndef _FLEXFLOW_RUNTIME_SRC_TASK_SPEC_SLOT_ID_H
#define _FLEXFLOW_RUNTIME_SRC_TASK_SPEC_SLOT_ID_H

#include "utils/strong_typedef.h"

namespace FlexFlow {

struct slot_id : strong_typedef<slot_id, int> {
  using strong_typedef::strong_typedef;

  slot_id(int);
};

}

MAKE_TYPEDEF_HASHABLE(::FlexFlow::slot_id);
MAKE_TYPEDEF_PRINTABLE(::FlexFlow::slot_id, "slot_id");

#endif
