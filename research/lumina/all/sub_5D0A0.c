__int64 __fastcall sub_5D0A0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __m128i *a4,
        char *a5,
        __int64 a6,
        _WORD *a7,
        __int64 a8,
        char a9)
{
  char v9; // r15
  int v11; // r13d
  char *v12; // rbx
  const char *v13; // rdi
  size_t v14; // rcx
  __int64 i; // rax
  unsigned int v16; // r12d
  __m128i v17; // xmm0
  void *v18; // r12
  size_t v19; // r8
  __int32 v20; // r9d
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rsi
  __m128i v25; // xmm2
  __int64 v26; // rax
  __int16 v27; // dx
  void *v28; // rdi
  __int64 v29; // rax
  const char *v30; // rax
  const char *v31; // r12
  size_t v32; // rax
  size_t v33; // r8
  __m128i v35; // xmm0
  void *v36; // r12
  size_t v37; // r8
  __int32 v38; // r9d
  __m128i v39; // xmm1
  __m128i v40; // xmm0
  __int64 v41; // rax
  __int64 v42; // rsi
  __m128i v43; // xmm2
  __int64 v44; // rax
  __int16 v45; // dx
  __int64 v46; // rax
  size_t v47; // rdx
  char *v48; // rdi
  char *v49; // rsi
  char *v50; // rax
  char *v51; // rbx
  const __m128i *v52; // rsi
  __m128i *v53; // r14
  const char *v54; // rsi
  __m128i *v55; // rbx
  __int64 v56; // rax
  __m128i *v57; // rax
  __m128i v58; // [rsp+8h] [rbp-238h] BYREF
  __m128i v59; // [rsp+18h] [rbp-228h] BYREF
  _WORD *v60; // [rsp+28h] [rbp-218h]
  char *v61; // [rsp+30h] [rbp-210h]
  __m128i *v62; // [rsp+38h] [rbp-208h]
  __int64 v63; // [rsp+40h] [rbp-200h]
  __int64 v64; // [rsp+48h] [rbp-1F8h]
  char **p_s; // [rsp+50h] [rbp-1F0h]
  __int64 *v66; // [rsp+58h] [rbp-1E8h]
  __int64 v67; // [rsp+60h] [rbp-1E0h]
  _BYTE *v68; // [rsp+68h] [rbp-1D8h]
  size_t n; // [rsp+70h] [rbp-1D0h]
  size_t v70; // [rsp+78h] [rbp-1C8h]
  __int64 v71; // [rsp+80h] [rbp-1C0h] BYREF
  time_t timer; // [rsp+88h] [rbp-1B8h] BYREF
  char *s; // [rsp+90h] [rbp-1B0h] BYREF
  __int128 v74; // [rsp+98h] [rbp-1A8h]
  void *v75; // [rsp+B0h] [rbp-190h] BYREF
  __int128 v76; // [rsp+B8h] [rbp-188h]
  void *v77; // [rsp+D0h] [rbp-170h] BYREF
  __int128 v78; // [rsp+D8h] [rbp-168h]
  void *ptr; // [rsp+F0h] [rbp-150h] BYREF
  __int128 v80; // [rsp+F8h] [rbp-148h]
  int v81; // [rsp+110h] [rbp-130h] BYREF
  __int16 v82; // [rsp+114h] [rbp-12Ch]
  __m128i v83; // [rsp+116h] [rbp-12Ah] BYREF
  unsigned __int16 v84; // [rsp+126h] [rbp-11Ah]
  __m128i v85; // [rsp+128h] [rbp-118h] BYREF
  void *src; // [rsp+138h] [rbp-108h]
  __int128 v87; // [rsp+140h] [rbp-100h]
  int v88; // [rsp+150h] [rbp-F0h] BYREF
  __int16 v89; // [rsp+154h] [rbp-ECh] BYREF
  __m128i v90[3]; // [rsp+156h] [rbp-EAh] BYREF
  _BYTE v91[96]; // [rsp+190h] [rbp-B0h] BYREF
  char v92; // [rsp+1F0h] [rbp-50h] BYREF
  unsigned __int64 v93; // [rsp+208h] [rbp-38h]

  v9 = 0;
  v11 = 0;
  v67 = a1;
  v63 = a3;
  v60 = a7;
  v62 = a4;
  v61 = a5;
  v64 = a6;
  v59.m128i_i64[1] = a8;
  v93 = __readfsqword(0x28u);
  a4->m128i_i64[0] = 0;
  *(__int64 *)((char *)&a4[13].m128i_i64[1] + 6) = 0;
  memset(
    (void *)((unsigned __int64)&a4->m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a4 - (((_DWORD)a4 + 8) & 0xFFFFFFF8) + 230) >> 3));
  v68 = v91;
  memset(v91, 0, 0x58u);
  sub_195D50(v91);
  s = nullptr;
  v75 = nullptr;
  src = nullptr;
  v71 = 0;
  v74 = 0;
  v76 = 0;
  v87 = 0;
  time(&timer);
  v66 = &v71;
  p_s = &s;
  while ( (unsigned __int8)sub_18D6E0(v67, p_s, v66) )
  {
    ++v11;
    v70 = v74;
    if ( (_QWORD)v74 )
    {
      v12 = s;
      v70 = strlen(s);
      if ( v11 == 1 )
      {
        if ( strncmp(v12, "HEXRAYS_LICENSE ", 0x10u) )
          goto LABEL_74;
        v9 |= (int)strtol(v12 + 16, nullptr, 10) > 8;
      }
    }
    else
    {
      if ( v11 == 1 )
      {
LABEL_74:
        v16 = 3;
        goto LABEL_44;
      }
      v12 = (char *)s1;
    }
    v77 = nullptr;
    ptr = nullptr;
    v78 = 0;
    v80 = 0;
    n = (size_t)sub_5C990((__int64)v12, (__int64)&ptr);
    v13 = s1;
    if ( (_QWORD)v80 )
      LODWORD(v13) = (_DWORD)ptr;
    if ( (unsigned int)sub_19DA80(
                         (_DWORD)v13,
                         (unsigned int)"%02X-%02X%02X-%02X%02X-%02X",
                         (unsigned int)&v88,
                         (unsigned int)&v89,
                         (unsigned int)v90[0].m128i_u32 + 2,
                         (unsigned int)&v90[0].m128i_u32[1] + 2) == 6 )
    {
      v14 = v70;
      for ( i = 0; i != 6; ++i )
        *((_BYTE *)&v81 + i) = *(&v88 + i);
      v70 = v14;
      v16 = sub_5CB00(n, (__int64)&v81, (__int64 *)&v77, v64, timer, v9);
      if ( v16 )
        goto LABEL_40;
      v17 = _mm_loadu_si128(&v83);
      v18 = nullptr;
      v19 = v87;
      v20 = v84;
      v21 = _mm_loadl_epi64((const __m128i *)&v85.m128i_u64[1]);
      v88 = v81;
      v90[0] = v17;
      v22 = _mm_loadl_epi64(&v85);
      v89 = v82;
      if ( (_QWORD)v87 )
      {
        v59.m128i_i32[0] = v84;
        n = v87;
        v58.m128i_i64[0] = v21.m128i_i64[0];
        v58.m128i_i64[1] = v22.m128i_i64[0];
        v18 = (void *)sub_198760(v87);
        memcpy(v18, src, n);
        v20 = v59.m128i_i32[0];
        v21 = _mm_loadl_epi64(&v58);
        v22 = _mm_loadl_epi64((const __m128i *)&v58.m128i_u64[1]);
        v19 = n;
      }
      v23 = a2[1];
      v24 = *a2;
      if ( a2[2] < (unsigned __int64)(v23 + 1) )
      {
        v58.m128i_i64[0] = v19;
        LODWORD(n) = v20;
        v58.m128i_i64[1] = v21.m128i_i64[0];
        v59.m128i_i64[0] = v22.m128i_i64[0];
        v46 = sub_1987B0(a2, v24, v23 + 1, 64);
        *a2 = v46;
        v24 = v46;
        v19 = v58.m128i_i64[0];
        v23 = a2[1];
        LOWORD(v20) = n;
        v21 = _mm_loadl_epi64((const __m128i *)&v58.m128i_u64[1]);
        v22 = _mm_loadl_epi64(&v59);
      }
      v25 = _mm_loadu_si128(v90);
      v26 = v24 + (v23 << 6);
      *(_DWORD *)v26 = v88;
      v27 = v89;
      *(__m128i *)(v26 + 24) = _mm_unpacklo_epi64(v22, v21);
      *(_WORD *)(v26 + 4) = v27;
      *(_WORD *)(v26 + 22) = v20;
      *(_QWORD *)(v26 + 40) = v18;
      *(__m128i *)(v26 + 6) = v25;
      *(__m128i *)(v26 + 48) = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
      ++a2[1];
    }
    if ( v9
      && strspn(v12, " ") > 0xF
      && !(unsigned int)sub_5CB00((__int64)v12, (__int64)&v81, (__int64 *)&v77, v64, timer, 1) )
    {
      v35 = _mm_loadu_si128(&v83);
      v36 = nullptr;
      v37 = v87;
      v38 = v84;
      v39 = _mm_loadl_epi64((const __m128i *)&v85.m128i_u64[1]);
      v88 = v81;
      v90[0] = v35;
      v40 = _mm_loadl_epi64(&v85);
      v89 = v82;
      if ( (_QWORD)v87 )
      {
        v59.m128i_i32[0] = v84;
        n = v87;
        v58.m128i_i64[0] = v39.m128i_i64[0];
        v58.m128i_i64[1] = v40.m128i_i64[0];
        v36 = (void *)sub_198760(v87);
        memcpy(v36, src, n);
        v38 = v59.m128i_i32[0];
        v39 = _mm_loadl_epi64(&v58);
        v40 = _mm_loadl_epi64((const __m128i *)&v58.m128i_u64[1]);
        v37 = n;
      }
      v41 = a2[1];
      v42 = *a2;
      if ( a2[2] < (unsigned __int64)(v41 + 1) )
      {
        v58.m128i_i64[0] = v37;
        LODWORD(n) = v38;
        v58.m128i_i64[1] = v39.m128i_i64[0];
        v59.m128i_i64[0] = v40.m128i_i64[0];
        v56 = sub_1987B0(a2, v42, v41 + 1, 64);
        *a2 = v56;
        v42 = v56;
        v37 = v58.m128i_i64[0];
        v41 = a2[1];
        LOWORD(v38) = n;
        v39 = _mm_loadl_epi64((const __m128i *)&v58.m128i_u64[1]);
        v40 = _mm_loadl_epi64(&v59);
      }
      v43 = _mm_loadu_si128(v90);
      v44 = v42 + (v41 << 6);
      *(_DWORD *)v44 = v88;
      v45 = v89;
      *(__m128i *)(v44 + 24) = _mm_unpacklo_epi64(v40, v39);
      *(_WORD *)(v44 + 4) = v45;
      *(_WORD *)(v44 + 22) = v38;
      *(_QWORD *)(v44 + 40) = v36;
      *(__m128i *)(v44 + 6) = v43;
      *(__m128i *)(v44 + 48) = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
      ++a2[1];
    }
    if ( !strncmp(v12, "USER ", 5u) )
    {
      v30 = (const char *)sub_19DB40(v12 + 5);
      v31 = v30;
      if ( v30 && (v32 = strlen(v30), (v33 = v32) != 0) )
      {
        v47 = v32 + 1;
        v48 = *(char **)v63;
        if ( *(_QWORD *)(v63 + 16) < v32 + 1 )
        {
          v49 = *(char **)v63;
          v59.m128i_i64[0] = v32;
          n = v32 + 1;
          v48 = (char *)sub_1987B0(v63, v49, v47, 1);
          v33 = v59.m128i_i64[0];
          v47 = n;
          *(_QWORD *)v63 = v48;
        }
        n = v33;
        *(_QWORD *)(v63 + 8) = v47;
        memmove(v48, v31, v33);
        *(_BYTE *)(*(_QWORD *)v63 + n) = 0;
      }
      else
      {
        *(_QWORD *)(v63 + 8) = 0;
      }
    }
    if ( !strncmp(v12, "EMAIL ", 6u) )
    {
      v29 = sub_19DB40(v12 + 6);
      sub_1998A0((char *)&v62[7].m128i_u64[1] + 7, v29, 64);
    }
    if ( *v12 == 83 && v12[1] == 58 )
    {
      if ( !(unsigned __int8)sub_18D340(&v75, v12 + 2, v70 - 2) )
      {
        v16 = 7;
LABEL_40:
        if ( ptr )
        {
          *(_QWORD *)&v80 = 0;
          j__free(ptr);
        }
        if ( v77 )
        {
          *(_QWORD *)&v78 = 0;
          j__free(v77);
        }
        goto LABEL_44;
      }
      if ( ptr )
      {
        *(_QWORD *)&v80 = 0;
        j__free(ptr);
      }
      v28 = v77;
      if ( v77 )
      {
LABEL_29:
        *(_QWORD *)&v78 = 0;
        j__free(v28);
      }
    }
    else
    {
      sub_196460(v68, v12, v70);
      if ( ptr )
      {
        *(_QWORD *)&v80 = 0;
        j__free(ptr);
      }
      v28 = v77;
      if ( v77 )
        goto LABEL_29;
    }
  }
  v50 = &v92;
  if ( v61 )
    v50 = v61;
  v51 = v50;
  sub_1966A0(v50, v68);
  if ( !(_QWORD)v76 )
    goto LABEL_68;
  if ( (_QWORD)v76 != 160 )
  {
    v16 = 8;
    goto LABEL_44;
  }
  v52 = (const __m128i *)v75;
  if ( (a9 & 1) == 0 )
  {
    v57 = v62;
    *v62 = _mm_loadu_si128((const __m128i *)v75);
    v57[1] = _mm_loadu_si128(v52 + 1);
    v57[2] = _mm_loadu_si128(v52 + 2);
    v57[3] = _mm_loadu_si128(v52 + 3);
    v57[4] = _mm_loadu_si128(v52 + 4);
    v57[5] = _mm_loadu_si128(v52 + 5);
    v57[6] = _mm_loadu_si128(v52 + 6);
    v57[7] = _mm_loadu_si128(v52 + 7);
    v57[8] = _mm_loadu_si128(v52 + 8);
    v57[9] = _mm_loadu_si128(v52 + 9);
    goto LABEL_68;
  }
  v53 = v62;
  if ( !sub_5CF30((__int64)v62, v75, v60, (_WORD *)v59.m128i_i64[1], 1) )
  {
    v16 = 9;
    goto LABEL_44;
  }
  if ( (a9 & 2) != 0 || (v16 = 10, *(_OWORD *)v51 - *(_OWORD *)((char *)&v53[6] + 15) == 0) )
  {
LABEL_68:
    if ( v62 && v9 )
    {
      v54 = s1;
      if ( *(_QWORD *)(v63 + 8) )
        v54 = *(const char **)v63;
      v55 = v62;
      sub_1998A0(&v62[2].m128i_i16[1], v54, 69);
      v55[1].m128i_i32[1] = 0;
      v55->m128i_i16[1] = -28672;
      v55->m128i_i64[1] = -1;
      *(__int64 *)((char *)v55[6].m128i_i64 + 7) = -1;
    }
    v16 = 0;
  }
LABEL_44:
  if ( src )
  {
    *(_QWORD *)&v87 = 0;
    j__free(src);
  }
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    j__free(v75);
  }
  if ( s )
  {
    *(_QWORD *)&v74 = 0;
    j__free(s);
  }
  return v16;
}
