__int64 __fastcall sub_40420(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r15d
  _QWORD vars0[9]; // [rsp+0h] [rbp+0h] BYREF

  v5 = 0;
  vars0[1] = __readfsqword(0x28u);
  vars0[0] = 0;
  copy_tinfo_t(vars0, a3);
  if ( (*(_WORD *)(a2 + 24) & 0xFFFB) == 0x119 )
    v5 = sub_400E0(a1, (_QWORD *)a2, (unsigned __int8 *)(a2 + 80), vars0, a4, a5);
  clear_tinfo_t(vars0);
  return v5;
}

