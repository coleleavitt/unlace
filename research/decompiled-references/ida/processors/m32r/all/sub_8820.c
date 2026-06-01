__int64 __fastcall sub_8820(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 result; // rax
  int v6; // eax
  __int16 v8; // ax
  _UNKNOWN **v9; // rdx
  __int16 v10; // [rsp+Eh] [rbp-2Ah] BYREF
  __int64 v11; // [rsp+10h] [rbp-28h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v10 = 0;
  result = 1;
  if ( !a2 )
  {
    v6 = *(_DWORD *)(a1 + 232);
    v10 = (v6 & 1) != 0;
    if ( (v6 & 2) != 0 )
      v10 |= 2u;
    sub_8530(
      (__int64)"HELP\n"
               "Mitsubishi 32-Bit (m32r) related options :\n"
               "\n"
               " Use synthetic instructions\n"
               "\n"
               "       If this option is on, IDA will simplify instructions and replace\n"
               "       them by synthetic pseudo-instructions.\n"
               "\n"
               "       For example,\n"
               "\n"
               "           bc     label1            ; 8 bits offset    \n"
               "           bc     label2            ; 24 bits offset   \n"
               "           ldi    r1, #0xF              \n"
               "           ldi    r2, #0x123456         \n"
               "           st     r3, @-sp                             \n"
               "           ld     r4, @sp+                             \n"
               "\n"
               "       will be replaced by\n"
               "\n"
               "           bc.s   label1             \n"
               "           bc.l   label2             \n"
               "           ldi8   r1, #0xF           \n"
               "           ldi24  r2, #0x123456      \n"
               "           push   r3                 \n"
               "           pop    r4                 \n"
               "\n"
               " Use registers aliases\n"
               "\n"
               "       If checked, IDA will use aliases names for the following registers :\n"
               "\n"
               "           r13     -> fp          \n"
               "           r14     -> lr          \n"
               "           r15     -> sp          \n"
               "           cr0     -> psw         \n"
               "           cr1     -> cbr         \n"
               "           cr2     -> spi         \n"
               "           cr3     -> spu         \n"
               "           cr6     -> bpc         \n"
               "\n"
               "ENDHELP\n"
               "m32r related options\n"
               "%*\n"
               "<##Substitutions#For example, use bc.s instead of 8-Bit bc instructions#Use ~s~ynthetic instructions:C><#"
               "For example, use fp instead or r14#Use registers ~a~liases:C>>\n"
               "\n"
               "\n"
               "\n"
               "<~C~hoose device name:B:0::>\n"
               "\n"
               "\n",
      a1,
      &v10,
      sub_7CB0);
    v8 = v10 & 1;
    if ( (v10 & 2) != 0 )
    {
      v8 |= 2u;
      v9 = &off_F9A0;
    }
    else
    {
      v9 = &off_FAE0;
    }
    *(_DWORD *)(a1 + 232) = v8;
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) = v9;
    if ( a5 )
    {
      v11 = *(unsigned int *)(a1 + 232);
      netnode_supset();
    }
    return 0;
  }
  return result;
}

