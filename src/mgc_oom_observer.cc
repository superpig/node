#include "mgc_oom_observer.h"

namespace mgcoom {
    
mgcoomobserver* nodemgc = nullptr;

void addOOMObserver(mgcoomobserver* mgc) {
    nodemgc = mgc;
}

bool mgcNotifyOOM() {
  if (nodemgc != nullptr) {
    nodemgc->notifyOOM();
    nodemgc = nullptr;
    return true;
  }
  return false;
}
}