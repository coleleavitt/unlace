/* Print one test vector per (format, slot, opcode) of a Cadence Xtensa core: the bundle with
   that opcode in that slot, the slot nop in every other slot and small operand values (shifted
   by argv[1]). Build like tools/xtensa_hifi_probe.c; the vectors are disassembled by the same
   binutils' objdump and by unlace to check tools/gen_xtensa_hifi.py's output.  */
#include "config.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bfd.h"
#include "xtensa-isa.h"
int main(int argc, char **argv){
  xtensa_isa isa = xtensa_isa_init(0,0);
  int nf = xtensa_isa_num_formats(isa), no = xtensa_isa_num_opcodes(isa), nw = xtensa_insnbuf_size(isa);
  xtensa_insnbuf insn = xtensa_insnbuf_alloc(isa), sb = xtensa_insnbuf_alloc(isa);
  unsigned char bytes[64];
  int variant = argc > 1 ? atoi(argv[1]) : 0;
  for (int f=0; f<nf; f++){
    int ns = xtensa_format_num_slots(isa,f), len = xtensa_format_length(isa,f);
    for (int s=0; s<ns; s++){
      for (int o=0; o<no; o++){
        memset(sb,0,nw*4);
        if (xtensa_opcode_encode(isa,f,s,sb,o)!=0) continue;
        memset(insn,0,nw*4); xtensa_format_encode(isa,f,insn);
        for (int t=0;t<ns;t++){ if (t==s) continue; xtensa_insnbuf nb = xtensa_insnbuf_alloc(isa); memset(nb,0,nw*4);
          const char *nopn = xtensa_format_slot_nop_opcode(isa,f,t) >= 0 ? xtensa_opcode_name(isa, xtensa_format_slot_nop_opcode(isa,f,t)) : 0;
          int nop = xtensa_format_slot_nop_opcode(isa,f,t);
          if (nop >= 0) xtensa_opcode_encode(isa,f,t,nb,nop);
          xtensa_format_set_slot(isa,f,t,insn,nb); free(nb); }
        int np = xtensa_opcode_num_operands(isa,o); int ok = 1;
        for (int p=0;p<np;p++){
          uint32_t fv;
          if (xtensa_operand_is_register(isa,o,p)==1){ int n = xtensa_regfile_num_entries(isa, xtensa_operand_regfile(isa,o,p)); int nr = xtensa_operand_num_regs(isa,o,p); fv = (uint32_t)((p*5 + 3 + variant*7) % (n - nr + 1 > 0 ? n - nr + 1 : 1)); }
          else { fv = (uint32_t)(p + 1 + variant*3); }
          if (xtensa_operand_is_visible(isa,o,p)==0) continue;
          uint32_t v = fv;
          if (xtensa_operand_is_register(isa,o,p)!=1) { int32_t want = (int32_t)fv; uint32_t enc = want; 
             // try values until encodable
             int found=0; for (int tries=0; tries<64 && !found; tries++){ uint32_t c = enc; if (xtensa_operand_encode(isa,o,p,&c)==0){ v=c; found=1; break; } enc++; }
             if (!found) { v = 0; }
          } else { uint32_t c = v; if (xtensa_operand_encode(isa,o,p,&c)==0) v = c; }
          if (xtensa_operand_set_field(isa,o,p,f,s,sb,v)!=0) ok = 0;
        }
        if (!ok) continue;
        xtensa_format_set_slot(isa,f,s,insn,sb);
        xtensa_insnbuf_to_chars(isa,insn,bytes,len);
        printf("%s %d %s ", xtensa_format_name(isa,f), s, xtensa_opcode_name(isa,o));
        for (int i=0;i<len;i++) printf("%02x", bytes[i]);
        printf("\n");
      }
    }
  }
  return 0;
}