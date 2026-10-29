__int64 __fastcall sub_272C50(
        __m128i *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int64 a5,
        _BYTE *a6,
        int a7,
        __int64 a8)
{
  __m128i v8; // xmm0
  __int64 v11; // r13
  unsigned __int64 v12; // rbx
  __m128i v13; // xmm1
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // edx
  char tinfo_property; // al
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 tinfo_size; // rax
  __int64 v32; // r15
  __int64 v34; // rax
  __int64 v35; // r14
  const char *v36; // r8
  const char *v37; // rcx
  char tinfo_details; // al
  __int64 v39; // rdi
  int v40; // r14d
  _QWORD *v41; // r15
  __int64 v42; // rax
  __int64 v43; // rbx
  __m128i *v44; // r12
  _QWORD *v45; // r14
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rbx
  __int64 v49; // r15
  int v50; // [rsp+24h] [rbp-1ACh]
  char v51; // [rsp+37h] [rbp-199h]
  int v52; // [rsp+48h] [rbp-188h]
  __m128i *v53; // [rsp+58h] [rbp-178h]
  __int64 v54; // [rsp+58h] [rbp-178h]
  __int64 v55; // [rsp+60h] [rbp-170h] BYREF
  __int64 v56; // [rsp+68h] [rbp-168h] BYREF
  __int128 v57; // [rsp+70h] [rbp-160h] BYREF
  __int64 v58; // [rsp+80h] [rbp-150h]
  __m128i v59; // [rsp+88h] [rbp-148h] BYREF
  __int64 v60; // [rsp+98h] [rbp-138h]
  __int128 v61; // [rsp+A0h] [rbp-130h]
  __int128 v62; // [rsp+B0h] [rbp-120h]
  __int64 v63; // [rsp+E0h] [rbp-F0h]
  int v64; // [rsp+E8h] [rbp-E8h]
  __int64 v65; // [rsp+F0h] [rbp-E0h]
  char v66; // [rsp+F8h] [rbp-D8h]
  _BYTE v67[24]; // [rsp+100h] [rbp-D0h] BYREF
  __int128 v68; // [rsp+118h] [rbp-B8h]
  __int64 v69; // [rsp+128h] [rbp-A8h]
  __int128 v70; // [rsp+130h] [rbp-A0h]
  __int128 v71; // [rsp+140h] [rbp-90h]
  __int64 v72; // [rsp+170h] [rbp-60h]
  int v73; // [rsp+178h] [rbp-58h]
  __int64 v74; // [rsp+180h] [rbp-50h]
  char v75; // [rsp+188h] [rbp-48h]
  unsigned __int64 v76; // [rsp+198h] [rbp-38h]

  v8.m128i_i64[0] = 0;
  v53 = a1;
  v76 = __readfsqword(0x28u);
  v11 = *a3;
  v63 = 1;
  v58 = 0;
  v60 = 0;
  v59 = 0;
  v61 = 0;
  v62 = 0;
  v64 = -1;
  v57 = 8 * a5;
  v65 = 0;
  v66 = 0;
  v51 = get_tinfo_property() & 0x3F;
  if ( v51 == 29 && (unsigned int)sub_272540(a1, (__int64 *)&v57, a6, a5) == -1
    || (LODWORD(v12) = find_tinfo_udt_member(), (_DWORD)v12 == -1) )
  {
    tinfo_size = get_tinfo_size();
    if ( (__int64)(a5 - 1) <= tinfo_size )
      tinfo_size = a5 - 1;
    v32 = tinfo_size;
    if ( tinfo_size < 0 )
      v32 = 0;
    while ( 1 )
    {
      LODWORD(v12) = sub_32D810(&v57, (__int64)&a1[8].m128i_i64[1], v32);
      if ( (_DWORD)v12 != -1 )
        break;
      if ( v32-- == 0 )
        goto LABEL_56;
    }
  }
  if ( !a1[4].m128i_i64[0] || (get_tinfo_property() & 0x2F) == 0xD || (get_tinfo_property() & 0xF) == 0xB )
    goto LABEL_5;
  v34 = a1[7].m128i_i64[1];
  if ( !v34 )
  {
    v8.m128i_i64[0] = 0;
    memset(v67, 0, sizeof(v67));
    v69 = 0;
    LODWORD(v70) = 1;
    v68 = 0;
    tinfo_details = get_tinfo_details();
    v39 = *(_QWORD *)v67;
    if ( !tinfo_details )
      goto LABEL_109;
    if ( (int)v12 > 0 )
    {
      v40 = v12 - 1;
      v41 = (_QWORD *)(*(_QWORD *)v67 + 144LL * ((int)v12 - 1));
      if ( v41[1] )
      {
        if ( (get_tinfo_property() & 0xF) == 0xB )
          goto LABEL_108;
        v39 = *(_QWORD *)v67;
      }
    }
    v40 = v12 + 1;
    if ( (unsigned __int64)((int)v12 + 1) >= *(_QWORD *)&v67[8] )
      goto LABEL_109;
    v41 = (_QWORD *)(v39 + 144LL * v40);
    if ( v53[5].m128i_i64[1] < *v41 >> 3 )
    {
      if ( !v39 )
        goto LABEL_5;
      v42 = *(_QWORD *)&v67[8];
      goto LABEL_84;
    }
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      v39 = *(_QWORD *)v67;
LABEL_109:
      if ( !v39 )
        goto LABEL_5;
      v42 = *(_QWORD *)&v67[8];
      if ( !*(_QWORD *)&v67[8] )
      {
LABEL_91:
        *(_QWORD *)&v67[8] = 0;
        qfree(v39);
        goto LABEL_5;
      }
LABEL_84:
      v52 = v12;
      v43 = v42;
      v44 = v53;
      v54 = 0;
      do
      {
        v45 = (_QWORD *)(v39 + 144 * v54);
        clear_tinfo_t();
        v46 = v45[5];
        if ( v46 )
        {
          v45[6] = 0;
          qfree(v46);
        }
        v47 = v45[2];
        if ( v47 )
        {
          v45[3] = 0;
          qfree(v47);
        }
        ++v54;
        v39 = *(_QWORD *)v67;
      }
      while ( v54 != v43 );
      LODWORD(v12) = v52;
      v53 = v44;
      goto LABEL_91;
    }
LABEL_108:
    sub_26A3D0((__int64)&v57, (__int64)v41);
    v39 = *(_QWORD *)v67;
    LODWORD(v12) = v40;
    goto LABEL_109;
  }
  v35 = a5 - v34;
  if ( a1[5].m128i_i64[1] >= v35 )
  {
    *(_QWORD *)&v57 = 8 * v35;
    LODWORD(v12) = find_tinfo_udt_member();
    if ( (_DWORD)v12 == -1 )
      goto LABEL_56;
  }
LABEL_5:
  if ( (get_tinfo_property() & 0xF) == 0xE )
  {
LABEL_56:
    v11 = 0;
    goto LABEL_43;
  }
  if ( (v65 & 0x2000000000LL) != 0 )
  {
    print_tinfo();
  }
  else
  {
    v13 = _mm_loadu_si128(&v59);
    v14 = *(_QWORD *)a8;
    v8 = _mm_loadu_si128((const __m128i *)(a8 + 8));
    *(_QWORD *)a8 = v58;
    *(__m128i *)(a8 + 8) = v13;
    v58 = v14;
    v59 = v8;
  }
  v55 = 0;
  copy_tinfo_t();
  lower_type();
  v15 = v11;
  if ( *(_DWORD *)(v11 + 8) == 52 )
    v15 = *(_QWORD *)(v11 + 24);
  if ( (get_tinfo_property() & 0xF) == 0xA )
  {
    if ( (_QWORD)v57 || *(_QWORD *)(a8 + 8) <= 1u )
    {
      if ( v53[28].m128i_i8[5] )
      {
LABEL_49:
        v11 = 0;
        goto LABEL_42;
      }
      v50 = 60;
      goto LABEL_28;
    }
    v50 = 60;
  }
  else
  {
    if ( (_QWORD)v57 || *(_QWORD *)(a8 + 8) <= 1u )
    {
      if ( !v53[28].m128i_i8[5] )
      {
LABEL_27:
        v50 = 59;
        goto LABEL_28;
      }
LABEL_25:
      tinfo_property = get_tinfo_property();
      if ( (tinfo_property & 0xFu) <= 0xA || (tinfo_property & 0x3F) == 0x2D )
        goto LABEL_49;
      goto LABEL_27;
    }
    v50 = 59;
  }
  v56 = 0;
  copy_tinfo_t();
  v16 = v53[1].m128i_i64[0];
  v17 = *(_DWORD *)(v16 + 8) - 1;
  if ( v17 >= 0 )
  {
    v18 = *(_QWORD *)v16 + 8LL * (unsigned int)v17;
    while ( *(_QWORD *)v18 )
    {
      v19 = *(_DWORD *)(*(_QWORD *)v18 + 8LL);
      if ( v19 == 51 )
      {
        *(_QWORD *)v67 = 0;
        *(_QWORD *)v67 = get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
        get_tinfo_size();
        break;
      }
      if ( v19 == 48 )
      {
        --v17;
        v18 -= 8;
        if ( v17 != -1 )
          continue;
      }
      break;
    }
  }
  clear_tinfo_t();
  if ( v53[28].m128i_i8[5] )
  {
    if ( v50 == 60 )
      goto LABEL_49;
    goto LABEL_25;
  }
LABEL_28:
  v21 = v53->m128i_i64[0];
  if ( !sub_32CB80(&v55, v53->m128i_i64[0]) )
  {
    memset(v67, 0, sizeof(v67));
    print_tinfo();
    v36 = s1;
    if ( *(_QWORD *)(a8 + 8) )
      v36 = *(const char **)a8;
    v37 = s1;
    if ( *(_QWORD *)&v67[8] )
      v37 = *(const char **)v67;
    sub_3311F0(*(_QWORD **)(*(_QWORD *)(v53->m128i_i64[1] + 64) + 8LL), 0xFFFFFFFFFFFFFFFFLL, 0x17u, v37, v36);
    if ( *(_QWORD *)v67 )
    {
      *(_QWORD *)&v67[8] = 0;
      qfree(*(__int64 *)v67);
    }
    goto LABEL_49;
  }
  v24 = j__qalloc_or_throw(64, v21, v22, v23);
  *(_QWORD *)v24 = -1;
  v25 = v24;
  *(_QWORD *)(v24 + 12) = -1;
  *(_DWORD *)(v24 + 8) = v50;
  *(_QWORD *)(v24 + 24) = v15;
  *(_QWORD *)(v24 + 32) = 0;
  *(_QWORD *)(v24 + 40) = 0;
  if ( v51 != 29 )
    v12 = (unsigned __int64)v57 >> 3;
  v26 = v55;
  *(_DWORD *)(v25 + 32) = v12;
  *(_DWORD *)(v25 + 56) = 1;
  *(_QWORD *)(v25 + 48) = v26;
  v55 = 0;
  *(_DWORD *)(v25 + 40) = get_tinfo_size();
  copy_tinfo_t();
  if ( *(_DWORD *)(v11 + 8) == 52 )
  {
    *(_QWORD *)(v11 + 24) = v25;
    sub_32C540(v67, *(_QWORD *)(v53->m128i_i64[0] + 112), (_QWORD *)(v25 + 48));
    copy_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
  }
  else
  {
    v27 = get_tinfo_property();
    if ( (v27 & 0xFu) <= 0xA || (v27 & 0x3F) == 0x2D )
    {
      if ( v53[28].m128i_i8[5] )
      {
        if ( !under_debugger )
          sub_383060(0xC421u, *(double *)v8.m128i_i64);
LABEL_122:
        BUG();
      }
      v53[28].m128i_i8[5] = 1;
    }
    if ( v50 == 60 )
      ++v53[27].m128i_i32[2];
    v11 = v25;
  }
  if ( v51 == 29 )
    goto LABEL_42;
  v28 = *(unsigned int *)(v25 + 32);
  v29 = v53[5].m128i_i64[1];
  if ( v28 > v29 )
  {
    if ( !under_debugger )
      sub_383060(0xC407u, *(double *)v8.m128i_i64);
    goto LABEL_122;
  }
  v53[5].m128i_i64[1] = v29 - v28;
  if ( (v65 & 0x10000000000LL) == 0 || *(_DWORD *)(v25 + 8) != 59 )
    goto LABEL_42;
  v48 = v53->m128i_i64[0];
  v49 = *(_QWORD *)(v25 + 24);
  if ( (unsigned int)(*(_DWORD *)(v49 + 8) - 59) > 1 )
    goto LABEL_106;
  while ( 1 )
  {
    v56 = 0;
    v56 = get_tinfo_property();
    v73 = -1;
    v72 = 1;
    v69 = 0;
    v74 = 0;
    v75 = 0;
    memset(v67, 0, sizeof(v67));
    v68 = 0;
    v70 = 0;
    v71 = 0;
    if ( (unsigned int)sub_32D810((__int128 *)v67, (__int64)&v56, *(unsigned int *)(v49 + 32)) == -1 )
    {
      if ( !under_debugger )
        sub_383060(0xCA8Du, *(double *)v8.m128i_i64);
      goto LABEL_122;
    }
    if ( (v74 & 0x2000000000LL) == 0 )
      break;
    *(_DWORD *)(v49 + 32) += *(_DWORD *)(v25 + 32);
    sub_255850((__int64 *)v25, v49, *(double *)v8.m128i_i64);
    *(_DWORD *)(v25 + 56) |= 0x100u;
    clear_tinfo_t();
    if ( v69 )
    {
      *(_QWORD *)&v70 = 0;
      qfree(v69);
    }
    if ( *(_QWORD *)&v67[16] )
    {
      *(_QWORD *)&v68 = 0;
      qfree(*(__int64 *)&v67[16]);
    }
    clear_tinfo_t();
    v49 = *(_QWORD *)(v25 + 24);
    if ( (unsigned int)(*(_DWORD *)(v49 + 8) - 59) > 1 )
      goto LABEL_106;
  }
  clear_tinfo_t();
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree(v69);
  }
  if ( *(_QWORD *)&v67[16] )
  {
    *(_QWORD *)&v68 = 0;
    qfree(*(__int64 *)&v67[16]);
  }
  clear_tinfo_t();
LABEL_106:
  if ( (*(_BYTE *)(v25 + 57) & 1) != 0 )
    sub_2441C0(v25, *(_QWORD *)(v48 + 112), 0, *(double *)v8.m128i_i64);
LABEL_42:
  clear_tinfo_t();
LABEL_43:
  clear_tinfo_t();
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v60);
  }
  if ( v58 )
  {
    v59.m128i_i64[0] = 0;
    qfree(v58);
  }
  return v11;
}

