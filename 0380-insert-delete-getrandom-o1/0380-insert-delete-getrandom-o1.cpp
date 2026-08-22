#include <vector>
#include <unordered_map>
#include <random>

class RandomizedSet {
private:
    std::vector<int> nums;
    std::unordered_map<int, int> valToIndex;
    std::mt19937 rng{std::random_device{}()};

public:
    RandomizedSet() {}

    bool insert(int val) {
        if (valToIndex.count(val)) return false;
        nums.push_back(val);
        valToIndex[val] = nums.size() - 1;
        return true;
    }

    bool remove(int val) {
        if (!valToIndex.count(val)) return false;
        
        int lastElement = nums.back();
        int idxToRemove = valToIndex[val];
        
        nums[idxToRemove] = lastElement;
        
        valToIndex[lastElement] = idxToRemove;
        
        nums.pop_back();
        valToIndex.erase(val);
        
        return true;
    }

    int getRandom() {
        std::uniform_int_distribution<size_t> dist(0, nums.size() - 1);
        return nums[dist(rng)];
    }
};