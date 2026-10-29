__int64 __fastcall sub_30E1C0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // r12
  __m128i si128; // xmm1
  char *v12; // rbx
  __m128i *v13; // rax
  unsigned __int64 *v14; // rcx
  __int64 v15; // rax
  unsigned __int8 v16; // al
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  unsigned __int64 v28; // [rsp+10h] [rbp-190h]
  __int64 *v29; // [rsp+10h] [rbp-190h]
  unsigned __int64 *v30; // [rsp+18h] [rbp-188h]
  __int64 *v31; // [rsp+18h] [rbp-188h]
  __int64 v32; // [rsp+20h] [rbp-180h]
  __int64 v33; // [rsp+20h] [rbp-180h]
  int v34; // [rsp+30h] [rbp-170h]
  __int64 v36; // [rsp+40h] [rbp-160h] BYREF
  __int64 v37; // [rsp+48h] [rbp-158h]
  __int64 *v38; // [rsp+50h] [rbp-150h] BYREF
  __int128 v39; // [rsp+58h] [rbp-148h]
  _BYTE v40[24]; // [rsp+70h] [rbp-130h] BYREF
  _BYTE v41[56]; // [rsp+88h] [rbp-118h] BYREF
  _BYTE v42[80]; // [rsp+C0h] [rbp-E0h] BYREF
  _BYTE v43[24]; // [rsp+110h] [rbp-90h] BYREF
  char v44; // [rsp+160h] [rbp-40h] BYREF
  unsigned __int64 v45; // [rsp+168h] [rbp-38h]

  v5 = *(_QWORD *)(a3 + 40);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 8);
  v45 = __readfsqword(0x28u);
  v9 = v5 - v7;
  if ( v9 % v6 )
  {
    sub_6D0A0(
      (__int64)"VDGO: %a: bad call inside \"runtime.duffcopy\" (wrong offset %zu - should be a multiple of %zu)\n",
      a4,
      *(_QWORD *)(a3 + 24),
      v9);
    return 0;
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 480);
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v12 = &v44;
    v28 = *(_QWORD *)(a1 + 48) * ((*(_QWORD *)(a1 + 16) - v7) / v6 - v9 / v6);
    v34 = *(_DWORD *)(*(_QWORD *)(v10 + 112) + 84LL);
    v13 = (__m128i *)v40;
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
    while ( v13 != (__m128i *)&v44 );
    sub_32F0D0((__int64)v40, *(_DWORD *)(a1 + 36), v34);
    sub_32F0D0((__int64)v42, *(_DWORD *)(a1 + 32), v34);
    v14 = *(unsigned __int64 **)(v10 + 112);
    v15 = *(_QWORD *)(a3 + 24);
    v36 = 39;
    v32 = v15;
    v30 = v14;
    copy_tinfo_t();
    clear_tinfo_t();
    v16 = getinf();
    sub_120A10((__int64)v43, v30, (int)v28, v16, v32, 0);
    v17 = sub_335B10(*(_QWORD *)(a2 + 64), *(_QWORD *)(a3 + 24), (__int64)"memcpy", (__int64)v41, 3, (__int64)v40, 1);
    v18 = *(_QWORD *)(v17 + 72);
    v36 = 0;
    v33 = v18;
    v37 = 0;
    sub_63E80(&v36, *(_DWORD *)(a1 + 36), v34, 0.0);
    v38 = nullptr;
    v39 = 0;
    v31 = (__int64 *)(v33 + 136);
    sub_64280((__int64 *)(v33 + 136), &v36, 0.0);
    v29 = (__int64 *)(v33 + 152);
    sub_316CB0((__int64 *)(v33 + 152), &v38, v19, v20);
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree((__int64)v38);
    }
    qfree(v36);
    v36 = 0;
    v37 = 0;
    sub_63E80(&v36, *(_DWORD *)(a1 + 32), v34, 0.0);
    v38 = nullptr;
    v39 = 0;
    sub_64280(v31, &v36, 0.0);
    sub_316CB0(v29, &v38, v21, v22);
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree((__int64)v38);
    }
    qfree(v36);
    v23 = *(_DWORD *)(a1 + 40);
    if ( v23 != -1 )
    {
      v36 = 0;
      v37 = 0;
      sub_63E80(&v36, v23, *(_DWORD *)(a1 + 48), 0.0);
      v38 = nullptr;
      v39 = 0;
      sub_64280(v31, &v36, 0.0);
      sub_316CB0(v29, &v38, v24, v25);
      if ( v38 )
      {
        *(_QWORD *)&v39 = 0;
        qfree((__int64)v38);
      }
      qfree(v36);
    }
    *(_DWORD *)(v33 + 284) = 5;
    sub_11D890(v17, a3);
    if ( v17 )
    {
      sub_11CDA0(v17 + 64);
      sub_11CDA0(v17 + 48);
      sub_11CDA0(v17 + 32);
      j__qfree(v17);
    }
    do
    {
      v12 -= 80;
      cleanup_argloc();
      v26 = *((_QWORD *)v12 + 4);
      if ( v26 )
      {
        *((_QWORD *)v12 + 5) = 0;
        qfree(v26);
      }
      clear_tinfo_t();
      sub_11CDA0((__int64)v12);
    }
    while ( v12 != v40 );
    return 1;
  }
}

