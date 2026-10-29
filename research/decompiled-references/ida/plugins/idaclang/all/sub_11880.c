__int64 __fastcall sub_11880(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        __int128 a9,
        __int128 a10)
{
  const char *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax
  void *v19; // r14
  unsigned int v20; // r15d
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // rsi
  const char *v39; // rdx
  __int64 idati; // rax
  __int64 v41; // rax
  const char *v42; // rsi
  unsigned int v43; // eax
  __int64 v44; // rax
  size_t v45; // r13
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  const char *v50; // r15
  const char *v51; // rdx
  __int128 v52; // [rsp+0h] [rbp-270h]
  void *src; // [rsp+30h] [rbp-240h] BYREF
  size_t n; // [rsp+38h] [rbp-238h]
  __int64 v55; // [rsp+40h] [rbp-230h]
  const char *v56; // [rsp+50h] [rbp-220h] BYREF
  __int128 v57; // [rsp+58h] [rbp-218h]
  const char *v58; // [rsp+70h] [rbp-200h] BYREF
  __int64 v59; // [rsp+78h] [rbp-1F8h]
  const char *v60; // [rsp+90h] [rbp-1E0h] BYREF
  const char *v61; // [rsp+98h] [rbp-1D8h]
  __int16 v62; // [rsp+A0h] [rbp-1D0h]
  const char *v63; // [rsp+B0h] [rbp-1C0h] BYREF
  void *v64; // [rsp+B8h] [rbp-1B8h]
  __int128 v65; // [rsp+C0h] [rbp-1B0h]
  __int64 v66; // [rsp+D0h] [rbp-1A0h] BYREF
  __int128 v67; // [rsp+D8h] [rbp-198h]
  __int128 v68; // [rsp+E8h] [rbp-188h]
  __int64 v69; // [rsp+F8h] [rbp-178h]
  int v70; // [rsp+100h] [rbp-170h]
  __int64 v71; // [rsp+108h] [rbp-168h]
  __int128 v72; // [rsp+110h] [rbp-160h]
  __int64 v73; // [rsp+120h] [rbp-150h]
  __int128 v74; // [rsp+128h] [rbp-148h]
  __int128 v75; // [rsp+138h] [rbp-138h]
  __int64 v76; // [rsp+148h] [rbp-128h]
  int v77; // [rsp+150h] [rbp-120h]
  int v78; // [rsp+160h] [rbp-110h] BYREF
  __int64 v79; // [rsp+168h] [rbp-108h]
  int *v80; // [rsp+170h] [rbp-100h]
  int *v81; // [rsp+178h] [rbp-F8h]
  __int64 v82; // [rsp+180h] [rbp-F0h]
  __int64 v83; // [rsp+188h] [rbp-E8h]
  __int128 v84; // [rsp+190h] [rbp-E0h]
  __int128 v85; // [rsp+1A0h] [rbp-D0h]
  __int64 v86; // [rsp+1B0h] [rbp-C0h]
  int v87; // [rsp+1B8h] [rbp-B8h]
  int v88; // [rsp+1C8h] [rbp-A8h] BYREF
  __int64 v89; // [rsp+1D0h] [rbp-A0h]
  int *v90; // [rsp+1D8h] [rbp-98h]
  int *v91; // [rsp+1E0h] [rbp-90h]
  __int64 v92; // [rsp+1E8h] [rbp-88h]
  __int64 v93; // [rsp+1F0h] [rbp-80h]
  __int64 v94; // [rsp+1F8h] [rbp-78h]
  __m128i v95; // [rsp+200h] [rbp-70h] BYREF
  __int64 v96; // [rsp+210h] [rbp-60h]
  __m128i v97; // [rsp+220h] [rbp-50h] BYREF
  __int64 v98; // [rsp+230h] [rbp-40h]
  unsigned __int64 v99; // [rsp+238h] [rbp-38h]

  v99 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 108) & 2) != 0 )
  {
    sub_10160(
      (__int64)&v63,
      a2,
      a3,
      a4,
      a5,
      a6,
      (__int128)_mm_loadu_si128((const __m128i *)&a9),
      (__int128)_mm_loadu_si128((const __m128i *)&a10));
    v11 = s1;
    if ( v64 )
      v11 = v63;
    sub_7470((__int64)"%-12s %s\n", "interface", v11);
    if ( v63 )
    {
      v64 = nullptr;
      qfree(v63);
    }
  }
  v55 = 0;
  v12 = sub_BB20();
  sub_A290((__int64)&v95, v12, v13, v14);
  v15 = (__int128)_mm_load_si128(&v95);
  src = nullptr;
  n = 0;
  v18 = sub_FFD0((__int64)&src, a1, 13, (__int64 *)a2, v16, v17, *(double *)&v15, a8, v15, v96);
  v19 = src;
  v20 = v18;
  if ( (_BYTE)v18 )
  {
    v63 = a1;
    v64 = nullptr;
    v65 = 0;
    if ( n )
    {
      v45 = n;
      v64 = (void *)qalloc_or_throw(n);
      *((_QWORD *)&v65 + 1) = v45;
      memcpy(v64, v19, v45);
      *(_QWORD *)&v65 = v45;
    }
    v66 = 0;
    v80 = &v78;
    v81 = &v78;
    v69 = 0;
    v70 = 1;
    v71 = 0;
    v73 = 0;
    v76 = 0;
    v77 = 1;
    v78 = 0;
    v79 = 0;
    v82 = 0;
    v83 = 0;
    v86 = 0;
    v87 = 1;
    v88 = 0;
    v89 = 0;
    v90 = &v88;
    v91 = &v88;
    v92 = 0;
    v93 = 0;
    v94 = 0;
    v67 = 0;
    v68 = 0;
    v72 = 0;
    v74 = 0;
    v75 = 0;
    v84 = 0;
    v85 = 0;
    v22 = sub_BB20();
    sub_A530((__int64)&v97, v22, v23, v24, v25, v26, (__int128)_mm_load_si128(&v95), v96);
    v56 = nullptr;
    v57 = 0;
    v52 = (__int128)_mm_load_si128(&v97);
    if ( !(unsigned __int8)sub_D270((__int64)&v56, *(double *)&v52, a8, v22, v27, v28, v29, v30, v52, v98) )
      goto LABEL_23;
    v34 = v67;
    v35 = v66;
    if ( *((_QWORD *)&v67 + 1) < (unsigned __int64)(v67 + 1) )
    {
      v66 = qvector_reserve(&v66, v66, v67 + 1, 144);
      v35 = v66;
      v34 = v67;
    }
    v36 = v35 + 144 * v34;
    *(_QWORD *)(v36 + 16) = 0;
    v37 = v36;
    *(_OWORD *)(v36 + 24) = 0;
    *(_QWORD *)(v36 + 40) = 0;
    *(_QWORD *)(v36 + 112) = 1;
    *(_DWORD *)(v36 + 120) = -1;
    *(_QWORD *)(v36 + 128) = 0;
    *(_BYTE *)(v36 + 136) = 0;
    *(_OWORD *)v36 = 0;
    *(_OWORD *)(v36 + 48) = 0;
    *(_OWORD *)(v36 + 64) = 0;
    *(_QWORD *)&v67 = v67 + 1;
    v38 = *(_QWORD *)(v36 + 16);
    if ( *(_QWORD *)(v36 + 32) <= 5u )
    {
      v44 = qvector_reserve(v36 + 16, v38, 6, 1);
      *(_QWORD *)(v37 + 16) = v44;
      v38 = v44;
    }
    *(_QWORD *)(v37 + 24) = 6;
    v39 = s1;
    *(_DWORD *)v38 = 1701868915;
    *(_BYTE *)(v38 + 4) = 114;
    *(_BYTE *)(*(_QWORD *)(v37 + 16) + 5LL) = 0;
    if ( (_QWORD)v57 )
      v39 = v56;
    if ( !v39 )
      goto LABEL_31;
    idati = *(_QWORD *)a2;
    v61 = v39;
    v62 = 256;
    if ( !idati )
      idati = get_idati();
    v60 = (const char *)idati;
    v38 = 61;
    if ( (unsigned __int8)create_tinfo(v37 + 64, 61, 61, &v60) )
    {
LABEL_23:
      v60 = (const char *)a2;
      v61 = (const char *)&v63;
      LOBYTE(v62) = 1;
      v41 = sub_BB20();
      if ( !(unsigned int)sub_A020(v41, (__int64)sub_1A1D0, (__int64)&v60) )
      {
        create_tinfo(a1, 13, 13, &v66);
        v42 = s1;
        if ( (_QWORD)v65 )
          v42 = (const char *)v64;
        v43 = sub_EB50(a1, v42, (_QWORD *)a2, 1u, nullptr);
        LOBYTE(v43) = v43 == 0;
        v20 = v43;
        goto LABEL_25;
      }
    }
    else
    {
LABEL_31:
      sub_E8A0((__int64)&v60, v38, (__int64)v39, v31, v32, v33, (__int128)_mm_load_si128(&v97));
      v50 = s1;
      if ( v61 )
        v50 = v60;
      sub_E8A0((__int64)&v58, v38, v46, v47, v48, v49, (__int128)_mm_load_si128(&v95));
      v51 = s1;
      if ( v59 )
        v51 = v58;
      sub_67C0((__int64 *)(a2 + 80), (__int64)"interface %s: invalid superclass type: %s", v51, v50);
      if ( v58 )
      {
        v59 = 0;
        qfree(v58);
      }
      if ( v60 )
      {
        v61 = nullptr;
        qfree(v60);
      }
      ++*(_QWORD *)(a2 + 136);
    }
    v20 = 0;
LABEL_25:
    if ( v56 )
    {
      *(_QWORD *)&v57 = 0;
      qfree(v56);
    }
    sub_DA20(&v63);
  }
  if ( v19 )
    qfree(v19);
  return v20;
}

