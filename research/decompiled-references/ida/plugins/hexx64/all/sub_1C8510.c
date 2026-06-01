__int64 __fastcall sub_1C8510(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        __m128i a7,
        signed int a8)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned int **v12; // r14
  unsigned __int8 *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // edx

  if ( !sub_11CA80(a5) )
    return 0;
  v11 = j__qalloc_or_throw(80, a2, v9, v10);
  v12 = (unsigned int **)(v11 + 32);
  v13 = (unsigned __int8 *)(v11 + 64);
  *(_QWORD *)(v11 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v11 + 40) = 0;
  *(_QWORD *)(v11 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v11 + 56) = 0;
  *(_QWORD *)(v11 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v11 + 72) = 0;
  sub_330970(v11, a2);
  *(_DWORD *)(v11 + 4) |= 0x40000u;
  *(_DWORD *)v11 = 4;
  sub_125180((unsigned __int8 *)(v11 + 32), a3);
  if ( !(unsigned __int8)sub_126F10((int *)(v11 + 32), a1, a6, v14, *(double *)a7.m128i_i64)
    || *(_DWORD *)(v11 + 36) != a5 && !(unsigned __int8)sub_12AB50(v12, a1, a5, 1, a7)
    || (sub_125180(v13, a4), !(unsigned __int8)sub_126F10((int *)v13, a1, a8, v15, *(double *)a7.m128i_i64))
    || (v16 = *(_DWORD *)(v11 + 36), *(_DWORD *)(v11 + 68) < v16)
    || !(unsigned __int8)sub_12AB50((unsigned int **)v13, a1, v16, 128, a7) )
  {
    if ( v11 )
    {
      sub_11CDA0((__int64)v13);
      sub_11CDA0(v11 + 48);
      sub_11CDA0((__int64)v12);
      j__qfree(v11);
    }
    return 0;
  }
  return v11;
}

