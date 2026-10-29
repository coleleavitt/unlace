_QWORD *__fastcall sub_A3240(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        __m128i a7)
{
  int v9; // r13d
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v16; // [rsp+8h] [rbp-50h]
  __int64 v17; // [rsp+10h] [rbp-48h]

  v9 = a3;
  v11 = (_QWORD *)j__qalloc_or_throw(80, a2, a3, (__int64)a4);
  v12 = (__int64)v11;
  if ( a2 )
    v13 = *(_QWORD *)(a2 + 24);
  else
    v13 = *(_QWORD *)(a1 + 32);
  v11[5] = 0;
  v17 = (__int64)(v11 + 4);
  v16 = (__int64)(v11 + 6);
  v11[4] = 0xFFFFFFFF00000000LL;
  v11[6] = 0xFFFFFFFF00000000LL;
  v11[7] = 0;
  v11[8] = 0xFFFFFFFF00000000LL;
  v11[9] = 0;
  sub_330970((__int64)v11, v13);
  *(_DWORD *)v12 = v9;
  if ( v9 > 62 )
    *(_DWORD *)(v12 + 4) |= 0x10u;
  if ( a4 )
    sub_125180(v17, a4);
  if ( a5 )
    sub_125180(v16, a5);
  if ( a6 )
    sub_125180(v12 + 64, a6);
  if ( !(unsigned int)sub_15BC70(
                        (unsigned int *)v12,
                        *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL),
                        0,
                        0,
                        nullptr,
                        nullptr,
                        a7,
                        0)
    || *(_DWORD *)v12 )
  {
    return sub_A3160(a1, (_QWORD *)v12, a2, *(double *)a7.m128i_i64);
  }
  if ( v12 )
  {
    sub_11CDA0(v12 + 64);
    sub_11CDA0(v16);
    sub_11CDA0(v17);
    j__qfree(v12);
  }
  return (_QWORD *)a2;
}

