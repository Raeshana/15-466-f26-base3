#include <array>
#include <string>

class BeatSequence {
    public:
    std::array<unsigned int, 5> sequence;
    std::array<string, 5> sequenceSound; 
    std::string sequenceString = "";
    int idx;

    void initializeIdx() {
        idx = 0;
    }

    bool iterateIdx(unsigned int key, unsigned int sequenceKey) {
        if (key == sequenceKey) {
            idx++;
            return true;
        }
        else {
            idx = 0;
            return false;
        }
    }
};