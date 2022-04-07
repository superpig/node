#include "mgc_oom_observer.h"

namespace mgcoom {
    
mgcoomobserver* nodemgc = nullptr;

void addOOMObserver(mgcoomobserver* mgc) {
    nodemgc = mgc;
}

bool mgcNotifyOOM(int type) {
  if (nodemgc != nullptr) {
    nodemgc->notifyOOM(type);
    nodemgc = nullptr;
    return true;
  }
  return false;
}
}