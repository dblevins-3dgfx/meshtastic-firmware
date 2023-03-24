#pragma once
#include "SinglePortModule.h"

/**
 * A simple example module that just replies with "Message received" to any message it receives.
 */
class BlevinsModule : public SinglePortModule
{
  public:
    /** Constructor
     * name is for debugging output
     */
    BlevinsModule() : SinglePortModule("blevins", meshtastic_PortNum_PRIVATE_APP) {}
};
