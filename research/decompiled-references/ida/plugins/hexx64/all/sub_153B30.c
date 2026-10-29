__int64 __fastcall sub_153B30(const __m128i *a1, __int64 a2, __int64 a3, __m128i a4, __m128 a5)
{
  __int64 v6; // rbp
  __int64 v8; // r15
  unsigned __int8 *v9; // r12
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // r15d
  __int64 v14; // rdi
  char v15; // al
  __int64 v16; // r9
  __int64 v17; // r9
  unsigned __int8 *v18; // rax
  __m128i si128; // xmm2
  __int64 v20; // r12
  __m128i v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __m128i v25; // xmm0
  char *v26; // r12
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // [rsp+8h] [rbp-180h]
  __m128i v32; // [rsp+10h] [rbp-178h] BYREF
  unsigned __int8 *v33; // [rsp+20h] [rbp-168h]
  __int8 *v34; // [rsp+28h] [rbp-160h]
  __m128i v35; // [rsp+30h] [rbp-158h] BYREF
  unsigned __int8 *v36; // [rsp+40h] [rbp-148h]
  char *v37; // [rsp+48h] [rbp-140h]
  __int64 v38[2]; // [rsp+50h] [rbp-138h] BYREF
  __m128i v39; // [rsp+60h] [rbp-128h] BYREF
  __int64 v40; // [rsp+70h] [rbp-118h]
  __m128i v41; // [rsp+78h] [rbp-110h] BYREF
  int v42; // [rsp+88h] [rbp-100h]
  __int64 v43; // [rsp+90h] [rbp-F8h]
  int v44; // [rsp+98h] [rbp-F0h]
  unsigned __int8 v45[4]; // [rsp+A0h] [rbp-E8h] BYREF
  int v46; // [rsp+A4h] [rbp-E4h]
  __int64 v47; // [rsp+B0h] [rbp-D8h]
  char v48; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-C8h]
  __m128i v50; // [rsp+C8h] [rbp-C0h]
  int v51; // [rsp+E8h] [rbp-A0h]
  unsigned __int8 v52[16]; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v53; // [rsp+100h] [rbp-88h]
  __int64 v54; // [rsp+110h] [rbp-78h]
  __m128i v55; // [rsp+118h] [rbp-70h]
  int v56; // [rsp+138h] [rbp-50h]
  char v57; // [rsp+140h] [rbp-48h] BYREF
  unsigned __int64 v58; // [rsp+148h] [rbp-40h]

  v6 = *(_QWORD *)(a3 + 40);
  v58 = __readfsqword(0x28u);
  if ( *(_DWORD *)v6 == 23 )
  {
    v8 = *(_QWORD *)(a3 + 56);
    if ( *(_DWORD *)v8 != 22 )
      return 0;
  }
  else
  {
    if ( *(_DWORD *)v6 != 22 )
      return 0;
    v8 = *(_QWORD *)(a3 + 56);
    if ( *(_DWORD *)v8 != 23 )
      return 0;
  }
  v9 = (unsigned __int8 *)(v6 + 32);
  v31 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  if ( !(unsigned __int8)sub_12EA80(v31, a1, a2, v6 + 32, a2, v8 + 32, a4, a5, 0) )
    return 0;
  v10 = *(_DWORD *)(v6 + 36);
  v11 = 8 * v10;
  if ( *(_BYTE *)(v6 + 48) == 4
    && (v14 = *(_QWORD *)(v6 + 56), *(_DWORD *)v14 == 13)
    && (v32.m128i_i32[0] = 8 * v10,
        v33 = (unsigned __int8 *)v38,
        v15 = sub_11FD80((char *)(v14 + 32), v38, 0),
        v11 = v32.m128i_i32[0],
        v15)
    && v32.m128i_i32[0] == v38[0] )
  {
    v16 = *(_QWORD *)(v6 + 56);
    v6 = v8;
    v17 = v16 + 48;
  }
  else
  {
    if ( *(_BYTE *)(v8 + 48) != 4 )
      return 0;
    v30 = *(_QWORD *)(v8 + 56);
    if ( *(_DWORD *)v30 != 13 )
      return 0;
    v32.m128i_i32[0] = v11;
    v33 = (unsigned __int8 *)v38;
    if ( !(unsigned __int8)sub_11FD80((char *)(v30 + 32), v38, 0) || v32.m128i_i32[0] != v38[0] )
      return 0;
    v17 = *(_QWORD *)(v8 + 56) + 48LL;
  }
  v35.m128i_i64[0] = v6 + 48;
  v12 = sub_12EA80(v31, a1, a2, v6 + 48, a2, v17, a4, a5, 0);
  if ( !(_BYTE)v12 )
    return 0;
  v36 = (unsigned __int8 *)&v57;
  v18 = v45;
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    *(_OWORD *)(v18 + 40) = 0;
    *(_WORD *)v18 = 0;
    v18 += 80;
    *((_WORD *)v18 - 39) = 0;
    *((_DWORD *)v18 - 19) = -1;
    *((_QWORD *)v18 - 9) = 0;
    *((__m128i *)v18 - 4) = si128;
    *((_QWORD *)v18 - 6) = 0;
    *((_DWORD *)v18 - 6) = 0;
    *((_QWORD *)v18 - 2) = 0;
    *((_DWORD *)v18 - 2) = 0;
  }
  while ( v36 != v18 );
  v32.m128i_i64[0] = (__int64)v52;
  sub_123A40((__int64)v33, v9, 0, 0);
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v39 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v41 = 0;
  sub_125180(v45, v33);
  v34 = &v39.m128i_i8[8];
  v47 = v39.m128i_i64[0];
  v37 = &v48;
  copy_tinfo_t();
  v20 = v40;
  v40 = 0;
  v21 = _mm_loadu_si128(&v41);
  v41 = 0;
  if ( v49 )
  {
    v32 = v21;
    v50.m128i_i64[0] = 0;
    qfree(v49);
    v21 = _mm_load_si128(&v32);
  }
  v49 = v20;
  v50 = v21;
  copy_argloc();
  v51 = v44;
  cleanup_argloc();
  if ( v40 )
  {
    v41.m128i_i64[0] = 0;
    qfree(v40);
  }
  clear_tinfo_t();
  sub_11CDA0((__int64)v33);
  v32.m128i_i64[0] = (__int64)v52;
  sub_32C270(v33, v31, v46);
  copy_tinfo_t();
  clear_tinfo_t();
  v32.m128i_i64[0] = (__int64)v52;
  sub_123A40((__int64)v33, (unsigned __int8 *)v35.m128i_i64[0], v22, v23);
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v32.m128i_i64[0] = (__int64)v52;
  v39 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v41 = 0;
  sub_125180(v52, v33);
  v53 = v39.m128i_i64[0];
  copy_tinfo_t();
  v24 = v40;
  v40 = 0;
  v25 = _mm_loadu_si128(&v41);
  v41 = 0;
  if ( v54 )
  {
    v37 = (char *)v24;
    v35 = v25;
    v55.m128i_i64[0] = 0;
    qfree(v54);
    v24 = (__int64)v37;
    v25 = _mm_load_si128(&v35);
  }
  v54 = v24;
  v55 = v25;
  copy_argloc();
  v56 = v44;
  cleanup_argloc();
  if ( v40 )
  {
    v41.m128i_i64[0] = 0;
    qfree(v40);
  }
  clear_tinfo_t();
  v26 = (char *)v33;
  sub_11CDA0((__int64)v33);
  v38[0] = 50;
  copy_tinfo_t();
  clear_tinfo_t();
  v27 = sub_1D6BA0(a1[4].m128i_i64[0], *(_QWORD *)(a3 + 24), *(_DWORD *)v6 == 23, (int)v45);
  *(_DWORD *)a3 = 4;
  v38[1] = v27;
  LODWORD(v38[0]) = 4;
  HIDWORD(v38[0]) = v46;
  sub_11CA10((char *)(a3 + 32), v26);
  sub_11CDA0(a3 + 48);
  sub_11CDA0((__int64)v26);
  v28 = (__int64)v36;
  do
  {
    v28 -= 80;
    cleanup_argloc();
    v29 = *(_QWORD *)(v28 + 32);
    if ( v29 )
    {
      *(_QWORD *)(v28 + 40) = 0;
      qfree(v29);
    }
    clear_tinfo_t();
    sub_11CDA0(v28);
  }
  while ( (unsigned __int8 *)v28 != v45 );
  return v12;
}

