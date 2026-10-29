__int64 __fastcall sub_1CF9C0(__int64 a1, __int64 a2, __m128i *a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rbp
  int tinfo_udt_member; // eax
  __int64 v12; // rbx
  __m128i v14; // xmm8
  __m128i v15; // xmm7
  __m128i v16; // xmm6
  __m128i v17; // xmm5
  __m128i v18; // xmm4
  __m128i si128; // xmm9
  __m128i v20; // xmm3
  __m128i v21; // xmm2
  __m128i v22; // xmm1
  __m128i v23; // xmm9
  __m128i v24; // xmm0
  __m128i v25; // xmm9
  __m128i v26; // xmm9
  __m128i v27; // xmm9
  __m128i v28; // xmm9
  __m128i v29; // xmm9
  __m128i v30; // xmm9
  __m128i v31; // [rsp+10h] [rbp-158h] BYREF
  __m128i v32[2]; // [rsp+20h] [rbp-148h] BYREF
  __m128i v33; // [rsp+40h] [rbp-128h] BYREF
  __m128i v34; // [rsp+50h] [rbp-118h] BYREF
  __m128i v35; // [rsp+60h] [rbp-108h] BYREF
  __m128i v36; // [rsp+70h] [rbp-F8h] BYREF
  __m128i v37; // [rsp+80h] [rbp-E8h] BYREF
  __m128i v38[10]; // [rsp+90h] [rbp-D8h] BYREF
  unsigned __int64 v39; // [rsp+138h] [rbp-30h]

  v7 = *(_QWORD *)(a2 + 24);
  v8 = a4 - *(_QWORD *)(a1 + 32);
  v39 = __readfsqword(0x28u);
  v10 = v8;
  if ( *(_DWORD *)(v7 + 24) != 8 )
    v10 = (int)v8;
  if ( a5 )
    *a5 = v10;
  get_func();
  if ( (unsigned __int8)get_func_frame() )
  {
    v31 = (__m128i)(unsigned __int64)(8 * v10);
    memset(v32, 0, sizeof(v32));
    v37.m128i_i64[0] = 1;
    v37.m128i_i32[2] = -1;
    v38[0].m128i_i64[0] = 0;
    v38[0].m128i_i8[8] = 0;
    v33 = 0;
    v34 = 0;
    tinfo_udt_member = find_tinfo_udt_member();
    if ( tinfo_udt_member != -1 && a3 )
    {
      v14 = _mm_loadu_si128(a3);
      v15 = _mm_loadu_si128(a3 + 1);
      v16 = _mm_loadu_si128(a3 + 2);
      *a3 = _mm_load_si128(&v31);
      v17 = _mm_loadu_si128(a3 + 3);
      v18 = _mm_loadu_si128(a3 + 4);
      si128 = _mm_load_si128(v32);
      v20 = _mm_loadu_si128(a3 + 5);
      v38[1] = v14;
      v21 = _mm_loadu_si128(a3 + 6);
      v22 = _mm_loadu_si128(a3 + 7);
      v38[2] = v15;
      a3[1] = si128;
      v23 = _mm_load_si128(&v32[1]);
      v24 = _mm_loadu_si128(a3 + 8);
      v38[3] = v16;
      a3[2] = v23;
      v25 = _mm_load_si128(&v33);
      v38[4] = v17;
      a3[3] = v25;
      v26 = _mm_load_si128(&v34);
      v38[5] = v18;
      a3[4] = v26;
      v27 = _mm_load_si128(&v35);
      v38[6] = v20;
      a3[5] = v27;
      v28 = _mm_load_si128(&v36);
      v38[7] = v21;
      v38[8] = v22;
      v38[9] = v24;
      a3[6] = v28;
      v29 = _mm_load_si128(&v37);
      v31 = v14;
      a3[7] = v29;
      v30 = _mm_load_si128(v38);
      v32[0] = v15;
      a3[8] = v30;
      v32[1] = v16;
      v33 = v17;
      v34 = v18;
      v35 = v20;
      v36 = v21;
      v37 = v22;
      v38[0] = v24;
    }
    if ( a6 )
      *a6 = 0;
    v12 = tinfo_udt_member;
    clear_tinfo_t();
    if ( v32[1].m128i_i64[1] )
    {
      v33.m128i_i64[0] = 0;
      qfree();
    }
    if ( v32[0].m128i_i64[0] )
    {
      v32[0].m128i_i64[1] = 0;
      qfree();
    }
  }
  else
  {
    v12 = -1;
  }
  clear_tinfo_t();
  return v12;
}

