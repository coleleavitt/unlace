__int64 __fastcall sub_30E6F0(__int64 a1, __int64 a2, __int64 *a3, double a4, double a5)
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
  unsigned __int64 *v20; // rdx
  __int64 v21; // rax
  unsigned __int8 v22; // al
  unsigned __int64 *v23; // rdx
  unsigned __int8 v24; // al
  __int64 v25; // rax
  __int64 v26; // r15
  int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // rcx
  char *v30; // rbx
  __int64 v31; // rdi
  int v33; // r13d
  __int64 v34; // [rsp+8h] [rbp-198h]
  unsigned __int64 *v35; // [rsp+10h] [rbp-190h]
  unsigned __int64 *v36; // [rsp+10h] [rbp-190h]
  __int64 v37; // [rsp+18h] [rbp-188h]
  __int64 v38; // [rsp+18h] [rbp-188h]
  int v39; // [rsp+24h] [rbp-17Ch]
  unsigned __int64 v40; // [rsp+28h] [rbp-178h]
  __int64 v41; // [rsp+28h] [rbp-178h]
  unsigned __int64 v42; // [rsp+38h] [rbp-168h]
  __int64 v43[2]; // [rsp+40h] [rbp-160h] BYREF
  __int64 *v44; // [rsp+50h] [rbp-150h] BYREF
  __int128 v45; // [rsp+58h] [rbp-148h]
  _BYTE v46[24]; // [rsp+70h] [rbp-130h] BYREF
  char v47[56]; // [rsp+88h] [rbp-118h] BYREF
  char v48[24]; // [rsp+C0h] [rbp-E0h] BYREF
  char v49[24]; // [rsp+110h] [rbp-90h] BYREF
  char v50; // [rsp+160h] [rbp-40h] BYREF
  unsigned __int64 v51; // [rsp+168h] [rbp-38h]

  v7 = a3[5];
  v8 = *(_QWORD *)(a1 + 8);
  v51 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 24);
  v11 = (v7 - v8) / v10;
  head = v8 + v11 * v10;
  if ( head >= v7 )
  {
    v13 = 0;
  }
  else
  {
    v42 = 0;
    do
    {
      ++v42;
      head = next_head();
    }
    while ( head < v7 );
    v13 = v42;
  }
  if ( v7 == head && (v14 = *(_QWORD *)(a1 + 48), v13 < v14) )
  {
    v15 = *(_QWORD *)(a1 + 40);
    v40 = v15 * v14 * ((*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) / *(_QWORD *)(a1 + 24) - v11);
    if ( v15 * v13 )
    {
      v33 = v15 * v13;
      sub_30DD20(a1, a2, a3[2], *(unsigned int *)(a1 + 32), v15 * v13);
      LODWORD(v40) = v40 - v33;
    }
    v16 = *(_QWORD *)(a2 + 480);
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v39 = *(_DWORD *)(*(_QWORD *)(v16 + 112) + 84LL);
    v18 = (__m128i *)v46;
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
    while ( v18 != (__m128i *)&v50 );
    v19 = v16;
    v34 = v16;
    sub_32F0D0((__int64)v46, *(_DWORD *)(a1 + 32), v39);
    v20 = *(unsigned __int64 **)(v19 + 112);
    v21 = a3[3];
    v43[0] = 39;
    v37 = v21;
    v35 = v20;
    copy_tinfo_t();
    clear_tinfo_t();
    v22 = getinf();
    sub_120A10((__int64)v48, v35, 0, v22, v37, 0);
    v23 = *(unsigned __int64 **)(v34 + 112);
    v38 = a3[3];
    v43[0] = 7;
    v36 = v23;
    copy_tinfo_t();
    clear_tinfo_t();
    v24 = getinf();
    sub_120A10((__int64)v49, v36, (int)v40, v24, v38, 0);
    v25 = sub_335B10(*(_QWORD *)(a2 + 64), a3[3], (__int64)"memset", (__int64)v47, 3, (__int64)v46, 1);
    v26 = *(_QWORD *)(v25 + 72);
    v41 = v25;
    *(_DWORD *)(v26 + 284) = 2;
    v43[0] = 0;
    v27 = *(_DWORD *)(a1 + 32);
    v43[1] = 0;
    sub_63E80(v43, v27, v39, 0.0);
    v44 = nullptr;
    v45 = 0;
    sub_64280((__int64 *)(v26 + 136), v43, 0.0);
    sub_316CB0((__int64 *)(v26 + 152), &v44, v28, v29);
    if ( v44 )
    {
      *(_QWORD *)&v45 = 0;
      qfree((__int64)v44);
    }
    qfree(v43[0]);
    sub_11D890(v41, (__int64)a3);
    if ( v41 )
    {
      sub_11CDA0(v41 + 64);
      sub_11CDA0(v41 + 48);
      sub_11CDA0(v41 + 32);
      j__qfree(v41);
    }
    v30 = &v50;
    do
    {
      v30 -= 80;
      cleanup_argloc();
      v31 = *((_QWORD *)v30 + 4);
      if ( v31 )
      {
        *((_QWORD *)v30 + 5) = 0;
        qfree(v31);
      }
      clear_tinfo_t();
      sub_11CDA0((__int64)v30);
    }
    while ( v30 != v46 );
    return 1;
  }
  else
  {
    sub_6D0A0((__int64)"VDGO: %a: bad call EA (%a) inside duffzero()\n", a4, a5);
    return 0;
  }
}

