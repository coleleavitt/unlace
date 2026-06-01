unsigned __int64 __fastcall sub_2BD350(const __m128i *a1, const __m128i *a2)
{
  __int64 v3; // r13
  __m128i v4; // xmm0
  __int64 v5; // rdi
  __int64 v6; // r15
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // r14
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __int64 v13; // r13
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int32 v16; // eax
  __m128i v18; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v19; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v20; // [rsp+20h] [rbp-98h]
  __m128i v21; // [rsp+30h] [rbp-88h] BYREF
  __int64 v22; // [rsp+48h] [rbp-70h]
  __m128i v23; // [rsp+50h] [rbp-68h] BYREF
  __int64 v24; // [rsp+60h] [rbp-58h]
  __int32 v25; // [rsp+68h] [rbp-50h]
  unsigned __int64 v26; // [rsp+78h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v19.m128i_i32[0] = 0;
  copy_argloc();
  v20 = *(const __m128i *)((char *)a1 + 24);
  v21.m128i_i32[0] = a1[2].m128i_i32[2];
  copy_argloc();
  *(const __m128i *)((char *)a1 + 24) = *(const __m128i *)((char *)a2 + 24);
  a1[2].m128i_i32[2] = a2[2].m128i_i32[2];
  copy_argloc();
  *(__m128i *)((char *)a2 + 24) = v20;
  a2[2].m128i_i32[2] = v21.m128i_i32[0];
  cleanup_argloc();
  sub_2BD290(&v19, a1 + 3);
  copy_argloc();
  a1[4].m128i_i64[0] = a2[4].m128i_i64[0];
  v3 = a2[4].m128i_i64[1];
  v4 = _mm_loadu_si128(a2 + 5);
  a2[4].m128i_i64[1] = 0;
  a2[5] = 0;
  v5 = a1[4].m128i_i64[1];
  if ( v5 )
  {
    a1[5].m128i_i64[0] = 0;
    v18 = v4;
    qfree(v5);
    v4 = _mm_load_si128(&v18);
  }
  a1[4].m128i_i64[1] = v3;
  a1[5] = v4;
  copy_tinfo_t();
  v6 = a2[6].m128i_i64[1];
  v7 = _mm_loadu_si128(a2 + 7);
  a2[6].m128i_i64[1] = 0;
  a2[7] = 0;
  v8 = a1[6].m128i_i64[1];
  if ( v8 )
  {
    a1[7].m128i_i64[0] = 0;
    v18 = v7;
    qfree(v8);
    v7 = _mm_load_si128(&v18);
  }
  a1[6].m128i_i64[1] = v6;
  a1[7] = v7;
  a1[8].m128i_i64[0] = a2[8].m128i_i64[0];
  a1[8].m128i_i32[2] = a2[8].m128i_i32[2];
  copy_argloc();
  v9 = a2[4].m128i_i64[1];
  v10 = v20.m128i_i64[1];
  v11 = _mm_load_si128(&v21);
  v21 = 0;
  a2[4].m128i_i64[0] = v20.m128i_i64[0];
  v20.m128i_i64[1] = 0;
  if ( v9 )
  {
    a2[5].m128i_i64[0] = 0;
    v18 = v11;
    qfree(v9);
    v11 = _mm_load_si128(&v18);
  }
  a2[4].m128i_i64[1] = v10;
  a2[5] = v11;
  copy_tinfo_t();
  v12 = a2[6].m128i_i64[1];
  v13 = v22;
  v22 = 0;
  v14 = _mm_load_si128(&v23);
  v23 = 0;
  if ( v12 )
  {
    a2[7].m128i_i64[0] = 0;
    v18 = v14;
    qfree(v12);
    v14 = _mm_load_si128(&v18);
  }
  v15 = v24;
  a2[6].m128i_i64[1] = v13;
  a2[7] = v14;
  a2[8].m128i_i64[0] = v15;
  a2[8].m128i_i32[2] = v25;
  sub_2B9980(&v19);
  v16 = a1[11].m128i_i32[2];
  a1[11].m128i_i32[2] = a2[11].m128i_i32[2];
  a2[11].m128i_i32[2] = v16;
  return v26 - __readfsqword(0x28u);
}

