#include <array>
#include <string>

class BeatSequence {
    public:
    std::array<unsigned int, 5> sequence;
    std::string sequenceString = "";
    int idx = 0;

    bool iterateIdx() {
        idx++;
        if (idx >= 5) return true;
        return false;
    }

    void restartIdx() {
        idx = 0;
    }
};