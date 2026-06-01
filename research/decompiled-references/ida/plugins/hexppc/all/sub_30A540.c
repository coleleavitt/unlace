__int64 __fastcall sub_30A540(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // r12
  __m128i si128; // xmm1
  char *v12; // rbx
  __m128i *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int8 v16; // al
  __int64 v17; // r14
  __int64 v18; // rax
  int v19; // esi
  __int64 v21; // [rsp-8h] [rbp-1A8h]
  int v22; // [rsp+8h] [rbp-198h]
  unsigned __int64 v23; // [rsp+10h] [rbp-190h]
  __int64 v24; // [rsp+10h] [rbp-190h]
  int v25; // [rsp+18h] [rbp-188h]
  __int64 *v26; // [rsp+18h] [rbp-188h]
  __int64 v27; // [rsp+20h] [rbp-180h]
  __int64 v28; // [rsp+20h] [rbp-180h]
  unsigned int v29; // [rsp+30h] [rbp-170h]
  __int64 v31; // [rsp+40h] [rbp-160h] BYREF
  __int64 v32; // [rsp+48h] [rbp-158h]
  __int64 v33; // [rsp+50h] [rbp-150h] BYREF
  __int128 v34; // [rsp+58h] [rbp-148h]
  _BYTE v35[24]; // [rsp+70h] [rbp-130h] BYREF
  char v36; // [rsp+88h] [rbp-118h] BYREF
  _BYTE v37[80]; // [rsp+C0h] [rbp-E0h] BYREF
  _BYTE v38[24]; // [rsp+110h] [rbp-90h] BYREF
  char v39; // [rsp+160h] [rbp-40h] BYREF
  unsigned __int64 v40; // [rsp+168h] [rbp-38h]

  v5 = *(_QWORD *)(a3 + 40);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 8);
  v40 = __readfsqword(0x28u);
  v9 = v5 - v7;
  if ( v9 % v6 )
  {
    sub_69660(
      (__int64)"VDGO: %a: bad call inside \"runtime.duffcopy\" (wrong offset %zu - should be a multiple of %zu)\n",
      a4,
      *(_QWORD *)(a3 + 24),
      v9);
    return 0;
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 480);
    si128 = _mm_load_si128((const __m128i *)&xmmword_411BF0);
    v12 = &v39;
    v23 = *(_QWORD *)(a1 + 48) * ((*(_QWORD *)(a1 + 16) - v7) / v6 - v9 / v6);
    v29 = *(_DWORD *)(*(_QWORD *)(v10 + 112) + 84LL);
    v13 = (__m128i *)v35;
    do
    {
      v13->m128i_i32[1] = -1;
      v13 += 5;
      v13[-5].m128i_i16[0] = 0;
      v13[-5].m128i_i16[1] = 0;
      v13[-5].m128i_i64[1] = 0;
      v13[-4] = si128;
      v13[-3].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v13[-3] + 8) = 0;
      v13[-2].m128i_i32[2] = 0;
      v13[-1].m128i_i64[0] = 0;
      v13[-1].m128i_i32[2] = 0;
    }
    while ( v13 != (__m128i *)&v39 );
    sub_32AD90(v35, *(unsigned int *)(a1 + 36), v29, v10 + 232, 0.0);
    sub_32AD90(v37, *(unsigned int *)(a1 + 32), v29, v10 + 240, 0.0);
    v14 = *(_QWORD *)(v10 + 112);
    v15 = *(_QWORD *)(a3 + 24);
    v31 = 39;
    v27 = v15;
    v25 = v14;
    copy_tinfo_t();
    clear_tinfo_t();
    v16 = getinf();
    sub_11CFD0((__int64)v38, v25, (int)v23, v16, v27, 0);
    v17 = sub_331530(
            *(_QWORD *)(a2 + 64),
            *(_QWORD *)(a3 + 24),
            (unsigned int)"memcpy",
            (unsigned int)&v36,
            3,
            (unsigned int)v35,
            1,
            v21,
            (unsigned int)v37,
            v22,
            v23,
            v25);
    v18 = *(_QWORD *)(v17 + 72);
    v31 = 0;
    v28 = v18;
    v32 = 0;
    sub_60440(&v31, *(_DWORD *)(a1 + 36), v29);
    v33 = 0;
    v34 = 0;
    v26 = (__int64 *)(v28 + 136);
    sub_60840((__int64 *)(v28 + 136), &v31);
    v24 = v28 + 152;
    sub_312B30(v28 + 152, &v33);
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree();
    }
    qfree();
    v31 = 0;
    v32 = 0;
    sub_60440(&v31, *(_DWORD *)(a1 + 32), v29);
    v33 = 0;
    v34 = 0;
    sub_60840(v26, &v31);
    sub_312B30(v24, &v33);
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree();
    }
    qfree();
    v19 = *(_DWORD *)(a1 + 40);
    if ( v19 != -1 )
    {
      v31 = 0;
      v32 = 0;
      sub_60440(&v31, v19, *(_DWORD *)(a1 + 48));
      v33 = 0;
      v34 = 0;
      sub_60840(v26, &v31);
      sub_312B30(v24, &v33);
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree();
      }
      qfree();
    }
    *(_DWORD *)(v28 + 284) = 5;
    sub_119E50(v17, a3);
    if ( v17 )
    {
      sub_119360(v17 + 64);
      sub_119360(v17 + 48);
      sub_119360(v17 + 32);
      j__qfree();
    }
    do
    {
      v12 -= 80;
      cleanup_argloc();
      if ( *((_QWORD *)v12 + 4) )
      {
        *((_QWORD *)v12 + 5) = 0;
        qfree();
      }
      clear_tinfo_t();
      sub_119360((__int64)v12);
    }
    while ( v12 != v35 );
    return 1;
  }
}

