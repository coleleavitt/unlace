unsigned __int64 __fastcall sub_2BD710(const __m128i *a1, const __m128i *a2)
{
  __int64 v3; // r13
  __m128i v4; // xmm0
  __int64 v5; // r15
  __m128i v6; // xmm0
  __int64 v7; // rdi
  __int64 v8; // r14
  __m128i v9; // xmm0
  __int64 v10; // rdi
  __int64 v11; // r13
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int32 v14; // eax
  __m128i v16; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v17; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+20h] [rbp-98h]
  __int64 v19; // [rsp+28h] [rbp-90h]
  __m128i v20; // [rsp+30h] [rbp-88h] BYREF
  __int64 v21; // [rsp+48h] [rbp-70h]
  __m128i v22; // [rsp+50h] [rbp-68h] BYREF
  __int64 v23; // [rsp+60h] [rbp-58h]
  __int32 v24; // [rsp+68h] [rbp-50h]
  unsigned __int64 v25; // [rsp+78h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v17.m128i_i32[0] = 0;
  copy_argloc();
  v18 = a1[1].m128i_i64[1];
  v19 = a1[2].m128i_i64[0];
  v20.m128i_i32[0] = a1[2].m128i_i32[2];
  copy_argloc();
  a1[1].m128i_i64[1] = a2[1].m128i_i64[1];
  a1[2].m128i_i64[0] = a2[2].m128i_i64[0];
  a1[2].m128i_i32[2] = a2[2].m128i_i32[2];
  copy_argloc();
  a2[1].m128i_i64[1] = v18;
  a2[2].m128i_i64[0] = v19;
  a2[2].m128i_i32[2] = v20.m128i_i32[0];
  cleanup_argloc();
  sub_2BD650(&v17, a1 + 3);
  copy_argloc();
  a1[4].m128i_i64[0] = a2[4].m128i_i64[0];
  v3 = a2[4].m128i_i64[1];
  v4 = _mm_loadu_si128(a2 + 5);
  a2[4].m128i_i64[1] = 0;
  a2[5] = 0;
  if ( a1[4].m128i_i64[1] )
  {
    a1[5].m128i_i64[0] = 0;
    v16 = v4;
    qfree();
    v4 = _mm_load_si128(&v16);
  }
  a1[4].m128i_i64[1] = v3;
  a1[5] = v4;
  copy_tinfo_t();
  v5 = a2[6].m128i_i64[1];
  v6 = _mm_loadu_si128(a2 + 7);
  a2[6].m128i_i64[1] = 0;
  a2[7] = 0;
  if ( a1[6].m128i_i64[1] )
  {
    a1[7].m128i_i64[0] = 0;
    v16 = v6;
    qfree();
    v6 = _mm_load_si128(&v16);
  }
  a1[6].m128i_i64[1] = v5;
  a1[7] = v6;
  a1[8].m128i_i64[0] = a2[8].m128i_i64[0];
  a1[8].m128i_i32[2] = a2[8].m128i_i32[2];
  copy_argloc();
  v7 = a2[4].m128i_i64[1];
  v8 = v19;
  v9 = _mm_load_si128(&v20);
  v20 = 0;
  a2[4].m128i_i64[0] = v18;
  v19 = 0;
  if ( v7 )
  {
    a2[5].m128i_i64[0] = 0;
    v16 = v9;
    qfree();
    v9 = _mm_load_si128(&v16);
  }
  a2[4].m128i_i64[1] = v8;
  a2[5] = v9;
  copy_tinfo_t();
  v10 = a2[6].m128i_i64[1];
  v11 = v21;
  v21 = 0;
  v12 = _mm_load_si128(&v22);
  v22 = 0;
  if ( v10 )
  {
    a2[7].m128i_i64[0] = 0;
    v16 = v12;
    qfree();
    v12 = _mm_load_si128(&v16);
  }
  v13 = v23;
  a2[6].m128i_i64[1] = v11;
  a2[7] = v12;
  a2[8].m128i_i64[0] = v13;
  a2[8].m128i_i32[2] = v24;
  sub_2B9D40(&v17);
  v14 = a1[11].m128i_i32[2];
  a1[11].m128i_i32[2] = a2[11].m128i_i32[2];
  a2[11].m128i_i32[2] = v14;
  return v25 - __readfsqword(0x28u);
}

