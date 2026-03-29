#include "../Source/AppDelegate.h"
#include "axmol.h"

static const char *verstag __attribute__((used)) =
    "\0$VER: LordsOfMidnight 1.0 (" __DATE__ ")";

USING_NS_AX;

int main(int argc, char *argv[])
{
    AppDelegate app;
    return Application::getInstance()->run();
}
