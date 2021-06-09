#include "units.h"

#include "libbflc/back/x86_64.h"
#include "libbflc/front/brainfuck.h"
#include "libbflc/front/fuckbees.h"

const backend_t backends[] = {
    {"x86_64", emit_asm_x86_64, emit_mach_x86_64}
};

const frontend_t frontends[] = {
    {"brainfuck", scan_brainfuck},
    {"fuckbees", scan_fuckbees}
};
