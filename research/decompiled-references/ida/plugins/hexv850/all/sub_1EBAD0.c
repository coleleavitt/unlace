unsigned __int64 __fastcall sub_1EBAD0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // r13d
  char v5; // bl
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // r13
  bool v10; // al
  __m128i v11; // xmm0
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // [rsp+8h] [rbp-F8h] BYREF
  __int128 v18; // [rsp+10h] [rbp-F0h]
  __m128i v19; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h]
  __int128 v21; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+50h] [rbp-B0h]
  __int128 v23; // [rsp+58h] [rbp-A8h]
  __int128 v24; // [rsp+68h] [rbp-98h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  char v28; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v29; // [rsp+C0h] [rbp-40h]

  v1 = a1[185];
  v29 = __readfsqword(0x28u);
  v18 = 0;
  v17 = 0;
  if ( !v1 || (v17 = qvector_reserve(), v8 = a1[184], v9 = v8 + 40LL * a1[185], v8 == v9) )
  {
    v2 = a1[21];
    v3 = v2;
    if ( a1[16] <= (int)v2 )
      goto LABEL_3;
    v5 = 0;
  }
  else
  {
    v5 = 0;
    do
    {
      v11 = _mm_loadu_si128((const __m128i *)(v8 + 8));
      v12 = *(int *)(v8 + 24);
      if ( v12 < _mm_add_epi64(v11, _mm_srli_si128(v11, 8)).m128i_i64[0] )
      {
        v13 = a1[19];
        v14 = a1[187];
        v20 = 0;
        v22 = 0;
        v25 = 1;
        v26 = -1;
        v27 = 0;
        v28 = 0;
        v19 = 0;
        v21 = 0;
        v23 = 0;
        v24 = 0;
        if ( sub_1CB100(v8, v14, &v19, v13, nullptr, nullptr) != -1 )
          v12 = (int)(*(_DWORD *)(v8 + 32) + ((unsigned __int64)v19.m128i_i64[0] >> 3));
        clear_tinfo_t();
        if ( v22 )
        {
          *(_QWORD *)&v23 = 0;
          qfree();
        }
        if ( v20 )
        {
          *(_QWORD *)&v21 = 0;
          qfree();
        }
      }
      v15 = v18;
      v19.m128i_i64[0] = v12;
      v16 = v17;
      if ( *((_QWORD *)&v18 + 1) < (unsigned __int64)(v18 + 1) )
      {
        v17 = qvector_reserve();
        v16 = v17;
        v15 = v18;
      }
      *(_QWORD *)(v16 + 8 * v15) = v12;
      *(_QWORD *)&v18 = v18 + 1;
      v10 = *(_QWORD *)(v8 + 24) != v12;
      v8 += 40;
      v5 |= v10;
    }
    while ( v9 != v8 );
    v2 = a1[21];
    v3 = v2;
    if ( (int)v2 >= a1[16] )
      goto LABEL_13;
  }
  v6 = a1[184];
  v7 = a1[187];
  v20 = 0;
  v19 = 0;
  v22 = 0;
  v25 = 1;
  v26 = -1;
  v27 = 0;
  v28 = 0;
  v21 = 0;
  v23 = 0;
  v24 = 0;
  if ( sub_1CB100(v6, v7, &v19, v2, nullptr, nullptr) != -1 )
    v3 = *(_DWORD *)(v6 + 32) + ((unsigned __int64)v19.m128i_i64[0] >> 3);
  v3 &= -*(_DWORD *)(a1[188] + 80LL);
  v5 |= a1[21] != v3;
  clear_tinfo_t();
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
LABEL_13:
  if ( v5 )
  {
    sub_188B40(a1, &v17, v3);
    sub_62520((__int64)a1, 0, (__int64)"after correcting minstkref");
  }
LABEL_3:
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  return v29 - __readfsqword(0x28u);
}

