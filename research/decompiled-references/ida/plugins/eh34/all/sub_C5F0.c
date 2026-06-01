unsigned __int64 __fastcall sub_C5F0(__m128i *a1, __int64 a2)
{
  __int64 v3; // r13
  unsigned __int8 v4; // r12
  void (__fastcall *hexdsp)(__int64, __int64, __int64 *, _QWORD); // rax
  __int64 v6; // rsi
  __int64 v7; // r13
  unsigned __int8 v8; // r14
  void (__fastcall *v9)(__int64, __int64, __int64 *, __int64, _QWORD); // rax
  __m128i v10; // xmm1
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 i; // rbx
  __int64 v15; // rax
  __m128i v16; // xmm2
  __int64 v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rbp
  __int64 v23; // rbx
  __int64 v24; // rax
  __m128i v26; // [rsp+0h] [rbp-78h] BYREF
  __int64 v27; // [rsp+10h] [rbp-68h] BYREF
  __int128 v28; // [rsp+18h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-48h] BYREF
  __m128i v30; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  v28 = 0;
  v27 = 0;
  v3 = a1->m128i_i64[0];
  v4 = a1->m128i_u8[8];
  hexdsp = (void (__fastcall *)(__int64, __int64, __int64 *, _QWORD))get_hexdsp(a1, a2);
  v6 = v3;
  hexdsp(259, v3, &v27, v4);
  v7 = a1->m128i_i64[0];
  v8 = a1->m128i_u8[8];
  v9 = (void (__fastcall *)(__int64, __int64, __int64 *, __int64, _QWORD))get_hexdsp(259, v6);
  v9(260, v7, &v27, (__int64)a1[1].m128i_i64, v8);
  sub_C560((__int64)&v29, (__m128i *)a1[1].m128i_i64);
  v10 = _mm_loadu_si128(&v30);
  v11 = a1[2].m128i_i64[1];
  v12 = v29;
  v30 = 0;
  v29 = 0;
  v26 = v10;
  if ( v11 )
  {
    v13 = a1[3].m128i_i64[0];
    if ( v13 )
    {
      for ( i = 0; i != v13; ++i )
      {
        v15 = i;
        qfree(*(_QWORD *)(v11 + 16 * v15));
        v11 = a1[2].m128i_i64[1];
      }
    }
    a1[3].m128i_i64[0] = 0;
    qfree(v11);
    v16 = _mm_load_si128(&v26);
    v17 = v29;
    a1[2].m128i_i64[1] = v12;
    a1[3] = v16;
    if ( v17 )
    {
      v18 = v30.m128i_i64[0];
      if ( v30.m128i_i64[0] )
      {
        v19 = 0;
        do
        {
          v20 = v19++;
          qfree(*(_QWORD *)(v17 + 16 * v20));
          v17 = v29;
        }
        while ( v18 != v19 );
      }
      v30.m128i_i64[0] = 0;
      qfree(v17);
    }
  }
  else
  {
    a1[2].m128i_i64[1] = v12;
    a1[3] = v10;
  }
  v21 = v27;
  if ( v27 )
  {
    v22 = v28;
    if ( (_QWORD)v28 )
    {
      v23 = 0;
      do
      {
        v24 = v23++;
        qfree(*(_QWORD *)(v21 + 16 * v24));
        v21 = v27;
      }
      while ( v22 != v23 );
    }
    *(_QWORD *)&v28 = 0;
    qfree(v21);
  }
  return v31 - __readfsqword(0x28u);
}

