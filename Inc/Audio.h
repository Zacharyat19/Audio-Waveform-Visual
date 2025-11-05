#include <cstdint>
#include <vector>
#include <string>
#include <fstream>

struct WavHeader {
    char     riff[4];
    uint32_t chunkSize;
    char     wave[4];
    char     fmt[4];
    uint32_t fmtSize;
    uint16_t audioFormat;
    uint16_t numChannels;
    uint32_t sampleRate;
    uint32_t byteRate;
    uint16_t blockAlign;
    uint16_t bitsPerSample;
    char     data[4];
    uint32_t dataSize;
};

class Audio
{
    public:
        Audio();
        ~Audio();
        std::vector<int16_t> readWav(const std::string& filename, WavHeader& header);
};