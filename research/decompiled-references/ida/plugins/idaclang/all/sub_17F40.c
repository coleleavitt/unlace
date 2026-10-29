__int64 __fastcall sub_17F40(
        _QWORD *a1,
        __int64 a2,
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
  const char *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // xmm0_8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // r12d
  __int64 v31; // rdi
  __int64 v32; // r13
  __int64 v33; // r15
  _QWORD *v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rdi
  char v38; // al
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int128 v43; // xmm0
  const char *v44; // rax
  const char *v45; // rsi
  __int64 v46; // rax
  __m128i v47; // xmm0
  const char *v48; // rdx
  __m128i v49; // xmm0
  const char *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  const char *v54; // rdx
  const char *v55; // rsi
  __m128i v56; // [rsp+20h] [rbp-160h] BYREF
  __int64 v57; // [rsp+38h] [rbp-148h]
  const char *v58; // [rsp+40h] [rbp-140h]
  char *v59; // [rsp+48h] [rbp-138h]
  const char *v60; // [rsp+50h] [rbp-130h] BYREF
  __m128i v61; // [rsp+58h] [rbp-128h]
  const char *v62; // [rsp+70h] [rbp-110h] BYREF
  __int128 v63; // [rsp+78h] [rbp-108h]
  const char *v64; // [rsp+90h] [rbp-F0h] BYREF
  __m128i v65; // [rsp+98h] [rbp-E8h] BYREF
  const char *v66; // [rsp+B0h] [rbp-D0h] BYREF
  __int128 v67; // [rsp+B8h] [rbp-C8h]
  __int64 v68; // [rsp+C8h] [rbp-B8h]
  __int64 v69; // [rsp+D0h] [rbp-B0h] BYREF
  __int64 v70; // [rsp+D8h] [rbp-A8h] BYREF
  __int128 v71; // [rsp+E0h] [rbp-A0h]
  __int64 v72; // [rsp+F0h] [rbp-90h]
  __int128 v73; // [rsp+F8h] [rbp-88h]
  char v74; // [rsp+108h] [rbp-78h]
  __m128i v75; // [rsp+110h] [rbp-70h] BYREF
  __int64 v76; // [rsp+120h] [rbp-60h]
  __m128i v77; // [rsp+130h] [rbp-50h] BYREF
  unsigned __int64 v78; // [rsp+148h] [rbp-38h]

  v59 = (char *)a2;
  v78 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 108) & 2) != 0 )
  {
    sub_10160(
      (__int64)&v66,
      a2,
      a3,
      a4,
      a5,
      a6,
      (__int128)_mm_loadu_si128((const __m128i *)&a11),
      (__int128)_mm_loadu_si128((const __m128i *)&a12));
    v12 = s1;
    if ( (_QWORD)v67 )
      v12 = v66;
    sub_7470((__int64)"%-12s %s\n", "func", v12);
    if ( v66 )
    {
      *(_QWORD *)&v67 = 0;
      qfree(v66);
    }
  }
  v13 = sub_BB20();
  sub_A290((__int64)&v75, v13, v14, v15);
  v66 = nullptr;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v72 = 0;
  v74 = 16;
  v67 = 0;
  v71 = 0;
  v73 = 0;
  v16 = sub_BB20();
  sub_A830((__int64)&v77, v16, v17, v18, v19, v20, (__int128)_mm_load_si128(&v75), v76);
  v21 = _mm_load_si128(&v77).m128i_u64[0];
  if ( !(unsigned __int8)sub_138E0(&v69, v59, v22, v23, v24, v25, *(double *)&v21, a8, a9, a10, v21) )
    goto LABEL_7;
  v38 = sub_CAD0((__int64)&v69, (int)v59, v26, v27, v28, v29, (__int128)_mm_load_si128(&v75), v76);
  HIDWORD(v68) = 0;
  v74 = v38 | v74 & 0xF;
  v39 = sub_BB20();
  if ( (unsigned int)sub_AF50(v39) )
    LODWORD(v68) = v68 | 2;
  v43 = (__int128)_mm_loadu_si128((const __m128i *)&a12);
  v30 = sub_15ED0(
          (__int64 *)&v66,
          (__int64)v59,
          0,
          *(double *)&v43,
          *(double *)a8.m128i_i64,
          a9,
          a10,
          v40,
          v41,
          v42,
          (__int128)_mm_loadu_si128((const __m128i *)&a11),
          v43);
  if ( !(_BYTE)v30 )
  {
LABEL_7:
    v30 = 0;
    goto LABEL_8;
  }
  create_tinfo(a1, 12, 12, &v66);
  v44 = *((const char **)v59 + 20);
  v60 = nullptr;
  v61 = 0;
  if ( v44 )
  {
    v58 = v44;
    sub_C260((__int64)&v64);
    v45 = s1;
    if ( v65.m128i_i64[0] )
      v45 = v64;
    if ( ((unsigned __int8 (__fastcall *)(const char **, const char *, _QWORD *))v58)(&v60, v45, a1) )
    {
      if ( v64 )
      {
        v65.m128i_i64[0] = 0;
        qfree(v64);
        v46 = v61.m128i_i64[0];
        goto LABEL_35;
      }
LABEL_34:
      v46 = v61.m128i_i64[0];
      goto LABEL_35;
    }
    if ( v64 )
    {
      v65.m128i_i64[0] = 0;
      qfree(v64);
    }
  }
  sub_C6E0((__int64)&v64);
  v47 = _mm_loadu_si128(&v65);
  v48 = v64;
  v65 = 0;
  v64 = nullptr;
  v46 = v47.m128i_i64[0];
  if ( v60 )
  {
    v58 = v48;
    v56 = v47;
    v57 = v47.m128i_i64[0];
    v61.m128i_i64[0] = 0;
    qfree(v60);
    v49 = _mm_load_si128(&v56);
    v46 = v57;
    v60 = v58;
    v61 = v49;
    if ( !v64 )
      goto LABEL_35;
    v65.m128i_i64[0] = 0;
    qfree(v64);
    goto LABEL_34;
  }
  v60 = v48;
  v61 = v47;
LABEL_35:
  v50 = s1;
  if ( v46 )
    v50 = v60;
  if ( (unsigned int)sub_EB50(a1, v50, v59, 0, nullptr) )
  {
LABEL_43:
    v30 = 0;
    goto LABEL_39;
  }
  v51 = sub_BB20();
  if ( (unsigned int)sub_AD70(v51) == 1 )
  {
    v58 = (const char *)sub_BB20();
    v52 = sub_BB20();
    v53 = sub_B130(v52);
    if ( (unsigned int)sub_ADA0((__int64)v58, v53) )
    {
      if ( (v59[105] & 1) != 0 )
      {
        v62 = nullptr;
        v63 = 0;
        sub_C260((__int64)&v64);
        v54 = s1;
        if ( v65.m128i_i64[0] )
          v54 = v64;
        sub_67C0((__int64 *)&v62, (__int64)"_%s", v54);
        if ( v64 )
        {
          v65.m128i_i64[0] = 0;
          qfree(v64);
        }
        v55 = s1;
        if ( (_QWORD)v63 )
          v55 = v62;
        if ( !(unsigned int)sub_EB50(a1, v55, v59, 0, nullptr) )
        {
          if ( v62 )
          {
            *(_QWORD *)&v63 = 0;
            qfree(v62);
          }
          goto LABEL_39;
        }
        if ( v62 )
        {
          *(_QWORD *)&v63 = 0;
          qfree(v62);
        }
        goto LABEL_43;
      }
    }
  }
LABEL_39:
  if ( v60 )
  {
    v61.m128i_i64[0] = 0;
    qfree(v60);
  }
LABEL_8:
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree(v72);
  }
  cleanup_argloc(&v70);
  clear_tinfo_t(&v69);
  v31 = (__int64)v66;
  if ( v66 )
  {
    v32 = v67;
    if ( (_QWORD)v67 )
    {
      v33 = 0;
      do
      {
        v34 = (_QWORD *)(v31 + 80 * v33);
        clear_tinfo_t(v34 + 8);
        v35 = v34[5];
        if ( v35 )
        {
          v34[6] = 0;
          qfree(v35);
        }
        v36 = v34[2];
        if ( v36 )
        {
          v34[3] = 0;
          qfree(v36);
        }
        cleanup_argloc(v34);
        v31 = (__int64)v66;
        ++v33;
      }
      while ( v32 != v33 );
    }
    *(_QWORD *)&v67 = 0;
    qfree(v31);
  }
  return v30;
}

