#define CATCH_CONFIG_RUNNER
#include "catch_wrap.hpp"

#include <clocale>

int main(int argc, char* argv[])
{
#if defined _WIN32
    std::setlocale(LC_ALL, ""); // set default code page
#endif

    return Catch::Session().run(argc, argv);
}
