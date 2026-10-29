unsigned __int64 __fastcall sub_25A00(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        __m128 a7)
{
  __int64 v9; // r12
  unsigned __int64 v10; // rdx
  const char *v11; // rsi
  const char *v12; // rdx
  int v14; // ecx
  int v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+8h] [rbp-50h]
  __int128 v17; // [rsp+10h] [rbp-48h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( *(int *)(a1 + 1188) < 0 )
    return v18 - __readfsqword(0x28u);
  v15 = -2;
  v16 = -1;
  v17 = 0;
  LOBYTE(v9) = 1;
  if ( get_sreg() != 1 )
    v9 = *(_QWORD *)(a3 + 8) & 1LL;
  if ( (unsigned __int8)sub_25020(a1, a2, (__int64)&v15, *(_DWORD *)(a1 + 1188), 0.0, a5, a6, a7) )
  {
    if ( (_BYTE)v9 )
    {
      v10 = v16 | 0x20;
      if ( (v16 | 0x20) != v16 )
      {
        if ( !*(_QWORD *)(a1 + 952) )
        {
          v11 = "Thumb";
          v12 = "not ";
LABEL_11:
          sub_1F940(
            (__int64)"GDB: The value of the PC register has been updated to point to %s code,\n"
                     "but the Thumb status bit in the CPSR register is %sset.\n",
            v11,
            v12);
          goto LABEL_12;
        }
LABEL_17:
        v14 = *(_DWORD *)(a1 + 1188);
        v16 = v10;
        sub_251E0(a1, a2, (__int64)&v15, v14, 0.0, a5, a6, a7);
      }
    }
    else if ( (v16 & 0x20) != 0 )
    {
      v11 = "ARM";
      v12 = (const char *)&unk_54999;
      if ( !*(_QWORD *)(a1 + 952) )
        goto LABEL_11;
      v10 = v16 & 0xFFFFFFFFFFFFFFDFLL;
      goto LABEL_17;
    }
  }
LABEL_12:
  if ( v15 >= -1 && v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return v18 - __readfsqword(0x28u);
}

