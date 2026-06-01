__int64 __fastcall sub_3FDA40(__int64 a1, int a2, int a3)
{
  __m128 *v3; // rax
  char *v5; // rbx
  __m128 si128; // xmm1
  __int16 v8; // ax
  unsigned int v9; // r15d
  unsigned __int8 v11; // al
  int tinfo_size; // eax
  __int64 v13; // rax
  int v14; // eax
  const char *v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // [rsp+8h] [rbp-218h]
  __int64 v21; // [rsp+10h] [rbp-210h]
  __m128i v22; // [rsp+20h] [rbp-200h] BYREF
  __int64 *v23; // [rsp+30h] [rbp-1F0h] BYREF
  __int128 v24; // [rsp+38h] [rbp-1E8h]
  _BYTE v25[24]; // [rsp+50h] [rbp-1D0h] BYREF
  _BYTE v26[84]; // [rsp+A0h] [rbp-180h] BYREF
  int v27; // [rsp+F4h] [rbp-12Ch]
  __int64 v28; // [rsp+F8h] [rbp-128h]
  _BYTE v29[160]; // [rsp+140h] [rbp-E0h] BYREF
  char v30; // [rsp+1E0h] [rbp-40h] BYREF
  unsigned __int64 v31; // [rsp+1E8h] [rbp-38h]

  v3 = (__m128 *)v25;
  v5 = &v30;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v31 = __readfsqword(0x28u);
  do
  {
    v3->m128_i32[1] = -1;
    v3 += 5;
    v3[-5].m128_i16[0] = 0;
    v3[-5].m128_i16[1] = 0;
    v3[-5].m128_u64[1] = 0;
    v3[-4] = si128;
    v3[-3].m128_u64[0] = 0;
    *(__m128 *)((char *)&v3[-3] + 8) = 0;
    v3[-2].m128_i32[2] = 0;
    v3[-1].m128_u64[0] = 0;
    v3[-1].m128_i32[2] = 0;
  }
  while ( v3 != (__m128 *)&v30 );
  v8 = *(_WORD *)(a1 + 48);
  if ( v8 == 30 )
  {
    if ( *(char *)(a1 + 54) < 0 )
    {
      v9 = 0;
      if ( (unsigned __int8)(*(_BYTE *)(a1 + 69) - 16) > 1u )
        goto LABEL_6;
      goto LABEL_16;
    }
LABEL_5:
    v9 = 0;
    goto LABEL_6;
  }
  if ( v8 != 32 || *(char *)(a1 + 54) >= 0 )
    goto LABEL_5;
  v9 = 0;
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 69) - 16) > 1u )
    goto LABEL_6;
  if ( (*(_QWORD *)(a1 + 64) & 0xFFFF00000000FF00LL) == 0xA2000000000100LL )
  {
    sub_3FD660(a1, a2, a3, 8);
    goto LABEL_24;
  }
LABEL_16:
  v9 = 0;
  if ( (*(_QWORD *)(a1 + 64) & 0xFFFF00000000FF00LL) != 0xA2000000000300LL )
    goto LABEL_6;
  v21 = *(_QWORD *)(a1 + 40);
  v20 = *(_QWORD *)(a1 + 832);
  copy_tinfo_t();
  clear_tinfo_t();
  v11 = getinf();
  sub_120450((__int64)v25, v20, 0, v11, v21, 0);
  v22.m128i_i64[0] = 39;
  tinfo_size = get_tinfo_size();
  sub_32F3F0((__int64)v26, a2, tinfo_size);
  clear_tinfo_t();
  v13 = sub_3FB1A0(a1);
  v26[80] = 4;
  v28 = v13;
  v27 = *(_DWORD *)(v13 + 68);
  copy_tinfo_t();
  v14 = get_tinfo_size();
  sub_32F3F0((__int64)v29, a3, v14);
  v15 = "svst1_hor_za8";
  if ( *(_WORD *)(a1 + 48) == 30 )
    v15 = "svld1_hor_za8";
  v16 = *(_QWORD *)(a1 + 8);
  v17 = *(_QWORD *)(a1 + 40);
  v22.m128i_i64[0] = 1;
  v18 = sub_335C70(v16, v17, (__int64)v15, &v22, 4, (__int64)v25, 0);
  clear_tinfo_t();
  v19 = *(_QWORD *)(v18 + 72);
  *(_DWORD *)(v19 + 280) |= 4u;
  if ( *(_WORD *)(a1 + 48) == 30 )
  {
    v22 = _mm_load_si128((const __m128i *)&xmmword_41F900);
    sub_316F70((__int64 *)(v19 + 216), &v22, *(double *)v22.m128i_i64, si128);
  }
  else
  {
    v22 = 0u;
    v23 = nullptr;
    v24 = 0;
    v23 = (__int64 *)qvector_reserve();
    *(__m128i *)&v23[2 * v24] = _mm_load_si128((const __m128i *)&xmmword_41F900);
    *(_QWORD *)&v24 = v24 + 1;
    sub_63C80((__int64 *)(v19 + 136), v22.m128i_i64);
    sub_317070((__int64 *)(v19 + 152), &v23);
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree();
    }
    qfree();
  }
  sub_B4CD0(*(_QWORD **)(a1 + 16), v18);
LABEL_24:
  v9 = 1;
  do
  {
LABEL_6:
    v5 -= 80;
    cleanup_argloc();
    if ( *((_QWORD *)v5 + 4) )
    {
      *((_QWORD *)v5 + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11C7E0((__int64)v5);
  }
  while ( v5 != v25 );
  return v9;
}

