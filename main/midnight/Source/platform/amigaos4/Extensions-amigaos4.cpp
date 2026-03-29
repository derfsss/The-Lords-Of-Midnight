#include "Extensions-amigaos4.h"

USING_NS_AX;

namespace chilli
{
    namespace extensions
    {
        void getDesktopSize(int& width, int& height)
        {
            // Default to 1024x768; on real hardware, query Intuition screen
            width  = 1024;
            height = 768;
        }

        std::string getVersion()
        {
            return "1.0";
        }

        std::string getBuildNo()
        {
            return "1";
        }
    }
}
