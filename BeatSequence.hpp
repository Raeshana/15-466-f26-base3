#include <array>
#include <string>

class BeatSequence {
    public:
    std::array<unsigned int, 5> sequence;
    std::string sequenceString = "";
    int idx = 0;

    bool iterateIdx(unsigned int key, unsigned int sequenceKey) {
        if (key == sequenceKey) {
            idx++;
            return true;
        }
        else {
            return restartIdx();
        }
    }

    bool restartIdx() {
        idx = 0;
        return false;
    }
};