__int64 __fastcall sub_165C0(__int64 a1, const char *a2, int a3, _DWORD *a4, char a5)
{
  __int64 result; // rax
  int v9; // edx
  __int16 v10; // ax
  __int16 v11; // ax
  __int16 v12; // ax
  __int64 v13; // rdi
  _QWORD v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v14[1] = __readfsqword(0x28u);
  if ( a2 )
  {
    result = 2;
    if ( a3 != 3 )
      return result;
    if ( !strcmp(a2, "ARC_SIMPLIFY") )
    {
      v11 = *(_WORD *)(a1 + 5288);
      if ( *a4 )
        *(_WORD *)(a1 + 5288) = v11 | 1;
      else
        *(_WORD *)(a1 + 5288) = v11 & 0xFFFE;
    }
    else if ( !strcmp(a2, "ARC_INLINECONST") )
    {
      v12 = *(_WORD *)(a1 + 5288);
      if ( *a4 )
        *(_WORD *)(a1 + 5288) = v12 | 2;
      else
        *(_WORD *)(a1 + 5288) = v12 & 0xFFFD;
    }
    else
    {
      v9 = strcmp(a2, "ARC_TRAP0STOPS");
      result = 1;
      if ( v9 )
        return result;
      v10 = *(_WORD *)(a1 + 5288);
      if ( *a4 )
        *(_WORD *)(a1 + 5288) = v10 | 8;
      else
        *(_WORD *)(a1 + 5288) = v10 & 0xFFF7;
    }
  }
  else
  {
    sub_162E0(
      (__int64)"HELP\n"
               "ARC specific options\n"
               "\n"
               " Simplify instructions\n"
               "\n"
               "      If this option is on, IDA will simplify instructions and replace\n"
               "      them by more natural pseudo-instructions or alternative mnemonics.\n"
               "      For example,\n"
               "\n"
               "                    sub.f   0, a, b\n"
               "\n"
               "     will be replaced by\n"
               "\n"
               "                    cmp a, b\n"
               "\n"
               "\n"
               " Inline constant pool loads\n"
               "\n"
               "     If this option is on, IDA will use =label syntax for\n"
               "     pc-relative loads (commonly used to load constants)\n"
               "     For example,\n"
               "\n"
               "                   ld      r1, [pcl,0x1C]\n"
               "                   ...\n"
               "                   .long 0x2051D1C8\n"
               "\n"
               "     will be replaced by\n"
               "\n"
               "                   ld      r1, =0x2051D1C8\n"
               "\n"
               "\n"
               " Track register accesses\n"
               "\n"
               "     This option tells IDA to track values loaded\n"
               "     into registers and use it to improve the listing.\n"
               "     For example,\n"
               "\n"
               "                   mov     r13, 0x172C\n"
               "                   ...\n"
               "                   add     r0, r13, 0x98\n"
               "\n"
               "     will be replaced by\n"
               "\n"
               "                   add     r0, r13, (dword_17C4 - 0x172C)\n"
               "\n"
               "\n"
               " trap 0 stops code flow\n"
               "\n"
               "     if this option is on, trap 0 instructions are \n"
               "     presumed to stop code flow.\n"
               "     Turn off when it's used as a syscall (for example, in embedded Linux).\n"
               "\n"
               "ENDHELP\n"
               "ARC specific options\n"
               "%*\n"
               " <~S~implify instructions:C>\n"
               " <~I~nline constant pool loads:C>\n"
               " <Track ~r~egister accesses:C>\n"
               " <~T~rap 0 stops code flow:C>>\n"
               " <~C~hoose core variant:B:0::>\n"
               "\n",
      a1,
      a1 + 5288,
      sub_16BE0);
  }
  if ( a5 )
  {
    v13 = *(_QWORD *)(a1 + 120);
    v14[0] = *(unsigned __int16 *)(a1 + 5288);
    netnode_supset(v13, -1, v14, 8, 65);
  }
  return 0;
}

