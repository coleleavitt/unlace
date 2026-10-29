__int64 *__fastcall sub_19AC70(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  __int64 v12; // rax
  __m128 si128; // xmm1
  __m128 *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r15
  char tinfo_property; // al
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 *v21; // rax
  __int64 *v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *v28; // rax
  int v29; // eax
  __int64 *v30; // r14
  int *v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 *v35; // rax
  __int64 v36; // r15
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 *v40; // rsi
  int v41; // eax
  __int64 v42; // r15
  int v43; // eax
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r14
  __int64 v48; // rax
  int v49; // edx
  __int64 *v50; // rcx
  __int64 *v51; // r14
  char v52; // al
  int v53; // edx
  __int64 *v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 *v58; // r14
  __int64 v59; // r13
  __int64 v60; // rsi
  __m128i v61; // xmm0
  __m128i v62; // xmm0
  int tinfo_size; // eax
  __int64 v64; // rdx
  __int64 *v65; // rax
  unsigned int v66; // esi
  __int64 v67; // rcx
  unsigned __int64 *v68; // r14
  __int64 *v69; // r14
  _QWORD *v70; // rax
  unsigned __int64 *v71; // r15
  __int64 v72; // [rsp-10h] [rbp-170h]
  __int64 v73; // [rsp-8h] [rbp-168h]
  __int64 v74; // [rsp+8h] [rbp-158h]
  __m128i v75; // [rsp+10h] [rbp-150h] BYREF
  __int64 v76; // [rsp+20h] [rbp-140h]
  unsigned int v77; // [rsp+28h] [rbp-138h]
  int v78; // [rsp+2Ch] [rbp-134h]
  __int64 v79; // [rsp+30h] [rbp-130h]
  int *v80; // [rsp+38h] [rbp-128h]
  __m128 *v81; // [rsp+40h] [rbp-120h]
  __int64 *v82; // [rsp+48h] [rbp-118h]
  int v83; // [rsp+5Ch] [rbp-104h] BYREF
  __m128i v84[2]; // [rsp+60h] [rbp-100h] BYREF
  _BYTE v85[84]; // [rsp+80h] [rbp-E0h] BYREF
  int v86; // [rsp+D4h] [rbp-8Ch]
  __int64 v87; // [rsp+D8h] [rbp-88h]
  char v88; // [rsp+120h] [rbp-40h] BYREF
  unsigned __int64 v89; // [rsp+128h] [rbp-38h]

  v78 = a4;
  v12 = *(_QWORD *)(a1 + 480);
  v76 = a2;
  v77 = a6;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_4247F0);
  v89 = __readfsqword(0x28u);
  v79 = v12;
  v14 = (__m128 *)v85;
  v81 = (__m128 *)&v88;
  do
  {
    v14->m128_i32[1] = -1;
    v14 += 5;
    v14[-5].m128_i16[0] = 0;
    v14[-5].m128_i16[1] = 0;
    v14[-5].m128_u64[1] = 0;
    v14[-4] = si128;
    v14[-3].m128_u64[0] = 0;
    *(__m128 *)((char *)&v14[-3] + 8) = 0;
    v14[-2].m128_i32[2] = 0;
    v14[-1].m128_u64[0] = 0;
    v14[-1].m128_i32[2] = 0;
  }
  while ( v81 != v14 );
  v15 = *(_QWORD *)(a1 + 64);
  v82 = a3;
  sub_195BA0((__int64)v85, v15, a3, v78, a10, 0.0);
  v85[80] = 11;
  v87 = qstrdup();
  copy_tinfo_t();
  v16 = *(_QWORD *)(a1 + 64);
  v86 = *(_DWORD *)(*(_QWORD *)(v79 + 112) + 84LL);
  tinfo_property = get_tinfo_property();
  v18 = sub_335B10(v16, a5, (__int64)"va_arg", a8, 2, (__int64)v85, (tinfo_property & 0x3F) != 1);
  v19 = *(_QWORD *)(v18 + 72);
  v20 = v18;
  v80 = (int *)v84;
  v21 = v82;
  *(_DWORD *)(v19 + 280) |= 4u;
  *(_DWORD *)(v19 + 284) = 23;
  if ( *((_BYTE *)v21 + 8) == 5 )
  {
    tinfo_size = get_tinfo_size();
    if ( *((_BYTE *)v82 + 8) != 5 )
      sub_195120(0.0);
    v64 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1440LL) + *v82;
    v84[0].m128i_i64[1] = tinfo_size;
    v84[0].m128i_i64[0] = v64;
    v80 = (int *)v84;
    sub_316BB0((__int64 *)(v19 + 152), v84, 0.0, si128);
  }
  memset(v84, 0, 24);
  v84[0].m128i_i64[0] = qvector_reserve((__int64)v80, 0, 1, 16);
  *(__m128i *)(v84[0].m128i_i64[0] + 16 * v84[0].m128i_i64[1]) = _mm_load_si128((const __m128i *)&xmmword_424800);
  v22 = (__int64 *)v84[0].m128i_i64[0];
  memset(v84, 0, 24);
  v23 = (__m128i)_mm_loadh_ps((const double *)v84[1].m128i_i64);
  v24 = *(_QWORD *)(v19 + 216);
  v82 = v22;
  if ( v24 )
  {
    *(_QWORD *)(v19 + 224) = 0;
    v75 = v23;
    qfree(v24);
    v25 = v84[0].m128i_i64[0];
    v23 = _mm_load_si128(&v75);
    *(_QWORD *)(v19 + 216) = v82;
    *(__m128i *)(v19 + 224) = v23;
    if ( v25 )
    {
      v84[0].m128i_i64[1] = 0;
      qfree(v25);
    }
  }
  else
  {
    *(_QWORD *)(v19 + 216) = v22;
    *(__m128i *)(v19 + 224) = v23;
  }
  if ( (get_tinfo_property() & 0xF) != 9 && !sub_11CA80(*(_DWORD *)(v20 + 68)) )
    *(_BYTE *)(v20 + 65) |= 2u;
  if ( (get_tinfo_property() & 0x3F) == 1 )
  {
    v28 = sub_A3160(a1, (_QWORD *)v20, v76, *(double *)v23.m128i_i64);
LABEL_12:
    v82 = v28;
    goto LABEL_13;
  }
  v35 = (__int64 *)j__qalloc_or_throw(80, 2, v26, v27);
  v82 = v35;
  v36 = (__int64)(v35 + 4);
  v75.m128i_i64[0] = (__int64)(v35 + 8);
  v37 = *(_QWORD *)(v20 + 24);
  v35[4] = 0xFFFFFFFF00000000LL;
  v35[5] = 0;
  v35[6] = 0xFFFFFFFF00000000LL;
  v35[7] = 0;
  v35[8] = 0xFFFFFFFF00000000LL;
  v35[9] = 0;
  sub_330970((__int64)v35, v37);
  v40 = v82;
  *((_BYTE *)v82 + 32) = 4;
  v40[5] = v20;
  v41 = *(_DWORD *)(v20 + 68);
  *((_DWORD *)v40 + 9) = v41;
  *((_DWORD *)v40 + 17) = v41;
  if ( (*(_BYTE *)(v20 + 65) & 2) != 0 )
  {
    *((_BYTE *)v40 + 33) |= 2u;
    *((_BYTE *)v40 + 65) |= 2u;
  }
  if ( a7 >= 0 )
  {
    v42 = *(_QWORD *)(a1 + 64);
    if ( v78 == -1 )
    {
      v69 = v82;
      *((_BYTE *)v82 + 64) = 5;
      v70 = (_QWORD *)j__qalloc_or_throw(16, (__int64)v40, v38, v39);
      *v70 = v42;
      v70[1] = a7;
      v69[9] = (__int64)v70;
      goto LABEL_27;
    }
    v84[0] = 0u;
    cleanup_argloc();
    v84[0].m128i_i32[0] = 1;
    v84[0].m128i_i64[1] = a7;
    v78 = sub_1F06C0((__int64 *)(v42 + 432), v80, 1, -1);
    cleanup_argloc();
    if ( v78 == -1 )
    {
      if ( !under_debugger )
        sub_383060(0xC98Bu, *(double *)v23.m128i_i64);
    }
    else
    {
      v74 = *(_QWORD *)(v42 + 432) + 104LL * v78;
      v43 = sub_1C36B0(v74, *(_QWORD *)(v42 + 1496), a7, *(_DWORD *)(v20 + 68), *(unsigned int *)(v74 + 88), &v83, v80);
      v44 = v84[0].m128i_u32[0];
      v45 = v72;
      v46 = v73;
      if ( !v84[0].m128i_i32[0] )
      {
        if ( *(_DWORD *)(v20 + 68) != v43 )
        {
          v44 = *(_QWORD *)(v20 + 24);
          sub_1F45B0(v42, v44, v74);
          *(_DWORD *)(v74 + 24) |= 0x400u;
        }
        v47 = v83;
        *((_BYTE *)v82 + 64) = 9;
        v48 = j__qalloc_or_throw(24, v44, v45, v46);
        v49 = v78;
        v50 = v82;
        *(_QWORD *)v48 = v42;
        *(_QWORD *)(v48 + 8) = v47;
        *(_DWORD *)(v48 + 16) = v49;
        v50[9] = v48;
        goto LABEL_27;
      }
      if ( !under_debugger )
        sub_383060(0xCCE2u, *(double *)v23.m128i_i64);
    }
LABEL_49:
    BUG();
  }
  if ( v77 == -1 )
  {
    if ( !under_debugger )
      sub_383060(0xC8B9u, *(double *)v23.m128i_i64);
    goto LABEL_49;
  }
  v65 = v82;
  v66 = v77;
  v67 = v79;
  *((_BYTE *)v82 + 64) = 1;
  *((_DWORD *)v65 + 18) = v66;
  v68 = *(unsigned __int64 **)(v67 + 112);
  if ( (unsigned __int8)sub_11CCD0((__int64)v68, v66) )
  {
    sub_1273B0(v36, v68, v82[3], 1, v23);
    *((_DWORD *)v82 + 17) = 1;
  }
  v77 = -1;
LABEL_27:
  v51 = v82;
  *(_DWORD *)v82 = 4;
  v52 = get_tinfo_property();
  v53 = *((_DWORD *)v51 + 1);
  if ( (v52 & 0xF) == 9 )
  {
    *(_DWORD *)v51 = 67;
    v53 |= 0x10u;
  }
  v54 = v82;
  *((_DWORD *)v82 + 1) = v53 | 0x60000;
  v55 = (__int64)v54;
  v82 = sub_A3160(a1, v54, v76, *(double *)v23.m128i_i64);
  v58 = v82;
  if ( v77 != -1 )
  {
    v59 = j__qalloc_or_throw(80, v55, v56, v57);
    v60 = v58[3];
    *(_QWORD *)(v59 + 40) = 0;
    *(_QWORD *)(v59 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v59 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v59 + 56) = 0;
    *(_QWORD *)(v59 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v59 + 72) = 0;
    sub_330970(v59, v60);
    *(_DWORD *)v59 = 4;
    sub_125180((unsigned __int8 *)(v59 + 32), (unsigned __int8 *)v75.m128i_i64[0]);
    v61 = _mm_cvtsi32_si128(*(_DWORD *)(v59 + 36));
    v84[0].m128i_i32[0] = 1;
    v62 = _mm_unpacklo_epi32(v61, _mm_cvtsi32_si128(v77));
    *(__int64 *)((char *)v84[0].m128i_i64 + 4) = v62.m128i_i64[0];
    sub_125180((unsigned __int8 *)(v59 + 64), (unsigned __int8 *)v80);
    sub_11CDA0((__int64)v80);
    if ( *(_BYTE *)(v59 + 64) == 1 )
    {
      v71 = *(unsigned __int64 **)(v79 + 112);
      if ( (unsigned __int8)sub_11CCD0((__int64)v71, *(_DWORD *)(v59 + 72)) )
      {
        sub_1273B0(v59 + 32, v71, *(_QWORD *)(v59 + 24), 1, v62);
        *(_DWORD *)(v59 + 68) = 1;
      }
    }
    v28 = sub_A3160(a1, (_QWORD *)v59, (__int64)v82, *(double *)v62.m128i_i64);
    goto LABEL_12;
  }
LABEL_13:
  v29 = *(_DWORD *)(a1 + 24);
  v30 = v82;
  BYTE1(v29) &= ~2u;
  v31 = (int *)v82;
  LOBYTE(v29) = v29 | 0x80;
  *(_DWORD *)(a1 + 24) = v29;
  sub_1B5B40(v31);
  sub_A2520(a1, "added va_arg: %s");
  v32 = (__int64)v81;
  do
  {
    v32 -= 80;
    cleanup_argloc();
    v33 = *(_QWORD *)(v32 + 32);
    if ( v33 )
    {
      *(_QWORD *)(v32 + 40) = 0;
      qfree(v33);
    }
    clear_tinfo_t();
    sub_11CDA0(v32);
  }
  while ( (_BYTE *)v32 != v85 );
  return v30;
}

