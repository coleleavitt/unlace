/* Dump a Cadence Xtensa core's ISA (formats, FLIX slots, opcodes, operand fields and their
   decoding) as JSON, through the xtensa-isa API of a binutils build configured with the core's
   overlay. Input of tools/gen_xtensa_hifi.py.

   Build against binutils 2.45 configured with --target=xtensa-elf after copying the overlay's
   bfd/xtensa-modules.c and include/xtensa-config.h into the source tree:
     cc -O1 -o probe tools/xtensa_hifi_probe.c -I<build>/bfd -I<src>/include -I<src>/bfd \
        <build>/bfd/.libs/libbfd.a <build>/libiberty/libiberty.a \
        <build>/libsframe/.libs/libsframe.a <build>/zlib/libz.a -lzstd
     ./probe > core.json  */
#include "config.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bfd.h"
#include "xtensa-isa.h"
static xtensa_isa isa;
static int bit(xtensa_insnbuf b, int i){ return (b[i/32]>>(i%32))&1; }
static void setbit(xtensa_insnbuf b, int i){ b[i/32] |= (1u<<(i%32)); }
int main(void){
  isa = xtensa_isa_init(0,0);
  int nf = xtensa_isa_num_formats(isa), no = xtensa_isa_num_opcodes(isa), nr = xtensa_isa_num_regfiles(isa);
  int nw = xtensa_insnbuf_size(isa);
  xtensa_insnbuf insn = xtensa_insnbuf_alloc(isa), sb = xtensa_insnbuf_alloc(isa), tmp = xtensa_insnbuf_alloc(isa);
  printf("{\"words\":%d,\"regfiles\":[", nw);
  for (int r=0;r<nr;r++){ printf("%s{\"name\":\"%s\",\"short\":\"%s\",\"bits\":%d,\"num\":%d,\"parent\":\"%s\"}", r?",":"", xtensa_regfile_name(isa,r), xtensa_regfile_shortname(isa,r), xtensa_regfile_num_bits(isa,r), xtensa_regfile_num_entries(isa,r), xtensa_regfile_name(isa, xtensa_regfile_view_parent(isa,r))); }
  printf("],\"states\":[");
  for (int s=0;s<xtensa_isa_num_states(isa);s++) printf("%s{\"name\":\"%s\",\"bits\":%d}", s?",":"", xtensa_state_name(isa,s), xtensa_state_num_bits(isa,s));
  printf("],\"formats\":[");
  for (int f=0;f<nf;f++){
    int len = xtensa_format_length(isa,f), ns = xtensa_format_num_slots(isa,f);
    memset(insn,0,nw*4); xtensa_format_encode(isa,f,insn);
    printf("%s{\"name\":\"%s\",\"len\":%d,\"enc\":[", f?",":"", xtensa_format_name(isa,f), len);
    int first=1; for(int i=0;i<len*8;i++) if(bit(insn,i)){ printf("%s%d", first?"":",", i); first=0; }
    printf("],\"slots\":[");
    for (int s=0;s<ns;s++){
      printf("%s{\"map\":[", s?",":"");
      int fs=1;
      for (int k=0;k<32*nw;k++){ memset(insn,0,nw*4); memset(sb,0,nw*4); setbit(sb,k); xtensa_format_set_slot(isa,f,s,insn,sb);
        int pos=-1; for(int i=0;i<len*8;i++) if(bit(insn,i)){ pos=i; break; }
        if (pos<0) break; printf("%s%d", fs?"":",", pos); fs=0; }
      printf("],\"ops\":[");
      int fo=1;
      for (int o=0;o<no;o++){
        memset(sb,0,nw*4);
        if (xtensa_opcode_encode(isa,f,s,sb,o)!=0) continue;
        // slot width
        int sw=0; for (int k=0;k<32*nw;k++){ memset(insn,0,nw*4); memset(tmp,0,nw*4); setbit(tmp,k); xtensa_format_set_slot(isa,f,s,insn,tmp); int any=0; for(int i=0;i<len*8;i++) if(bit(insn,i)) any=1; if(!any) break; sw=k+1; }
        printf("%s{\"name\":\"%s\",\"val\":[", fo?"":",", xtensa_opcode_name(isa,o)); fo=0;
        int fv=1; for(int k=0;k<sw;k++) if(bit(sb,k)){ printf("%s%d", fv?"":",", k); fv=0; }
        printf("],\"fixed\":[");
        int ff=1; for(int k=0;k<sw;k++){ memcpy(tmp,sb,nw*4); tmp[k/32]^=(1u<<(k%32)); if (xtensa_opcode_decode(isa,f,s,tmp)!=o){ printf("%s%d", ff?"":",", k); ff=0; } }
        printf("],\"branch\":%d,\"call\":%d,\"jump\":%d,\"loop\":%d,\"opnds\":[", xtensa_opcode_is_branch(isa,o), xtensa_opcode_is_call(isa,o), xtensa_opcode_is_jump(isa,o), xtensa_opcode_is_loop(isa,o));
        int nop = xtensa_opcode_num_operands(isa,o);
        for (int p=0;p<nop;p++){
          int reg = xtensa_operand_is_register(isa,o,p);
          printf("%s{\"name\":\"%s\",\"io\":\"%c\",\"reg\":%d,\"rf\":\"%s\",\"pcrel\":%d,\"visible\":%d,\"nregs\":%d,\"field\":[", p?",":"", xtensa_operand_name(isa,o,p), xtensa_operand_inout(isa,o,p), reg, reg==1? xtensa_regfile_name(isa, xtensa_operand_regfile(isa,o,p)) : "", xtensa_operand_is_PCrelative(isa,o,p), xtensa_operand_is_visible(isa,o,p), reg==1? xtensa_operand_num_regs(isa,o,p):0);
          int fb=1;
          for (int k=0;k<32;k++){ memset(tmp,0,nw*4); memcpy(tmp,sb,nw*4); uint32_t base=0; 
            // clear field first
            if (xtensa_operand_set_field(isa,o,p,f,s,tmp,0)!=0) break;
            xtensa_insnbuf t2 = xtensa_insnbuf_alloc(isa); memcpy(t2,tmp,nw*4);
            if (xtensa_operand_set_field(isa,o,p,f,s,t2,1u<<k)!=0){ free(t2); break; }
            uint32_t back=0; xtensa_operand_get_field(isa,o,p,f,s,t2,&back); if (back != (1u<<k)) { free(t2); break; }
            int pos=-1; for(int i=0;i<sw;i++) if(bit(t2,i)!=bit(tmp,i)){ pos=i; break; }
            free(t2); if(pos<0) break; printf("%s%d", fb?"":",", pos); fb=0; }
          printf("],\"dec\":[");
          // sample decode of field values 0..7 and a high value
          uint32_t samples[] = {0,1,2,3,4,5,7,8,15,16,31,63,127,255,0x7ff,0xfff,0xffff};
          int fd=1; for (int q=0;q<17;q++){ uint32_t v=samples[q]; if (xtensa_operand_decode(isa,o,p,&v)==0){ printf("%s[%u,%d]", fd?"":",", samples[q], (int)v); fd=0; } }
          printf("],\"all\":[");
          int fa=1; for (uint32_t q=0;q<64;q++){ uint32_t v=q; if (xtensa_operand_decode(isa,o,p,&v)==0){ printf("%s[%u,%d]", fa?"":",", q, (int)v); fa=0; } }
          printf("],\"top\":[");
          { int w2=0; for (int k=0;k<32;k++){ memset(tmp,0,nw*4); memcpy(tmp,sb,nw*4); xtensa_insnbuf t3 = xtensa_insnbuf_alloc(isa); memcpy(t3,tmp,nw*4); if (xtensa_operand_set_field(isa,o,p,f,s,t3,1u<<k)!=0){free(t3);break;} uint32_t bk=0; xtensa_operand_get_field(isa,o,p,f,s,t3,&bk); free(t3); if (bk!=(1u<<k)) break; w2=k+1; }
            if (w2>0 && w2<32){ uint32_t vals2[3] = {1u<<(w2-1), (1u<<w2)-1, (1u<<(w2-1))+1}; for (int q=0;q<3;q++){ uint32_t v=vals2[q]; if (xtensa_operand_decode(isa,o,p,&v)==0) printf("%s[%u,%d]", q?",":"", vals2[q], (int)v); else printf("%s[%u,null]", q?",":"", vals2[q]); } } }
          printf("],\"reloc\":[");
          if (xtensa_operand_is_PCrelative(isa,o,p)) { uint32_t pcs[] = {0x1000, 0x1001, 0x1002, 0x1003}; int fr=1; for (int q=0;q<4;q++){ uint32_t v=0; xtensa_operand_decode(isa,o,p,&v); uint32_t a=v; xtensa_operand_do_reloc(isa,o,p,&a,pcs[q]); uint32_t v1=1; xtensa_operand_decode(isa,o,p,&v1); uint32_t a1=v1; xtensa_operand_do_reloc(isa,o,p,&a1,pcs[q]); printf("%s[%u,%u,%u]", fr?"":",", pcs[q], a, a1); fr=0; } }
          printf("]}");
        }
        printf("],\"states\":[");
        for (int q=0;q<xtensa_opcode_num_stateOperands(isa,o);q++) printf("%s[\"%s\",\"%c\"]", q?",":"", xtensa_state_name(isa, xtensa_stateOperand_state(isa,o,q)), xtensa_stateOperand_inout(isa,o,q));
        printf("]}");
      }
      printf("]}");
    }
    printf("]}");
  }
  printf("]}\n");
  return 0;
}