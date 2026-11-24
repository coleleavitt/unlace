/* Switch-driven lexer state machine over a fixed input. */
#include "corpus.h"

enum token_kind { TK_NUM, TK_IDENT, TK_OP, TK_STRING, TK_ERROR, TK_COUNT };

enum lex_state { ST_START, ST_NUM, ST_IDENT, ST_STRING, ST_ESCAPE, ST_DONE };

int classify(char c) {
    switch (c) {
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
        return 1;
    case '+': case '-': case '*': case '/': case '=': case '<': case '>':
        return 2;
    case '"':
        return 3;
    case ' ': case '\t': case '\n':
        return 4;
    default:
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '_')
            return 0;
        return 5;
    }
}

int lex(const char *s, int counts[TK_COUNT]) {
    enum lex_state st = ST_START;
    int tokens = 0;
    for (int i = 0; i < TK_COUNT; i++)
        counts[i] = 0;
    for (;; s++) {
        char c = *s;
        int cls = c ? classify(c) : -1;
        switch (st) {
        case ST_START:
            if (!c) {
                st = ST_DONE;
            } else if (cls == 1) {
                st = ST_NUM;
            } else if (cls == 0) {
                st = ST_IDENT;
            } else if (cls == 3) {
                st = ST_STRING;
            } else if (cls == 2) {
                counts[TK_OP]++;
                tokens++;
            } else if (cls == 5) {
                counts[TK_ERROR]++;
                tokens++;
            }
            break;
        case ST_NUM:
            if (cls != 1) {
                counts[TK_NUM]++;
                tokens++;
                st = ST_START;
                s--;
            }
            break;
        case ST_IDENT:
            if (cls != 0 && cls != 1) {
                counts[TK_IDENT]++;
                tokens++;
                st = ST_START;
                s--;
            }
            break;
        case ST_STRING:
            if (!c) {
                counts[TK_ERROR]++;
                tokens++;
                st = ST_DONE;
            } else if (c == '\\') {
                st = ST_ESCAPE;
            } else if (cls == 3) {
                counts[TK_STRING]++;
                tokens++;
                st = ST_START;
            }
            break;
        case ST_ESCAPE:
            st = c ? ST_STRING : ST_DONE;
            break;
        case ST_DONE:
            break;
        }
        if (st == ST_DONE)
            break;
    }
    return tokens;
}

const char *kind_name(int kind) {
    switch (kind) {
    case TK_NUM: return "num";
    case TK_IDENT: return "ident";
    case TK_OP: return "op";
    case TK_STRING: return "string";
    default: return "error";
    }
}

int main(void) {
    int counts[TK_COUNT];
    int n = lex("let x1 = 42 + y * \"a\\\"b\" - 7 # z", counts);
    printf("tokens=%d\n", n);
    for (int k = 0; k < TK_COUNT; k++)
        printf("%s=%d\n", kind_name(k), counts[k]);
    return n;
}
