__int64 __fastcall sub_19780(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        __m128i a9,
        __m128i a10,
        __int128 a11,
        __int128 a12)
{
  char *v12; // rbx
  const char *v13; // rdx
  __int128 v14; // xmm0
  int v15; // eax
  char v16; // dl
  char v17; // dl
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r14
  __int64 v30; // xmm0_8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // r12
  __int64 idati; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rax
  __int128 v42; // xmm0
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int v46; // r12d
  const char *v47; // rcx
  const char *v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // r13
  __int64 v51; // r15
  _QWORD *v52; // rbx
  __int64 v53; // rdi
  __int64 v54; // rdi
  _DWORD *v56; // rax
  __int64 v57; // rax
  __int128 v58; // [rsp+0h] [rbp-180h]
  __int64 v59; // [rsp+28h] [rbp-158h]
  int v60; // [rsp+4Ch] [rbp-134h]
  __int64 *v61; // [rsp+50h] [rbp-130h]
  __int64 v62; // [rsp+68h] [rbp-118h] BYREF
  char *s1; // [rsp+70h] [rbp-110h] BYREF
  __int128 v64; // [rsp+78h] [rbp-108h]
  const char *v65; // [rsp+90h] [rbp-F0h] BYREF
  unsigned __int64 v66; // [rsp+98h] [rbp-E8h]
  _BYTE v67[24]; // [rsp+B0h] [rbp-D0h] BYREF
  int v68; // [rsp+C8h] [rbp-B8h]
  __int16 v69; // [rsp+CCh] [rbp-B4h]
  const char *v70; // [rsp+D0h] [rbp-B0h] BYREF
  __int128 v71; // [rsp+D8h] [rbp-A8h]
  __int64 v72; // [rsp+E8h] [rbp-98h]
  __int64 v73; // [rsp+F0h] [rbp-90h] BYREF
  __int64 v74; // [rsp+F8h] [rbp-88h] BYREF
  __int128 v75; // [rsp+100h] [rbp-80h]
  __int64 v76; // [rsp+110h] [rbp-70h]
  __int128 v77; // [rsp+118h] [rbp-68h]
  char v78; // [rsp+128h] [rbp-58h]
  __m128i v79; // [rsp+130h] [rbp-50h] BYREF
  __int64 v80; // [rsp+140h] [rbp-40h]
  unsigned __int64 v81; // [rsp+148h] [rbp-38h]

  v61 = (__int64 *)a1;
  v81 = __readfsqword(0x28u);
  v12 = (char *)a2;
  if ( (a2[108] & 2) != 0 )
  {
    sub_10160(
      (__int64)&v70,
      (__int64)a2,
      a3,
      a4,
      a5,
      a6,
      (__int128)_mm_loadu_si128((const __m128i *)&a11),
      (__int128)_mm_loadu_si128((const __m128i *)&a12));
    v13 = ::s1;
    if ( (_QWORD)v71 )
      v13 = v70;
    a2 = "method";
    sub_7470((__int64)"%-12s %s\n", "method", v13);
    a1 = (__int64)v70;
    if ( v70 )
    {
      *(_QWORD *)&v71 = 0;
      qfree(v70);
    }
  }
  v70 = nullptr;
  v71 = 0;
  v75 = 0;
  v77 = 0;
  v14 = (__int128)_mm_loadu_si128((const __m128i *)&a11);
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v76 = 0;
  v78 = 16;
  v15 = sub_CB90(a1, (int)a2, a3, a4, a5, a6, v14, (__int128)_mm_loadu_si128((const __m128i *)&a12));
  v16 = v78 & 0xF;
  if ( (v15 & 0xFFFFFF0F) != 0 || v15 == 192 )
  {
    v17 = v16 | 0xC0;
  }
  else
  {
    v17 = v15 | v16;
    v15 = 0;
  }
  HIDWORD(v72) = v15;
  v78 = v17;
  v18 = sub_BB20();
  sub_A5C0((__int64)&v79, v18, v19, v20);
  s1 = nullptr;
  v64 = 0;
  v58 = (__int128)_mm_load_si128(&v79);
  if ( (unsigned __int8)sub_D270((__int64)&s1, *(double *)&v58, a8, v18, v21, v22, v23, v24, v58, v80)
    && (_QWORD)v64
    && !strcmp(s1, "instancetype") )
  {
    v65 = nullptr;
    *(_OWORD *)v67 = 0;
    v62 = 0;
    v29 = *v61;
    copy_tinfo_t(&v67[8], &v62);
    *(_QWORD *)&v67[16] = 0;
    copy_tinfo_t(&v67[16], &v65);
    v68 = 0;
    v69 = 0;
    clear_tinfo_t(&v62);
    clear_tinfo_t(&v65);
    copy_tinfo_t(v67, v29);
    create_tinfo(&v73, 10, 10, v67);
    clear_tinfo_t(&v67[16]);
    clear_tinfo_t(&v67[8]);
    clear_tinfo_t(v67);
  }
  else
  {
    v30 = _mm_load_si128(&v79).m128i_u64[0];
    if ( !(unsigned __int8)sub_138E0(&v73, v12, v25, v26, v27, v28, *(double *)&v30, a8, a9, a10, v30) )
    {
LABEL_35:
      v46 = 0;
      goto LABEL_36;
    }
  }
  v31 = sub_BB20();
  v60 = sub_A170(v31);
  v32 = v71;
  v33 = (__int64)v70;
  if ( *((_QWORD *)&v71 + 1) < (unsigned __int64)(v71 + 1) )
  {
    v70 = (const char *)qvector_reserve(&v70, v70, v71 + 1, 80);
    v33 = (__int64)v70;
    v32 = v71;
  }
  v34 = v33 + 80 * v32;
  *(_DWORD *)v34 = 0;
  *(_QWORD *)(v34 + 8) = 0;
  *(_QWORD *)(v34 + 16) = 0;
  *(_QWORD *)(v34 + 40) = 0;
  *(_QWORD *)(v34 + 64) = 0;
  *(_DWORD *)(v34 + 72) = 0;
  *(_OWORD *)(v34 + 24) = 0;
  *(_OWORD *)(v34 + 48) = 0;
  *(_QWORD *)&v71 = v71 + 1;
  if ( v60 == 16 )
  {
    v56 = (_DWORD *)qvector_reserve(v34 + 16, 0, 5, 1);
    *(_QWORD *)(v34 + 16) = v56;
    *(_QWORD *)(v34 + 24) = 5;
    *v56 = 1718379891;
    *(_BYTE *)(*(_QWORD *)(v34 + 16) + 4LL) = 0;
    v65 = nullptr;
    v57 = *v61;
    *(_OWORD *)v67 = 0;
    v62 = 0;
    v59 = v57;
    copy_tinfo_t(&v67[8], &v62);
    *(_QWORD *)&v67[16] = 0;
    copy_tinfo_t(&v67[16], &v65);
    v68 = 0;
    v69 = 0;
    clear_tinfo_t(&v62);
    clear_tinfo_t(&v65);
    copy_tinfo_t(v67, v59);
    create_tinfo(v34 + 64, 10, 10, v67);
    clear_tinfo_t(&v67[16]);
    clear_tinfo_t(&v67[8]);
    clear_tinfo_t(v67);
  }
  else
  {
    idati = *(_QWORD *)v12;
    v36 = v34 + 64;
    *(_WORD *)&v67[16] = 256;
    *(_QWORD *)&v67[8] = "id";
    if ( !idati )
    {
      idati = get_idati();
      v36 = v34 + 64;
    }
    *(_QWORD *)v67 = idati;
    create_tinfo(v36, 61, 61, v67);
  }
  v37 = v71;
  v38 = (__int64)v70;
  if ( *((_QWORD *)&v71 + 1) < (unsigned __int64)(v71 + 1) )
  {
    v70 = (const char *)qvector_reserve(&v70, v70, v71 + 1, 80);
    v38 = (__int64)v70;
    v37 = v71;
  }
  v39 = 80 * v37 + v38;
  *(_DWORD *)v39 = 0;
  v40 = v39 + 64;
  *(_QWORD *)(v39 + 8) = 0;
  *(_QWORD *)(v39 + 16) = 0;
  *(_QWORD *)(v39 + 40) = 0;
  *(_QWORD *)(v39 + 64) = 0;
  *(_DWORD *)(v39 + 72) = 0;
  *(_OWORD *)(v39 + 24) = 0;
  *(_OWORD *)(v39 + 48) = 0;
  v41 = *(_QWORD *)v12;
  *(_QWORD *)&v71 = v71 + 1;
  *(_WORD *)&v67[16] = 256;
  *(_QWORD *)&v67[8] = "SEL";
  if ( !v41 )
  {
    v41 = get_idati();
    v40 = v39 + 64;
  }
  *(_QWORD *)v67 = v41;
  create_tinfo(v40, 61, 61, v67);
  v42 = (__int128)_mm_loadu_si128((const __m128i *)&a12);
  v46 = sub_15ED0(
          (__int64 *)&v70,
          (__int64)v12,
          0,
          *(double *)&v42,
          *(double *)a8.m128i_i64,
          a9,
          a10,
          v43,
          v44,
          v45,
          (__int128)_mm_loadu_si128((const __m128i *)&a11),
          v42);
  if ( !(_BYTE)v46 )
    goto LABEL_35;
  v62 = 0;
  create_tinfo(&v62, 12, 12, &v70);
  sub_C260((__int64)&v65);
  if ( v66 > 1 )
  {
    memset(v67, 0, sizeof(v67));
    v47 = ::s1;
    if ( v61[2] )
      v47 = (const char *)v61[1];
    sub_67C0((__int64 *)v67, (__int64)"%c[%s %s]", 2 * (unsigned int)(v60 != 17) + 43, v47, v65);
    v48 = ::s1;
    if ( *(_QWORD *)&v67[8] )
      v48 = *(const char **)v67;
    LOBYTE(v46) = (unsigned int)sub_EB50(&v62, v48, v12, 0, nullptr) == 0;
    if ( *(_QWORD *)v67 )
    {
      *(_QWORD *)&v67[8] = 0;
      qfree(*(_QWORD *)v67);
    }
  }
  if ( v65 )
  {
    v66 = 0;
    qfree(v65);
  }
  clear_tinfo_t(&v62);
LABEL_36:
  if ( s1 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(s1);
  }
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree(v76);
  }
  cleanup_argloc(&v74);
  clear_tinfo_t(&v73);
  v49 = (__int64)v70;
  if ( v70 )
  {
    v50 = v71;
    if ( (_QWORD)v71 )
    {
      v51 = 0;
      do
      {
        v52 = (_QWORD *)(v49 + 80 * v51);
        clear_tinfo_t(v52 + 8);
        v53 = v52[5];
        if ( v53 )
        {
          v52[6] = 0;
          qfree(v53);
        }
        v54 = v52[2];
        if ( v54 )
        {
          v52[3] = 0;
          qfree(v54);
        }
        cleanup_argloc(v52);
        v49 = (__int64)v70;
        ++v51;
      }
      while ( v50 != v51 );
    }
    *(_QWORD *)&v71 = 0;
    qfree(v49);
  }
  return v46;
}

