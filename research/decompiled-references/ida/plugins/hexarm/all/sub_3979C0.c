__int64 __fastcall sub_3979C0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rax
  int v15; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF

  vars0[1] = __readfsqword(0x28u);
  vars0[0] = 0;
  if ( !(unsigned __int8)sub_376CE0(
                           *(_QWORD *)(a1 + 24),
                           a2,
                           a3,
                           a4,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           (__int64)vars0,
                           a11,
                           a12,
                           a13,
                           a14) )
  {
    if ( !under_debugger )
      sub_3835A0(0xC51Au, *(double *)a2.m128_u64);
    BUG();
  }
  v14 = *(_QWORD *)(a1 + 32);
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 108);
    if ( (v15 & 8) != 0 )
    {
      set_tinfo();
      goto LABEL_5;
    }
    *(_DWORD *)(v14 + 108) = v15 | 8;
  }
  set_tinfo();
  v20 = *(_QWORD *)(a1 + 32);
  if ( v20 )
  {
    *(_DWORD *)(v20 + 108) &= ~8u;
    if ( (*(_BYTE *)a1 & 2) == 0 )
      sub_395FD0(a1, 0, *(double *)a2.m128_u64, v17, v18, v19);
  }
LABEL_5:
  clear_tinfo_t();
  return 1;
}

