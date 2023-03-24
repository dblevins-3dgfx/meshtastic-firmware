#pragma once
#include "SinglePortModule.h"

/**
 *
 */
class BlevinsModule : public SinglePortModule
{
  public:
    /** Constructor
     */
    BlevinsModule() : SinglePortModule("blevins", meshtastic_PortNum_PRIVATE_APP) {}
};
