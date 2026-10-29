__int64 __fastcall sub_2F0C0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rbp
  const char *v13; // rax
  const char *v14; // rdi
  __int64 v15; // rax
  __int64 (*v16)(); // rcx
  __int64 v17; // rdi
  __int64 (*v18)(); // rdx
  int v19; // eax
  __m128i v20; // xmm0
  unsigned __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // r14
  const char *v24; // rdi
  int v25; // eax
  _BOOL8 v26; // r9
  void (__fastcall *v27)(__int64, _QWORD, _QWORD, __m128i *, _QWORD, _BOOL8); // rbp
  unsigned __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r15
  __m128i *v35; // rax
  __int64 v36; // rsi
  __m128i *v37; // r8
  __int64 v38; // roff
  unsigned __int64 v39; // rax
  __int64 v40; // r9
  __m128i v41; // xmm0
  unsigned __int64 v42; // xmm0_8
  __int64 v43; // rax
  __m128i v44; // xmm0
  unsigned __int64 v45; // xmm0_8
  __int64 v46; // rdi
  __int64 v47; // rcx
  _DWORD *v48; // rax
  __m128i v49; // xmm0
  __int64 v50; // rdi
  __int64 v51; // rbp
  __m128i v52; // xmm0
  __m128i v53; // xmm0
  __int64 v54; // rdi
  void (__fastcall *v55)(__int64, _QWORD, _QWORD, _BYTE *, __m128i *, _QWORD); // r15
  __int64 v56; // rax
  __m128i *v57; // r8
  struct _Unwind_Exception *v58; // rbx
  __m128i v59; // [rsp+0h] [rbp-138h] BYREF
  __int64 v60; // [rsp+10h] [rbp-128h]
  unsigned __int8 v61; // [rsp+1Fh] [rbp-119h]
  unsigned __int64 v62; // [rsp+20h] [rbp-118h]
  __m128i *v63; // [rsp+28h] [rbp-110h]
  __int64 v64; // [rsp+30h] [rbp-108h]
  __int64 v65; // [rsp+38h] [rbp-100h]
  unsigned __int64 v66; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v67; // [rsp+48h] [rbp-F0h]
  _QWORD v68[2]; // [rsp+50h] [rbp-E8h] BYREF
  int v69; // [rsp+60h] [rbp-D8h]
  __m128i s1[2]; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v71[24]; // [rsp+90h] [rbp-A8h] BYREF
  __int16 v72; // [rsp+A8h] [rbp-90h]
  __int64 v73; // [rsp+B0h] [rbp-88h]
  __int128 v74; // [rsp+B8h] [rbp-80h]
  __int64 v75; // [rsp+C8h] [rbp-70h]
  int v76; // [rsp+D0h] [rbp-68h]
  __m128i v77; // [rsp+E0h] [rbp-58h] BYREF
  unsigned __int64 v78; // [rsp+F8h] [rbp-40h]

  v59.m128i_i64[0] = a3;
  LODWORD(v60) = a4;
  v78 = __readfsqword(0x28u);
  if ( !sub_2AFB0(a1) )
    return 0;
  v61 = sub_2B800(a1, v60, 0);
  if ( !v61 )
    return 0;
  if ( *(_QWORD *)(a1 + 120) == -1 )
  {
    v58 = (struct _Unwind_Exception *)sub_258F0();
    if ( *(_QWORD *)v71 )
    {
      *(_QWORD *)&v71[8] = 0;
      qfree();
    }
    if ( v73 )
    {
      *(_QWORD *)&v74 = 0;
      qfree();
    }
    _Unwind_Resume(v58);
  }
  v7 = *(_DWORD *)(a1 + 168);
  v73 = 0;
  v75 = 0;
  *(_DWORD *)(a2 + 12) = v7;
  v8 = *(_DWORD *)(a1 + 172);
  v76 = -1;
  *(_DWORD *)(a2 + 16) = v8;
  v9 = *(_DWORD *)(a1 + 176);
  v74 = 0;
  *(_DWORD *)(a2 + 20) = v9;
  if ( !*(_BYTE *)(a1 + 440) )
    sub_2DAF0(a1);
  v10 = 0;
  v11 = -1;
  if ( !*(_QWORD *)(a1 + 232) )
    goto LABEL_78;
  do
  {
    v12 = *(_QWORD *)(a1 + 224) + 72 * v10;
    if ( *(_QWORD *)(v12 + 24) || *(_QWORD *)(v12 + 40) || *(_DWORD *)(v12 + 60) )
    {
      v13 = (const char *)(v12 + 8);
      v14 = (const char *)(v12 + 24);
      while ( *v13 == 95 )
      {
        if ( ++v13 == v14 )
          goto LABEL_15;
      }
      v14 = v13;
LABEL_15:
      if ( !strncasecmp(v14, "TEXT", 4u) )
      {
        *(_DWORD *)(a2 + 32) = *(_QWORD *)(v12 + 40);
        if ( v11 == -1 )
          v11 = *(_QWORD *)(v12 + 24);
      }
    }
    if ( *(_QWORD *)(v12 + 48) )
    {
      v20 = _mm_loadu_si128((const __m128i *)(v12 + 24));
      *(__m128i *)v71 = _mm_unpacklo_epi64(v20, _mm_add_epi64(_mm_srli_si128(v20, 8), v20));
      rangeset_t_add();
    }
    ++v10;
  }
  while ( v10 < *(_QWORD *)(a1 + 232) );
  if ( v11 == -1 )
  {
LABEL_78:
    v61 = 0;
    v17 = v73;
  }
  else
  {
    if ( v59.m128i_i64[0] != -1 )
      *(_QWORD *)(a2 + 40) = v59.m128i_i64[0] - v11;
    v15 = rangeset_t_lower_bound();
    v17 = v73;
    v18 = (__int64 (*)())(v73 + 16 * v74);
    if ( (__int64 (*)())v15 != v18 )
    {
      *(_QWORD *)(a2 + 24) = *(_QWORD *)(v15 + 8) - v11;
      v19 = *(_DWORD *)(a2 + 8);
      if ( (v19 & 1) != 0 )
      {
        s1[1].m128i_i8[0] = 0;
        s1[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_8BBB8, (__m128i)(unsigned __int64)&v77);
        sub_2BFD0(a1, s1, v18, (__int64 (*)())off_8BBB8);
        if ( s1[1].m128i_i8[0] )
        {
          memset(v71, 0, sizeof(v71));
          *(_QWORD *)v71 = qvector_reserve();
          memset((void *)(*(_QWORD *)v71 + *(_QWORD *)&v71[8]), 0, 16LL - *(_QWORD *)&v71[8]);
          v49 = _mm_load_si128(&v77);
          *(_QWORD *)&v71[8] = 16;
          **(_OWORD **)v71 = v49;
          v50 = *(_QWORD *)(a2 + 48);
          v51 = *(_QWORD *)v71;
          v52 = _mm_loadu_si128((const __m128i *)&v71[8]);
          memset(v71, 0, sizeof(v71));
          if ( v50 )
          {
            *(_QWORD *)(a2 + 56) = 0;
            v59 = v52;
            qfree();
            v53 = _mm_load_si128(&v59);
            *(_QWORD *)(a2 + 48) = v51;
            v54 = *(_QWORD *)v71;
            *(__m128i *)(a2 + 56) = v53;
            if ( v54 )
            {
              *(_QWORD *)&v71[8] = 0;
              qfree();
            }
          }
          else
          {
            *(_QWORD *)(a2 + 48) = v51;
            *(__m128i *)(a2 + 56) = v52;
          }
        }
        v19 = *(_DWORD *)(a2 + 8);
      }
      if ( (v19 & 2) != 0 )
      {
        v68[1] = a2;
        v68[0] = &off_8C238;
        v69 = v60;
        sub_2EF00(a1, (__int64)v68, (__int64)v18, v16);
        v19 = *(_DWORD *)(a2 + 8);
      }
      if ( (v19 & 0x18) == 0 )
        goto LABEL_29;
      if ( !*(_BYTE *)(a1 + 440) )
      {
        sub_2DAF0(a1);
        if ( !*(_BYTE *)(a1 + 440) )
          sub_2DAF0(a1);
      }
      v21 = *(_QWORD *)(a1 + 232);
      v22 = 0;
      v62 = 1;
      v16 = (__int64 (*)())(v21 - 1);
      v67 = v21;
      v66 = v21 - 1;
      if ( !v21 )
      {
LABEL_77:
        v19 = *(_DWORD *)(a2 + 8);
LABEL_29:
        if ( (v19 & 0x20) != 0 )
        {
          memset(s1, 0, 24);
          *(_QWORD *)v71 = off_8BCF8;
          v72 = 0;
          *(_QWORD *)&v71[8] = a1;
          *(_QWORD *)&v71[16] = s1;
          sub_2BFD0(a1, (__m128i *)v71, v18, v16);
          v46 = s1[0].m128i_i64[0];
          if ( (_BYTE)v72 )
          {
            v47 = s1[0].m128i_i64[0] + 16 * s1[0].m128i_i64[1];
            if ( s1[0].m128i_i64[0] != v47 )
            {
              v48 = (_DWORD *)s1[0].m128i_i64[0];
              while ( !*v48 || !v48[1] )
              {
                v48 += 4;
                if ( (_DWORD *)v47 == v48 )
                  goto LABEL_70;
              }
              *(_DWORD *)(a2 + 72) = *v48;
              *(_DWORD *)(a2 + 76) = v48[1];
              *(_DWORD *)(a2 + 80) = v48[2];
              *(_DWORD *)(a2 + 84) = v48[3];
            }
          }
LABEL_70:
          if ( v46 )
          {
            s1[0].m128i_i64[1] = 0;
            qfree();
          }
        }
        v17 = v73;
        goto LABEL_31;
      }
      while ( 1 )
      {
        v23 = v22 + *(_QWORD *)(a1 + 224);
        if ( !*(_QWORD *)(v23 + 32) )
        {
          v64 = v22 + 72;
          goto LABEL_38;
        }
        v63 = s1;
        memset(s1, 0, 24);
        s1[0].m128i_i64[0] = qvector_reserve();
        s1[0].m128i_i64[1] = 17;
        *(__m128i *)s1[0].m128i_i64[0] = _mm_loadu_si128((const __m128i *)(v23 + 8));
        v24 = (const char *)s1[0].m128i_i64[0];
        *(_BYTE *)(s1[0].m128i_i64[0] + 16) = 0;
        v25 = *(_DWORD *)(a2 + 8);
        if ( (v25 & 8) != 0 && *(_QWORD *)(v23 + 48) )
        {
          v26 = 1;
          v27 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, __m128i *, _QWORD, _BOOL8))(*(_QWORD *)a2 + 16LL);
          if ( (*(_BYTE *)(v23 + 68) & 4) == 0 )
          {
            v26 = 0;
            if ( s1[0].m128i_i64[1] )
              v26 = strcmp(v24, "__TEXT") == 0;
          }
          v27(
            a2,
            *(_QWORD *)(v23 + 24) + *(_QWORD *)(a2 + 40),
            *(_QWORD *)(a2 + 40) + *(_QWORD *)(v23 + 24) + *(_QWORD *)(v23 + 32),
            v63,
            *(unsigned int *)(v23 + 64),
            v26);
          v25 = *(_DWORD *)(a2 + 8);
        }
        if ( (v25 & 0x10) != 0 )
        {
          LODWORD(v28) = *(_DWORD *)(v23 + 64);
          if ( (_DWORD)v28 )
          {
            if ( !*(_QWORD *)(a1 + 256)
              || (LODWORD(v60) = *(_DWORD *)(v23 + 64),
                  v29 = strncmp((const char *)(v23 + 8), "__TEXT", 6u),
                  LODWORD(v28) = v60,
                  v29) )
            {
              v30 = *(_QWORD *)(a1 + 248);
LABEL_50:
              v65 = 4 * v62 - 4;
              v31 = v22 + 72;
              v32 = 0;
              v64 = v31;
              while ( 1 )
              {
                v39 = 80 * (v32 + *(int *)(*(_QWORD *)(a1 + 272) + v65));
                v40 = v30 + v39;
                v41 = _mm_loadu_si128((const __m128i *)(v30 + v39 + 32));
                v60 = v41.m128i_i64[0];
                v42 = _mm_add_epi64(v41, _mm_srli_si128(v41, 8)).m128i_u64[0];
                v34 = v42;
                if ( v32 < (unsigned int)(v28 - 1) )
                {
                  v33 = *(_QWORD *)(v30 + v39 + 112);
                  if ( v42 < v33 )
                    v34 = v33;
                }
                else if ( v62 - 1 < v66 )
                {
                  v43 = *(_QWORD *)(a1 + 224) + v64;
                  if ( *(_QWORD *)(v43 + 32) )
                  {
                    if ( *(_DWORD *)(v43 + 64) )
                    {
                      v44 = _mm_loadu_si128((const __m128i *)(v23 + 24));
                      v45 = _mm_add_epi64(v44, _mm_srli_si128(v44, 8)).m128i_u64[0];
                      if ( v34 < v45 )
                        v34 = v45;
                    }
                  }
                }
                v59.m128i_i64[0] = v40;
                memset(v71, 0, sizeof(v71));
                v35 = (__m128i *)qvector_reserve();
                v36 = v60;
                *(_QWORD *)v71 = v35;
                v37 = v63;
                *(_QWORD *)&v71[8] = 17;
                v38 = v59.m128i_i64[0];
                *v35 = _mm_loadu_si128((const __m128i *)v59.m128i_i64[0]);
                *(_BYTE *)(*(_QWORD *)v71 + 16LL) = 0;
                (*(void (__fastcall **)(__int64, __int64, unsigned __int64, _BYTE *, __m128i *, bool))(*(_QWORD *)a2 + 24LL))(
                  a2,
                  *(_QWORD *)(a2 + 40) + v36,
                  *(_QWORD *)(a2 + 40) + v34,
                  v71,
                  v37,
                  (*(_DWORD *)(v38 + 64) & 0x80000400) != 0);
                if ( *(_QWORD *)v71 )
                {
                  *(_QWORD *)&v71[8] = 0;
                  qfree();
                }
                ++v32;
                v28 = *(unsigned int *)(v23 + 64);
                if ( v32 >= v28 )
                  break;
                v30 = *(_QWORD *)(a1 + 248);
              }
              goto LABEL_75;
            }
            v30 = *(_QWORD *)(a1 + 248);
            if ( *(_QWORD *)(v23 + 24) >= *(_QWORD *)(v30 + 32) )
              goto LABEL_50;
            v55 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _BYTE *, __m128i *, _QWORD))(*(_QWORD *)a2 + 24LL);
            memset(v71, 0, sizeof(v71));
            v56 = qvector_reserve();
            v57 = v63;
            *(_QWORD *)v71 = v56;
            *(_QWORD *)&v71[8] = 7;
            *(_DWORD *)v56 = 1145128264;
            *(_WORD *)(v56 + 4) = 21061;
            *(_BYTE *)(*(_QWORD *)v71 + 6LL) = 0;
            v55(
              a2,
              *(_QWORD *)(v23 + 24) + *(_QWORD *)(a2 + 40),
              *(_QWORD *)(a2 + 40) + *(_QWORD *)(*(_QWORD *)(a1 + 248) + 32LL),
              v71,
              v57,
              0);
            if ( *(_QWORD *)v71 )
            {
              *(_QWORD *)&v71[8] = 0;
              qfree();
            }
            LODWORD(v28) = *(_DWORD *)(v23 + 64);
            if ( (_DWORD)v28 )
            {
              v30 = *(_QWORD *)(a1 + 248);
              goto LABEL_50;
            }
          }
        }
        v64 = v22 + 72;
LABEL_75:
        if ( s1[0].m128i_i64[0] )
        {
          s1[0].m128i_i64[1] = 0;
          qfree();
        }
LABEL_38:
        v16 = (__int64 (*)())v62;
        v22 = v64;
        if ( v62 >= v67 )
          goto LABEL_77;
        ++v62;
      }
    }
    v61 = 0;
  }
LABEL_31:
  if ( v17 )
  {
    *(_QWORD *)&v74 = 0;
    qfree();
  }
  return v61;
}

