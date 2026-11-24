/* The executable entry tying the synthetic programs together (host builds). */
#include "common.h"

int control_main(int argc);
int structs_main(int argc);
int types_main(int argc);
int calls_main(int argc);

int main(int argc, char **argv) {
    (void)argv;
    return (control_main(argc) + structs_main(argc) + types_main(argc) + calls_main(argc)) & 0x7f;
}
