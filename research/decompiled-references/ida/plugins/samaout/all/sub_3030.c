__int64 sub_3030()
{
  __int64 v0; // rax
  const char *v1; // rbx
  const char *v2; // rsi
  __int64 v3; // rbp
  int v4; // r12d
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // eax
  __int64 v13; // [rsp+0h] [rbp-1028h] BYREF
  __int64 v14; // [rsp+8h] [rbp-1020h]
  __int64 v15; // [rsp+10h] [rbp-1018h]
  unsigned __int64 v16; // [rsp+1008h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  get_root_filename();
  v0 = sub_2B60(1u, (__int64)"*.asm", (__int64)"Enter SAMA ASM filename for %s", (const char *)&v13);
  if ( !v0 )
    return 1;
  v1 = (const char *)v0;
  if ( !(unsigned __int8)qfileexist() )
  {
LABEL_3:
    v2 = "a";
    v3 = qfopen();
    goto LABEL_4;
  }
  v12 = sub_2A90(
          (__int64)"~A~ppend",
          (__int64)"~O~verwrite",
          (__int64)"~C~ancel",
          0xFFFFFFFF,
          (__int64)"Output file '%s' already exists.",
          v1);
  if ( v12 )
  {
    if ( v12 != 1 )
    {
      if ( v12 == -1 )
        return 1;
LABEL_11:
      sub_28F0((__int64)"Unable to open destination file '%s'.", v1);
      sub_29C0((__int64)"Failed to output SAMA .ASM to '%s'.\n", v1);
      return 1;
    }
    goto LABEL_3;
  }
  v2 = "w";
  v3 = qfopen();
LABEL_4:
  if ( !v3 )
    goto LABEL_11;
  sub_2820((__int64)"Creating the output file.", v2);
  v4 = sub_2DE0(v3, 0, 0x10000u);
  qfclose();
  callui(24, 10, 0, &callui, v5, v6, v13, v14, v15);
  if ( !(unsigned __int8)callui(27, 10, v7, v8, v9, v10, v13, v14, v15) )
    sub_29C0((__int64)"SAMA Assembler file created, total %i lines.\n", v4);
  return 1;
}

