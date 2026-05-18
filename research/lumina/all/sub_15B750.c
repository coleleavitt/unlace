unsigned __int64 sub_15B750(const __m128i *a1, _BYTE *a2, ...)
{
  __int64 v3; // rbp
  int v4; // r12d
  __int64 v5; // rax
  _QWORD *v6; // r13
  __m128i v7; // xmm0
  unsigned __int8 *v8; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __m128i v11; // xmm0
  __int64 v12; // rax
  gcc_va_list va; // [rsp+8h] [rbp-180h] BYREF
  __m128i v14; // [rsp+20h] [rbp-168h] BYREF
  __m128i v15; // [rsp+30h] [rbp-158h] BYREF
  __m128i v16; // [rsp+40h] [rbp-148h] BYREF
  __m128i v17; // [rsp+50h] [rbp-138h] BYREF
  __m128i v18; // [rsp+60h] [rbp-128h] BYREF
  __m128i v19; // [rsp+70h] [rbp-118h] BYREF
  __m128i v20; // [rsp+80h] [rbp-108h] BYREF
  __m128i v21; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-E8h]
  unsigned __int64 v23; // [rsp+A8h] [rbp-E0h]
  __int128 v24; // [rsp+E0h] [rbp-A8h]

  va_start(va, a2);
  *(double *)&v24 = va_arg(va, double);
  va_end(va);
  v23 = __readfsqword(0x28u);
  if ( !a1[3].m128i_i32[0] )
  {
    v3 = a1->m128i_i64[0];
    va_start(va, a2);
    v4 = *(_DWORD *)(v3 + 44);
    v5 = sub_DBC60(v3, a2, (__int64)va, *(double *)&v24);
    v6 = (_QWORD *)v5;
    if ( v5 )
    {
      v7 = _mm_loadu_si128(a1 + 17);
      v8 = (unsigned __int8 *)v5;
      v9 = a1[25].m128i_i64[0];
      ++a1[1].m128i_i8[14];
      a1[17].m128i_i64[0] = 0;
      a1[25].m128i_i64[0] = 0;
      v14 = v7;
      v22 = v9;
      v15 = _mm_loadu_si128(a1 + 18);
      v16 = _mm_loadu_si128(a1 + 19);
      v17 = _mm_loadu_si128(a1 + 20);
      v18 = _mm_loadu_si128(a1 + 21);
      v19 = _mm_loadu_si128(a1 + 22);
      v20 = _mm_loadu_si128(a1 + 23);
      v21 = _mm_loadu_si128(a1 + 24);
      memset(
        (void *)((unsigned __int64)&a1[17].m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((unsigned int)a1 - (((_DWORD)a1 + 280) & 0xFFFFFFF8) + 408) >> 3));
      *(_DWORD *)(v3 + 44) |= 2u;
      sub_1565D0((__int64)a1, v8);
      v10 = (_QWORD *)a1->m128i_i64[1];
      if ( v10 )
        sub_C9250(v3, v10);
      a1->m128i_i64[1] = 0;
      *(_DWORD *)(v3 + 44) = v4;
      sub_C9250(v3, v6);
      v11 = _mm_load_si128(&v14);
      v12 = v22;
      --a1[1].m128i_i8[14];
      a1[17] = v11;
      a1[25].m128i_i64[0] = v12;
      a1[18] = _mm_load_si128(&v15);
      a1[19] = _mm_load_si128(&v16);
      a1[20] = _mm_load_si128(&v17);
      a1[21] = _mm_load_si128(&v18);
      a1[22] = _mm_load_si128(&v19);
      a1[23] = _mm_load_si128(&v20);
      a1[24] = _mm_load_si128(&v21);
    }
    else
    {
      if ( !*(_BYTE *)(v3 + 103) )
        a1[1].m128i_i32[2] = 18;
      ++a1[3].m128i_i32[0];
    }
  }
  return __readfsqword(0x28u) ^ v23;
}
