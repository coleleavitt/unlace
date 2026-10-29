__int64 __fastcall sub_177B0(
        const char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
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
  __int64 v17; // r12
  _QWORD *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rbx
  const char *v22; // r15
  __m128i v23; // xmm1
  __int64 v24; // rdi
  __int64 v25; // r14
  const char *v26; // rdi
  __m128i v27; // xmm1
  const char *v28; // r14
  char *v29; // rax
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rdi
  const char *v35; // r12
  __m128i v36; // xmm0
  __int64 v37; // rdi
  const char *v38; // rdi
  __m128i v39; // xmm0
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  const char *v46; // r15
  __int64 v47; // xmm0_8
  char v48; // al
  __int64 v49; // rax
  int tinfo_property; // r15d
  __int64 v51; // rax
  unsigned __int8 v52; // r14
  unsigned __int8 tinfo_size; // al
  char v54; // al
  __int64 v55; // rax
  __m128i v56; // xmm0
  const char *v57; // rax
  __m128i v58; // xmm0
  __int64 v59; // rax
  const char *v60; // rdi
  const char *v61; // r12
  __int64 v62; // rbx
  const char *v63; // rsi
  __int64 v64; // r14
  __int64 v65; // rbx
  const char *v66; // rdx
  __int64 v67; // rax
  __int64 v69; // rdx
  _QWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  __m128i v73; // [rsp+20h] [rbp-D0h] BYREF
  const char *v74; // [rsp+38h] [rbp-B8h]
  _QWORD v75[2]; // [rsp+40h] [rbp-B0h] BYREF
  const char *v76; // [rsp+50h] [rbp-A0h] BYREF
  __m128i v77; // [rsp+58h] [rbp-98h] BYREF
  __m128i v78[4]; // [rsp+70h] [rbp-80h] BYREF
  unsigned __int64 v79; // [rsp+B8h] [rbp-38h]

  v74 = a1;
  v79 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 108LL) & 2) != 0 )
  {
    sub_10160(
      (__int64)&v76,
      a2,
      a3,
      a4,
      a5,
      a6,
      (__int128)_mm_loadu_si128((const __m128i *)&a11),
      (__int128)_mm_loadu_si128((const __m128i *)&a12));
    v12 = s1;
    if ( v77.m128i_i64[0] )
      v12 = v76;
    sub_7470((__int64)"%-12s %s\n", "field", v12);
    if ( v76 )
    {
      v77.m128i_i64[0] = 0;
      qfree(v76);
    }
  }
  v13 = sub_BB20();
  sub_A290((__int64)v78, v13, v14, v15);
  v16 = sub_BB20();
  v17 = sub_AD40(v16);
  if ( v17 <= 0 )
    return 1;
  v18 = *((_QWORD **)v74 + 1);
  v19 = v18[5];
  v20 = v18[4];
  if ( v18[6] < (unsigned __int64)(v19 + 1) )
  {
    v72 = qvector_reserve(v18 + 4, v20, v19 + 1, 144);
    v19 = v18[5];
    v18[4] = v72;
    v20 = v72;
  }
  v21 = v20 + 144 * v19;
  *(_OWORD *)v21 = 0;
  *(_OWORD *)(v21 + 24) = 0;
  *(_OWORD *)(v21 + 48) = 0;
  *(_OWORD *)(v21 + 64) = 0;
  *(_QWORD *)(v21 + 16) = 0;
  *(_QWORD *)(v21 + 40) = 0;
  *(_QWORD *)(v21 + 112) = 1;
  *(_DWORD *)(v21 + 120) = -1;
  *(_QWORD *)(v21 + 128) = 0;
  *(_BYTE *)(v21 + 136) = 0;
  ++v18[5];
  sub_C260((__int64)&v76);
  v22 = v76;
  v23 = _mm_loadu_si128(&v77);
  v76 = nullptr;
  v77 = 0;
  v24 = *(_QWORD *)(v21 + 16);
  v25 = v23.m128i_i64[0];
  if ( v24 )
  {
    *(_QWORD *)(v21 + 24) = 0;
    v73 = v23;
    qfree(v24);
    v26 = v76;
    v27 = _mm_load_si128(&v73);
    *(_QWORD *)(v21 + 16) = v22;
    *(__m128i *)(v21 + 24) = v27;
    if ( v26 )
    {
      v77.m128i_i64[0] = 0;
      qfree(v26);
      v25 = *(_QWORD *)(v21 + 24);
    }
  }
  else
  {
    *(_QWORD *)(v21 + 16) = v22;
    *(__m128i *)(v21 + 24) = v23;
  }
  if ( v25 )
  {
    v28 = *(const char **)(v21 + 16);
    v29 = strstr(v28, "anonymous ");
    if ( v29 )
    {
      if ( v29 - v28 != -1 )
        *(_QWORD *)(v21 + 24) = 0;
    }
  }
  v30 = *(_QWORD *)(*((_QWORD *)v74 + 1) + 40LL);
  v31 = sub_BB20();
  v32 = sub_AF20(v31);
  v33 = sub_BB20();
  v34 = (unsigned int)sub_B430(v33);
  if ( v32 >= 0 )
  {
    v30 = 8 * v32;
    goto LABEL_18;
  }
  if ( !v30 )
  {
LABEL_18:
    *(_QWORD *)v21 = v30;
    if ( !(_DWORD)v34 )
      goto LABEL_19;
    goto LABEL_54;
  }
  v69 = *((_QWORD *)v74 + 1);
  if ( *(_BYTE *)(v69 + 83) )
  {
    v30 = 0;
    goto LABEL_18;
  }
  v70 = (_QWORD *)(*(_QWORD *)(v69 + 32) + 16 * (9 * v30 - 9));
  v71 = *v70 + v70[1];
  if ( (_DWORD)v34 )
  {
    *(_QWORD *)v21 = ((int)v34 - 1 + v71) & -(int)v34;
LABEL_54:
    *(_BYTE *)(v21 + 136) = log2floor(v34) + 1;
    goto LABEL_19;
  }
  *(_QWORD *)v21 = (v71 + 7) & 0xFFFFFFFFFFFFFFF8LL;
LABEL_19:
  *(_QWORD *)(v21 + 8) = 8 * v17;
  sub_C420((__int64)&v76);
  v35 = v76;
  v36 = _mm_loadu_si128(&v77);
  v76 = nullptr;
  v77 = 0;
  v37 = *(_QWORD *)(v21 + 40);
  if ( v37 )
  {
    *(_QWORD *)(v21 + 48) = 0;
    v73 = v36;
    qfree(v37);
    v38 = v76;
    v39 = _mm_load_si128(&v73);
    *(_QWORD *)(v21 + 40) = v35;
    *(__m128i *)(v21 + 48) = v39;
    if ( v38 )
    {
      v77.m128i_i64[0] = 0;
      qfree(v38);
    }
  }
  else
  {
    *(_QWORD *)(v21 + 40) = v35;
    *(__m128i *)(v21 + 48) = v36;
  }
  v40 = sub_BB20();
  v41 = (unsigned int)sub_BAF0(v40) - 1;
  v44 = *((_QWORD *)v74 + 1);
  v45 = *(_QWORD *)(v44 + 328);
  if ( (unsigned int)v41 <= 2 )
    v45 |= qword_22350[v41];
  v46 = v74;
  v47 = _mm_load_si128(v78).m128i_u64[0];
  *(_QWORD *)(v44 + 328) = v45;
  v48 = sub_138E0(
          (_QWORD *)(v21 + 64),
          *(const char **)v46,
          v44,
          v45,
          v42,
          v43,
          *(double *)&v47,
          (__m128i)0LL,
          a9,
          a10,
          v47);
  *((_BYTE *)v46 + 16) = v48;
  if ( v48 )
  {
    v49 = sub_BB20();
    if ( !(unsigned int)sub_ACE0(v49) )
      goto LABEL_29;
    tinfo_property = get_tinfo_property(*(_QWORD *)(v21 + 64), 3);
    v51 = sub_BB20();
    v52 = sub_AD10(v51);
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(v21 + 64), 0);
    BYTE1(v76) = v52;
    BYTE2(v76) = tinfo_property == 2;
    LOBYTE(v76) = tinfo_size;
    if ( 8 * tinfo_size < v52 )
      BYTE1(v76) = 8 * tinfo_size;
    v54 = create_tinfo(v21 + 64, 14, 14, &v76);
    *((_BYTE *)v74 + 16) = v54;
    if ( v54 )
    {
LABEL_29:
      v55 = sub_BB20();
      if ( (unsigned int)sub_B400(v55) )
        *(_DWORD *)(v21 + 132) |= 0x40u;
      v76 = nullptr;
      v77 = 0;
      v56 = _mm_loadu_si128((const __m128i *)&a11);
      v57 = *(const char **)v74;
      v75[0] = &v76;
      v78[2] = v56;
      v58 = _mm_loadu_si128((const __m128i *)&a12);
      v75[1] = v57;
      v78[3] = v58;
      v59 = sub_BB20();
      sub_A020(v59, (__int64)sub_10E30, (__int64)v75);
      v60 = v76;
      v61 = &v76[24 * v77.m128i_i64[0]];
      if ( v61 != v76 )
      {
        v74 = v76;
        v62 = v21 + 72;
        do
        {
          if ( !(unsigned __int8)value_repr_t__parse_value_repr(v62, v74, 13) )
          {
            v63 = s1;
            if ( *((_QWORD *)v74 + 1) )
              v63 = *(const char **)v74;
            sub_72C0((__int64)"Unrecognized udt member attribute '%s'\n", v63);
          }
          v74 += 24;
        }
        while ( v61 != v74 );
        v60 = v76;
      }
      if ( v60 )
      {
        v64 = v77.m128i_i64[0];
        if ( v77.m128i_i64[0] )
        {
          v65 = 0;
          do
          {
            v66 = &v60[24 * v65];
            v67 = *(_QWORD *)v66;
            if ( *(_QWORD *)v66 )
            {
              *((_QWORD *)v66 + 1) = 0;
              qfree(v67);
              v60 = v76;
            }
            ++v65;
          }
          while ( v64 != v65 );
        }
        v77.m128i_i64[0] = 0;
        qfree(v60);
      }
      return 1;
    }
  }
  return 0;
}

