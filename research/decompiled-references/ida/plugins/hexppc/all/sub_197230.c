__int64 *__fastcall sub_197230(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  __int64 v12; // rax
  __m128i si128; // xmm1
  __m128i *v14; // rax
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
  __m128i v26; // xmm0
  _QWORD *v27; // rsi
  __int64 *v28; // rax
  int v29; // eax
  __int64 *v30; // r14
  __int64 *v31; // rdi
  const char *v32; // rax
  __int64 v33; // rbx
  __int64 *v35; // rax
  unsigned __int64 v36; // r15
  __int64 v37; // rsi
  __int64 *v38; // rsi
  int v39; // eax
  __int64 v40; // r15
  int v41; // eax
  __int64 v42; // r14
  __int64 v43; // rax
  int v44; // edx
  __int64 *v45; // rcx
  __int64 *v46; // r14
  char v47; // al
  int v48; // edx
  __int64 *v49; // rax
  __int64 *v50; // r14
  __int64 v51; // r13
  __int64 v52; // rsi
  __m128i v53; // xmm0
  __int64 v54; // rsi
  int tinfo_size; // eax
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 *v60; // rax
  unsigned int v61; // esi
  __int64 v62; // rcx
  __int64 v63; // r14
  __int64 *v64; // r14
  _QWORD *v65; // rax
  __int64 v66; // r15
  __int64 v67; // [rsp-8h] [rbp-168h]
  int v68; // [rsp+0h] [rbp-160h]
  int v69; // [rsp+8h] [rbp-158h]
  __int64 v70; // [rsp+8h] [rbp-158h]
  __m128i v71; // [rsp+10h] [rbp-150h] BYREF
  __int64 v72; // [rsp+20h] [rbp-140h]
  unsigned int v73; // [rsp+28h] [rbp-138h]
  int v74; // [rsp+2Ch] [rbp-134h]
  __int64 v75; // [rsp+30h] [rbp-130h]
  unsigned __int8 *v76; // [rsp+38h] [rbp-128h]
  __m128i *v77; // [rsp+40h] [rbp-120h]
  __int64 *v78; // [rsp+48h] [rbp-118h]
  int v79; // [rsp+5Ch] [rbp-104h] BYREF
  _QWORD v80[4]; // [rsp+60h] [rbp-100h] BYREF
  _BYTE v81[84]; // [rsp+80h] [rbp-E0h] BYREF
  int v82; // [rsp+D4h] [rbp-8Ch]
  __int64 v83; // [rsp+D8h] [rbp-88h]
  char v84; // [rsp+120h] [rbp-40h] BYREF
  unsigned __int64 v85; // [rsp+128h] [rbp-38h]

  v74 = a4;
  v12 = *(_QWORD *)(a1 + 480);
  v72 = a2;
  v73 = a6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_411BF0);
  v85 = __readfsqword(0x28u);
  v75 = v12;
  v14 = (__m128i *)v81;
  v77 = (__m128i *)&v84;
  do
  {
    v14->m128i_i32[1] = -1;
    v14 += 5;
    v14[-5].m128i_i16[0] = 0;
    v14[-5].m128i_i16[1] = 0;
    v14[-5].m128i_i64[1] = 0;
    v14[-4] = si128;
    v14[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v14[-3] + 8) = 0;
    v14[-2].m128i_i32[2] = 0;
    v14[-1].m128i_i64[0] = 0;
    v14[-1].m128i_i32[2] = 0;
  }
  while ( v77 != v14 );
  v15 = *(_QWORD *)(a1 + 64);
  v78 = a3;
  sub_192160((__int64)v81, v15, a3, v74, a10);
  v81[80] = 11;
  v83 = qstrdup();
  copy_tinfo_t();
  v16 = *(_QWORD *)(a1 + 64);
  v82 = *(_DWORD *)(*(_QWORD *)(v75 + 112) + 84LL);
  tinfo_property = get_tinfo_property();
  v18 = sub_331530(
          v16,
          a5,
          (unsigned int)"va_arg",
          a8,
          2,
          (unsigned int)v81,
          (tinfo_property & 0x3F) != 1,
          v67,
          v68,
          v69,
          v71.m128i_i32[0],
          v71.m128i_i32[2]);
  v19 = *(_QWORD *)(v18 + 72);
  v20 = v18;
  v76 = (unsigned __int8 *)v80;
  v21 = v78;
  *(_DWORD *)(v19 + 280) |= 4u;
  *(_DWORD *)(v19 + 284) = 23;
  if ( *((_BYTE *)v21 + 8) == 5 )
  {
    v54 = *(_QWORD *)(v75 + 248);
    tinfo_size = get_tinfo_size();
    if ( *((_BYTE *)v78 + 8) != 5 )
      sub_1916E0(0, v54);
    v58 = *(_QWORD *)(a1 + 64);
    v59 = *(_QWORD *)(v58 + 1440) + *v78;
    v80[1] = tinfo_size;
    v80[0] = v59;
    v76 = (unsigned __int8 *)v80;
    sub_312A30(v19 + 152, v80, v59, v58, v56, v57);
  }
  memset(v80, 0, 24);
  v80[0] = qvector_reserve();
  *(__m128i *)(v80[0] + 16LL * v80[1]) = _mm_load_si128((const __m128i *)&xmmword_411C00);
  v22 = (__int64 *)v80[0];
  memset(v80, 0, 24);
  v23 = (__m128i)_mm_loadh_ps((const double *)&v80[2]);
  v24 = *(_QWORD *)(v19 + 216);
  v78 = v22;
  if ( v24 )
  {
    *(_QWORD *)(v19 + 224) = 0;
    v71 = v23;
    qfree();
    v25 = v80[0];
    v26 = _mm_load_si128(&v71);
    *(_QWORD *)(v19 + 216) = v78;
    *(__m128i *)(v19 + 224) = v26;
    if ( v25 )
    {
      v80[1] = 0;
      qfree();
    }
  }
  else
  {
    *(_QWORD *)(v19 + 216) = v22;
    *(__m128i *)(v19 + 224) = v23;
  }
  if ( (get_tinfo_property() & 0xF) != 9 && !sub_119040(*(_DWORD *)(v20 + 68)) )
    *(_BYTE *)(v20 + 65) |= 2u;
  if ( (get_tinfo_property() & 0x3F) == 1 )
  {
    v27 = (_QWORD *)v20;
    v28 = sub_9F720(a1, (_QWORD *)v20, v72);
LABEL_12:
    v78 = v28;
    goto LABEL_13;
  }
  v35 = (__int64 *)j__qalloc_or_throw();
  v78 = v35;
  v36 = (unsigned __int64)(v35 + 4);
  v71.m128i_i64[0] = (__int64)(v35 + 8);
  v37 = *(_QWORD *)(v20 + 24);
  v35[4] = 0xFFFFFFFF00000000LL;
  v35[5] = 0;
  v35[6] = 0xFFFFFFFF00000000LL;
  v35[7] = 0;
  v35[8] = 0xFFFFFFFF00000000LL;
  v35[9] = 0;
  sub_32C520(v35, v37);
  v38 = v78;
  *((_BYTE *)v78 + 32) = 4;
  v38[5] = v20;
  v39 = *(_DWORD *)(v20 + 68);
  *((_DWORD *)v38 + 9) = v39;
  *((_DWORD *)v38 + 17) = v39;
  if ( (*(_BYTE *)(v20 + 65) & 2) != 0 )
  {
    *((_BYTE *)v38 + 33) |= 2u;
    *((_BYTE *)v38 + 65) |= 2u;
  }
  if ( a7 >= 0 )
  {
    v40 = *(_QWORD *)(a1 + 64);
    if ( v74 == -1 )
    {
      v64 = v78;
      *((_BYTE *)v78 + 64) = 5;
      v65 = (_QWORD *)j__qalloc_or_throw();
      *v65 = v40;
      v65[1] = a7;
      v64[9] = (__int64)v65;
      goto LABEL_27;
    }
    v80[0] = 0;
    v80[1] = 0;
    cleanup_argloc();
    LODWORD(v80[0]) = 1;
    v80[1] = a7;
    v74 = sub_1ECA40(v40 + 432, v76, 1, 0xFFFFFFFFLL);
    cleanup_argloc();
    if ( v74 == -1 )
    {
      if ( !under_debugger )
        sub_37EEE0(51595);
    }
    else
    {
      v70 = *(_QWORD *)(v40 + 432) + 104LL * v74;
      v41 = sub_1BFC70(
              v70,
              *(_QWORD *)(v40 + 1496),
              a7,
              *(unsigned int *)(v20 + 68),
              *(unsigned int *)(v70 + 88),
              &v79,
              v76);
      if ( !LODWORD(v80[0]) )
      {
        if ( *(_DWORD *)(v20 + 68) != v41 )
        {
          sub_1F0930(v40, *(_QWORD *)(v20 + 24), v70);
          *(_DWORD *)(v70 + 24) |= 0x400u;
        }
        v42 = v79;
        *((_BYTE *)v78 + 64) = 9;
        v43 = j__qalloc_or_throw();
        v44 = v74;
        v45 = v78;
        *(_QWORD *)v43 = v40;
        *(_QWORD *)(v43 + 8) = v42;
        *(_DWORD *)(v43 + 16) = v44;
        v45[9] = v43;
        goto LABEL_27;
      }
      if ( !under_debugger )
        sub_37EEE0(52450);
    }
LABEL_49:
    BUG();
  }
  if ( v73 == -1 )
  {
    if ( !under_debugger )
      sub_37EEE0(51385);
    goto LABEL_49;
  }
  v60 = v78;
  v61 = v73;
  v62 = v75;
  *((_BYTE *)v78 + 64) = 1;
  *((_DWORD *)v60 + 18) = v61;
  v63 = *(_QWORD *)(v62 + 112);
  if ( (unsigned __int8)sub_119290(v63, v61) )
  {
    sub_123970(v36, v63, v78[3], 1);
    *((_DWORD *)v78 + 17) = 1;
  }
  v73 = -1;
LABEL_27:
  v46 = v78;
  *(_DWORD *)v78 = 4;
  v47 = get_tinfo_property();
  v48 = *((_DWORD *)v46 + 1);
  if ( (v47 & 0xF) == 9 )
  {
    *(_DWORD *)v46 = 67;
    v48 |= 0x10u;
  }
  v49 = v78;
  *((_DWORD *)v78 + 1) = v48 | 0x60000;
  v27 = v49;
  v78 = sub_9F720(a1, v49, v72);
  v50 = v78;
  if ( v73 != -1 )
  {
    v51 = j__qalloc_or_throw();
    v52 = v50[3];
    *(_QWORD *)(v51 + 40) = 0;
    *(_QWORD *)(v51 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v51 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v51 + 56) = 0;
    *(_QWORD *)(v51 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v51 + 72) = 0;
    sub_32C520(v51, v52);
    *(_DWORD *)v51 = 4;
    sub_121740(v51 + 32, (unsigned __int8 *)v71.m128i_i64[0]);
    v53 = _mm_cvtsi32_si128(*(_DWORD *)(v51 + 36));
    LODWORD(v80[0]) = 1;
    *(_QWORD *)((char *)v80 + 4) = _mm_unpacklo_epi32(v53, _mm_cvtsi32_si128(v73)).m128i_u64[0];
    sub_121740(v51 + 64, v76);
    sub_119360((__int64)v76);
    if ( *(_BYTE *)(v51 + 64) == 1 )
    {
      v66 = *(_QWORD *)(v75 + 112);
      if ( (unsigned __int8)sub_119290(v66, *(_DWORD *)(v51 + 72)) )
      {
        sub_123970(v51 + 32, v66, *(_QWORD *)(v51 + 24), 1);
        *(_DWORD *)(v51 + 68) = 1;
      }
    }
    v27 = (_QWORD *)v51;
    v28 = sub_9F720(a1, (_QWORD *)v51, (__int64)v78);
    goto LABEL_12;
  }
LABEL_13:
  v29 = *(_DWORD *)(a1 + 24);
  v30 = v78;
  BYTE1(v29) &= ~2u;
  v31 = v78;
  LOBYTE(v29) = v29 | 0x80;
  *(_DWORD *)(a1 + 24) = v29;
  v32 = (const char *)sub_1B2100(v31, v27);
  sub_9EAE0(a1, (__int64)"added va_arg: %s", v32);
  v33 = (__int64)v77;
  do
  {
    v33 -= 80;
    cleanup_argloc();
    if ( *(_QWORD *)(v33 + 32) )
    {
      *(_QWORD *)(v33 + 40) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_119360(v33);
  }
  while ( (_BYTE *)v33 != v81 );
  return v30;
}

