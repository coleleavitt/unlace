__int64 __fastcall sub_1C970(__int64 a1, __m128i *a2, _QWORD *a3, const char *a4)
{
  size_t v6; // rax
  size_t v7; // r13
  __m128i v8; // xmm8
  __m128i v9; // xmm7
  __m128i v10; // xmm6
  __m128i v11; // xmm5
  __m128i v12; // xmm4
  __m128i si128; // xmm9
  __m128i v14; // xmm3
  __m128i v15; // xmm2
  __m128i v16; // xmm1
  __m128i v17; // xmm9
  __m128i v18; // xmm0
  __m128i v19; // xmm9
  __m128i v20; // xmm9
  __m128i v21; // xmm9
  __m128i v22; // xmm9
  __m128i v23; // xmm9
  __m128i v24; // xmm9
  unsigned int v25; // ebx
  __int64 v27; // [rsp+0h] [rbp-190h]
  __m128i v28; // [rsp+28h] [rbp-168h] BYREF
  __m128i v29[2]; // [rsp+38h] [rbp-158h] BYREF
  __m128i v30; // [rsp+58h] [rbp-138h] BYREF
  __m128i v31; // [rsp+68h] [rbp-128h] BYREF
  __m128i v32; // [rsp+78h] [rbp-118h] BYREF
  __m128i v33; // [rsp+88h] [rbp-108h] BYREF
  __m128i v34; // [rsp+98h] [rbp-F8h] BYREF
  __m128i v35[10]; // [rsp+A8h] [rbp-E8h] BYREF
  unsigned __int64 v36; // [rsp+150h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v35[0].m128i_i8[8] = 0;
  memset(v29, 0, sizeof(v29));
  v34.m128i_i64[0] = 1;
  v34.m128i_i32[2] = -1;
  v35[0].m128i_i64[0] = 0;
  v28 = 0;
  v30 = 0;
  v31 = 0;
  if ( a4 )
  {
    v6 = strlen(a4);
    v7 = v6;
    if ( v6 )
    {
      v27 = v6 + 1;
      v29[0].m128i_i64[0] = qvector_reserve();
      v29[0].m128i_i64[1] = v27;
      memmove((void *)v29[0].m128i_i64[0], a4, v7);
      *(_BYTE *)(v29[0].m128i_i64[0] + v7) = 0;
    }
  }
  if ( (unsigned int)find_tinfo_udt_member() == -1 )
  {
    if ( (*a3 & 0x100) != 0 )
      get_tinfo_pdata();
    sub_1BF10(a1, (__int64)"Warning: failed to find %s.%s in the database\n", src, a4);
    v25 = 0;
  }
  else
  {
    if ( a2 )
    {
      v8 = _mm_loadu_si128(a2);
      v9 = _mm_loadu_si128(a2 + 1);
      v10 = _mm_loadu_si128(a2 + 2);
      *a2 = _mm_load_si128(&v28);
      v11 = _mm_loadu_si128(a2 + 3);
      v12 = _mm_loadu_si128(a2 + 4);
      si128 = _mm_load_si128(v29);
      v14 = _mm_loadu_si128(a2 + 5);
      v35[1] = v8;
      v15 = _mm_loadu_si128(a2 + 6);
      v16 = _mm_loadu_si128(a2 + 7);
      v35[2] = v9;
      a2[1] = si128;
      v17 = _mm_load_si128(&v29[1]);
      v18 = _mm_loadu_si128(a2 + 8);
      v35[3] = v10;
      a2[2] = v17;
      v19 = _mm_load_si128(&v30);
      v35[4] = v11;
      a2[3] = v19;
      v20 = _mm_load_si128(&v31);
      v35[5] = v12;
      a2[4] = v20;
      v21 = _mm_load_si128(&v32);
      v35[6] = v14;
      a2[5] = v21;
      v22 = _mm_load_si128(&v33);
      v35[7] = v15;
      v35[8] = v16;
      v35[9] = v18;
      a2[6] = v22;
      v23 = _mm_load_si128(&v34);
      v28 = v8;
      a2[7] = v23;
      v24 = _mm_load_si128(v35);
      v29[0] = v9;
      a2[8] = v24;
      v29[1] = v10;
      v30 = v11;
      v31 = v12;
      v32 = v14;
      v33 = v15;
      v34 = v16;
      v35[0] = v18;
    }
    v25 = 1;
  }
  clear_tinfo_t();
  if ( v29[1].m128i_i64[1] )
  {
    v30.m128i_i64[0] = 0;
    qfree();
  }
  if ( v29[0].m128i_i64[0] )
  {
    v29[0].m128i_i64[1] = 0;
    qfree();
  }
  return v25;
}

