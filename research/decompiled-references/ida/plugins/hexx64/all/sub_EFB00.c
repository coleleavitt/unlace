__int64 __fastcall sub_EFB00(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // rdx
  int v11; // edi
  unsigned __int8 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // r14
  const char *v16; // rdx
  _DWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // r13
  __int64 v25; // r14
  void *v26; // rax
  __int64 v27; // r12
  _QWORD *v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 *v32; // r13
  unsigned __int64 v33; // r12
  void *v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // r12
  __int64 *v37; // rbx
  unsigned __int64 v38; // r14
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int32 v41; // eax
  __int32 v42; // r12d
  __int64 v43; // r13
  int v44; // ebp
  int v45; // r12d
  int v46; // r14d
  __int64 v47; // r13
  __int64 v48; // rbp
  _DWORD *v49; // rax
  _DWORD *v50; // rdx
  __int64 v51; // rdi
  __int64 v52; // rdi
  _QWORD *v53; // r13
  __int64 v54; // rdi
  __int64 v55; // rax
  unsigned int v56; // edx
  __int64 v57; // rbp
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __m128i v64; // xmm0
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // r13
  __int64 v70; // r12
  _QWORD *v71; // rbp
  __int64 v72; // rdi
  __int64 v73; // rdi
  _DWORD *v75; // rdi
  int tinfo_size; // ebx
  __int64 v77; // r12
  __int64 v78; // rax
  __int64 v79; // rbp
  __m128i v80; // xmm0
  __int64 v81; // rdi
  __int64 v82; // rdi
  __m128i v83; // xmm0
  _QWORD *v84; // rdi
  __m128i v85; // xmm0
  __m128i v86; // [rsp+0h] [rbp-168h] BYREF
  __int64 v87; // [rsp+10h] [rbp-158h]
  __int64 v88; // [rsp+18h] [rbp-150h]
  __int64 v89; // [rsp+20h] [rbp-148h]
  __int64 v90; // [rsp+28h] [rbp-140h]
  __int32 v91; // [rsp+30h] [rbp-138h]
  __int32 v92; // [rsp+34h] [rbp-134h]
  __m128i *v93; // [rsp+38h] [rbp-130h]
  __int64 *v94; // [rsp+40h] [rbp-128h]
  __int64 v95; // [rsp+48h] [rbp-120h]
  __int64 *v96; // [rsp+50h] [rbp-118h]
  __int64 *v97; // [rsp+58h] [rbp-110h]
  int v98; // [rsp+60h] [rbp-108h]
  unsigned __int8 tinfo_details; // [rsp+67h] [rbp-101h]
  __int64 *v100; // [rsp+68h] [rbp-100h]
  __int64 v101; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v102; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v103[2]; // [rsp+90h] [rbp-D8h] BYREF
  __int64 *v104; // [rsp+A0h] [rbp-C8h] BYREF
  __int128 v105; // [rsp+A8h] [rbp-C0h]
  __int64 v106; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v107; // [rsp+C8h] [rbp-A0h]
  __int64 v108; // [rsp+D8h] [rbp-90h]
  __int64 v109; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v110; // [rsp+E8h] [rbp-80h] BYREF
  __int128 v111; // [rsp+F0h] [rbp-78h]
  __int64 v112; // [rsp+100h] [rbp-68h]
  __int128 v113; // [rsp+108h] [rbp-60h]
  char v114; // [rsp+118h] [rbp-50h]
  unsigned __int64 v115; // [rsp+128h] [rbp-40h]

  v115 = __readfsqword(0x28u);
  v106 = 0;
  v108 = 0;
  v109 = 0;
  v110 = 0;
  v112 = 0;
  v114 = 16;
  v93 = (__m128i *)&v106;
  v107 = 0;
  v111 = 0;
  v113 = 0;
  tinfo_details = get_tinfo_details();
  if ( !tinfo_details || (int)v107 < 0 )
    goto LABEL_128;
  if ( (get_tinfo_property() & 0x3F) != 1 )
  {
    tinfo_size = get_tinfo_size();
    if ( tinfo_size <= 0 )
      goto LABEL_128;
    if ( (get_tinfo_property() & 0x2F) != 0xD && !sub_11CA80(tinfo_size) )
    {
      v77 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
      v78 = (unsigned __int8)getinf() ? (unsigned __int8)getinf() : *(_QWORD *)(v77 + 120);
      if ( tinfo_size != v78
        && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 120LL) != tinfo_size
        && tinfo_size != 16 )
      {
        goto LABEL_128;
      }
    }
  }
  v4 = j__qalloc_or_throw(312, 2, v2, v3);
  v5 = *(_QWORD *)(a1 + 312);
  v6 = *(_DWORD *)(a1 + 348);
  *(_DWORD *)(v4 + 12) = 0;
  *(_QWORD *)v4 = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_QWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 48) = 0;
  *(_QWORD *)(v4 + 72) = 0;
  *(_QWORD *)(v4 + 80) = 0;
  *(_QWORD *)(v4 + 88) = 0;
  *(_QWORD *)(v4 + 96) = 0;
  *(_QWORD *)(v4 + 104) = 0;
  *(_QWORD *)(v4 + 112) = 0;
  *(_QWORD *)(v4 + 136) = 0;
  *(_QWORD *)(v4 + 144) = 0;
  *(_QWORD *)(v4 + 152) = 0;
  *(_QWORD *)(v4 + 176) = 0;
  *(_QWORD *)(v4 + 184) = 0;
  *(_QWORD *)(v4 + 192) = 0;
  *(_QWORD *)(v4 + 216) = 0;
  *(_QWORD *)(v4 + 240) = 0;
  *(_QWORD *)(v4 + 248) = 0;
  *(_QWORD *)(v4 + 256) = 0;
  *(_QWORD *)(v4 + 280) = 0;
  *(_OWORD *)(v4 + 32) = 0;
  *(_OWORD *)(v4 + 56) = 0;
  *(_OWORD *)(v4 + 120) = 0;
  *(_OWORD *)(v4 + 160) = 0;
  *(_OWORD *)(v4 + 200) = 0;
  *(_OWORD *)(v4 + 224) = 0;
  *(_OWORD *)(v4 + 264) = 0;
  *(_QWORD *)(v4 + 288) = 0;
  *(_OWORD *)(v4 + 296) = 0;
LABEL_5:
  v98 = sub_ED8C0(a1, v93, v4, 0.0);
  if ( *(_DWORD *)(a1 + 348) > v98 )
  {
    if ( v4 )
    {
      sub_BB120((_QWORD *)v4);
      j__qfree(v4);
    }
LABEL_128:
    v96 = &v109;
    v97 = &v110;
LABEL_102:
    v4 = 0;
    goto LABEL_103;
  }
  *(_DWORD *)(v4 + 12) = *(_QWORD *)(a1 + 328);
  *(_DWORD *)(v4 + 16) = *(_DWORD *)(a1 + 328) + DWORD2(v111);
  v7 = *(_DWORD *)(a1 + 360);
  if ( v7 <= 0x10 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(_BYTE *)(v8 + 129);
    v7 = v9 & 0xF0;
    if ( (v9 & 0xF0) == 0xC0 )
      v7 = *(_DWORD *)(v8 + 140);
  }
  *(_DWORD *)(v4 + 20) = v7;
  v100 = (__int64 *)(v4 + 24);
  v88 = v98;
  sub_82440((__int64 *)(v4 + 24), v98);
  v10 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v95 = *(_QWORD *)(a1 + 328) + *(int *)(v10 + 120);
  v90 = *((_QWORD *)&v111 + 1) + *(_QWORD *)(v10 + 136) + *(int *)(v10 + 116);
  sub_E8270(v4, (__int64)v93);
  *(_DWORD *)(v4 + 280) |= *(_DWORD *)(a1 + 352);
  v96 = &v109;
  copy_tinfo_t();
  v97 = &v110;
  copy_argloc();
  v11 = *(_DWORD *)(a1 + 360);
  v12 = tinfo_details;
  if ( (*(_BYTE *)(a1 + 352) & 4) != 0 )
    v12 = (v11 & 0xFFFFFFF0) == 64 || (v11 & 0xFFFFFFF0) == 208;
  LOBYTE(v87) = sub_372D90(v11);
  if ( v98 <= 0 )
  {
LABEL_91:
    v94 = v103;
    goto LABEL_92;
  }
  v92 = -1;
  v13 = 1;
  v14 = 0;
  while ( 1 )
  {
    v86.m128i_i32[0] = v13 - 1;
    v17 = (_DWORD *)(v106 + v14);
    if ( (v12 & (unsigned __int8)v87) == 0 )
    {
      v15 = v14;
      v91 = v86.m128i_i32[0];
      goto LABEL_15;
    }
    if ( *v17 != 1 )
    {
      v15 = v14;
      v12 &= v87;
      v91 = v86.m128i_i32[0];
      goto LABEL_15;
    }
    if ( v92 != -1 )
      goto LABEL_90;
    if ( v98 <= (int)v13 )
    {
LABEL_129:
      v92 = v86.m128i_i32[0];
LABEL_90:
      v12 &= v87;
      v91 = v92 + v98 - v13;
      v15 = 80LL * v91;
      v17 = (_DWORD *)(v106 + v15);
      goto LABEL_15;
    }
    v75 = (_DWORD *)(v106 + v14 + 80);
    while ( *v75 == 1 )
    {
      v75 += 20;
      if ( (_DWORD *)(v106 + 80 * (v13 + (unsigned int)(v98 - 1 - v13)) + 80) == v75 )
        goto LABEL_129;
    }
    v15 = v14;
    v12 = 0;
    v91 = v86.m128i_i32[0];
    v92 = v86.m128i_i32[0];
LABEL_15:
    if ( !(unsigned __int8)sub_E5020(
                             v15 + *(_QWORD *)(v4 + 24),
                             *(_QWORD *)a1,
                             (__int64)v17,
                             *(_DWORD *)(v4 + 12),
                             *(_DWORD *)(v4 + 20),
                             1,
                             0.0) )
    {
      if ( v4 )
      {
        sub_BB120((_QWORD *)v4);
        j__qfree(v4);
      }
      goto LABEL_102;
    }
    if ( v12 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
      v89 = v15 + *(_QWORD *)(v4 + 24);
      if ( (unsigned __int8)sub_E82F0((__int64 *)a1, &v101, *(_QWORD *)(v18 + 16), v89) )
      {
        v19 = v101;
        if ( v101 < v90 )
        {
          if ( v101 < v95 )
            v19 = v90;
          v90 = v19;
        }
      }
      if ( *(_DWORD *)(a1 + 348) <= v86.m128i_i32[0]
        || (*(_BYTE *)(a1 + 352) & 4) == 0
        && !*(_DWORD *)(v4 + 284)
        && (v20 = *(_DWORD *)(a1 + 360) & 0xFFFFFFF0, v20 != 64)
        && v20 != 208 )
      {
        v94 = v103;
        if ( (unsigned __int8)sub_32F330(v89, v103) )
        {
          if ( v103[0] >= v90 )
            break;
        }
      }
    }
    v16 = s1;
    if ( *(_QWORD *)(a1 + 32) )
      v16 = *(const char **)(a1 + 24);
    sub_BE340(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 480LL) + 112LL), v4, v16, 1);
    if ( !(_BYTE)v87 )
    {
      v55 = *(_QWORD *)(a1 + 16);
      if ( !*(_BYTE *)(v55 + 148) && (*(_BYTE *)(a1 + 352) & 4) == 0 )
      {
        if ( *(_QWORD *)(v4 + 32) )
        {
          v56 = *(_DWORD *)(v4 + 20) & 0xFFFFFFF0;
          if ( v56 != 64
            && v56 != 208
            && !*(_DWORD *)(v4 + 284)
            && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v55 + 112) + 136LL))(
                 *(_QWORD *)(v55 + 112),
                 v4)
            && (unsigned __int8)sub_F1700((__int64 *)a1, v4, v86.m128i_i32[0]) )
          {
            copy_tinfo_t();
            sub_F3650((_DWORD *)a1, v4, (__int64)v93, v13);
            if ( !(unsigned __int8)get_tinfo_details() || (int)v107 < 0 )
            {
              if ( !under_debugger )
                sub_383060(0xCB68u, 0.0);
              goto LABEL_153;
            }
            goto LABEL_5;
          }
        }
      }
    }
    v14 += 80;
    if ( v88 == v13 )
      goto LABEL_91;
    ++v13;
  }
  v21 = v106 + v15;
  if ( *(_DWORD *)v21 != 1 )
  {
    if ( !under_debugger )
      sub_383060(0xC9DCu, 0.0);
    goto LABEL_153;
  }
  *((_QWORD *)&v111 + 1) = *(_QWORD *)(v21 + 8);
  *(_DWORD *)(v4 + 16) = v103[0];
  if ( (unsigned __int8)sub_372D90(*(_DWORD *)(a1 + 360)) )
  {
    if ( *(_DWORD *)(v4 + 8) == v98 )
    {
      v22 = v106;
      v86.m128i_i32[0] = v91 + 1;
      v23 = 80LL * (v91 + 1);
      v24 = (_QWORD *)(v106 + v23);
      v25 = 80LL * v92;
      v26 = (void *)(v106 + v25);
      if ( v23 != v25 )
      {
        v87 = v106 + v25;
        v27 = 80LL * (v91 + 1);
        v88 = v4;
        v28 = (_QWORD *)(v106 + v25);
        do
        {
          clear_tinfo_t();
          v29 = v28[5];
          if ( v29 )
          {
            v28[6] = 0;
            qfree(v29);
          }
          v30 = v28[2];
          if ( v30 )
          {
            v28[3] = 0;
            qfree(v30);
          }
          v28 += 10;
          cleanup_argloc();
        }
        while ( v24 != v28 );
        v26 = (void *)v87;
        v4 = v88;
        v23 = v27;
        v22 = v106;
      }
      v87 = v23;
      memmove(v26, v24, 80 * v107 + v22 - (_QWORD)v24);
      v31 = *(_QWORD *)(v4 + 24);
      v32 = (__int64 *)(v31 + v87);
      v33 = 0xCCCCCCCCCCCCCCCDLL * ((v87 - v25) >> 4);
      v34 = (void *)(v31 + v25);
      *(_QWORD *)&v107 = v107 - v33;
      if ( v87 != v25 )
      {
        v87 = v31 + v25;
        v35 = v33;
        v36 = v4;
        v37 = (__int64 *)(v31 + v25);
        v38 = v35;
        do
        {
          cleanup_argloc();
          v39 = v37[4];
          if ( v39 )
          {
            v37[5] = 0;
            qfree(v39);
          }
          clear_tinfo_t();
          v40 = (__int64)v37;
          v37 += 10;
          sub_11CDA0(v40);
        }
        while ( v32 != v37 );
        v4 = v36;
        v34 = (void *)v87;
        v33 = v38;
        v31 = *(_QWORD *)(v4 + 24);
      }
      memmove(v34, v32, 80LL * *(_QWORD *)(v4 + 32) + v31 - (_QWORD)v32);
      v41 = v86.m128i_i32[0];
      *(_QWORD *)(v4 + 32) -= v33;
      v42 = *(_DWORD *)(v4 + 8) + v92 - v41;
      *(_DWORD *)(v4 + 8) = v42;
      goto LABEL_54;
    }
    if ( !under_debugger )
      sub_383060(0xCD66u, 0.0);
LABEL_153:
    BUG();
  }
  if ( v91 != v86.m128i_i32[0] )
  {
    if ( !under_debugger )
      sub_383060(0xCD67u, 0.0);
    goto LABEL_153;
  }
  if ( *(_DWORD *)(v4 + 8) > v91 )
    *(_DWORD *)(v4 + 8) = v91;
  sub_EABB0(v93->m128i_i64, v13 - 1);
  sub_82440(v100, v13 - 1);
  v42 = *(_DWORD *)(v4 + 8);
LABEL_54:
  v43 = 0;
  if ( !(unsigned __int8)sub_64880((_QWORD *)(a1 + 232)) )
    v43 = (int)(sub_64C00((_QWORD *)(a1 + 232)) + 1);
  if ( !(unsigned __int8)sub_64880((_QWORD *)(a1 + 248)) )
    v43 += (int)(sub_64C00((_QWORD *)(a1 + 248)) + 1);
  if ( v42 == v43 )
  {
    v44 = v13 - 2;
    v86.m128i_i8[0] = (*(_DWORD *)(a1 + 360) & 0xFFFFFFF0) == 208 || (*(_DWORD *)(a1 + 360) & 0xFFFFFFF0) == 64;
    if ( v86.m128i_i8[0] )
    {
      v45 = *(_DWORD *)(v4 + 8);
      if ( v45 > v44 )
        goto LABEL_92;
LABEL_61:
      v46 = v44;
      do
      {
        v47 = 80LL * v46;
        v48 = v47 + v106;
        if ( *(_DWORD *)(v47 + v106) == 3 )
        {
          v49 = *(_DWORD **)(a1 + 264);
          v50 = &v49[*(_QWORD *)(a1 + 272)];
          if ( v49 != v50 )
          {
            while ( *(unsigned __int16 *)(v48 + 8) != *v49 )
            {
              if ( v50 == ++v49 )
                goto LABEL_62;
            }
            if ( v49 != v50 )
            {
              clear_tinfo_t();
              v51 = *(_QWORD *)(v48 + 40);
              if ( v51 )
              {
                *(_QWORD *)(v48 + 48) = 0;
                qfree(v51);
              }
              v52 = *(_QWORD *)(v48 + 16);
              if ( v52 )
              {
                *(_QWORD *)(v48 + 24) = 0;
                qfree(v52);
              }
              cleanup_argloc();
              memmove((void *)v48, (const void *)(v48 + 80), v106 + 80 * v107 - v48 - 80);
              v53 = (_QWORD *)(*(_QWORD *)(v4 + 24) + v47);
              *(_QWORD *)&v107 = v107 - 1;
              cleanup_argloc();
              v54 = v53[4];
              if ( v54 )
              {
                v53[5] = 0;
                qfree(v54);
              }
              clear_tinfo_t();
              sub_11CDA0((__int64)v53);
              memmove(v53, v53 + 10, *(_QWORD *)(v4 + 24) + 80LL * *(_QWORD *)(v4 + 32) - (_QWORD)v53 - 80);
              --*(_QWORD *)(v4 + 32);
              if ( !v86.m128i_i8[0] )
                --*(_DWORD *)(v4 + 8);
            }
          }
        }
LABEL_62:
        --v46;
      }
      while ( v46 >= v45 );
    }
    else
    {
      v45 = 0;
      if ( v44 != -1 )
        goto LABEL_61;
    }
    v57 = a1 + 296;
    if ( *(_BYTE *)(a1 + 366) == 1 && !v86.m128i_i8[0] )
    {
      create_tinfo();
      sub_E7260(a1, **(_DWORD **)(*(_QWORD *)a1 + 56LL) != 56, 1, 0.0);
    }
    goto LABEL_93;
  }
LABEL_92:
  v57 = a1 + 296;
LABEL_93:
  v58 = *(_QWORD *)a1;
  v105 = 0;
  v59 = *(_QWORD *)(a1 + 8);
  v60 = *(_QWORD *)(a1 + 304);
  v103[0] = 0;
  v103[1] = 0;
  v104 = nullptr;
  sub_1390C0(v59, v4 + 96, v94, v57, v60, (*(_BYTE *)(*(_QWORD *)(v58 + 56) + 4LL) & 0x40) != 0);
  sub_64280((__int64 *)(v4 + 136), v94, 0.0);
  sub_316CB0((__int64 *)(v4 + 152), &v104, v61, v62);
  if ( (*(_BYTE *)(v4 + 280) & 0x10) == 0 )
  {
    v102 = 0;
    v101 = 0;
    v101 = qvector_reserve((__int64)&v101, 0, 1, 16);
    *(__m128i *)(v101 + 16 * v102) = _mm_load_si128((const __m128i *)&xmmword_424800);
    v79 = v101;
    v101 = 0;
    v80 = (__m128i)_mm_loadh_ps((const double *)&v102 + 1);
    v102 = 0;
    v81 = *(_QWORD *)(v4 + 216);
    if ( v81 )
    {
      *(_QWORD *)(v4 + 224) = 0;
      v86 = v80;
      qfree(v81);
      v82 = v101;
      v83 = _mm_load_si128(&v86);
      *(_QWORD *)(v4 + 216) = v79;
      *(__m128i *)(v4 + 224) = v83;
      if ( v82 )
      {
        *(_QWORD *)&v102 = 0;
        qfree(v82);
      }
    }
    else
    {
      *(_QWORD *)(v4 + 216) = v79;
      *(__m128i *)(v4 + 224) = v80;
    }
  }
  v63 = *(_QWORD *)(v4 + 288);
  v64 = _mm_loadu_si128((const __m128i *)(v4 + 296));
  *(_QWORD *)(v4 + 288) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(v4 + 296) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(v4 + 304) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 48) = v63;
  v65 = *(_QWORD *)a1;
  *(__m128i *)(a1 + 56) = v64;
  v66 = *(_QWORD *)(v65 + 512);
  if ( v66 )
  {
    v67 = *(_QWORD *)(v4 + 32);
    if ( v67 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v4 + 24) + 80 * v67 - 24) == 1 )
      {
        v84 = *(_QWORD **)(a1 + 8);
        v85 = _mm_loadu_si128((const __m128i *)(v84[184] + 40 * v66 + 8));
        if ( *(int *)(v4 + 16) > _mm_add_epi64(v85, _mm_srli_si128(v85, 8)).m128i_i64[0] )
          sub_3311F0(v84, *(_QWORD *)(a1 + 304), 0x37u);
      }
    }
  }
  if ( v104 )
  {
    *(_QWORD *)&v105 = 0;
    qfree((__int64)v104);
  }
  qfree(v103[0]);
LABEL_103:
  if ( v112 )
  {
    *(_QWORD *)&v113 = 0;
    qfree(v112);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v68 = v106;
  if ( v106 )
  {
    v69 = v107;
    if ( (_QWORD)v107 )
    {
      v70 = 0;
      do
      {
        v71 = (_QWORD *)(v68 + 80 * v70);
        clear_tinfo_t();
        v72 = v71[5];
        if ( v72 )
        {
          v71[6] = 0;
          qfree(v72);
        }
        v73 = v71[2];
        if ( v73 )
        {
          v71[3] = 0;
          qfree(v73);
        }
        ++v70;
        cleanup_argloc();
        v68 = v106;
      }
      while ( v69 != v70 );
    }
    *(_QWORD *)&v107 = 0;
    qfree(v68);
  }
  return v4;
}

