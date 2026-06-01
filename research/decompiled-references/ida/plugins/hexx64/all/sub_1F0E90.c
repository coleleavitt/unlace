unsigned __int64 __fastcall sub_1F0E90(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // r13d
  char v5; // bl
  __int64 v6; // r14
  __int64 v7; // rsi
  double v8; // xmm0_8
  __int64 v9; // r15
  __int64 v10; // r13
  bool v11; // al
  __m128i v12; // xmm0
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // [rsp+8h] [rbp-F8h] BYREF
  __int128 v19; // [rsp+10h] [rbp-F0h]
  __m128i v20; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h]
  __int128 v22; // [rsp+40h] [rbp-C0h]
  __int64 v23; // [rsp+50h] [rbp-B0h]
  __int128 v24; // [rsp+58h] [rbp-A8h]
  __int128 v25; // [rsp+68h] [rbp-98h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  char v29; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v30; // [rsp+C0h] [rbp-40h]

  v1 = a1[185];
  v30 = __readfsqword(0x28u);
  v19 = 0;
  v18 = 0;
  if ( !v1 || (v18 = qvector_reserve((__int64)&v18, 0, v1, 8), v9 = a1[184], v10 = v9 + 40LL * a1[185], v9 == v10) )
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
      v12 = _mm_loadu_si128((const __m128i *)(v9 + 8));
      v13 = *(int *)(v9 + 24);
      *(_QWORD *)&v8 = _mm_add_epi64(v12, _mm_srli_si128(v12, 8)).m128i_u64[0];
      if ( v13 < *(__int64 *)&v8 )
      {
        v14 = a1[19];
        v15 = a1[187];
        v8 = 0.0;
        v21 = 0;
        v23 = 0;
        v26 = 1;
        v27 = -1;
        v28 = 0;
        v29 = 0;
        v20 = 0;
        v22 = 0;
        v24 = 0;
        v25 = 0;
        if ( sub_1CFF80(v9, v15, &v20, v14, nullptr, nullptr) != -1 )
          v13 = (int)(*(_DWORD *)(v9 + 32) + ((unsigned __int64)v20.m128i_i64[0] >> 3));
        clear_tinfo_t();
        if ( v23 )
        {
          *(_QWORD *)&v24 = 0;
          qfree(v23);
        }
        if ( v21 )
        {
          *(_QWORD *)&v22 = 0;
          qfree(v21);
        }
      }
      v16 = v19;
      v20.m128i_i64[0] = v13;
      v17 = v18;
      if ( *((_QWORD *)&v19 + 1) < (unsigned __int64)(v19 + 1) )
      {
        v18 = qvector_reserve((__int64)&v18, v18, v19 + 1, 8);
        v17 = v18;
        v16 = v19;
      }
      *(_QWORD *)(v17 + 8 * v16) = v13;
      *(_QWORD *)&v19 = v19 + 1;
      v11 = *(_QWORD *)(v9 + 24) != v13;
      v9 += 40;
      v5 |= v11;
    }
    while ( v10 != v9 );
    v2 = a1[21];
    v3 = v2;
    if ( (int)v2 >= a1[16] )
      goto LABEL_13;
  }
  v6 = a1[184];
  v7 = a1[187];
  v8 = 0.0;
  v21 = 0;
  v20 = 0;
  v23 = 0;
  v26 = 1;
  v27 = -1;
  v28 = 0;
  v29 = 0;
  v22 = 0;
  v24 = 0;
  v25 = 0;
  if ( sub_1CFF80(v6, v7, &v20, v2, nullptr, nullptr) != -1 )
    v3 = *(_DWORD *)(v6 + 32) + ((unsigned __int64)v20.m128i_i64[0] >> 3);
  v3 &= -*(_DWORD *)(a1[188] + 80LL);
  v5 |= a1[21] != v3;
  clear_tinfo_t();
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
LABEL_13:
  if ( v5 )
  {
    sub_18D700(a1, &v18, v3, v8);
    sub_66FA0((__int64)a1, 0);
  }
LABEL_3:
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  return v30 - __readfsqword(0x28u);
}

