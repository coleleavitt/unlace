__int64 __fastcall sub_25ABF0(__int64 a1, __int64 a2, const char *a3, __int64 a4, __int64 a5)
{
  size_t v7; // rax
  int tinfo_udt_member; // ebx
  __m128i v9; // xmm8
  __m128i si128; // xmm7
  __m128i v11; // xmm6
  __m128i v12; // xmm5
  __m128i v13; // xmm9
  __m128i v14; // xmm4
  __m128i v15; // xmm3
  __m128i v16; // xmm2
  __m128i v17; // xmm9
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __m128i v20; // xmm9
  __m128i v21; // xmm9
  __m128i v22; // xmm9
  __m128i v23; // xmm9
  __m128i v24; // xmm9
  __m128i v25; // xmm9
  unsigned int data_value; // ebx
  __int64 v28; // [rsp+0h] [rbp-208h]
  size_t n; // [rsp+8h] [rbp-200h]
  __m128i v30; // [rsp+10h] [rbp-1F8h] BYREF
  __m128i v31[2]; // [rsp+20h] [rbp-1E8h] BYREF
  __m128i v32; // [rsp+40h] [rbp-1C8h] BYREF
  __m128i v33; // [rsp+50h] [rbp-1B8h] BYREF
  __m128i v34; // [rsp+60h] [rbp-1A8h] BYREF
  __m128i v35; // [rsp+70h] [rbp-198h] BYREF
  __m128i v36; // [rsp+80h] [rbp-188h] BYREF
  __m128i v37; // [rsp+90h] [rbp-178h] BYREF
  __m128i v38; // [rsp+A0h] [rbp-168h] BYREF
  __m128i v39[2]; // [rsp+B0h] [rbp-158h] BYREF
  __m128i v40; // [rsp+D0h] [rbp-138h] BYREF
  __m128i v41; // [rsp+E0h] [rbp-128h] BYREF
  __m128i v42; // [rsp+F0h] [rbp-118h] BYREF
  __m128i v43; // [rsp+100h] [rbp-108h] BYREF
  __m128i v44; // [rsp+110h] [rbp-F8h] BYREF
  __m128i v45[10]; // [rsp+120h] [rbp-E8h] BYREF
  unsigned __int64 v46; // [rsp+1C8h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v37.m128i_i8[8] = 0;
  memset(v31, 0, sizeof(v31));
  v36.m128i_i64[0] = 1;
  v36.m128i_i32[2] = -1;
  v37.m128i_i64[0] = 0;
  memset(v39, 0, sizeof(v39));
  v30 = 0;
  v32 = 0;
  v33 = 0;
  v38 = 0;
  v40 = 0;
  v41 = 0;
  v44.m128i_i64[0] = 1;
  v44.m128i_i32[2] = -1;
  v45[0].m128i_i64[0] = 0;
  v45[0].m128i_i8[8] = 0;
  v7 = strlen(a3);
  if ( v7 )
  {
    n = v7;
    v28 = v7 + 1;
    v39[0].m128i_i64[0] = qvector_reserve();
    v39[0].m128i_i64[1] = v28;
    memmove((void *)v39[0].m128i_i64[0], a3, n);
    *(_BYTE *)(v39[0].m128i_i64[0] + n) = 0;
  }
  tinfo_udt_member = find_tinfo_udt_member();
  if ( tinfo_udt_member >= 0 )
  {
    v9 = _mm_load_si128(&v30);
    si128 = _mm_load_si128(v31);
    v11 = _mm_load_si128(&v31[1]);
    v30 = _mm_load_si128(&v38);
    v12 = _mm_load_si128(&v32);
    v13 = _mm_load_si128(v39);
    v14 = _mm_load_si128(&v33);
    v15 = _mm_load_si128(&v34);
    v45[1] = v9;
    v31[0] = v13;
    v16 = _mm_load_si128(&v35);
    v17 = _mm_load_si128(&v39[1]);
    v18 = _mm_load_si128(&v36);
    v45[2] = si128;
    v19 = _mm_load_si128(&v37);
    v31[1] = v17;
    v20 = _mm_load_si128(&v40);
    v45[3] = v11;
    v32 = v20;
    v21 = _mm_load_si128(&v41);
    v45[4] = v12;
    v33 = v21;
    v22 = _mm_load_si128(&v42);
    v45[5] = v14;
    v34 = v22;
    v23 = _mm_load_si128(&v43);
    v45[6] = v15;
    v45[7] = v16;
    v45[8] = v18;
    v45[9] = v19;
    v35 = v23;
    v24 = _mm_load_si128(&v44);
    v38 = v9;
    v36 = v24;
    v25 = _mm_load_si128(v45);
    v39[0] = si128;
    v37 = v25;
    v39[1] = v11;
    v40 = v12;
    v41 = v14;
    v42 = v15;
    v43 = v16;
    v44 = v18;
    v45[0] = v19;
  }
  clear_tinfo_t();
  if ( v39[1].m128i_i64[1] )
  {
    v40.m128i_i64[0] = 0;
    qfree();
  }
  if ( v39[0].m128i_i64[0] )
  {
    v39[0].m128i_i64[1] = 0;
    qfree();
  }
  if ( tinfo_udt_member == -1
    || (v30.m128i_i8[8] & 7) != 0
    || (v30.m128i_i8[0] & 7) != 0
    || (data_value = get_data_value(), !(_BYTE)data_value) )
  {
    data_value = 0;
  }
  else if ( a5 )
  {
    copy_tinfo_t();
  }
  clear_tinfo_t();
  if ( v31[1].m128i_i64[1] )
  {
    v32.m128i_i64[0] = 0;
    qfree();
  }
  if ( v31[0].m128i_i64[0] )
  {
    v31[0].m128i_i64[1] = 0;
    qfree();
  }
  return data_value;
}

