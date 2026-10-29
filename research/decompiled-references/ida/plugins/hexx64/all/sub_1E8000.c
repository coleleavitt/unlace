unsigned __int64 __fastcall sub_1E8000(__int64 a1, unsigned __int64 a2, __int64 *a3, _DWORD *a4)
{
  _QWORD *exception; // rdi
  const __m128i *v5; // r11
  unsigned __int64 v6; // r10
  __int64 v8; // r12
  int v9; // r15d
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r12
  int v16; // edx
  char v17; // al
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r9
  __m128i *v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // r15d
  char v28; // al
  const __m128i *v29; // r11
  __int64 *v30; // r10
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 j; // rdx
  __int64 v35; // rsi
  int v36; // edx
  char v37; // r15
  _DWORD *v38; // r8
  __int64 v39; // rdx
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rcx
  char v42; // al
  __m128i v43; // xmm1
  __m128i v44; // xmm0
  __m128i v45; // xmm2
  bool v46; // zf
  char v47; // al
  unsigned __int64 v48; // r9
  char v49; // al
  __int64 v50; // rdx
  unsigned __int64 v51; // r9
  __int64 v52; // rdx
  __int64 *v53; // rsi
  unsigned __int64 v54; // rcx
  __int64 *v55; // rsi
  char v56; // al
  unsigned __int64 v57; // rcx
  unsigned int v58; // ebp
  char v59; // al
  __m128i si128; // xmm1
  __m128i v61; // xmm0
  __m128i v62; // xmm2
  char v63; // al
  unsigned __int64 *v64; // r13
  __int64 *v65; // rdx
  __int64 v66; // rax
  unsigned __int64 i; // rdx
  unsigned __int64 v68; // rcx
  __int64 v69; // rax
  __m128i v70; // xmm1
  __int64 v71; // rdx
  unsigned __int64 v72; // rsi
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rax
  char v75; // dl
  unsigned __int8 v76; // si
  __int64 v77; // rsi
  _BYTE *v78; // rsi
  unsigned __int64 v80; // [rsp+0h] [rbp-128h]
  unsigned __int64 v81; // [rsp+0h] [rbp-128h]
  unsigned __int64 v82; // [rsp+0h] [rbp-128h]
  unsigned __int64 v83; // [rsp+0h] [rbp-128h]
  __int64 v84; // [rsp+10h] [rbp-118h]
  unsigned __int64 v85; // [rsp+18h] [rbp-110h]
  __m128i *v86; // [rsp+18h] [rbp-110h]
  unsigned __int64 v87; // [rsp+18h] [rbp-110h]
  __int64 *v88; // [rsp+18h] [rbp-110h]
  unsigned __int64 v89; // [rsp+18h] [rbp-110h]
  unsigned __int64 v90; // [rsp+18h] [rbp-110h]
  __m128i *v91; // [rsp+20h] [rbp-108h]
  const __m128i *v92; // [rsp+20h] [rbp-108h]
  const __m128i *v93; // [rsp+20h] [rbp-108h]
  const __m128i *v94; // [rsp+20h] [rbp-108h]
  const __m128i *v95; // [rsp+20h] [rbp-108h]
  const __m128i *v96; // [rsp+20h] [rbp-108h]
  const __m128i *v97; // [rsp+20h] [rbp-108h]
  __int64 *v98; // [rsp+28h] [rbp-100h]
  __int64 *v99; // [rsp+28h] [rbp-100h]
  __int64 *v100; // [rsp+28h] [rbp-100h]
  __int64 *v101; // [rsp+28h] [rbp-100h]
  char v102; // [rsp+37h] [rbp-F1h] BYREF
  const __m128i *v103; // [rsp+38h] [rbp-F0h] BYREF
  unsigned __int64 *v104; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v105; // [rsp+48h] [rbp-E0h] BYREF
  __m256i v106; // [rsp+50h] [rbp-D8h] BYREF
  __m256i v107; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v108; // [rsp+90h] [rbp-98h] BYREF
  __int128 v109; // [rsp+98h] [rbp-90h] BYREF
  __int64 v110; // [rsp+A8h] [rbp-80h]
  __m128i v111; // [rsp+C0h] [rbp-68h]
  __m128i v112; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v113; // [rsp+E8h] [rbp-40h]

  v5 = (const __m128i *)(a2 + 24);
  v6 = a2;
  v8 = (int)a4[1];
  v9 = *(_DWORD *)(a2 + 44);
  v10 = *(_QWORD *)(a2 + 24);
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 1504LL);
  v12 = v9;
  v113 = __readfsqword(0x28u);
  v13 = a2;
  v84 = v11;
  v14 = *a3;
  v15 = *a3 + v8;
  if ( *a3 >= v10 && v15 <= v9 + v10 )
  {
    if ( *(_BYTE *)(a2 + 32) != 5 || (v16 = v9 + v10 - v15, !*(_BYTE *)(*(_QWORD *)(v84 + 96) + 145LL)) )
      v16 = v14 - v10;
    v17 = sub_314020((__m128i *)(a2 + 40), (__int64)a4, v16, v9);
    v5 = (const __m128i *)(a2 + 24);
    v6 = a2;
    v12 = v9;
    if ( v17 )
      return v113 - __readfsqword(0x28u);
  }
  v19 = v12 + v10;
  memset(&v106.m256i_u64[1], 0, 24);
  v106.m256i_i64[0] = 0x800000000LL;
  if ( *(_QWORD *)(v6 + 24) >= *a3 )
  {
    if ( v15 >= v19 )
    {
      while ( 1 )
      {
LABEL_9:
        if ( v13 == *(_QWORD *)(a1 + 8) || *(_BYTE *)(v13 + 32) != *((_BYTE *)a3 + 8) || *(_QWORD *)(v13 + 24) >= v15 )
        {
          v24 = v13;
          if ( *a4 == 1 )
            goto LABEL_40;
          goto LABEL_38;
        }
        v19 = *(_QWORD *)(v13 + 24) + *(int *)(v13 + 44);
        if ( v15 < v19 )
          break;
        v20 = *(_QWORD *)v13;
        v21 = a1 + 8;
        if ( (*(_QWORD *)v13 & 2) != 0 )
        {
          sub_1E3D90((unsigned __int64 **)(a1 + 8), (__int64 *)v13);
        }
        else
        {
LABEL_14:
          v23 = *(_QWORD *)(v13 + 16);
          if ( (*(_BYTE *)v23 & 2) != 0 )
          {
            v22 = v20 & 0xFFFFFFFFFFFFFFFCLL;
            v39 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v39 & 2) == 0 )
            {
              v40 = v13;
              do
              {
                if ( *(_QWORD *)(v22 + 16) != v40 )
                  break;
                v40 = v22;
                v41 = v39 & 0xFFFFFFFFFFFFFFFCLL;
                v39 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCLL);
                v22 = v41;
              }
              while ( (v39 & 2) == 0 );
            }
          }
          else
          {
            do
            {
              v22 = v23;
              v23 = *(_QWORD *)(v23 + 8);
            }
            while ( (*(_BYTE *)v23 & 2) == 0 );
          }
LABEL_16:
          v91 = (__m128i *)v21;
          v85 = v22;
          sub_1E3D90((unsigned __int64 **)(a1 + 8), (__int64 *)v13);
          v24 = v85;
          v25 = v91;
          if ( v15 < v19 )
          {
            if ( *a4 != 1 )
              goto LABEL_39;
            goto LABEL_53;
          }
          v13 = v85;
        }
      }
      sub_312D90((__int64)&v106, v13 + 40);
      v20 = *(_QWORD *)v13;
      v21 = a1 + 8;
      v22 = v13;
      if ( (*(_QWORD *)v13 & 2) != 0 )
        goto LABEL_16;
      goto LABEL_14;
    }
    v88 = (__int64 *)v6;
    sub_312D90((__int64)&v106, (__int64)v5[1].m128i_i64);
    v50 = *v88;
    v51 = (unsigned __int64)v88;
    if ( (*v88 & 2) == 0 )
    {
      v51 = v88[2];
      if ( (*(_BYTE *)v51 & 2) != 0 )
      {
        v51 = v50 & 0xFFFFFFFFFFFFFFFCLL;
        v52 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v52 & 2) == 0 )
        {
          v53 = v88;
          do
          {
            if ( v53 != *(__int64 **)(v51 + 16) )
              break;
            v53 = (__int64 *)v51;
            v54 = v52 & 0xFFFFFFFFFFFFFFFCLL;
            v52 = *(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFFCLL);
            v51 = v54;
          }
          while ( (v52 & 2) == 0 );
        }
      }
      else
      {
        for ( i = *(_QWORD *)(v51 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
          v51 = i;
      }
    }
    v55 = v88;
    v89 = v51;
    sub_1E3D90((unsigned __int64 **)(a1 + 8), v55);
    v24 = v89;
LABEL_36:
    if ( v15 >= v19 )
    {
      v13 = v24;
      goto LABEL_9;
    }
    if ( *a4 != 1 )
    {
LABEL_38:
      v25 = (__m128i *)(a1 + 8);
LABEL_39:
      v38 = a4;
      v80 = v24;
      sub_1E63F0(v25, v24, *a3, a3[1], (__int64)v38);
      v24 = v80;
LABEL_40:
      if ( v15 >= v19 )
        goto LABEL_41;
    }
LABEL_53:
    v46 = *((_BYTE *)a3 + 8) == 5;
    memset(&v107.m256i_u64[1], 0, 24);
    v107.m256i_i64[0] = 0x800000000LL;
    if ( v46 && *(_BYTE *)(*(_QWORD *)(v84 + 96) + 145LL) )
    {
      v58 = v19 - v15;
      v82 = v24;
      v59 = sub_314D00((__m128i *)&v106, (__m128i *)&v107, v58, v12);
      v48 = v82;
      if ( v59 )
      {
        si128 = _mm_load_si128((const __m128i *)&v106);
        v61 = _mm_load_si128((const __m128i *)&v106.m256i_u64[2]);
        *(__m128i *)v106.m256i_i8 = _mm_load_si128((const __m128i *)&v107);
        v62 = _mm_load_si128((const __m128i *)&v107.m256i_u64[2]);
        v111 = si128;
        v112 = v61;
        *(__m128i *)&v106.m256i_u64[2] = v62;
        *(__m128i *)v107.m256i_i8 = si128;
        *(__m128i *)&v107.m256i_u64[2] = v61;
LABEL_55:
        if ( v107.m256i_i32[0] == 1 )
        {
LABEL_57:
          sub_312B80((__int64)&v107);
LABEL_41:
          sub_312B80((__int64)&v106);
          return v113 - __readfsqword(0x28u);
        }
LABEL_56:
        sub_1E45A0((__m128i *)(a1 + 8), v48, v15, a3[1], (__int64)&v107);
        goto LABEL_57;
      }
    }
    else
    {
      v81 = v24;
      v47 = sub_314D00((__m128i *)&v106, (__m128i *)&v107, (unsigned int)(v15 + v106.m256i_i32[1] - v19), v12);
      v48 = v81;
      if ( v47 )
        goto LABEL_55;
      v58 = v19 - v15;
    }
    v83 = v48;
    LODWORD(v108) = 0;
    HIDWORD(v108) = v58;
    v110 = 0;
    v109 = 0;
    sub_312D90((__int64)&v107, (__int64)&v108);
    sub_312B80((__int64)&v108);
    sub_312B80((__int64)&v107);
    v107.m256i_i32[0] = 8;
    v48 = v83;
    goto LABEL_56;
  }
  if ( *(_DWORD *)(v84 + 80) == 4 && (v19 & 7) == 0 && v9 > 4 )
  {
    v96 = v5;
    v87 = v6;
    v49 = sub_1E4EB0(a1, v84, v6, (__int64)a3, (__int64)a4, v9 - 4);
    v6 = v87;
    v5 = v96;
    if ( v49 )
      goto LABEL_41;
  }
  if ( (v9 & 1) == 0 )
  {
    v97 = v5;
    v90 = v6;
    v56 = sub_1E4EB0(a1, v84, v6, (__int64)a3, (__int64)a4, v9 / 2);
    v6 = v90;
    v5 = v97;
    if ( v56 )
      goto LABEL_41;
  }
  v26 = *(_QWORD *)(v6 + 24);
  v27 = *a3 - v26;
  if ( *((_BYTE *)a3 + 8) != 5 )
  {
    v86 = (__m128i *)&v5[1];
    goto LABEL_22;
  }
  v12 = *(_QWORD *)(v84 + 96);
  v86 = (__m128i *)&v5[1];
  if ( !*(_BYTE *)(v12 + 145) )
  {
LABEL_22:
    v98 = (__int64 *)v6;
    v92 = v5;
    v28 = sub_314D00(v86, (__m128i *)&v106, v27, v12);
    v29 = v92;
    v30 = v98;
    if ( v28 )
      goto LABEL_26;
    goto LABEL_23;
  }
  v101 = (__int64 *)v6;
  v95 = v5;
  v42 = sub_314D00(v86, (__m128i *)&v106, v5[1].m128i_i32[1] + (unsigned int)v26 - (unsigned int)*a3, v12);
  v29 = v95;
  v30 = v101;
  if ( v42 )
  {
    v43 = _mm_loadu_si128(v95 + 1);
    v44 = _mm_loadu_si128(v86 + 1);
    v95[1] = _mm_load_si128((const __m128i *)&v106);
    v45 = _mm_load_si128((const __m128i *)&v106.m256i_u64[2]);
    v111 = v43;
    v112 = v44;
    v86[1] = v45;
    *(__m128i *)v106.m256i_i8 = v43;
    *(__m128i *)&v106.m256i_u64[2] = v44;
    goto LABEL_26;
  }
LABEL_23:
  if ( v15 < v19 )
  {
    v99 = v30;
    v93 = v29;
    sub_312D90((__int64)&v106, (__int64)v86);
    v30 = v99;
    v29 = v93;
  }
  v100 = v30;
  HIDWORD(v108) = v27;
  v94 = v29;
  LODWORD(v108) = 0;
  v110 = 0;
  v109 = 0;
  sub_312D90((__int64)v86, (__int64)&v108);
  sub_312B80((__int64)&v108);
  sub_312B80((__int64)v86);
  v29 = v94;
  v30 = v100;
  v94[1].m128i_i32[0] = 8;
LABEL_26:
  v31 = *v30;
  v32 = *v30 & 2;
  if ( v29[1].m128i_i32[0] == 1 )
  {
    v13 = (unsigned __int64)v30;
    if ( !v32 )
    {
      v57 = v30[2];
      if ( (*(_BYTE *)v57 & 2) != 0 )
      {
        v13 = v31 & 0xFFFFFFFFFFFFFFFCLL;
        v71 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v71 & 2) == 0 )
        {
          v72 = (unsigned __int64)v30;
          do
          {
            if ( v72 != *(_QWORD *)(v13 + 16) )
              break;
            v72 = v13;
            v73 = v71 & 0xFFFFFFFFFFFFFFFCLL;
            v71 = *(_QWORD *)(v71 & 0xFFFFFFFFFFFFFFFCLL);
            v13 = v73;
          }
          while ( (v71 & 2) == 0 );
        }
      }
      else
      {
        do
        {
          v13 = v57;
          v57 = *(_QWORD *)(v57 + 8);
        }
        while ( (*(_BYTE *)v57 & 2) == 0 );
      }
    }
    sub_1E3D90((unsigned __int64 **)(a1 + 8), v30);
  }
  else if ( !v32 )
  {
    v33 = v30[2];
    if ( (*(_BYTE *)v33 & 2) != 0 )
    {
      v65 = (__int64 *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
      v66 = *v65;
      if ( (*v65 & 2) == 0 )
      {
        while ( v13 == v65[2] )
        {
          v13 = (unsigned __int64)v65;
          v68 = v66 & 0xFFFFFFFFFFFFFFFCLL;
          v66 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v66 & 2) != 0 )
          {
            v13 = v68;
            goto LABEL_32;
          }
          v65 = (__int64 *)v68;
        }
      }
      v13 = (unsigned __int64)v65;
    }
    else
    {
      for ( j = *(_QWORD *)(v33 + 8); (*(_BYTE *)j & 2) == 0; j = *(_QWORD *)(j + 8) )
        v33 = j;
      v13 = v33;
    }
  }
LABEL_32:
  v12 = *a3;
  v35 = (int)a4[1];
  if ( *a3 + v106.m256i_i32[1] < *a3 + v35 )
    goto LABEL_35;
  v36 = 0;
  if ( *((_BYTE *)a3 + 8) == 5 && *(_BYTE *)(*(_QWORD *)(v84 + 96) + 145LL) )
    v36 = v106.m256i_i32[1] - v35;
  v37 = sub_314020((__m128i *)&v106, (__int64)a4, v36, v12);
  if ( !v37 )
  {
LABEL_35:
    v24 = v13;
    goto LABEL_36;
  }
  v63 = *((_BYTE *)a3 + 8);
  v108 = *a3;
  LOBYTE(v109) = v63;
  sub_312C40((__int64)&v109 + 8, (__int64)&v106, v108, v12);
  v64 = *(unsigned __int64 **)(a1 + 8);
  v103 = (const __m128i *)&v108;
  if ( !v64 )
  {
    v69 = qalloc();
    v70 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v69, (__m128i)(unsigned __int64)v69);
    if ( !v69 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v69 + 64) = 0;
    *(_OWORD *)(v69 + 16) = 0;
    *(_OWORD *)(v69 + 32) = 0;
    *(_OWORD *)(v69 + 48) = 0;
    *(_QWORD *)v69 = v69 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(__m128i *)(v69 + 8) = v70;
    *(_QWORD *)(a1 + 8) = v69;
    *(_QWORD *)v69 = v69 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v69 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 8) + 8LL) = _mm_unpacklo_epi64(
                                                (__m128i)*(unsigned __int64 *)(a1 + 8),
                                                (__m128i)*(unsigned __int64 *)(a1 + 8));
    **(_QWORD **)(a1 + 8) &= ~1uLL;
    **(_QWORD **)(a1 + 8) |= 2uLL;
    v64 = *(unsigned __int64 **)(a1 + 8);
    goto LABEL_102;
  }
  if ( !*(_QWORD *)(a1 + 16) )
  {
LABEL_102:
    sub_1E7E70((__m128i *)(a1 + 8), v64, 1, &v103);
    goto LABEL_90;
  }
  v104 = v64;
  v102 = 1;
  v105 = 0;
  if ( v13
    && (unsigned __int8)sub_88E40(
                          (unsigned __int64 *)(a1 + 8),
                          (__int64)&v108,
                          v13,
                          (unsigned __int64 *)&v104,
                          &v102,
                          &v105) )
  {
    if ( !v105 )
      sub_1E7E70((__m128i *)(a1 + 8), v104, v102, &v103);
    goto LABEL_90;
  }
  v74 = *v64 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v74 & 2) != 0 )
  {
    v75 = 1;
    goto LABEL_119;
  }
  v75 = v37;
  while ( 1 )
  {
    v76 = *(_BYTE *)(v74 + 32);
    if ( (unsigned __int8)v109 < v76 )
    {
LABEL_121:
      v78 = *(_BYTE **)(v74 + 8);
      v75 = v37;
      goto LABEL_122;
    }
    if ( v76 >= (unsigned __int8)v109 )
    {
      v77 = *(_QWORD *)(v74 + 24);
      if ( v108 < v77 )
        goto LABEL_121;
      if ( v108 <= v77 )
        break;
    }
    v78 = *(_BYTE **)(v74 + 16);
    v75 = 0;
LABEL_122:
    if ( (*v78 & 2) != 0 )
      goto LABEL_118;
    v74 = (unsigned __int64)v78;
  }
  if ( v74 )
    goto LABEL_90;
LABEL_118:
  v64 = (unsigned __int64 *)v74;
LABEL_119:
  sub_1E7E70((__m128i *)(a1 + 8), v64, v75, &v103);
LABEL_90:
  sub_312B80((__int64)&v109 + 8);
  sub_312B80((__int64)&v106);
  return v113 - __readfsqword(0x28u);
}

