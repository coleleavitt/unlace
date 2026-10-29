__int64 __fastcall sub_1D6450(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        __m128i a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rbx
  unsigned __int8 *v15; // [rsp+8h] [rbp-50h]
  unsigned __int8 *v16; // [rsp+10h] [rbp-48h]

  v11 = *(_QWORD *)(a1 + 40);
  v12 = j__qalloc_or_throw(80, a2, (__int64)a3, (__int64)a4);
  v15 = (unsigned __int8 *)(v12 + 32);
  v16 = (unsigned __int8 *)(v12 + 48);
  *(_QWORD *)(v12 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v12 + 56) = 0;
  *(_QWORD *)(v12 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v12 + 72) = 0;
  sub_330970(v12, v11);
  *(_DWORD *)v12 = a2;
  if ( (int)a2 > 62 )
    *(_DWORD *)(v12 + 4) |= 0x10u;
  if ( a3 )
    sub_125180(v15, a3);
  if ( a4 )
    sub_125180(v16, a4);
  if ( a5 )
    sub_125180((unsigned __int8 *)(v12 + 64), a5);
  if ( (unsigned int)sub_167810(*(_QWORD *)(a1 + 16), (unsigned int *)v12, 6u, a6, a7, a8) && !*(_DWORD *)v12 )
  {
    if ( v12 )
    {
      sub_11CDA0(v12 + 64);
      sub_11CDA0((__int64)v16);
      sub_11CDA0((__int64)v15);
      j__qfree(v12);
    }
    return 0;
  }
  else
  {
    v13 = sub_B5190(*(_QWORD **)(a1 + 16), v12, *(double *)a6.m128i_i64);
    sub_330D80(*(_QWORD *)(a1 + 16), v11, *(unsigned __int16 *)(a1 + 50));
  }
  return v13;
}

