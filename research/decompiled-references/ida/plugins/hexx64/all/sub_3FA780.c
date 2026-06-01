unsigned __int64 __fastcall sub_3FA780(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __m128i a5,
        __int64 a6,
        unsigned int a7,
        __m128 a8,
        __m128 a9)
{
  unsigned int v10; // r13d
  unsigned __int8 v12; // al
  __int64 v13; // rdx
  __m128i *v14; // rax
  __m128 si128; // xmm1
  __int64 v16; // rsi
  __int64 v17; // rsi
  unsigned int v18; // edx
  double v19; // xmm0_8
  __int64 v20; // rax
  char *v21; // r15
  __int64 v22; // rdi
  __int64 v24; // [rsp+18h] [rbp-138h]
  __int128 v26; // [rsp+50h] [rbp-100h] BYREF
  __int64 v27; // [rsp+60h] [rbp-F0h]
  int v28; // [rsp+68h] [rbp-E8h]
  __int16 v29; // [rsp+6Ch] [rbp-E4h]
  _BYTE v30[4]; // [rsp+70h] [rbp-E0h] BYREF
  int v31; // [rsp+74h] [rbp-DCh]
  int v32; // [rsp+78h] [rbp-D8h]
  char v33; // [rsp+C0h] [rbp-90h]
  double v34; // [rsp+C4h] [rbp-8Ch]
  char v35; // [rsp+110h] [rbp-40h] BYREF
  unsigned __int64 v36; // [rsp+118h] [rbp-38h]

  v10 = a7;
  v36 = __readfsqword(0x28u);
  if ( a7 == -1 )
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 468LL);
  if ( !*(_BYTE *)(a4 + 16) )
    sub_3FA580((int *)a4, 0, 0, a5, a8, a9);
  v12 = sub_3EE260(*(_QWORD *)a4 + 24LL);
  v13 = 2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    v13 = 7;
  if ( v12 < (unsigned __int8)v13 )
  {
    sub_1D6840(a1, v12, v13, v10, v10, 0, a5, a8, a9);
    if ( a3 >= 0 )
      goto LABEL_9;
LABEL_21:
    copy_tinfo_t();
    goto LABEL_9;
  }
  if ( a3 < 0 )
    goto LABEL_21;
LABEL_9:
  v24 = a2 + 24;
  v26 = 0;
  copy_tinfo_t();
  v27 = 0;
  copy_tinfo_t();
  v28 = 0;
  v29 = 0;
  clear_tinfo_t();
  clear_tinfo_t();
  copy_tinfo_t();
  create_tinfo();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  if ( !*(_BYTE *)(*(_QWORD *)a4 + 56LL) || *(_WORD *)(a1 + 48) == 92 )
  {
    *(_BYTE *)a2 = 1;
    *(_DWORD *)(a2 + 8) = v10;
  }
  else
  {
    sub_3EFB80(
      a1,
      (unsigned __int8 *)(*(_QWORD *)a4 + 40LL * *(int *)(a4 + 8) + 64),
      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL),
      0.0);
    v14 = (__m128i *)v30;
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_4247F0);
    do
    {
      v14[1] = (__m128i)si128;
      v14->m128i_i16[0] = 0;
      v14 += 5;
      v14[-5].m128i_i16[1] = 0;
      v14[-5].m128i_i32[1] = -1;
      v14[-5].m128i_i64[1] = 0;
      v14[-3].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v14[-3] + 8) = 0;
      v14[-2].m128i_i32[2] = 0;
      v14[-1].m128i_i64[0] = 0;
      v14[-1].m128i_i32[2] = 0;
    }
    while ( v14 != (__m128i *)&v35 );
    v16 = *(_QWORD *)(a1 + 832);
    v30[0] = 1;
    v31 = 2;
    v32 = *(_DWORD *)(v16 + 472);
    sub_32C270(&v26, v16, 2);
    copy_tinfo_t();
    clear_tinfo_t();
    v17 = *(_QWORD *)(a1 + 832);
    v33 = 1;
    v18 = *(_DWORD *)(v17 + 84);
    *(_QWORD *)&v19 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), _mm_cvtsi32_si128(v10)).m128i_u64[0];
    v34 = v19;
    sub_32C270(&v26, v17, v18);
    copy_tinfo_t();
    clear_tinfo_t();
    v20 = sub_335B10(
            *(_QWORD *)(a1 + 8),
            *(_QWORD *)(*(_QWORD *)a4 + 40LL),
            (__int64)"MK_FP",
            v24,
            2,
            (__int64)v30,
            v19,
            si128,
            0);
    *(_BYTE *)a2 = 4;
    *(_QWORD *)(a2 + 8) = v20;
    v21 = &v35;
    do
    {
      v21 -= 80;
      cleanup_argloc();
      v22 = *((_QWORD *)v21 + 4);
      if ( v22 )
      {
        *((_QWORD *)v21 + 5) = 0;
        qfree(v22);
      }
      clear_tinfo_t();
      sub_11CDA0((__int64)v21);
    }
    while ( v21 != v30 );
  }
  *(_DWORD *)(a2 + 4) = get_tinfo_size();
  clear_tinfo_t();
  return v36 - __readfsqword(0x28u);
}

