#ifndef MGC_OOM_OBSERVER_H
#define MGC_OOM_OBSERVER_H

namespace mgcoom {
  class mgcoomobserver {
    public:
    virtual void notifyOOM(int type);
  };

  void addOOMObserver(mgcoomobserver* mgc);
  bool mgcNotifyOOM(int type);
}

#endif //MGC_OOM_OBSERVER_H