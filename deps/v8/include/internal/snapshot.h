// fake code only for compile

#ifndef V8_SNAPSHOT_SNAPSHOT_H_
#define V8_SNAPSHOT_SNAPSHOT_H_

#include "../v8.h"

namespace v8 {
namespace internal {

class AllStatic {
};

class Snapshot : public AllStatic {
public:
    V8_EXPORT static bool VerifyChecksum(const v8::StartupData* data);
};

}  // namespace internal
}  // namespace v8

#endif  // V8_SNAPSHOT_SNAPSHOT_H_
