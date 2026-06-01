__int64 __fastcall sub_5D4A0(_QWORD *a1, _BYTE *a2, const __m128i *a3)
{
  unsigned int v3; // r13d
  __int64 v6; // r12
  __int64 v8; // rdx
  __int64 *v9; // r15
  __int64 *v10; // r13
  unsigned __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r13
  const __m128i *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __m128i v20; // xmm0
  __m128i *v22; // r14
  _QWORD *v23; // [rsp+0h] [rbp-78h]
  __int64 v24; // [rsp+8h] [rbp-70h]
  __m128i *v25; // [rsp+8h] [rbp-70h]
  __int64 v26; // [rsp+10h] [rbp-68h]
  __int64 v27; // [rsp+18h] [rbp-60h]
  __int64 v28; // [rsp+18h] [rbp-60h]
  __int64 v29; // [rsp+28h] [rbp-50h] BYREF
  const __m128i *v30[9]; // [rsp+30h] [rbp-48h] BYREF

  v30[1] = (const __m128i *)__readfsqword(0x28u);
  v23 = a1 + 1;
  v6 = sub_5C180((__int64)(a1 + 1), (__int64)a3);
  if ( (_QWORD *)v6 == a1 + 2 )
  {
    v8 = a1[8];
    v9 = (__int64 *)a1[7];
    v10 = &v9[2 * v8];
    if ( v9 == v10 )
      goto LABEL_10;
    do
    {
      if ( !(unsigned int)sub_849A0(a3, v9) )
        break;
      v9 += 2;
    }
    while ( v10 != v9 );
    v8 = a1[8];
    v10 = (__int64 *)(a1[7] + 16 * v8);
    if ( v10 == v9 )
    {
LABEL_10:
      v11 = v8 + 1;
      v12 = a3->m128i_i64[0];
      v13 = a3->m128i_i64[1];
      if ( a1[9] < v11 )
      {
        v27 = a1[9];
        v26 = a3->m128i_i64[1];
        v24 = a3->m128i_i64[0];
        v15 = qvector_reserve(a1 + 7, 0, v11, 16);
        v16 = (const __m128i *)a1[7];
        v17 = a1[9];
        v18 = a1[8] - 1LL;
        a1[9] = v27;
        if ( v18 >= 0 )
        {
          v19 = v15;
          do
          {
            v20 = _mm_loadu_si128(v16);
            v19 += 16;
            ++v16;
            *(__m128i *)(v19 - 16) = v20;
          }
          while ( v18-- != 0 );
          v16 = (const __m128i *)a1[7];
        }
        v28 = v17;
        qfree(v16);
        a1[7] = v15;
        v13 = v26;
        v12 = v24;
        a1[9] = v28;
        v10 = (__int64 *)(16LL * a1[8] + v15);
      }
      *v10 = v12;
      v10[1] = v13;
      ++a1[8];
      v29 = 0;
      v3 = sub_5C870(a1, &v29, a3);
      if ( (_BYTE)v3 )
      {
        copy_tinfo_t(a2, &v29);
        v22 = (__m128i *)a1[3];
        v25 = (__m128i *)v6;
        if ( !v22 )
          goto LABEL_29;
        do
        {
          if ( (int)sub_849A0(&v22[2], a3) >= 0 )
          {
            v25 = v22;
            v22 = (__m128i *)v22[1].m128i_i64[0];
          }
          else
          {
            v22 = (__m128i *)v22[1].m128i_i64[1];
          }
        }
        while ( v22 );
        if ( (__m128i *)v6 == v25 || (int)sub_849A0(a3, &v25[2]) < 0 )
        {
LABEL_29:
          v30[0] = a3;
          v25 = sub_5C230(v23, v25, v30);
        }
        copy_tinfo_t(&v25[3], &v29);
      }
      v14 = a1[8];
      if ( v14 )
        a1[8] = v14 - 1;
      clear_tinfo_t(&v29);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    copy_tinfo_t(a2, v6 + 48);
    LOBYTE(v3) = *a2 != 0;
  }
  return v3;
}
