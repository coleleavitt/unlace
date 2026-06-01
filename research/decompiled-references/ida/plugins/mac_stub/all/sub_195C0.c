__int64 __fastcall sub_195C0(__int64 a1, __int64 a2, __int64 a3, __int32 a4)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // r13
  const char *v12; // rax
  const char *v13; // rdi
  __int64 v14; // rax
  __int64 (*v15)(); // rcx
  __int64 v16; // rdi
  __int64 (*v17)(); // rdx
  int v18; // eax
  __m128i v19; // xmm0
  __int64 (*v20)(); // rax
  __int64 v21; // rbp
  __int64 v22; // r12
  const char *v23; // rdi
  int v24; // r14d
  _BOOL8 v25; // r9
  void (*v26)(); // r13
  unsigned __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r14
  __m128i *v34; // rax
  __int64 v35; // r9
  unsigned __int64 v36; // xmm1_8
  __int64 v37; // rdi
  void (*v38)(); // rax
  unsigned __int64 v39; // rax
  __int64 v40; // r9
  __m128i v41; // xmm1
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
  void (*v55)(); // r14
  __int64 v56; // rax
  struct _Unwind_Exception *v57; // rbx
  __m128i v58; // [rsp+0h] [rbp-138h] BYREF
  __m128i v59; // [rsp+10h] [rbp-128h] BYREF
  unsigned __int8 v60; // [rsp+27h] [rbp-111h]
  unsigned __int64 v61; // [rsp+28h] [rbp-110h]
  __int64 v62; // [rsp+30h] [rbp-108h]
  __int64 v63; // [rsp+38h] [rbp-100h]
  __int64 (*v64)(); // [rsp+40h] [rbp-F8h]
  __m128i *v65; // [rsp+48h] [rbp-F0h]
  _QWORD v66[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int32 v67; // [rsp+60h] [rbp-D8h]
  __m128i s1[2]; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v69[24]; // [rsp+90h] [rbp-A8h] BYREF
  __int16 v70; // [rsp+A8h] [rbp-90h]
  __int64 v71; // [rsp+B0h] [rbp-88h]
  __int128 v72; // [rsp+B8h] [rbp-80h]
  __int64 v73; // [rsp+C8h] [rbp-70h]
  int v74; // [rsp+D0h] [rbp-68h]
  __m128i v75; // [rsp+E0h] [rbp-58h] BYREF
  unsigned __int64 v76; // [rsp+F8h] [rbp-40h]

  v59.m128i_i64[0] = a3;
  v58.m128i_i32[0] = a4;
  v76 = __readfsqword(0x28u);
  if ( !sub_15970(a1) )
    return 0;
  v60 = sub_161C0(a1, v58.m128i_i32[0], 0);
  if ( !v60 )
    return 0;
  if ( *(_QWORD *)(a1 + 120) == -1 )
  {
    v57 = (struct _Unwind_Exception *)sub_12CF0();
    if ( *(_QWORD *)v69 )
    {
      *(_QWORD *)&v69[8] = 0;
      qfree();
    }
    if ( s1[0].m128i_i64[0] )
    {
      s1[0].m128i_i64[1] = 0;
      qfree();
    }
    if ( v71 )
    {
      *(_QWORD *)&v72 = 0;
      qfree();
    }
    _Unwind_Resume(v57);
  }
  v6 = *(_DWORD *)(a1 + 168);
  v71 = 0;
  v73 = 0;
  *(_DWORD *)(a2 + 12) = v6;
  v7 = *(_DWORD *)(a1 + 172);
  v74 = -1;
  *(_DWORD *)(a2 + 16) = v7;
  v8 = *(_DWORD *)(a1 + 176);
  v72 = 0;
  *(_DWORD *)(a2 + 20) = v8;
  if ( !*(_BYTE *)(a1 + 440) )
    sub_184B0(a1);
  v9 = 0;
  v10 = -1;
  if ( !*(_QWORD *)(a1 + 232) )
    goto LABEL_81;
  do
  {
    v11 = *(_QWORD *)(a1 + 224) + 72 * v9;
    if ( *(_QWORD *)(v11 + 24) || *(_QWORD *)(v11 + 40) || *(_DWORD *)(v11 + 60) )
    {
      v12 = (const char *)(v11 + 8);
      v13 = (const char *)(v11 + 24);
      while ( *v12 == 95 )
      {
        if ( ++v12 == v13 )
          goto LABEL_15;
      }
      v13 = v12;
LABEL_15:
      if ( !strncasecmp(v13, "TEXT", 4u) )
      {
        *(_DWORD *)(a2 + 32) = *(_QWORD *)(v11 + 40);
        if ( v10 == -1 )
          v10 = *(_QWORD *)(v11 + 24);
      }
    }
    if ( *(_QWORD *)(v11 + 48) )
    {
      v19 = _mm_loadu_si128((const __m128i *)(v11 + 24));
      *(__m128i *)v69 = _mm_unpacklo_epi64(v19, _mm_add_epi64(_mm_srli_si128(v19, 8), v19));
      rangeset_t_add();
    }
    ++v9;
  }
  while ( v9 < *(_QWORD *)(a1 + 232) );
  if ( v10 == -1 )
  {
LABEL_81:
    v60 = 0;
    v16 = v71;
  }
  else
  {
    if ( v59.m128i_i64[0] != -1 )
      *(_QWORD *)(a2 + 40) = v59.m128i_i64[0] - v10;
    v14 = rangeset_t_lower_bound();
    v16 = v71;
    v17 = (__int64 (*)())(v71 + 16 * v72);
    if ( (__int64 (*)())v14 != v17 )
    {
      *(_QWORD *)(a2 + 24) = *(_QWORD *)(v14 + 8) - v10;
      v18 = *(_DWORD *)(a2 + 8);
      if ( (v18 & 1) != 0 )
      {
        s1[1].m128i_i8[0] = 0;
        s1[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_463F0, (__m128i)(unsigned __int64)&v75);
        sub_16990(a1, s1, v17, v15);
        if ( s1[1].m128i_i8[0] )
        {
          memset(v69, 0, sizeof(v69));
          *(_QWORD *)v69 = qvector_reserve();
          memset((void *)(*(_QWORD *)v69 + *(_QWORD *)&v69[8]), 0, 16LL - *(_QWORD *)&v69[8]);
          v49 = _mm_load_si128(&v75);
          *(_QWORD *)&v69[8] = 16;
          **(_OWORD **)v69 = v49;
          v50 = *(_QWORD *)(a2 + 48);
          v51 = *(_QWORD *)v69;
          v52 = _mm_loadu_si128((const __m128i *)&v69[8]);
          memset(v69, 0, sizeof(v69));
          if ( v50 )
          {
            *(_QWORD *)(a2 + 56) = 0;
            v59 = v52;
            qfree();
            v53 = _mm_load_si128(&v59);
            *(_QWORD *)(a2 + 48) = v51;
            v54 = *(_QWORD *)v69;
            *(__m128i *)(a2 + 56) = v53;
            if ( v54 )
            {
              *(_QWORD *)&v69[8] = 0;
              qfree();
            }
          }
          else
          {
            *(_QWORD *)(a2 + 48) = v51;
            *(__m128i *)(a2 + 56) = v52;
          }
        }
        v18 = *(_DWORD *)(a2 + 8);
      }
      if ( (v18 & 2) != 0 )
      {
        v66[1] = a2;
        v66[0] = &off_46A20;
        v67 = v58.m128i_i32[0];
        sub_19400(a1, (__int64)v66, (__int64)v17, v15);
        v18 = *(_DWORD *)(a2 + 8);
      }
      if ( (v18 & 0x18) == 0 )
        goto LABEL_29;
      if ( !*(_BYTE *)(a1 + 440) )
      {
        sub_184B0(a1);
        if ( !*(_BYTE *)(a1 + 440) )
          sub_184B0(a1);
      }
      v20 = *(__int64 (**)())(a1 + 232);
      v21 = 0;
      v61 = 1;
      v64 = v20;
      if ( !v20 )
      {
LABEL_80:
        v18 = *(_DWORD *)(a2 + 8);
LABEL_29:
        if ( (v18 & 0x20) != 0 )
        {
          memset(s1, 0, 24);
          *(_QWORD *)v69 = off_46530;
          v70 = 0;
          *(_QWORD *)&v69[8] = a1;
          *(_QWORD *)&v69[16] = s1;
          sub_16990(a1, (__m128i *)v69, v17, v15);
          v46 = s1[0].m128i_i64[0];
          if ( (_BYTE)v70 )
          {
            v47 = s1[0].m128i_i64[0] + 16 * s1[0].m128i_i64[1];
            if ( s1[0].m128i_i64[0] != v47 )
            {
              v48 = (_DWORD *)s1[0].m128i_i64[0];
              while ( !*v48 || !v48[1] )
              {
                v48 += 4;
                if ( (_DWORD *)v47 == v48 )
                  goto LABEL_73;
              }
              *(_DWORD *)(a2 + 72) = *v48;
              *(_DWORD *)(a2 + 76) = v48[1];
              *(_DWORD *)(a2 + 80) = v48[2];
              *(_DWORD *)(a2 + 84) = v48[3];
            }
          }
LABEL_73:
          if ( v46 )
          {
            s1[0].m128i_i64[1] = 0;
            qfree();
          }
        }
        v16 = v71;
        goto LABEL_31;
      }
      while ( 1 )
      {
        v22 = v21 + *(_QWORD *)(a1 + 224);
        if ( !*(_QWORD *)(v22 + 32) )
        {
          v62 = v21 + 72;
          goto LABEL_38;
        }
        v65 = s1;
        memset(s1, 0, 24);
        s1[0].m128i_i64[0] = qvector_reserve();
        s1[0].m128i_i64[1] = 17;
        *(__m128i *)s1[0].m128i_i64[0] = _mm_loadu_si128((const __m128i *)(v22 + 8));
        v23 = (const char *)s1[0].m128i_i64[0];
        *(_BYTE *)(s1[0].m128i_i64[0] + 16) = 0;
        v24 = *(_DWORD *)(a2 + 8);
        if ( (v24 & 8) != 0 && *(_QWORD *)(v22 + 48) )
        {
          v25 = 1;
          v26 = *(void (**)())(*(_QWORD *)a2 + 16LL);
          if ( (*(_BYTE *)(v22 + 68) & 4) == 0 )
          {
            v25 = 0;
            if ( s1[0].m128i_i64[1] )
              v25 = strcmp(v23, "__TEXT") == 0;
          }
          if ( v26 != nullsub_12 )
          {
            ((void (__fastcall *)(__int64, _QWORD, _QWORD, __m128i *, _QWORD, _BOOL8))v26)(
              a2,
              *(_QWORD *)(v22 + 24) + *(_QWORD *)(a2 + 40),
              *(_QWORD *)(a2 + 40) + *(_QWORD *)(v22 + 24) + *(_QWORD *)(v22 + 32),
              v65,
              *(unsigned int *)(v22 + 64),
              v25);
            v24 = *(_DWORD *)(a2 + 8);
          }
        }
        if ( (v24 & 0x10) != 0 )
        {
          LODWORD(v27) = *(_DWORD *)(v22 + 64);
          if ( (_DWORD)v27 )
          {
            if ( !*(_QWORD *)(a1 + 256)
              || (v58.m128i_i32[0] = *(_DWORD *)(v22 + 64),
                  v28 = strncmp((const char *)(v22 + 8), "__TEXT", 6u),
                  LODWORD(v27) = v58.m128i_i32[0],
                  v28) )
            {
              v29 = *(_QWORD *)(a1 + 248);
LABEL_51:
              v63 = 4 * v61 - 4;
              v30 = v21 + 72;
              v31 = 0;
              v62 = v30;
              while ( 1 )
              {
                v39 = 80 * (v31 + *(int *)(*(_QWORD *)(a1 + 272) + v63));
                v40 = v29 + v39;
                v41 = _mm_loadu_si128((const __m128i *)(v29 + v39 + 32));
                v42 = _mm_add_epi64(_mm_srli_si128(v41, 8), v41).m128i_u64[0];
                v33 = v42;
                if ( v31 < (unsigned int)(v27 - 1) )
                {
                  v32 = *(_QWORD *)(v29 + v39 + 112);
                  if ( v42 < v32 )
                    v33 = v32;
                }
                else if ( v61 - 1 < (unsigned __int64)v64 - 1 )
                {
                  v43 = *(_QWORD *)(a1 + 224) + v62;
                  if ( *(_QWORD *)(v43 + 32) )
                  {
                    if ( *(_DWORD *)(v43 + 64) )
                    {
                      v44 = _mm_loadu_si128((const __m128i *)(v22 + 24));
                      v45 = _mm_add_epi64(v44, _mm_srli_si128(v44, 8)).m128i_u64[0];
                      if ( v33 < v45 )
                        v33 = v45;
                    }
                  }
                }
                v59.m128i_i64[0] = v40;
                v58 = v41;
                memset(v69, 0, sizeof(v69));
                v34 = (__m128i *)qvector_reserve();
                v35 = v59.m128i_i64[0];
                *(_QWORD *)v69 = v34;
                *(_QWORD *)&v69[8] = 17;
                v36 = _mm_load_si128(&v58).m128i_u64[0];
                *v34 = _mm_loadu_si128((const __m128i *)v59.m128i_i64[0]);
                v37 = *(_QWORD *)v69;
                *(_BYTE *)(*(_QWORD *)v69 + 16LL) = 0;
                v38 = *(void (**)())(*(_QWORD *)a2 + 24LL);
                if ( v38 != nullsub_13 )
                {
                  ((void (__fastcall *)(__int64, unsigned __int64, unsigned __int64, _BYTE *, __m128i *, bool))v38)(
                    a2,
                    *(_QWORD *)(a2 + 40) + v36,
                    *(_QWORD *)(a2 + 40) + v33,
                    v69,
                    v65,
                    (*(_DWORD *)(v35 + 64) & 0x80000400) != 0);
                  v37 = *(_QWORD *)v69;
                }
                if ( v37 )
                {
                  *(_QWORD *)&v69[8] = 0;
                  qfree();
                }
                ++v31;
                v27 = *(unsigned int *)(v22 + 64);
                if ( v31 >= v27 )
                  break;
                v29 = *(_QWORD *)(a1 + 248);
              }
              goto LABEL_78;
            }
            v29 = *(_QWORD *)(a1 + 248);
            if ( *(_QWORD *)(v22 + 24) >= *(_QWORD *)(v29 + 32) )
              goto LABEL_51;
            v55 = *(void (**)())(*(_QWORD *)a2 + 24LL);
            memset(v69, 0, sizeof(v69));
            v56 = qvector_reserve();
            v17 = (__int64 (*)())(&stru_5240 + 5);
            *(_QWORD *)v69 = v56;
            *(_QWORD *)&v69[8] = 7;
            *(_DWORD *)v56 = 1145128264;
            *(_WORD *)(v56 + 4) = 21061;
            *(_BYTE *)(*(_QWORD *)v69 + 6LL) = 0;
            if ( v55 != nullsub_13 )
              ((void (__fastcall *)(__int64, _QWORD, _QWORD, _BYTE *, __m128i *, _QWORD))v55)(
                a2,
                *(_QWORD *)(v22 + 24) + *(_QWORD *)(a2 + 40),
                *(_QWORD *)(a2 + 40) + *(_QWORD *)(*(_QWORD *)(a1 + 248) + 32LL),
                v69,
                v65,
                0);
            if ( *(_QWORD *)v69 )
            {
              *(_QWORD *)&v69[8] = 0;
              qfree();
            }
            LODWORD(v27) = *(_DWORD *)(v22 + 64);
            if ( (_DWORD)v27 )
            {
              v29 = *(_QWORD *)(a1 + 248);
              goto LABEL_51;
            }
          }
        }
        v62 = v21 + 72;
LABEL_78:
        if ( s1[0].m128i_i64[0] )
        {
          s1[0].m128i_i64[1] = 0;
          qfree();
        }
LABEL_38:
        v15 = v64;
        v21 = v62;
        if ( v61 >= (unsigned __int64)v64 )
          goto LABEL_80;
        ++v61;
      }
    }
    v60 = 0;
  }
LABEL_31:
  if ( v16 )
  {
    *(_QWORD *)&v72 = 0;
    qfree();
  }
  return v60;
}

