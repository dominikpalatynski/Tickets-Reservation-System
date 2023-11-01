#include <set>
#include <vector>

struct channel5v
{
    int freq_range;
    int maxEirp;
    // Inne pola
};

// Niemutowalna funkcja porównująca
struct CompareChannels
{
    bool operator()(const channel5v &lhs, const channel5v &rhs) const
    {
        return lhs.freq_range == rhs.freq_range;
    }
};

std::vector<channel5v> mergeChannels(const std::vector<std::vector<channel5v>> &inputVectors)
{
    std::set<channel5v, CompareChannels> uniqueChannels;

    for (const std::vector<channel5v> &inputVector : inputVectors)
    {
        for (const channel5v &channel : inputVector)
        {
            uniqueChannels.insert(channel);
        }
    }

    std::vector<channel5v> result(uniqueChannels.begin(), uniqueChannels.end());

    return result;
}