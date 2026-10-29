__int64 __fastcall sub_168F10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, __m128i a7, __m128 a8)
{
  __int64 v8; // r15
  __int64 v9; // rbx
  char v10; // r14
  int v11; // r13d
  __m128i v13; // [rsp+10h] [rbp-78h] BYREF
  __int64 v14[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+38h] [rbp-50h]
  unsigned __int64 v17; // [rsp+48h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( !a2 )
    return 1;
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(_QWORD *)(a2 + 24);
  if ( a2 == v8 )
    return 1;
  v10 = 0;
  v11 = 0;
  do
  {
    while ( *(_QWORD *)(v8 + 24) != v9 )
    {
      v8 = *(_QWORD *)(v8 + 8);
      if ( a2 == v8 )
        goto LABEL_9;
    }
    sub_127A20((__int64)v14, a1, v8, 256, a5, a6, *(double *)a7.m128i_i64, a8);
    v11 |= sub_64880(v14) ^ 1;
    a7 = (__m128i)_mm_loadh_ps((const double *)(*(_QWORD *)(a1 + 64) + 128LL));
    v13 = a7;
    v10 |= sub_317E70(&v15, &v13, 0);
    if ( v15 )
    {
      v16 = 0;
      qfree(v15);
    }
    qfree(v14[0]);
    v8 = *(_QWORD *)(v8 + 8);
  }
  while ( a2 != v8 );
LABEL_9:
  if ( !(_BYTE)v11 && !v10 )
    return 1;
  while ( *(_QWORD *)(v8 + 24) != v9 )
  {
LABEL_13:
    v8 = *(_QWORD *)(v8 + 8);
    if ( !v8 )
      return 1;
  }
  sub_127A20((__int64)v14, a1, v8, 256, a5, a6, *(double *)a7.m128i_i64, a8);
  if ( !(_BYTE)v11 )
    goto LABEL_16;
  if ( (unsigned __int8)sub_64880(v14) )
  {
    if ( !v10 )
    {
LABEL_17:
      if ( v15 )
      {
        v16 = 0;
        qfree(v15);
      }
      qfree(v14[0]);
      goto LABEL_13;
    }
LABEL_16:
    a7 = (__m128i)_mm_loadh_ps((const double *)(*(_QWORD *)(a1 + 64) + 128LL));
    v13 = a7;
    if ( (unsigned __int8)sub_317E70(&v15, &v13, 0) )
      goto LABEL_23;
    goto LABEL_17;
  }
LABEL_23:
  if ( v15 )
  {
    v16 = 0;
    qfree(v15);
  }
  qfree(v14[0]);
  return 0;
}

