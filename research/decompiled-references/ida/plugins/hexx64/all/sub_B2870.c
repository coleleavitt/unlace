_BOOL8 __fastcall sub_B2870(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rdx
  __m128i v9; // xmm0
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // r10
  __int64 v15; // rdi
  unsigned int v16; // ecx
  signed int v17; // esi
  int v18; // eax
  signed int v19; // eax
  __int128 v20; // rdi
  __int64 v21; // rax
  _QWORD *v22; // rbx
  __int64 v23; // r13
  __int64 v24; // r15
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rdi
  _QWORD *v28; // rdx
  __int64 v29; // rdx
  unsigned __int64 v30; // r14
  __int64 *v31; // rbx
  __int64 v32; // rdx
  __int64 *v33; // rdi
  __int64 *v34; // rdi
  __int64 v35; // rax
  __m128i v36; // xmm0
  signed int v38; // eax
  char v39; // al
  char v40; // al
  __int64 v41; // rcx
  char v42; // al
  __int64 v43; // rax
  char v44; // al
  unsigned __int64 v45; // r12
  _OWORD *v46; // rax
  unsigned __int64 v47; // rsi
  __m128i v48; // xmm1
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rsi
  char v52; // al
  bool v53; // r15
  unsigned __int64 v54; // rax
  _OWORD *v55; // rax
  __m128i v56; // xmm1
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __m128i v62; // xmm1
  __int64 v63; // rax
  __m128i v64; // xmm1
  __int64 v65; // rax
  __m128i v66; // xmm0
  _QWORD *v67; // rax
  __int64 v68; // rdx
  _QWORD *v69; // rbx
  unsigned __int64 v70; // rcx
  _QWORD *v71; // r15
  __int64 v72; // rdi
  _QWORD *v73; // rdx
  _QWORD *i; // rax
  int v75; // eax
  unsigned __int64 *v76; // rsi
  _QWORD *v77; // rax
  _QWORD *v78; // rcx
  __int64 v79; // rdx
  unsigned __int64 v80; // rdi
  int v81; // [rsp+4h] [rbp-16Ch]
  __int64 *v83; // [rsp+18h] [rbp-158h]
  __int64 v84; // [rsp+18h] [rbp-158h]
  __int64 v85; // [rsp+18h] [rbp-158h]
  __int64 v86; // [rsp+18h] [rbp-158h]
  __int64 v87; // [rsp+18h] [rbp-158h]
  __m128i v88; // [rsp+20h] [rbp-150h] BYREF
  __m128i v89; // [rsp+30h] [rbp-140h] BYREF
  char v90; // [rsp+42h] [rbp-12Eh]
  bool v91; // [rsp+43h] [rbp-12Dh]
  int v92; // [rsp+44h] [rbp-12Ch]
  unsigned int *v93; // [rsp+48h] [rbp-128h]
  __m128i v94; // [rsp+50h] [rbp-120h] BYREF
  __int64 v95; // [rsp+60h] [rbp-110h] BYREF
  __int64 v96; // [rsp+68h] [rbp-108h]
  unsigned __int64 *v97; // [rsp+70h] [rbp-100h] BYREF
  __int128 v98; // [rsp+78h] [rbp-F8h]
  __int64 v99[2]; // [rsp+90h] [rbp-E0h] BYREF
  __int64 v100[4]; // [rsp+A0h] [rbp-D0h] BYREF
  __int64 v101; // [rsp+C0h] [rbp-B0h] BYREF
  __int64 v102; // [rsp+D0h] [rbp-A0h]
  __m128i v103; // [rsp+D8h] [rbp-98h]
  const void *v104[2]; // [rsp+F0h] [rbp-80h] BYREF
  __int64 v105; // [rsp+100h] [rbp-70h]
  __m128i v106; // [rsp+108h] [rbp-68h] BYREF
  char v107; // [rsp+118h] [rbp-58h]
  __m128i *v108; // [rsp+120h] [rbp-50h]
  unsigned int *v109; // [rsp+128h] [rbp-48h]
  int v110; // [rsp+130h] [rbp-40h]
  char v111; // [rsp+134h] [rbp-3Ch]
  unsigned __int64 v112; // [rsp+138h] [rbp-38h]

  v112 = __readfsqword(0x28u);
  v93 = *(unsigned int **)(a2 + 16);
  if ( !v93 || *((_BYTE *)v93 + 64) == 1 && v93[18] <= 7 )
    return 0;
  if ( !(v91 = sub_32ED70(*v93)) )
    return 0;
  v89.m128i_i32[0] = *v93;
  if ( (unsigned int)(v89.m128i_i32[0] - 10) <= 1 )
    return 0;
  v8 = *((_QWORD *)v93 + 2);
  if ( (v88.m128i_i64[0] = v8) == 0 )
    return 0;
  v89.m128i_i32[0] = *(_DWORD *)v8;
  if ( (unsigned int)(v89.m128i_i32[0] - 29) > 0xC
    || *(_DWORD *)(v8 + 36) > (signed int)v93[17]
    || (*(_BYTE *)(v8 + 6) & 2) != 0 )
  {
    return 0;
  }
  v9 = 0;
  v95 = 0;
  v88.m128i_i64[1] = (__int64)v99;
  v96 = 0;
  v97 = nullptr;
  v98 = 0;
  sub_127A20((__int64)v99, a1, (__int64)v93, 1, v6, v7);
  v90 = 0;
  v12 = 0;
  v94 = 0u;
  v92 = 0;
LABEL_10:
  v13 = v88.m128i_i64[0];
  v14 = 0;
  while ( 1 )
  {
    v15 = *(_QWORD *)(a1 + 480);
    v16 = 2 * (v14 == 0);
    if ( (unsigned int)(*(_DWORD *)v13 - 29) > 0xC )
      break;
    v17 = *(_DWORD *)(v13 + 36);
    v18 = *v93;
    if ( *v93 == 2 )
      goto LABEL_54;
LABEL_13:
    if ( (unsigned int)(v18 - 8) > 3 )
      v19 = v93[9];
    else
      v19 = v93[17];
    if ( v17 >= v19 )
      goto LABEL_16;
LABEL_56:
    if ( (signed int)v93[17] > *(_DWORD *)(v13 + 68) )
    {
      if ( v12 )
      {
        LODWORD(v10) = v92;
        if ( !v92 )
          goto LABEL_59;
      }
      if ( v92 == 11 )
        goto LABEL_66;
      v84 = v14;
      v89.m128i_i64[0] = (__int64)&v95;
      v81 = 2 * (v14 == 0);
      v40 = sub_A0F00(v15, v13, (__int64)v93, v16, 0);
      v14 = v84;
      if ( v40 )
      {
        v92 = 10;
        goto LABEL_68;
      }
      v16 = v81;
      if ( v92 != 10 )
      {
LABEL_66:
        v85 = v14;
        v89.m128i_i64[0] = (__int64)&v95;
        v42 = sub_A0F00(v15, v13, (__int64)v93, v16, 1u);
        v14 = v85;
        if ( !v42 )
          goto LABEL_17;
        v92 = 11;
LABEL_68:
        if ( !v14 )
          goto LABEL_87;
LABEL_69:
        v43 = *(_QWORD *)(a1 + 480);
        v86 = v14;
        v89.m128i_i64[0] = (__int64)&v95;
        v44 = sub_1205A0(v88.m128i_i64[0], *(_QWORD *)(v43 + 112), 0, v41, v10, v11);
        v90 |= v44;
        v14 = v86;
LABEL_70:
        v45 = v94.m128i_i64[0];
        v9 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v88), (__m128i)(unsigned __int64)v14);
        if ( v94.m128i_i64[0] )
        {
          if ( !v94.m128i_i64[1] )
            goto LABEL_72;
          v53 = v91;
          v54 = *(_QWORD *)v94.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
          if ( (*(_BYTE *)v54 & 2) == 0 )
          {
            v45 = *(_QWORD *)v94.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
            v58 = *(_QWORD *)(v54 + 24);
            if ( v88.m128i_i64[0] < v58 )
            {
LABEL_99:
              v59 = *(_QWORD *)(v45 + 8);
              v53 = v91;
              goto LABEL_100;
            }
            while ( v58 < v88.m128i_i64[0] )
            {
              v59 = *(_QWORD *)(v45 + 16);
              v53 = 0;
LABEL_100:
              if ( (*(_BYTE *)v59 & 2) != 0 )
                goto LABEL_92;
              v45 = v59;
              v58 = *(_QWORD *)(v59 + 24);
              if ( v88.m128i_i64[0] < v58 )
                goto LABEL_99;
            }
            if ( v45 )
              goto LABEL_78;
          }
LABEL_92:
          v89 = v9;
          v55 = (_OWORD *)qalloc();
          v47 = (unsigned __int64)v55;
          if ( !v55 )
          {
            exception = __cxa_allocate_exception(8u);
            *exception = (char *)&`vtable for'std::bad_alloc + 16;
            v89.m128i_i64[0] = (__int64)&v95;
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          v9 = _mm_load_si128(&v89);
          *v55 = 0;
          *(__m128i *)((char *)v55 + 24) = v9;
          *(_QWORD *)v55 = v45 & 0xFFFFFFFFFFFFFFFCLL;
          v56 = _mm_loadl_epi64(&v94);
          *(_QWORD *)v55 = v45 & 0xFFFFFFFFFFFFFFFCLL | 1;
          v57 = v94.m128i_i64[0];
          *(__m128i *)(v47 + 8) = _mm_unpacklo_epi64(v56, v56);
          if ( v45 != v57 )
          {
            if ( v53 )
            {
              *(_QWORD *)(v45 + 8) = v47;
              if ( v45 == *(_QWORD *)(v57 + 8) )
                *(_QWORD *)(v57 + 8) = v47;
            }
            else
            {
              *(_QWORD *)(v45 + 16) = v47;
              if ( v45 == *(_QWORD *)(v57 + 16) )
                *(_QWORD *)(v57 + 16) = v47;
            }
LABEL_76:
            sub_B2490(&v94, (__int64 *)v47);
LABEL_77:
            ++v94.m128i_i64[1];
LABEL_78:
            v50 = *(_QWORD *)(v88.m128i_i64[0] + 16);
            v88.m128i_i64[0] = v50;
            if ( !v50 )
              goto LABEL_19;
            v89.m128i_i32[0] = *(_DWORD *)v50;
            if ( (unsigned int)(v89.m128i_i32[0] - 29) > 0xC || (*(_BYTE *)(v50 + 6) & 2) != 0 )
              goto LABEL_19;
            v96 = 0;
            if ( v97 )
            {
              *(_QWORD *)&v98 = 0;
              v89.m128i_i64[0] = (__int64)&v95;
              qfree((__int64)v97);
              v97 = nullptr;
              *((_QWORD *)&v98 + 1) = 0;
            }
            v12 = v94.m128i_i64[1];
            goto LABEL_10;
          }
        }
        else
        {
          v89 = v9;
          v61 = qalloc();
          v62 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v61, (__m128i)(unsigned __int64)v61);
          if ( !v61 )
          {
            v2 = __cxa_allocate_exception(8u);
            *v2 = (char *)&`vtable for'std::bad_alloc + 16;
            v89.m128i_i64[0] = (__int64)&v95;
            __cxa_throw(
              v2,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_QWORD *)(v61 + 32) = 0;
          v9 = _mm_load_si128(&v89);
          *(_OWORD *)(v61 + 16) = 0;
          *(__m128i *)(v61 + 8) = v62;
          *(_QWORD *)v61 = v61 & 0xFFFFFFFFFFFFFFFCLL | 2;
          v94.m128i_i64[0] = v61;
          *(_QWORD *)v61 = v61 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v61 & 3LL;
          v63 = v94.m128i_i64[0];
          v64 = (__m128i)v94.m128i_u64[0];
          *(_QWORD *)v94.m128i_i64[0] &= ~1uLL;
          *(__m128i *)(v63 + 8) = _mm_unpacklo_epi64(v64, v64);
          *(_QWORD *)v94.m128i_i64[0] |= 2uLL;
          v45 = v94.m128i_i64[0];
LABEL_72:
          v89 = v9;
          v46 = (_OWORD *)qalloc();
          v47 = (unsigned __int64)v46;
          if ( !v46 )
          {
            v4 = __cxa_allocate_exception(8u);
            *v4 = (char *)&`vtable for'std::bad_alloc + 16;
            v89.m128i_i64[0] = (__int64)&v95;
            __cxa_throw(
              v4,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          v9 = _mm_load_si128(&v89);
          *v46 = 0;
          *(__m128i *)((char *)v46 + 24) = v9;
          *(_QWORD *)v46 = v45 & 0xFFFFFFFFFFFFFFFCLL;
          v48 = _mm_loadl_epi64(&v94);
          *(_QWORD *)v46 = v45 & 0xFFFFFFFFFFFFFFFCLL | 1;
          v49 = v94.m128i_i64[0];
          *(__m128i *)(v47 + 8) = _mm_unpacklo_epi64(v48, v48);
          if ( v45 != v49 )
          {
            *(_QWORD *)(v45 + 8) = v47;
            if ( v45 == *(_QWORD *)(v49 + 8) )
              *(_QWORD *)(v49 + 8) = v47;
            goto LABEL_76;
          }
        }
        v9 = _mm_unpacklo_epi64((__m128i)v47, (__m128i)v47);
        *(_QWORD *)v45 = v47 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v45 & 3LL;
        *(__m128i *)(v94.m128i_i64[0] + 8) = v9;
        v60 = *(_QWORD *)v47 & 2LL;
        *(_QWORD *)v47 &= ~1uLL;
        *(_QWORD *)v47 = v60 | v94.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_77;
      }
    }
LABEL_17:
    if ( *(_BYTE *)(v13 + 32) != 4 )
      goto LABEL_19;
    *((_QWORD *)&v20 + 1) = &v95;
    *(_QWORD *)&v20 = a1;
    v89.m128i_i64[0] = (__int64)&v95;
    sub_123EA0(v20, v13 + 48, 1, 0xFFFF0000);
    if ( (unsigned __int8)sub_64780(&v95, (_QWORD *)v88.m128i_i64[1]) )
      goto LABEL_19;
    if ( (unsigned __int8)sub_318470(&v97, (__int64)v100) )
      goto LABEL_19;
    v39 = sub_11E2C0((int **)v13, nullptr, nullptr, 0);
    v12 = v94.m128i_i64[1];
    if ( v39 )
      goto LABEL_19;
    v14 = v13 + 32;
    v13 = *(_QWORD *)(v13 + 40);
  }
  v17 = *(_DWORD *)(v13 + 68);
  v18 = *v93;
  if ( *v93 != 2 )
    goto LABEL_13;
LABEL_54:
  v38 = v93[17];
  if ( v38 < v17 )
    goto LABEL_17;
  if ( v17 < v38 )
    goto LABEL_56;
LABEL_16:
  v11 = v92;
  if ( v92 )
    goto LABEL_17;
  v51 = *(_QWORD *)(v15 + 112);
  v87 = v14;
  v89.m128i_i64[0] = (__int64)&v95;
  v52 = sub_125B90((unsigned __int8 *)v13, v51, v93, v16);
  v14 = v87;
  if ( !v52 )
  {
LABEL_59:
    v92 = 0;
    goto LABEL_17;
  }
  if ( v87 )
    goto LABEL_69;
LABEL_87:
  if ( ((*(_DWORD *)v13 - 29) & 0xFFFFFFFB) == 0 && *v93 == 13 )
    goto LABEL_70;
LABEL_19:
  if ( !v94.m128i_i64[1] )
  {
    v29 = v94.m128i_i64[0];
    v91 = 0;
    if ( v94.m128i_i64[0] )
      goto LABEL_111;
    goto LABEL_114;
  }
  if ( !v90 )
  {
LABEL_37:
    v104[0] = &off_4DBE88;
    v104[1] = nullptr;
    v109 = v93;
    v106 = 0u;
    v110 = v92;
    v107 = 0;
    v108 = &v94;
    v111 = 0;
    v105 = a1;
    v89.m128i_i64[0] = (__int64)&v95;
    if ( (unsigned int)sub_11E900((_BYTE *)a2, (__int64)v104) )
    {
      v91 = 0;
    }
    else
    {
      v111 = 1;
      v89.m128i_i64[0] = (__int64)&v95;
      if ( (unsigned int)sub_11E900((_BYTE *)a2, (__int64)v104) )
      {
        if ( !under_debugger )
        {
          v89.m128i_i64[0] = (__int64)&v95;
          sub_383060(0xC364u, *(double *)v9.m128i_i64);
        }
        BUG();
      }
      if ( v90 )
      {
        if ( v94.m128i_i64[0] )
        {
          if ( v94.m128i_i64[1] )
          {
            v71 = *(_QWORD **)(v94.m128i_i64[0] + 8);
            while ( (_QWORD *)v94.m128i_i64[0] != v71 )
            {
              v72 = v71[3];
              v89.m128i_i64[0] = (__int64)&v95;
              sub_11D5A0(v72);
              if ( (*v71 & 2) == 0 )
              {
                v73 = (_QWORD *)v71[2];
                if ( (*(_BYTE *)v73 & 2) != 0 )
                {
                  v77 = (_QWORD *)(*v71 & 0xFFFFFFFFFFFFFFFCLL);
                  v78 = v71;
                  v79 = *v77;
                  if ( (*v77 & 2) == 0 )
                  {
                    while ( (_QWORD *)v77[2] == v78 )
                    {
                      v78 = v77;
                      v80 = v79 & 0xFFFFFFFFFFFFFFFCLL;
                      v79 = *(_QWORD *)(v79 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v79 & 2) != 0 )
                      {
                        v71 = (_QWORD *)v80;
                        goto LABEL_143;
                      }
                      v77 = (_QWORD *)v80;
                    }
                  }
                  v71 = v77;
                }
                else
                {
                  for ( i = (_QWORD *)v73[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
                    v73 = i;
                  v71 = v73;
                }
              }
LABEL_143:
              ;
            }
          }
        }
        v75 = *(_DWORD *)(a1 + 24);
        BYTE1(v75) &= ~2u;
        LOBYTE(v75) = v75 | 0x80;
        *(_DWORD *)(a1 + 24) = v75;
      }
      v76 = *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL);
      v89.m128i_i64[0] = (__int64)&v95;
      sub_15BC70((unsigned int *)a2, v76, 0, 0, nullptr, nullptr, v9, 0);
    }
    goto LABEL_39;
  }
  v21 = v94.m128i_i64[0];
  v83 = *(__int64 **)(*(_QWORD *)(a1 + 64) + 784LL);
  if ( !v83 )
  {
    v91 = 0;
    if ( !v94.m128i_i64[0] )
      goto LABEL_114;
LABEL_41:
    v30 = *(_QWORD *)v21;
    v31 = (__int64 *)(*(_QWORD *)v21 & 0xFFFFFFFFFFFFFFFCLL);
    v32 = *v31;
    if ( (*v31 & 2) != 0 )
    {
LABEL_49:
      *(_QWORD *)v21 = v21 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v21 & 3LL;
      v35 = v94.m128i_i64[0];
      v36 = (__m128i)v94.m128i_u64[0];
      *(_QWORD *)v94.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v35 + 8) = _mm_unpacklo_epi64(v36, v36);
      *(_QWORD *)v94.m128i_i64[0] |= 2uLL;
      v94.m128i_i64[1] = 0;
      goto LABEL_112;
    }
    v33 = (__int64 *)v31[1];
    if ( (*(_BYTE *)v33 & 2) != 0 )
    {
      v34 = (__int64 *)v31[2];
      if ( (*(_BYTE *)v34 & 2) != 0 )
        goto LABEL_155;
    }
    else
    {
      sub_A1030(v33);
      v34 = (__int64 *)v31[2];
      if ( (*(_BYTE *)v34 & 2) != 0 )
        goto LABEL_45;
    }
    sub_A1030(v34);
LABEL_45:
    v32 = *v31;
    if ( (*v31 & 2) != 0 )
    {
LABEL_46:
      if ( v30 > 3 )
        qfree((__int64)v31);
      v21 = v94.m128i_i64[0];
      goto LABEL_49;
    }
LABEL_155:
    *v31 = v32 | 2;
    goto LABEL_46;
  }
  if ( !v94.m128i_i64[0] )
    goto LABEL_37;
  v22 = *(_QWORD **)(v94.m128i_i64[0] + 8);
  if ( v22 == (_QWORD *)v94.m128i_i64[0] )
    goto LABEL_37;
  v88.m128i_i64[0] = (__int64)&v101;
  while ( 1 )
  {
    v23 = v22[3];
    v24 = v88.m128i_i64[0];
    v89.m128i_i64[0] = (__int64)&v95;
    sub_127A20(v88.m128i_i64[0], a1, v23, 0, v10, v11);
    if ( sub_17C4E0(v83, v24, *(_DWORD *)(a1 + 72), 0xFFFFFFFF, 0, 0, 2u, 1u)
      || sub_A9D90(a1, (unsigned __int64 **)v88.m128i_i64[0], *(_QWORD *)(v23 + 8), a2, 1u) )
    {
      break;
    }
    sub_124680((__int64)v104, a1, v23, 1u);
    sub_648D0((__int64 *)v88.m128i_i64[0], v104, *(double *)v9.m128i_i64);
    v25 = v105;
    v105 = 0;
    v9 = _mm_loadu_si128(&v106);
    v106 = 0;
    if ( v102 )
    {
      v89 = v9;
      v103.m128i_i64[0] = 0;
      qfree(v102);
      v9 = _mm_load_si128(&v89);
      v102 = v25;
      v103 = v9;
      if ( v105 )
      {
        v106.m128i_i64[0] = 0;
        qfree(v105);
      }
    }
    else
    {
      v102 = v25;
      v103 = v9;
    }
    qfree((__int64)v104[0]);
    v26 = sub_A9AA0(a1, (unsigned __int64 **)v88.m128i_i64[0], *(_QWORD *)(v23 + 8), a2, 1u);
    v27 = v102;
    if ( v26 )
      goto LABEL_130;
    if ( v102 )
    {
      v103.m128i_i64[0] = 0;
      qfree(v102);
    }
    qfree(v101);
    if ( (*v22 & 2) == 0 )
    {
      v28 = (_QWORD *)v22[2];
      if ( (*(_BYTE *)v28 & 2) != 0 )
      {
        v67 = (_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFFCLL);
        v68 = *v67;
        if ( (*v67 & 2) != 0 || (_QWORD *)v67[2] != v22 )
        {
LABEL_124:
          v22 = v67;
        }
        else
        {
          while ( 1 )
          {
            v69 = v67;
            v70 = v68 & 0xFFFFFFFFFFFFFFFCLL;
            v68 = *(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v68 & 2) != 0 )
              break;
            v67 = (_QWORD *)v70;
            if ( *(_QWORD **)(v70 + 16) != v69 )
              goto LABEL_124;
          }
          v22 = (_QWORD *)v70;
        }
      }
      else
      {
        do
        {
          v22 = v28;
          v28 = (_QWORD *)v28[1];
        }
        while ( (*(_BYTE *)v28 & 2) == 0 );
      }
    }
    if ( (_QWORD *)v94.m128i_i64[0] == v22 )
      goto LABEL_37;
  }
  v27 = v102;
LABEL_130:
  if ( v27 )
  {
    v103.m128i_i64[0] = 0;
    qfree(v27);
  }
  qfree(v101);
  v91 = 0;
LABEL_39:
  v21 = v94.m128i_i64[0];
  v29 = v94.m128i_i64[0];
  if ( v94.m128i_i64[0] )
  {
    if ( v94.m128i_i64[1] )
      goto LABEL_41;
LABEL_111:
    *(_QWORD *)v29 = v29 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v29 & 3LL;
    v65 = v94.m128i_i64[0];
    v66 = (__m128i)v94.m128i_u64[0];
    *(_QWORD *)v94.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v65 + 8) = _mm_unpacklo_epi64(v66, v66);
    *(_QWORD *)v94.m128i_i64[0] |= 2uLL;
LABEL_112:
    if ( v94.m128i_i64[0] )
      qfree(v94.m128i_i64[0]);
  }
LABEL_114:
  if ( v100[0] )
  {
    v100[1] = 0;
    qfree(v100[0]);
  }
  qfree(v99[0]);
  if ( v97 )
  {
    *(_QWORD *)&v98 = 0;
    qfree((__int64)v97);
  }
  qfree(v95);
  return v91;
}

