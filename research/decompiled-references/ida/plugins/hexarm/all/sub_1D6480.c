__int64 __fastcall sub_1D6480(_QWORD *a1, unsigned __int8 a2, int a3, int a4, int a5, int a6, char a7, int a8)
{
  __int64 v8; // r12
  unsigned int v10; // r13d
  __m128i *v11; // rax
  __m128i si128; // xmm2
  int *v13; // rax
  __m128i v14; // xmm0
  unsigned __int8 *v15; // r13
  __int64 v16; // r13
  __m128i v17; // xmm0
  unsigned __int8 *v18; // r13
  __int64 v19; // rax
  __m128i v20; // xmm0
  _BYTE *v21; // rsi
  _BYTE *v22; // rsi
  _WORD *v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi
  unsigned __int8 *v26; // r13
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // r13
  unsigned __int8 *v33; // r8
  __int64 v34; // r15
  __int64 v35; // r13
  __int64 v37; // [rsp-8h] [rbp-238h]
  __int64 v38; // [rsp-8h] [rbp-238h]
  int v39; // [rsp+0h] [rbp-230h]
  int v40; // [rsp+0h] [rbp-230h]
  int v41; // [rsp+8h] [rbp-228h]
  __m128i v42; // [rsp+10h] [rbp-220h] BYREF
  __m128i v43; // [rsp+20h] [rbp-210h] BYREF
  __m128i v44; // [rsp+30h] [rbp-200h] BYREF
  _BYTE *v45; // [rsp+40h] [rbp-1F0h]
  char *v46; // [rsp+48h] [rbp-1E8h]
  char *v47; // [rsp+50h] [rbp-1E0h]
  int v48; // [rsp+5Ch] [rbp-1D4h]
  int v49; // [rsp+60h] [rbp-1D0h]
  int v50; // [rsp+64h] [rbp-1CCh]
  unsigned int v51; // [rsp+68h] [rbp-1C8h]
  int v52; // [rsp+6Ch] [rbp-1C4h]
  _BYTE *v53; // [rsp+70h] [rbp-1C0h]
  int *v54; // [rsp+78h] [rbp-1B8h]
  int v55; // [rsp+80h] [rbp-1B0h]
  unsigned int dtype_size; // [rsp+84h] [rbp-1ACh]
  __int64 *v57; // [rsp+88h] [rbp-1A8h]
  _BYTE v58[8]; // [rsp+90h] [rbp-1A0h] BYREF
  __int64 v59; // [rsp+98h] [rbp-198h] BYREF
  unsigned __int64 v60; // [rsp+A0h] [rbp-190h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-188h]
  __int64 v62; // [rsp+B0h] [rbp-180h] BYREF
  __int64 v63; // [rsp+B8h] [rbp-178h]
  __m128i v64; // [rsp+C0h] [rbp-170h]
  __int64 v65; // [rsp+D0h] [rbp-160h]
  __m128i v66; // [rsp+D8h] [rbp-158h] BYREF
  int v67; // [rsp+E8h] [rbp-148h] BYREF
  __int64 v68; // [rsp+F0h] [rbp-140h]
  int v69; // [rsp+F8h] [rbp-138h]
  _BYTE v70[16]; // [rsp+100h] [rbp-130h] BYREF
  __int64 v71; // [rsp+110h] [rbp-120h]
  char v72; // [rsp+118h] [rbp-118h] BYREF
  __int64 v73; // [rsp+120h] [rbp-110h]
  __m128i v74; // [rsp+128h] [rbp-108h]
  int v75; // [rsp+148h] [rbp-E8h]
  _BYTE v76[16]; // [rsp+150h] [rbp-E0h] BYREF
  __int64 v77; // [rsp+160h] [rbp-D0h]
  char v78; // [rsp+168h] [rbp-C8h] BYREF
  __int64 v79; // [rsp+170h] [rbp-C0h]
  __m128i v80; // [rsp+178h] [rbp-B8h]
  int v81; // [rsp+198h] [rbp-98h]
  _BYTE v82[16]; // [rsp+1A0h] [rbp-90h] BYREF
  __int64 v83; // [rsp+1B0h] [rbp-80h]
  __int64 v84; // [rsp+1C0h] [rbp-70h]
  __m128i v85; // [rsp+1C8h] [rbp-68h]
  int v86; // [rsp+1E8h] [rbp-48h]
  char v87; // [rsp+1F0h] [rbp-40h] BYREF
  unsigned __int64 v88; // [rsp+1F8h] [rbp-38h]

  v8 = a6;
  v52 = a3;
  v55 = a4;
  v48 = a5;
  v50 = a6;
  v49 = a8;
  v88 = __readfsqword(0x28u);
  v51 = a2;
  dtype_size = get_dtype_size();
  v10 = dtype_size;
  sub_1D5D50((__int64)a1, 4u, 1, 0, 0x3BEA45E214ADDC55LL, v8, 0);
  if ( a7 )
  {
    v11 = (__m128i *)v70;
    v53 = v70;
    v46 = &v87;
    do
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
      v11->m128i_i32[1] = -1;
      v11->m128i_i16[0] = 0;
      v11 += 5;
      v11[-5].m128i_i16[1] = 0;
      v11[-5].m128i_i64[1] = 0;
      v11[-4] = si128;
      v11[-3].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v11[-3] + 8) = 0;
      v11[-2].m128i_i32[2] = 0;
      v11[-1].m128i_i64[0] = 0;
      v11[-1].m128i_i32[2] = 0;
    }
    while ( &v87 != (char *)v11 );
    LODWORD(v60) = 1;
    HIDWORD(v60) = v10;
    LODWORD(v61) = v52;
    v57 = &v62;
    sub_123480((__int64)&v62, (unsigned __int8 *)&v60);
    v65 = 0;
    v67 = 0;
    v68 = 0;
    v69 = 0;
    v64 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
    v66 = 0;
    sub_124BC0((__int64)v53, (unsigned __int8 *)&v62);
    v71 = v64.m128i_i64[0];
    v47 = &v72;
    copy_tinfo_t();
    v13 = (int *)v65;
    v65 = 0;
    v14 = _mm_loadu_si128(&v66);
    v66 = 0;
    if ( v73 )
    {
      v54 = v13;
      v44 = v14;
      v74.m128i_i64[0] = 0;
      qfree();
      v14 = _mm_load_si128(&v44);
      v13 = v54;
    }
    v73 = (__int64)v13;
    v54 = &v67;
    v74 = v14;
    copy_argloc();
    v75 = v69;
    cleanup_argloc();
    if ( v65 )
    {
      v66.m128i_i64[0] = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11C7E0((__int64)v57);
    sub_11C7E0((__int64)&v60);
    LODWORD(v60) = 1;
    HIDWORD(v60) = v10;
    v15 = (unsigned __int8 *)v57;
    LODWORD(v61) = v55;
    sub_123480((__int64)v57, (unsigned __int8 *)&v60);
    v65 = 0;
    v67 = 0;
    v68 = 0;
    v69 = 0;
    v64 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
    v66 = 0;
    sub_124BC0((__int64)v76, v15);
    v77 = v64.m128i_i64[0];
    v44.m128i_i64[0] = (__int64)&v78;
    copy_tinfo_t();
    v16 = v65;
    v65 = 0;
    v17 = _mm_loadu_si128(&v66);
    v66 = 0;
    if ( v79 )
    {
      v43 = v17;
      v80.m128i_i64[0] = 0;
      qfree();
      v17 = _mm_load_si128(&v43);
    }
    v79 = v16;
    v80 = v17;
    copy_argloc();
    v81 = v69;
    cleanup_argloc();
    if ( v65 )
    {
      v66.m128i_i64[0] = 0;
      qfree();
    }
    clear_tinfo_t();
    v18 = (unsigned __int8 *)v57;
    sub_11C7E0((__int64)v57);
    sub_11C7E0((__int64)&v60);
    v60 = 0x100000001LL;
    v61 = 0;
    sub_123480((__int64)v18, (unsigned __int8 *)&v60);
    v65 = 0;
    v67 = 0;
    v68 = 0;
    v69 = 0;
    v45 = v82;
    v64 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
    v66 = 0;
    sub_124BC0((__int64)v82, v18);
    v83 = v64.m128i_i64[0];
    copy_tinfo_t();
    v19 = v65;
    v65 = 0;
    v20 = _mm_loadu_si128(&v66);
    v66 = 0;
    if ( v84 )
    {
      v43.m128i_i64[0] = v19;
      v42 = v20;
      v85.m128i_i64[0] = 0;
      qfree();
      v20 = _mm_load_si128(&v42);
      v19 = v43.m128i_i64[0];
    }
    v84 = v19;
    v85 = v20;
    copy_argloc();
    v86 = v69;
    cleanup_argloc();
    if ( v65 )
    {
      v66.m128i_i64[0] = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11C7E0((__int64)v57);
    sub_11C7E0((__int64)&v60);
    sub_32C760(v58, *(_QWORD *)(a1[100] + 112LL), dtype_size, 0);
    copy_tinfo_t();
    copy_tinfo_t();
    v62 = 24;
    copy_tinfo_t();
    clear_tinfo_t();
    v21 = (_BYTE *)v73;
    if ( v74.m128i_i64[1] <= 1uLL )
    {
      v73 = qvector_reserve();
      v21 = (_BYTE *)v73;
    }
    v74.m128i_i64[0] = 2;
    *v21 = 120;
    *(_BYTE *)(v73 + 1) = 0;
    v22 = (_BYTE *)v79;
    if ( v80.m128i_i64[1] <= 1uLL )
    {
      v79 = qvector_reserve();
      v22 = (_BYTE *)v79;
    }
    v80.m128i_i64[0] = 2;
    *v22 = 121;
    *(_BYTE *)(v79 + 1) = 0;
    v23 = (_WORD *)v84;
    if ( v85.m128i_i64[1] <= 2uLL )
    {
      v84 = qvector_reserve();
      v23 = (_WORD *)v84;
    }
    v85.m128i_i64[0] = 3;
    *v23 = 17987;
    *(_BYTE *)(v84 + 2) = 0;
    v24 = a1[1];
    v60 = 0xFFFFFFFF00000004LL;
    v25 = a1[5];
    v61 = 0;
    v62 = 24;
    v26 = (unsigned __int8 *)v57;
    v61 = sub_335C70(
            v24,
            v25,
            (unsigned int)"__OFSUB__",
            (_DWORD)v57,
            3,
            (_DWORD)v53,
            1,
            v37,
            v39,
            (unsigned int)v76,
            v42.m128i_i32[0],
            v42.m128i_i32[2]);
    clear_tinfo_t();
    v27 = v61;
    *(_DWORD *)(*(_QWORD *)(v61 + 72) + 284LL) = 30;
    *(_DWORD *)(*(_QWORD *)(v27 + 72) + 280LL) |= 0x10u;
    HIDWORD(v60) = 1;
    v62 = 0x100000001LL;
    v63 = 3;
    sub_1D5E90((__int64)a1, 4, (unsigned __int8 *)&v60, nullptr, v26);
    v28 = v61;
    if ( v61 )
    {
      sub_11C7E0(v61 + 64);
      sub_11C7E0(v28 + 48);
      sub_11C7E0(v28 + 32);
      j__qfree();
    }
    v29 = a1[1];
    v30 = a1[5];
    v59 = 24;
    v61 = sub_335C70(
            v29,
            v30,
            (unsigned int)"__CFSUB__",
            (unsigned int)&v59,
            3,
            (_DWORD)v53,
            1,
            v38,
            v40,
            v41,
            v42.m128i_i32[0],
            v42.m128i_i32[2]);
    clear_tinfo_t();
    v31 = v61;
    v32 = (__int64)v57;
    v33 = (unsigned __int8 *)v57;
    *(_DWORD *)(*(_QWORD *)(v61 + 72) + 284LL) = 29;
    *(_DWORD *)(*(_QWORD *)(v31 + 72) + 280LL) |= 0x10u;
    LODWORD(v63) = 0;
    sub_1D5E90((__int64)a1, 4, (unsigned __int8 *)&v60, nullptr, v33);
    sub_11C7E0(v32);
    sub_11C7E0((__int64)&v60);
    clear_tinfo_t();
    v34 = (__int64)v46;
    v35 = (__int64)v53;
    do
    {
      v34 -= 80;
      cleanup_argloc();
      if ( *(_QWORD *)(v34 + 32) )
      {
        *(_QWORD *)(v34 + 40) = 0;
        qfree();
      }
      clear_tinfo_t();
      sub_11C7E0(v34);
    }
    while ( v34 != v35 );
  }
  if ( (_BYTE)v49 )
    sub_1D5D50((__int64)a1, 6u, 1, v8, 0x3BEA45E214ADDC55LL, v8, 0);
  sub_1D6180((__int64)a1, 0, v51, v50, v50, 0);
  sub_1D5D50((__int64)a1, 0xCu, dtype_size, v55, v8, v8, 0);
  return sub_1D5D50((__int64)a1, 0xDu, dtype_size, v52, v8, v48, 0);
}

