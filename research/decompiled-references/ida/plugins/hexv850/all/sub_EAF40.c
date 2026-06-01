__int64 __fastcall sub_EAF40(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rdx
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned __int8 v10; // r13
  __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // r14
  const char *v14; // rdx
  _DWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // r13
  __int64 v24; // r14
  void *v25; // rax
  __int64 v26; // r12
  _QWORD *v27; // rbx
  __int64 v28; // rdx
  _QWORD *v29; // r13
  unsigned __int64 v30; // r12
  void *v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // r12
  _QWORD *v34; // rbx
  unsigned __int64 v35; // r14
  _QWORD *v36; // rdi
  __int32 v37; // eax
  __int32 v38; // r12d
  __int64 v39; // r13
  int v40; // ebp
  int v41; // r12d
  int v42; // r14d
  __int64 v43; // r13
  __int64 v44; // rbp
  _DWORD *v45; // rax
  _DWORD *v46; // rdx
  _QWORD *v47; // r13
  __int64 v48; // rax
  unsigned int v49; // edx
  __int64 v50; // rbp
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // r8
  int v54; // ecx
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // rax
  __m128i v58; // xmm0
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // r13
  __int64 v64; // r12
  _QWORD *v65; // rbp
  _DWORD *v67; // rdi
  int tinfo_size; // ebx
  __int64 v69; // r12
  __int64 v70; // rax
  __int64 v71; // rbp
  __m128i v72; // xmm0
  __int64 v73; // rdi
  __m128i v74; // xmm0
  __int64 v75; // rdi
  __m128i v76; // xmm0
  __m128i v77; // [rsp+0h] [rbp-168h] BYREF
  __int64 v78; // [rsp+10h] [rbp-158h]
  __int64 v79; // [rsp+18h] [rbp-150h]
  __int64 v80; // [rsp+20h] [rbp-148h]
  __int64 v81; // [rsp+28h] [rbp-140h]
  __int32 v82; // [rsp+30h] [rbp-138h]
  __int32 v83; // [rsp+34h] [rbp-134h]
  __m128i *v84; // [rsp+38h] [rbp-130h]
  __int64 *v85; // [rsp+40h] [rbp-128h]
  __int64 v86; // [rsp+48h] [rbp-120h]
  __int64 *v87; // [rsp+50h] [rbp-118h]
  __int64 *v88; // [rsp+58h] [rbp-110h]
  int v89; // [rsp+60h] [rbp-108h]
  unsigned __int8 tinfo_details; // [rsp+67h] [rbp-101h]
  __int64 *v91; // [rsp+68h] [rbp-100h]
  __int64 v92; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v93; // [rsp+78h] [rbp-F0h] BYREF
  _QWORD v94[2]; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v95; // [rsp+A0h] [rbp-C8h] BYREF
  __int128 v96; // [rsp+A8h] [rbp-C0h]
  __int64 v97; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v98; // [rsp+C8h] [rbp-A0h]
  __int64 v99; // [rsp+D8h] [rbp-90h]
  __int64 v100; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v101; // [rsp+E8h] [rbp-80h] BYREF
  __int128 v102; // [rsp+F0h] [rbp-78h]
  __int64 v103; // [rsp+100h] [rbp-68h]
  __int128 v104; // [rsp+108h] [rbp-60h]
  char v105; // [rsp+118h] [rbp-50h]
  unsigned __int64 v106; // [rsp+128h] [rbp-40h]

  v106 = __readfsqword(0x28u);
  v97 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v103 = 0;
  v105 = 16;
  v84 = (__m128i *)&v97;
  v98 = 0;
  v102 = 0;
  v104 = 0;
  tinfo_details = get_tinfo_details();
  if ( !tinfo_details || (int)v98 < 0 )
    goto LABEL_128;
  if ( (get_tinfo_property() & 0x3F) != 1 )
  {
    tinfo_size = get_tinfo_size();
    if ( tinfo_size <= 0 )
      goto LABEL_128;
    if ( (get_tinfo_property() & 0x2F) != 0xD && !(unsigned __int8)sub_117EC0((unsigned int)tinfo_size) )
    {
      v69 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
      v70 = (unsigned __int8)getinf() ? (unsigned __int8)getinf() : *(_QWORD *)(v69 + 120);
      if ( tinfo_size != v70
        && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 120LL) != tinfo_size
        && tinfo_size != 16 )
      {
        goto LABEL_128;
      }
    }
  }
  v2 = j__qalloc_or_throw();
  v3 = *(_QWORD *)(a1 + 312);
  v4 = *(_DWORD *)(a1 + 348);
  *(_DWORD *)(v2 + 12) = 0;
  *(_QWORD *)v2 = v3;
  *(_DWORD *)(v2 + 8) = v4;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = 0;
  *(_QWORD *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 136) = 0;
  *(_QWORD *)(v2 + 144) = 0;
  *(_QWORD *)(v2 + 152) = 0;
  *(_QWORD *)(v2 + 176) = 0;
  *(_QWORD *)(v2 + 184) = 0;
  *(_QWORD *)(v2 + 192) = 0;
  *(_QWORD *)(v2 + 216) = 0;
  *(_QWORD *)(v2 + 240) = 0;
  *(_QWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 256) = 0;
  *(_QWORD *)(v2 + 280) = 0;
  *(_OWORD *)(v2 + 32) = 0;
  *(_OWORD *)(v2 + 56) = 0;
  *(_OWORD *)(v2 + 120) = 0;
  *(_OWORD *)(v2 + 160) = 0;
  *(_OWORD *)(v2 + 200) = 0;
  *(_OWORD *)(v2 + 224) = 0;
  *(_OWORD *)(v2 + 264) = 0;
  *(_QWORD *)(v2 + 288) = 0;
  *(_OWORD *)(v2 + 296) = 0;
LABEL_5:
  v89 = sub_E8D00(a1, v84, v2);
  if ( *(_DWORD *)(a1 + 348) > v89 )
  {
    if ( v2 )
    {
      sub_B6560((_QWORD *)v2);
      j__qfree();
    }
LABEL_128:
    v87 = &v100;
    v88 = &v101;
LABEL_102:
    v2 = 0;
    goto LABEL_103;
  }
  *(_DWORD *)(v2 + 12) = *(_QWORD *)(a1 + 328);
  *(_DWORD *)(v2 + 16) = *(_DWORD *)(a1 + 328) + DWORD2(v102);
  v5 = *(_DWORD *)(a1 + 360);
  if ( v5 <= 0x10 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_BYTE *)(v6 + 129);
    v5 = v7 & 0xF0;
    if ( (v7 & 0xF0) == 0xC0 )
      v5 = *(_DWORD *)(v6 + 140);
  }
  *(_DWORD *)(v2 + 20) = v5;
  v91 = (__int64 *)(v2 + 24);
  v79 = v89;
  sub_7D880((__int64 *)(v2 + 24), v89);
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v86 = *(_QWORD *)(a1 + 328) + *(int *)(v8 + 120);
  v81 = *((_QWORD *)&v102 + 1) + *(_QWORD *)(v8 + 136) + *(int *)(v8 + 116);
  sub_E36B0(v2, (__int64)v84);
  *(_DWORD *)(v2 + 280) |= *(_DWORD *)(a1 + 352);
  v87 = &v100;
  copy_tinfo_t();
  v88 = &v101;
  copy_argloc();
  v9 = *(unsigned int *)(a1 + 360);
  v10 = tinfo_details;
  if ( (*(_BYTE *)(a1 + 352) & 4) != 0 )
    v10 = (v9 & 0xFFFFFFF0) == 64 || (v9 & 0xFFFFFFF0) == 208;
  LOBYTE(v78) = sub_36CD10(v9, &v101);
  if ( v89 <= 0 )
  {
LABEL_91:
    v85 = v94;
    goto LABEL_92;
  }
  v83 = -1;
  v11 = 1;
  v12 = 0;
  while ( 1 )
  {
    v77.m128i_i32[0] = v11 - 1;
    v15 = (_DWORD *)(v97 + v12);
    if ( (v10 & (unsigned __int8)v78) == 0 )
    {
      v13 = v12;
      v82 = v77.m128i_i32[0];
      goto LABEL_15;
    }
    if ( *v15 != 1 )
    {
      v13 = v12;
      v10 &= v78;
      v82 = v77.m128i_i32[0];
      goto LABEL_15;
    }
    if ( v83 != -1 )
      goto LABEL_90;
    if ( v89 <= (int)v11 )
    {
LABEL_129:
      v83 = v77.m128i_i32[0];
LABEL_90:
      v10 &= v78;
      v82 = v83 + v89 - v11;
      v13 = 80LL * v82;
      v15 = (_DWORD *)(v97 + v13);
      goto LABEL_15;
    }
    v67 = (_DWORD *)(v97 + v12 + 80);
    while ( *v67 == 1 )
    {
      v67 += 20;
      if ( (_DWORD *)(v97 + 80 * (v11 + (unsigned int)(v89 - 1 - v11)) + 80) == v67 )
        goto LABEL_129;
    }
    v13 = v12;
    v10 = 0;
    v82 = v77.m128i_i32[0];
    v83 = v77.m128i_i32[0];
LABEL_15:
    if ( !(unsigned __int8)sub_E0460(
                             v13 + *(_QWORD *)(v2 + 24),
                             *(_QWORD *)a1,
                             (__int64)v15,
                             *(_DWORD *)(v2 + 12),
                             *(_DWORD *)(v2 + 20),
                             1) )
    {
      if ( v2 )
      {
        sub_B6560((_QWORD *)v2);
        j__qfree();
      }
      goto LABEL_102;
    }
    if ( v10 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
      v80 = v13 + *(_QWORD *)(v2 + 24);
      if ( (unsigned __int8)sub_E3730((__int64 *)a1, &v92, *(_QWORD *)(v16 + 16), v80) )
      {
        v17 = v92;
        if ( v92 < v81 )
        {
          if ( v92 < v86 )
            v17 = v81;
          v81 = v17;
        }
      }
      if ( *(_DWORD *)(a1 + 348) <= v77.m128i_i32[0]
        || (*(_BYTE *)(a1 + 352) & 4) == 0
        && !*(_DWORD *)(v2 + 284)
        && (v18 = *(_DWORD *)(a1 + 360) & 0xFFFFFFF0, v18 != 64)
        && v18 != 208 )
      {
        v85 = v94;
        if ( (unsigned __int8)sub_3297A0(v80, v94) )
        {
          v19 = v81;
          if ( v94[0] >= v81 )
            break;
        }
      }
    }
    v14 = s1;
    if ( *(_QWORD *)(a1 + 32) )
      v14 = *(const char **)(a1 + 24);
    sub_B9780(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 480LL) + 112LL), v2, v14, 1);
    if ( !(_BYTE)v78 )
    {
      v48 = *(_QWORD *)(a1 + 16);
      if ( !*(_BYTE *)(v48 + 148) && (*(_BYTE *)(a1 + 352) & 4) == 0 )
      {
        if ( *(_QWORD *)(v2 + 32) )
        {
          v49 = *(_DWORD *)(v2 + 20) & 0xFFFFFFF0;
          if ( v49 != 64
            && v49 != 208
            && !*(_DWORD *)(v2 + 284)
            && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v48 + 112) + 136LL))(
                 *(_QWORD *)(v48 + 112),
                 v2)
            && (unsigned __int8)sub_ECB40(a1, v2, v77.m128i_u32[0]) )
          {
            copy_tinfo_t();
            sub_EEA90(a1, v2, v84, (unsigned int)v11);
            if ( !(unsigned __int8)get_tinfo_details() || (int)v98 < 0 )
            {
              if ( !under_debugger )
                sub_37CFE0(52072);
              goto LABEL_153;
            }
            goto LABEL_5;
          }
        }
      }
    }
    v12 += 80;
    if ( v79 == v11 )
      goto LABEL_91;
    ++v11;
  }
  v20 = v97 + v13;
  if ( *(_DWORD *)v20 != 1 )
  {
    if ( !under_debugger )
      sub_37CFE0(51676);
    goto LABEL_153;
  }
  *((_QWORD *)&v102 + 1) = *(_QWORD *)(v20 + 8);
  *(_DWORD *)(v2 + 16) = v94[0];
  if ( (unsigned __int8)sub_36CD10(*(unsigned int *)(a1 + 360), v19) )
  {
    if ( *(_DWORD *)(v2 + 8) == v89 )
    {
      v21 = v97;
      v77.m128i_i32[0] = v82 + 1;
      v22 = 80LL * (v82 + 1);
      v23 = (_QWORD *)(v97 + v22);
      v24 = 80LL * v83;
      v25 = (void *)(v97 + v24);
      if ( v22 != v24 )
      {
        v78 = v97 + v24;
        v26 = 80LL * (v82 + 1);
        v79 = v2;
        v27 = (_QWORD *)(v97 + v24);
        do
        {
          clear_tinfo_t();
          if ( v27[5] )
          {
            v27[6] = 0;
            qfree();
          }
          if ( v27[2] )
          {
            v27[3] = 0;
            qfree();
          }
          v27 += 10;
          cleanup_argloc();
        }
        while ( v23 != v27 );
        v25 = (void *)v78;
        v2 = v79;
        v22 = v26;
        v21 = v97;
      }
      v78 = v22;
      memmove(v25, v23, 80 * v98 + v21 - (_QWORD)v23);
      v28 = *(_QWORD *)(v2 + 24);
      v29 = (_QWORD *)(v28 + v78);
      v30 = 0xCCCCCCCCCCCCCCCDLL * ((v78 - v24) >> 4);
      v31 = (void *)(v28 + v24);
      *(_QWORD *)&v98 = v98 - v30;
      if ( v78 != v24 )
      {
        v78 = v28 + v24;
        v32 = v30;
        v33 = v2;
        v34 = (_QWORD *)(v28 + v24);
        v35 = v32;
        do
        {
          cleanup_argloc();
          if ( v34[4] )
          {
            v34[5] = 0;
            qfree();
          }
          clear_tinfo_t();
          v36 = v34;
          v34 += 10;
          sub_1181E0(v36);
        }
        while ( v29 != v34 );
        v2 = v33;
        v31 = (void *)v78;
        v30 = v35;
        v28 = *(_QWORD *)(v2 + 24);
      }
      memmove(v31, v29, 80LL * *(_QWORD *)(v2 + 32) + v28 - (_QWORD)v29);
      v37 = v77.m128i_i32[0];
      *(_QWORD *)(v2 + 32) -= v30;
      v38 = *(_DWORD *)(v2 + 8) + v83 - v37;
      *(_DWORD *)(v2 + 8) = v38;
      goto LABEL_54;
    }
    if ( !under_debugger )
      sub_37CFE0(52582);
LABEL_153:
    BUG();
  }
  if ( v82 != v77.m128i_i32[0] )
  {
    if ( !under_debugger )
      sub_37CFE0(52583);
    goto LABEL_153;
  }
  if ( *(_DWORD *)(v2 + 8) > v82 )
    *(_DWORD *)(v2 + 8) = v82;
  sub_E5FF0(v84->m128i_i64, v11 - 1);
  sub_7D880(v91, v11 - 1);
  v38 = *(_DWORD *)(v2 + 8);
LABEL_54:
  v39 = 0;
  if ( !(unsigned __int8)sub_5FE00((_QWORD *)(a1 + 232)) )
    v39 = (int)(sub_60180((_QWORD *)(a1 + 232)) + 1);
  if ( !(unsigned __int8)sub_5FE00((_QWORD *)(a1 + 248)) )
    v39 += (int)(sub_60180((_QWORD *)(a1 + 248)) + 1);
  if ( v38 == v39 )
  {
    v40 = v11 - 2;
    v77.m128i_i8[0] = (*(_DWORD *)(a1 + 360) & 0xFFFFFFF0) == 208 || (*(_DWORD *)(a1 + 360) & 0xFFFFFFF0) == 64;
    if ( v77.m128i_i8[0] )
    {
      v41 = *(_DWORD *)(v2 + 8);
      if ( v41 > v40 )
        goto LABEL_92;
LABEL_61:
      v42 = v40;
      do
      {
        v43 = 80LL * v42;
        v44 = v43 + v97;
        if ( *(_DWORD *)(v43 + v97) == 3 )
        {
          v45 = *(_DWORD **)(a1 + 264);
          v46 = &v45[*(_QWORD *)(a1 + 272)];
          if ( v45 != v46 )
          {
            while ( *(unsigned __int16 *)(v44 + 8) != *v45 )
            {
              if ( v46 == ++v45 )
                goto LABEL_62;
            }
            if ( v45 != v46 )
            {
              clear_tinfo_t();
              if ( *(_QWORD *)(v44 + 40) )
              {
                *(_QWORD *)(v44 + 48) = 0;
                qfree();
              }
              if ( *(_QWORD *)(v44 + 16) )
              {
                *(_QWORD *)(v44 + 24) = 0;
                qfree();
              }
              cleanup_argloc();
              memmove((void *)v44, (const void *)(v44 + 80), v97 + 80 * v98 - v44 - 80);
              v47 = (_QWORD *)(*(_QWORD *)(v2 + 24) + v43);
              *(_QWORD *)&v98 = v98 - 1;
              cleanup_argloc();
              if ( v47[4] )
              {
                v47[5] = 0;
                qfree();
              }
              clear_tinfo_t();
              sub_1181E0(v47);
              memmove(v47, v47 + 10, *(_QWORD *)(v2 + 24) + 80LL * *(_QWORD *)(v2 + 32) - (_QWORD)v47 - 80);
              --*(_QWORD *)(v2 + 32);
              if ( !v77.m128i_i8[0] )
                --*(_DWORD *)(v2 + 8);
            }
          }
        }
LABEL_62:
        --v42;
      }
      while ( v42 >= v41 );
    }
    else
    {
      v41 = 0;
      if ( v40 != -1 )
        goto LABEL_61;
    }
    v50 = a1 + 296;
    if ( *(_BYTE *)(a1 + 366) == 1 && !v77.m128i_i8[0] )
    {
      create_tinfo();
      sub_E26A0(a1, **(_DWORD **)(*(_QWORD *)a1 + 56LL) != 56, 1);
    }
    goto LABEL_93;
  }
LABEL_92:
  v50 = a1 + 296;
LABEL_93:
  v51 = *(_QWORD *)a1;
  v96 = 0;
  v52 = *(_QWORD *)(a1 + 8);
  v53 = *(_QWORD *)(a1 + 304);
  v94[0] = 0;
  v94[1] = 0;
  v95 = 0;
  sub_134500(v52, v2 + 96, v85, v50, v53, (*(_BYTE *)(*(_QWORD *)(v51 + 56) + 4LL) & 0x40) != 0);
  sub_5F800((__int64 *)(v2 + 136), v85);
  sub_3113F0(v2 + 152, &v95);
  if ( (*(_BYTE *)(v2 + 280) & 0x10) == 0 )
  {
    v93 = 0;
    v92 = 0;
    v92 = qvector_reserve();
    *(__m128i *)(v92 + 16 * v93) = _mm_load_si128((const __m128i *)&xmmword_400180);
    v71 = v92;
    v92 = 0;
    v72 = (__m128i)_mm_loadh_ps((const double *)&v93 + 1);
    v93 = 0;
    if ( *(_QWORD *)(v2 + 216) )
    {
      *(_QWORD *)(v2 + 224) = 0;
      v77 = v72;
      qfree();
      v73 = v92;
      v74 = _mm_load_si128(&v77);
      *(_QWORD *)(v2 + 216) = v71;
      *(__m128i *)(v2 + 224) = v74;
      if ( v73 )
      {
        *(_QWORD *)&v93 = 0;
        qfree();
      }
    }
    else
    {
      *(_QWORD *)(v2 + 216) = v71;
      *(__m128i *)(v2 + 224) = v72;
    }
  }
  v57 = *(_QWORD *)(v2 + 288);
  v58 = _mm_loadu_si128((const __m128i *)(v2 + 296));
  *(_QWORD *)(v2 + 288) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(v2 + 296) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(v2 + 304) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 48) = v57;
  v59 = *(_QWORD *)a1;
  *(__m128i *)(a1 + 56) = v58;
  v60 = *(_QWORD *)(v59 + 512);
  if ( v60 )
  {
    v61 = *(_QWORD *)(v2 + 32);
    if ( v61 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v2 + 24) + 80 * v61 - 24) == 1 )
      {
        v75 = *(_QWORD *)(a1 + 8);
        v76 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v75 + 1472) + 40 * v60 + 8));
        if ( *(int *)(v2 + 16) > _mm_add_epi64(v76, _mm_srli_si128(v76, 8)).m128i_i64[0] )
          sub_32B650(v75, *(_QWORD *)(a1 + 304), 55, v54, v55, v56);
      }
    }
  }
  if ( v95 )
  {
    *(_QWORD *)&v96 = 0;
    qfree();
  }
  qfree();
LABEL_103:
  if ( v103 )
  {
    *(_QWORD *)&v104 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v62 = v97;
  if ( v97 )
  {
    v63 = v98;
    if ( (_QWORD)v98 )
    {
      v64 = 0;
      do
      {
        v65 = (_QWORD *)(v62 + 80 * v64);
        clear_tinfo_t();
        if ( v65[5] )
        {
          v65[6] = 0;
          qfree();
        }
        if ( v65[2] )
        {
          v65[3] = 0;
          qfree();
        }
        ++v64;
        cleanup_argloc();
        v62 = v97;
      }
      while ( v63 != v64 );
    }
    *(_QWORD *)&v98 = 0;
    qfree();
  }
  return v2;
}

