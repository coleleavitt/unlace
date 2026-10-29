__int64 __fastcall sub_6BE0(_QWORD *a1)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  __m128i *v7; // rsi
  int v8; // edx
  __m128i *v9; // rsi
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __m128i si128; // xmm0
  int v17; // edx
  __m128i *v18; // rsi
  __int64 v19; // rsi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdi
  __m128i *v24; // rsi
  int v25; // edx
  __m128i *v26; // rsi
  __int64 v27; // rsi
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdi
  __m128i *v32; // rsi
  int v33; // edx
  __m128i *v34; // rsi
  __int64 v35; // rsi
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdi
  __m128i *v40; // rsi
  int v41; // edx
  __m128i *v42; // rsi
  int v46; // [rsp+4h] [rbp-6Ch] BYREF
  int v47; // [rsp+8h] [rbp-68h] BYREF
  int v48; // [rsp+Ch] [rbp-64h] BYREF
  int v49; // [rsp+10h] [rbp-60h] BYREF
  int v50; // [rsp+14h] [rbp-5Ch] BYREF
  __m128i *v51; // [rsp+18h] [rbp-58h] BYREF
  __int128 v52; // [rsp+20h] [rbp-50h]
  __int64 v53; // [rsp+38h] [rbp-38h] BYREF
  __int128 v54; // [rsp+40h] [rbp-30h]
  unsigned __int64 v55; // [rsp+50h] [rbp-20h]

  v1 = a1[1];
  v55 = __readfsqword(0x28u);
  v52 = 0;
  v51 = nullptr;
  v3 = v1 + a1[3];
  v4 = a1[4] + v1;
  if ( v3 >= v4 || (v5 = sub_E440(v3, v4, &v46)) == 0 )
    sub_3890((__int64)"dylink section: couldn't read memory size at 0x%llx\n", a1[5]);
  v6 = a1[3];
  a1[5] = v6;
  a1[3] = v5 + v6;
  create_data(v6, 0, v5, -1);
  v7 = v51;
  if ( *((_QWORD *)&v52 + 1) <= 0xCu )
  {
    v51 = (__m128i *)qvector_reserve(&v51, v51, 13, 1);
    v7 = v51;
  }
  *(_QWORD *)&v52 = 13;
  v8 = v46;
  qmemcpy(v7, "memory size ", 12);
  v51->m128i_i8[12] = 0;
  sub_4EE0((__int64 *)&v51, (__int64)"(%u)", v8);
  v9 = (__m128i *)&unk_10F58;
  if ( (_QWORD)v52 )
    v9 = v51;
  set_cmt(a1[5], v9, 0);
  v10 = a1[1];
  v11 = v10 + a1[3];
  v12 = a1[4] + v10;
  if ( v11 >= v12 || (v13 = sub_E440(v11, v12, &v47)) == 0 )
    sub_3890((__int64)"dylink section: couldn't read memory alignment at 0x%llx\n", a1[5]);
  v14 = a1[3];
  a1[5] = v14;
  a1[3] = v13 + v14;
  create_data(v14, 0, v13, -1);
  v15 = (__int64)v51;
  if ( *((_QWORD *)&v52 + 1) <= 0x11u )
  {
    v51 = (__m128i *)qvector_reserve(&v51, v51, 18, 1);
    v15 = (__int64)v51;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_F330);
  v17 = v47;
  *(_BYTE *)(v15 + 16) = 32;
  *(_QWORD *)&v52 = 18;
  *(__m128i *)v15 = si128;
  v51[1].m128i_i8[1] = 0;
  sub_4EE0((__int64 *)&v51, (__int64)"(%u)", v17);
  v18 = (__m128i *)&unk_10F58;
  if ( (_QWORD)v52 )
    v18 = v51;
  set_cmt(a1[5], v18, 0);
  v19 = a1[1];
  v20 = v19 + a1[3];
  v21 = a1[4] + v19;
  if ( v20 >= v21 || (v22 = sub_E440(v20, v21, &v48)) == 0 )
    sub_3890((__int64)"dylink section: couldn't read table size at 0x%llx\n", a1[5]);
  v23 = a1[3];
  a1[5] = v23;
  a1[3] = v22 + v23;
  create_data(v23, 0, v22, -1);
  v24 = v51;
  if ( *((_QWORD *)&v52 + 1) <= 0xBu )
  {
    v51 = (__m128i *)qvector_reserve(&v51, v51, 12, 1);
    v24 = v51;
  }
  *(_QWORD *)&v52 = 12;
  v25 = v48;
  qmemcpy(v24, "table size ", 11);
  v51->m128i_i8[11] = 0;
  sub_4EE0((__int64 *)&v51, (__int64)"(%u)", v25);
  v26 = (__m128i *)&unk_10F58;
  if ( (_QWORD)v52 )
    v26 = v51;
  set_cmt(a1[5], v26, 0);
  v27 = a1[1];
  v28 = v27 + a1[3];
  v29 = a1[4] + v27;
  if ( v28 >= v29 || (v30 = sub_E440(v28, v29, &v49)) == 0 )
    sub_3890((__int64)"dylink section: couldn't read table alignment at 0x%llx\n", a1[5]);
  v31 = a1[3];
  a1[5] = v31;
  a1[3] = v30 + v31;
  create_data(v31, 0, v30, -1);
  v32 = v51;
  if ( *((_QWORD *)&v52 + 1) <= 0x10u )
  {
    v51 = (__m128i *)qvector_reserve(&v51, v51, 17, 1);
    v32 = v51;
  }
  v33 = v49;
  *(_QWORD *)&v52 = 17;
  *v32 = _mm_load_si128((const __m128i *)&xmmword_F340);
  v51[1].m128i_i8[0] = 0;
  sub_4EE0((__int64 *)&v51, (__int64)"(%u)", v33);
  v34 = (__m128i *)&unk_10F58;
  if ( (_QWORD)v52 )
    v34 = v51;
  set_cmt(a1[5], v34, 0);
  v35 = a1[1];
  v36 = v35 + a1[3];
  v37 = a1[4] + v35;
  if ( v36 >= v37 || (v38 = sub_E440(v36, v37, &v50)) == 0 )
    sub_3890((__int64)"dylink section: couldn't read needed dynlibs at 0x%llx\n", a1[5]);
  v39 = a1[3];
  a1[5] = v39;
  a1[3] = v38 + v39;
  create_data(v39, 0, v38, -1);
  v40 = v51;
  if ( *((_QWORD *)&v52 + 1) <= 0xEu )
  {
    v51 = (__m128i *)qvector_reserve(&v51, v51, 15, 1);
    v40 = v51;
  }
  *(_QWORD *)&v52 = 15;
  v41 = v50;
  qmemcpy(v40, "dynlibs count ", 14);
  v51->m128i_i8[14] = 0;
  sub_4EE0((__int64 *)&v51, (__int64)"(%u)", v41);
  v42 = (__m128i *)&unk_10F58;
  if ( (_QWORD)v52 )
    v42 = v51;
  set_cmt(a1[5], v42, 0);
  while ( v50-- )
  {
    v53 = 0;
    v54 = 0;
    sub_4200(a1, &v53);
    if ( v53 )
      qfree(v53);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  return 1;
}

