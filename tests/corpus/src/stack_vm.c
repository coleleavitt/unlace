/* Bytecode interpreter with a dense opcode switch. */
#include "corpus.h"

enum op { OP_PUSH, OP_ADD, OP_SUB, OP_MUL, OP_DIV, OP_DUP, OP_SWAP, OP_JZ, OP_JMP, OP_DEC, OP_PRINT, OP_ROT, OP_DROP, OP_HALT };

struct vm {
    long stack[32];
    int sp;
    int pc;
    long printed;
};

void vm_push(struct vm *m, long v) {
    if (m->sp < 32)
        m->stack[m->sp++] = v;
}

long vm_pop(struct vm *m) {
    return m->sp > 0 ? m->stack[--m->sp] : 0;
}

int vm_run(struct vm *m, const int *code, int len, int max_steps) {
    int steps = 0;
    while (m->pc < len && steps++ < max_steps) {
        int op = code[m->pc++];
        long a, b;
        switch (op) {
        case OP_PUSH:
            vm_push(m, code[m->pc++]);
            break;
        case OP_ADD:
            b = vm_pop(m);
            a = vm_pop(m);
            vm_push(m, a + b);
            break;
        case OP_SUB:
            b = vm_pop(m);
            a = vm_pop(m);
            vm_push(m, a - b);
            break;
        case OP_MUL:
            b = vm_pop(m);
            a = vm_pop(m);
            vm_push(m, a * b);
            break;
        case OP_DIV:
            b = vm_pop(m);
            a = vm_pop(m);
            vm_push(m, b ? a / b : 0);
            break;
        case OP_DUP:
            a = vm_pop(m);
            vm_push(m, a);
            vm_push(m, a);
            break;
        case OP_SWAP:
            b = vm_pop(m);
            a = vm_pop(m);
            vm_push(m, b);
            vm_push(m, a);
            break;
        case OP_JZ:
            a = vm_pop(m);
            if (a == 0)
                m->pc = code[m->pc];
            else
                m->pc++;
            break;
        case OP_JMP:
            m->pc = code[m->pc];
            break;
        case OP_DEC:
            a = vm_pop(m);
            vm_push(m, a - 1);
            break;
        case OP_PRINT:
            a = vm_pop(m);
            m->printed = m->printed * 31 + a;
            vm_push(m, a);
            break;
        case OP_ROT: {
            long c = vm_pop(m);
            b = vm_pop(m);
            a = vm_pop(m);
            vm_push(m, b);
            vm_push(m, c);
            vm_push(m, a);
            break;
        }
        case OP_DROP:
            vm_pop(m);
            break;
        case OP_HALT:
            return steps;
        default:
            return -1;
        }
    }
    return steps;
}

int main(void) {
    /* acc = 1; n = 10; while (n) { acc *= n; n--; } */
    const int program[] = {
        OP_PUSH, 1, OP_PUSH, 10,
        OP_DUP, OP_JZ, 15,
        OP_PRINT, OP_DUP, OP_ROT, OP_MUL, OP_SWAP, OP_DEC,
        OP_JMP, 4,
        OP_DROP, OP_HALT,
    };
    struct vm m = {{0}, 0, 0, 0};
    int steps = vm_run(&m, program, (int)(sizeof program / sizeof program[0]), 1000);
    printf("steps=%d sp=%d top=%ld printed=%ld\n", steps, m.sp, m.sp ? m.stack[m.sp - 1] : 0, m.printed);
    struct vm m2 = {{0}, 0, 0, 0};
    const int arith[] = {OP_PUSH, 7, OP_PUSH, 6, OP_MUL, OP_PUSH, 4, OP_SUB, OP_PUSH, 2, OP_DIV, OP_HALT};
    vm_run(&m2, arith, 12, 100);
    printf("arith=%ld\n", vm_pop(&m2));
    return steps;
}
