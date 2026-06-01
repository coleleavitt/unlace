__int64 __fastcall sub_153570(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v6; // r15
  unsigned __int8 *v7; // r12
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // r15d
  __int64 v12; // rdi
  char v13; // al
  __int64 v14; // r9
  __int64 v15; // r9
  char *v16; // rax
  __m128i si128; // xmm2
  _BYTE *v18; // r12
  __m128i v19; // xmm0
  char *v20; // rax
  __m128i v21; // xmm0
  char *v22; // r12
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // [rsp+8h] [rbp-180h]
  __m128i v27; // [rsp+10h] [rbp-178h] BYREF
  unsigned __int8 *v28; // [rsp+20h] [rbp-168h]
  __int8 *v29; // [rsp+28h] [rbp-160h]
  __m128i v30; // [rsp+30h] [rbp-158h] BYREF
  char *v31; // [rsp+40h] [rbp-148h]
  char *v32; // [rsp+48h] [rbp-140h]
  _QWORD v33[2]; // [rsp+50h] [rbp-138h] BYREF
  __m128i v34; // [rsp+60h] [rbp-128h] BYREF
  _BYTE *v35; // [rsp+70h] [rbp-118h]
  __m128i v36; // [rsp+78h] [rbp-110h] BYREF
  int v37; // [rsp+88h] [rbp-100h]
  __int64 v38; // [rsp+90h] [rbp-F8h]
  int v39; // [rsp+98h] [rbp-F0h]
  _BYTE v40[4]; // [rsp+A0h] [rbp-E8h] BYREF
  unsigned int v41; // [rsp+A4h] [rbp-E4h]
  __int64 v42; // [rsp+B0h] [rbp-D8h]
  char v43; // [rsp+B8h] [rbp-D0h] BYREF
  _BYTE *v44; // [rsp+C0h] [rbp-C8h]
  __m128i v45; // [rsp+C8h] [rbp-C0h]
  int v46; // [rsp+E8h] [rbp-A0h]
  _BYTE v47[16]; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v48; // [rsp+100h] [rbp-88h]
  char *v49; // [rsp+110h] [rbp-78h]
  __m128i v50; // [rsp+118h] [rbp-70h]
  int v51; // [rsp+138h] [rbp-50h]
  char v52; // [rsp+140h] [rbp-48h] BYREF
  unsigned __int64 v53; // [rsp+148h] [rbp-40h]

  v4 = *(_QWORD *)(a3 + 40);
  v53 = __readfsqword(0x28u);
  if ( *(_DWORD *)v4 == 23 )
  {
    v6 = *(_QWORD *)(a3 + 56);
    if ( *(_DWORD *)v6 != 22 )
      return 0;
  }
  else
  {
    if ( *(_DWORD *)v4 != 22 )
      return 0;
    v6 = *(_QWORD *)(a3 + 56);
    if ( *(_DWORD *)v6 != 23 )
      return 0;
  }
  v7 = (unsigned __int8 *)(v4 + 32);
  v26 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  if ( !(unsigned __int8)sub_12E4C0(v26, a1, a2, v4 + 32, a2, v6 + 32, 0) )
    return 0;
  v8 = *(_DWORD *)(v4 + 36);
  v9 = 8 * v8;
  if ( *(_BYTE *)(v4 + 48) == 4
    && (v12 = *(_QWORD *)(v4 + 56), *(_DWORD *)v12 == 13)
    && (v27.m128i_i32[0] = 8 * v8,
        v28 = (unsigned __int8 *)v33,
        v13 = sub_11F7C0((char *)(v12 + 32), v33, 0),
        v9 = v27.m128i_i32[0],
        v13)
    && v27.m128i_i32[0] == v33[0] )
  {
    v14 = *(_QWORD *)(v4 + 56);
    v4 = v6;
    v15 = v14 + 48;
  }
  else
  {
    if ( *(_BYTE *)(v6 + 48) != 4 )
      return 0;
    v25 = *(_QWORD *)(v6 + 56);
    if ( *(_DWORD *)v25 != 13 )
      return 0;
    v27.m128i_i32[0] = v9;
    v28 = (unsigned __int8 *)v33;
    if ( !(unsigned __int8)sub_11F7C0((char *)(v25 + 32), v33, 0) || v27.m128i_i32[0] != v33[0] )
      return 0;
    v15 = *(_QWORD *)(v6 + 56) + 48LL;
  }
  v30.m128i_i64[0] = v4 + 48;
  v10 = sub_12E4C0(v26, a1, a2, v4 + 48, a2, v15, 0);
  if ( !(_BYTE)v10 )
    return 0;
  v31 = &v52;
  v16 = v40;
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
    *(_OWORD *)(v16 + 40) = 0;
    *(_WORD *)v16 = 0;
    v16 += 80;
    *((_WORD *)v16 - 39) = 0;
    *((_DWORD *)v16 - 19) = -1;
    *((_QWORD *)v16 - 9) = 0;
    *((__m128i *)v16 - 4) = si128;
    *((_QWORD *)v16 - 6) = 0;
    *((_DWORD *)v16 - 6) = 0;
    *((_QWORD *)v16 - 2) = 0;
    *((_DWORD *)v16 - 2) = 0;
  }
  while ( v31 != v16 );
  v27.m128i_i64[0] = (__int64)v47;
  sub_123480((__int64)v28, v7);
  v35 = nullptr;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v34 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v36 = 0;
  sub_124BC0((__int64)v40, v28);
  v29 = &v34.m128i_i8[8];
  v42 = v34.m128i_i64[0];
  v32 = &v43;
  copy_tinfo_t();
  v18 = v35;
  v35 = nullptr;
  v19 = _mm_loadu_si128(&v36);
  v36 = 0;
  if ( v44 )
  {
    v27 = v19;
    v45.m128i_i64[0] = 0;
    qfree();
    v19 = _mm_load_si128(&v27);
  }
  v44 = v18;
  v45 = v19;
  copy_argloc();
  v46 = v39;
  cleanup_argloc();
  if ( v35 )
  {
    v36.m128i_i64[0] = 0;
    qfree();
  }
  clear_tinfo_t();
  sub_11C7E0((__int64)v28);
  v27.m128i_i64[0] = (__int64)v47;
  sub_32C5A0(v28, v26, v41);
  copy_tinfo_t();
  clear_tinfo_t();
  v27.m128i_i64[0] = (__int64)v47;
  sub_123480((__int64)v28, (unsigned __int8 *)v30.m128i_i64[0]);
  v35 = nullptr;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v27.m128i_i64[0] = (__int64)v47;
  v34 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v36 = 0;
  sub_124BC0((__int64)v47, v28);
  v48 = v34.m128i_i64[0];
  copy_tinfo_t();
  v20 = v35;
  v35 = nullptr;
  v21 = _mm_loadu_si128(&v36);
  v36 = 0;
  if ( v49 )
  {
    v32 = v20;
    v30 = v21;
    v50.m128i_i64[0] = 0;
    qfree();
    v20 = v32;
    v21 = _mm_load_si128(&v30);
  }
  v49 = v20;
  v50 = v21;
  copy_argloc();
  v51 = v39;
  cleanup_argloc();
  if ( v35 )
  {
    v36.m128i_i64[0] = 0;
    qfree();
  }
  clear_tinfo_t();
  v22 = (char *)v28;
  sub_11C7E0((__int64)v28);
  v33[0] = 50;
  copy_tinfo_t();
  clear_tinfo_t();
  v23 = sub_1D6EA0(a1[4].m128i_i64[0], *(_QWORD *)(a3 + 24), *(_DWORD *)v4 == 23, v40);
  *(_DWORD *)a3 = 4;
  v33[1] = v23;
  LODWORD(v33[0]) = 4;
  HIDWORD(v33[0]) = v41;
  sub_11C450((char *)(a3 + 32), v22);
  sub_11C7E0(a3 + 48);
  sub_11C7E0((__int64)v22);
  v24 = (__int64)v31;
  do
  {
    v24 -= 80;
    cleanup_argloc();
    if ( *(_QWORD *)(v24 + 32) )
    {
      *(_QWORD *)(v24 + 40) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11C7E0(v24);
  }
  while ( (_BYTE *)v24 != v40 );
  return v10;
}

