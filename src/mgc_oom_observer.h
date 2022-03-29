#ifndef MGC_OOM_OBSERVER_H
#define MGC_OOM_OBSERVER_H

namespace mgcoom {
  class mgcoomobserver {
    public:
    virtual void notifyOOM();
  };

  void addOOMObserver(mgcoomobserver* mgc);
  bool mgcNotifyOOM();
}

#endif //MGC_OOM_OBSERVER_H