__int64 __fastcall sub_30AA70(__int64 a1, __int64 a2, __int64 *a3, double a4, double a5)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r13
  unsigned __int64 head; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __m128i si128; // xmm1
  __m128i *v18; // rax
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int8 v22; // al
  __int64 v23; // rdx
  unsigned __int8 v24; // al
  __int64 v25; // rax
  __int64 v26; // r15
  int v27; // esi
  __int64 v28; // rbx
  int v30; // r13d
  __int64 v31; // [rsp-8h] [rbp-1A8h]
  __int64 v32; // [rsp+0h] [rbp-1A0h]
  __int64 v33; // [rsp+8h] [rbp-198h]
  int v34; // [rsp+10h] [rbp-190h]
  int v35; // [rsp+10h] [rbp-190h]
  __int64 v36; // [rsp+18h] [rbp-188h]
  __int64 v37; // [rsp+18h] [rbp-188h]
  unsigned int v38; // [rsp+24h] [rbp-17Ch]
  unsigned __int64 v39; // [rsp+28h] [rbp-178h]
  __int64 v40; // [rsp+28h] [rbp-178h]
  unsigned __int64 v41; // [rsp+38h] [rbp-168h]
  __int64 v42[2]; // [rsp+40h] [rbp-160h] BYREF
  __int64 v43; // [rsp+50h] [rbp-150h] BYREF
  __int128 v44; // [rsp+58h] [rbp-148h]
  _BYTE v45[24]; // [rsp+70h] [rbp-130h] BYREF
  char v46; // [rsp+88h] [rbp-118h] BYREF
  char v47[24]; // [rsp+C0h] [rbp-E0h] BYREF
  char v48[24]; // [rsp+110h] [rbp-90h] BYREF
  char v49; // [rsp+160h] [rbp-40h] BYREF
  unsigned __int64 v50; // [rsp+168h] [rbp-38h]

  v7 = a3[5];
  v8 = *(_QWORD *)(a1 + 8);
  v50 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 24);
  v11 = (v7 - v8) / v10;
  head = v8 + v11 * v10;
  if ( head >= v7 )
  {
    v13 = 0;
  }
  else
  {
    v41 = 0;
    do
    {
      ++v41;
      head = next_head();
    }
    while ( head < v7 );
    v13 = v41;
  }
  if ( v7 == head && (v14 = *(_QWORD *)(a1 + 48), v13 < v14) )
  {
    v15 = *(_QWORD *)(a1 + 40);
    v39 = v15 * v14 * ((*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) / *(_QWORD *)(a1 + 24) - v11);
    if ( v15 * v13 )
    {
      v30 = v15 * v13;
      sub_30A0A0(a1, a2, a3[2], *(_DWORD *)(a1 + 32), v15 * v13);
      LODWORD(v39) = v39 - v30;
    }
    v16 = *(_QWORD *)(a2 + 480);
    si128 = _mm_load_si128((const __m128i *)&xmmword_411BF0);
    v38 = *(_DWORD *)(*(_QWORD *)(v16 + 112) + 84LL);
    v18 = (__m128i *)v45;
    do
    {
      v18->m128i_i32[1] = -1;
      v18 += 5;
      v18[-5].m128i_i16[0] = 0;
      v18[-5].m128i_i16[1] = 0;
      v18[-5].m128i_i64[1] = 0;
      v18[-4] = si128;
      v18[-3].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v18[-3] + 8) = 0;
      v18[-2].m128i_i32[2] = 0;
      v18[-1].m128i_i64[0] = 0;
      v18[-1].m128i_i32[2] = 0;
    }
    while ( v18 != (__m128i *)&v49 );
    v19 = v16;
    v33 = v16;
    sub_32AD90(v45, *(unsigned int *)(a1 + 32), v38, v16 + 232, 0.0);
    v20 = *(_QWORD *)(v19 + 112);
    v21 = a3[3];
    v42[0] = 39;
    v36 = v21;
    v34 = v20;
    copy_tinfo_t();
    clear_tinfo_t();
    v22 = getinf();
    sub_11CFD0((__int64)v47, v34, 0, v22, v36, 0);
    v23 = *(_QWORD *)(v33 + 112);
    v37 = a3[3];
    v42[0] = 7;
    v35 = v23;
    copy_tinfo_t();
    clear_tinfo_t();
    v24 = getinf();
    sub_11CFD0((__int64)v48, v35, (int)v39, v24, v37, 0);
    v25 = sub_331530(
            *(_QWORD *)(a2 + 64),
            a3[3],
            (unsigned int)"memset",
            (unsigned int)&v46,
            3,
            (unsigned int)v45,
            1,
            v31,
            (unsigned int)&v49,
            v33,
            v35,
            v37);
    v26 = *(_QWORD *)(v25 + 72);
    v40 = v25;
    *(_DWORD *)(v26 + 284) = 2;
    v42[0] = 0;
    v27 = *(_DWORD *)(a1 + 32);
    v42[1] = 0;
    sub_60440(v42, v27, v38);
    v43 = 0;
    v44 = 0;
    sub_60840((__int64 *)(v26 + 136), v42);
    sub_312B30(v26 + 152, &v43);
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree();
    }
    qfree();
    sub_119E50(v40, (__int64)a3);
    if ( v40 )
    {
      sub_119360(v40 + 64);
      sub_119360(v40 + 48);
      sub_119360(v40 + 32);
      j__qfree();
    }
    v28 = v32;
    do
    {
      v28 -= 80;
      cleanup_argloc();
      if ( *(_QWORD *)(v28 + 32) )
      {
        *(_QWORD *)(v28 + 40) = 0;
        qfree();
      }
      clear_tinfo_t();
      sub_119360(v28);
    }
    while ( (_BYTE *)v28 != v45 );
    return 1;
  }
  else
  {
    sub_69660((__int64)"VDGO: %a: bad call EA (%a) inside duffzero()\n", a4, a5);
    return 0;
  }
}

