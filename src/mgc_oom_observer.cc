#include "mgc_oom_observer.h"

namespace mgcoom {
    
mgcoomobserver* nodemgc = nullptr;

void addOOMObserver(mgcoomobserver* mgc) {
    nodemgc = mgc;
}

void mgcNotifyOOM() {
  if (nodemgc != nullptr) {
    nodemgc->notifyOOM();
  }
}
}