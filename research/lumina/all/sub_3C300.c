__int64 __fastcall sub_3C300(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  __int64 v10; // rax
  int v11; // r12d
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  __m128i si128; // xmm0
  __int64 v16; // rsi
  int *v17; // rdx
  unsigned __int64 v18; // r12
  char v19; // al
  _QWORD *v20; // rax
  int *v21; // r12
  __int64 v22; // rcx
  _DWORD *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  void *v26; // r9
  char *v27; // r10
  __int64 v28; // rax
  _BOOL8 v29; // rdi
  __int64 v30; // r12
  __int64 v31; // rax
  void (__fastcall ***v32)(void *, __int64, void *); // rdi
  bool v33; // zf
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // r13
  int v37; // esi
  char *v38; // rdi
  _QWORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  _QWORD *v42; // r15
  const char *v43; // rsi
  __int64 v44; // rdx
  int v45; // r12d
  char *v46; // rcx
  char *v47; // rax
  unsigned __int64 v48; // rdx
  const char *v49; // rcx
  const char *v50; // rsi
  char v51; // bl
  unsigned __int64 v52; // r15
  __int64 v53; // r13
  __int64 (*v54)(); // rax
  void (__fastcall ***v55)(_QWORD); // rdi
  unsigned int v56; // ebx
  void (__fastcall ***v57)(_QWORD); // rdi
  char *v59; // rdi
  __int64 v60; // rsi
  _QWORD *v61; // rcx
  void *v62; // rdi
  __int64 v63; // rax
  _QWORD *v64; // r12
  unsigned int v65; // eax
  __int8 *v66; // rdi
  _DWORD *v67; // rdx
  __int64 v68; // rcx
  _DWORD *v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rsi
  size_t v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rbx
  __int64 v78; // r14
  __int64 v79; // r8
  __int64 v80; // r10
  __int64 v81; // rdx
  _BYTE *v82; // rsi
  void *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // [rsp-10h] [rbp-170h]
  unsigned int v87; // [rsp+4h] [rbp-15Ch]
  unsigned int v88; // [rsp+8h] [rbp-158h]
  void *v89; // [rsp+8h] [rbp-158h]
  void *v90; // [rsp+10h] [rbp-150h]
  void *v91; // [rsp+10h] [rbp-150h]
  __int64 *v92; // [rsp+18h] [rbp-148h]
  char *v94; // [rsp+38h] [rbp-128h] BYREF
  char *v95; // [rsp+40h] [rbp-120h]
  const char *v96; // [rsp+48h] [rbp-118h]
  _QWORD *v97; // [rsp+50h] [rbp-110h]
  __int64 v98; // [rsp+58h] [rbp-108h]
  int *v99; // [rsp+60h] [rbp-100h]
  __int64 v100; // [rsp+68h] [rbp-F8h]
  __int64 v101; // [rsp+70h] [rbp-F0h] BYREF
  __int64 v102; // [rsp+78h] [rbp-E8h] BYREF
  void *src; // [rsp+80h] [rbp-E0h] BYREF
  size_t n[3]; // [rsp+88h] [rbp-D8h]
  void *ptr; // [rsp+A0h] [rbp-C0h] BYREF
  __m128i v106; // [rsp+A8h] [rbp-B8h] BYREF
  char v107; // [rsp+C0h] [rbp-A0h] BYREF
  int v108; // [rsp+C8h] [rbp-98h] BYREF
  _QWORD *v109; // [rsp+D0h] [rbp-90h]
  int *v110; // [rsp+D8h] [rbp-88h]
  int *v111; // [rsp+E0h] [rbp-80h]
  __int64 v112; // [rsp+E8h] [rbp-78h]
  __m128 v113; // [rsp+F0h] [rbp-70h] BYREF
  _QWORD *v114; // [rsp+100h] [rbp-60h]
  __int8 *v115; // [rsp+108h] [rbp-58h]
  unsigned __int64 v116; // [rsp+110h] [rbp-50h]
  __int64 v117; // [rsp+118h] [rbp-48h]
  unsigned __int64 v118; // [rsp+128h] [rbp-38h]

  v100 = (__int64)a3;
  v118 = __readfsqword(0x28u);
  v99 = &v108;
  v110 = &v108;
  v111 = &v108;
  v112 = 0;
  v108 = 0;
  v109 = nullptr;
  v96 = (const char *)(a3 + 5);
  sub_318B0(
    (__int64)&v101,
    a1,
    "SELECT funcs.name, funcs.size, funcs.metadata, func_freqs.counter, funcs.id FROM funcs, calcrel_hash, func_freqs WHE"
    "RE calcrel_hash.fk_func = funcs.id AND func_freqs.fk_func = funcs.id AND calcrel_hash.hash= ?");
  if ( !v101 )
  {
    v56 = -1;
    if ( *(_QWORD *)(v100 + 24) > 1u )
      goto LABEL_86;
    goto LABEL_146;
  }
  v6 = *(_QWORD *)(a4 + 48);
  v7 = a2[3];
  if ( v7 < v6 )
  {
    v74 = a2[2];
    if ( a2[4] < v6 )
    {
      v85 = sub_1987B0(a2 + 2, v74, *(_QWORD *)(a4 + 48), 4);
      a2[2] = v85;
      v74 = v85;
      v7 = a2[3];
    }
    memset((void *)(v74 + 4 * v7), 0, 4 * (v6 - v7));
    a2[3] = v6;
    v92 = a2 + 5;
    sub_31C00(a2 + 5, v6);
  }
  else
  {
    if ( v6 != v7 )
      a2[3] = v6;
    v92 = a2 + 5;
    sub_31C00(a2 + 5, v6);
    if ( !v6 )
    {
      v98 = 0;
      goto LABEL_47;
    }
  }
  v98 = 0;
  v8 = 0;
  while ( 1 )
  {
    v12 = *(_QWORD *)(a4 + 40) + 32 * v8;
    if ( *(_DWORD *)v12 == 1 )
      break;
    v13 = *(_QWORD *)(v100 + 16);
    if ( *(_QWORD *)(v100 + 32) <= 0x1Eu )
    {
      v30 = v100;
      v31 = sub_1987B0(v100 + 16, v13, 31, 1);
      *(_QWORD *)(v30 + 16) = v31;
      v13 = v31;
    }
    v14 = v100;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B6A40);
    *(_QWORD *)(v100 + 24) = 31;
    *(__m128i *)v13 = si128;
    *(__m128i *)(v13 + 14) = _mm_load_si128((const __m128i *)&xmmword_1B6A50);
    *(_BYTE *)(*(_QWORD *)(v14 + 16) + 30LL) = 0;
LABEL_11:
    v11 = -3;
LABEL_12:
    *(_DWORD *)(a2[2] + 4 * v8++) = v11;
    if ( v8 == v6 )
      goto LABEL_47;
  }
  if ( *(_QWORD *)(v12 + 16) != 16 )
  {
    v9 = *(_QWORD **)(v100 + 16);
    if ( *(_QWORD *)(v100 + 32) <= 8u )
    {
      v34 = v100;
      v35 = sub_1987B0(v100 + 16, v9, 9, 1);
      *(_QWORD *)(v34 + 16) = v35;
      v9 = (_QWORD *)v35;
    }
    v10 = v100;
    *(_QWORD *)(v100 + 24) = 9;
    *v9 = 0x6174616420646142LL;
    *(_BYTE *)(*(_QWORD *)(v10 + 16) + 8LL) = 0;
    goto LABEL_11;
  }
  if ( !(unsigned __int8)sub_2F9D0((__int64)v96, (__int64)&v101, (__int64)"B", v12 + 8) )
    goto LABEL_46;
  unk_241E60(&src, &v101, v96);
  if ( src )
  {
    v16 = (__int64)v96;
    if ( !(unsigned __int8)unk_241E70(&src, v96) )
    {
      v11 = -2;
      goto LABEL_42;
    }
    v18 = v98;
    v97 = (_QWORD *)(a2[5] + (v98 << 6));
    v95 = (char *)(v97 + 4);
    v19 = sub_2F910((__int64)v96, (__int64)&src, (__int64)"siBiu", v97, v97 + 3, v97 + 4, v97 + 7, &v102);
    v16 = v86;
    if ( !v19 )
      goto LABEL_45;
    v20 = v109;
    v98 = v18 + 1;
    if ( !v109 )
    {
      v21 = v99;
      goto LABEL_28;
    }
    v16 = (unsigned int)v102;
    v21 = v99;
    do
    {
      while ( 1 )
      {
        v22 = v20[2];
        v17 = (int *)v20[3];
        if ( *((_DWORD *)v20 + 8) < (unsigned int)v102 )
          break;
        v21 = (int *)v20;
        v20 = (_QWORD *)v20[2];
        if ( !v22 )
          goto LABEL_26;
      }
      v20 = (_QWORD *)v20[3];
    }
    while ( v17 );
LABEL_26:
    if ( v21 != v99 && (unsigned int)v102 >= v21[8] )
      goto LABEL_39;
LABEL_28:
    v23 = (_DWORD *)operator new(0x28u);
    v25 = (unsigned int)v102;
    v23[9] = 0;
    v26 = v23;
    v27 = &v107;
    v23[8] = v25;
    if ( v21 == v99 )
    {
      if ( !v112 )
        goto LABEL_108;
      v17 = v111;
      v21 = nullptr;
      if ( v111[8] >= (unsigned int)v25 )
        goto LABEL_108;
LABEL_34:
      if ( !v17 )
        goto LABEL_88;
      if ( v21 || v17 == v99 )
      {
        v29 = 1;
        goto LABEL_38;
      }
    }
    else
    {
      v16 = (unsigned int)v21[8];
      if ( (unsigned int)v25 < (unsigned int)v16 )
      {
        v94 = &v107;
        v17 = v21;
        if ( v110 == v21 )
          goto LABEL_34;
        v88 = v25;
        v90 = v23;
        v28 = std::_Rb_tree_decrement(v21, v16, v21, v25, v24);
        v25 = v88;
        v26 = v90;
        v27 = v94;
        v17 = (int *)v28;
        if ( *(_DWORD *)(v28 + 32) < v88 )
        {
          if ( *(_QWORD *)(v28 + 24) )
            v17 = v21;
          else
            v21 = nullptr;
          goto LABEL_34;
        }
LABEL_108:
        v16 = (unsigned int)v25;
        v91 = v26;
        LODWORD(v94) = v25;
        v70 = sub_2CDC0((__int64)v27, (unsigned int)v25, (__int64)v17, v25, v24);
        LODWORD(v25) = (_DWORD)v94;
        v26 = v91;
        v21 = (int *)v70;
        goto LABEL_34;
      }
      LODWORD(v94) = v21[8];
      if ( (unsigned int)v16 >= (unsigned int)v25 )
      {
LABEL_88:
        if ( v26 )
        {
          v16 = 40;
          operator delete(v26, 0x28u);
          ++v21[9];
          if ( *(_QWORD *)(a4 + 24) )
            goto LABEL_90;
          goto LABEL_40;
        }
LABEL_39:
        ++v21[9];
        if ( *(_QWORD *)(a4 + 24) )
        {
LABEL_90:
          ptr = nullptr;
          v106 = 0;
          v59 = (char *)v97[4];
          v60 = v97[5];
          v115 = nullptr;
          v116 = 0;
          v94 = v59;
          v16 = (__int64)&v59[v60];
          v114 = (_QWORD *)v16;
          LODWORD(v117) = 0;
          v95 = &v113.m128_i8[8];
          v113 = _mm_loadh_ps((const double *)&v94);
          while ( 1 )
          {
            LODWORD(v117) = sub_196ED0(v95, v16);
            if ( !(_DWORD)v117 )
              break;
            v64 = v114;
            v16 = (__int64)v114;
            v65 = sub_196ED0(v95, v114);
            v66 = (__int8 *)v113.m128_u64[1];
            if ( __CFADD__(v65, v113.m128_u64[1]) || (unsigned __int64)v64 < v65 + v113.m128_u64[1] )
            {
              v115 = nullptr;
              break;
            }
            v113.m128_u64[1] += v65;
            v115 = v66;
            if ( !v66 )
              break;
            v67 = *(_DWORD **)(a4 + 16);
            v68 = *(_QWORD *)(a4 + 24);
            v116 = v65;
            v69 = &v67[v68];
            if ( v67 != v69 )
            {
              while ( (_DWORD)v117 != *v67 )
              {
                if ( v69 == ++v67 )
                  goto LABEL_103;
              }
              if ( v67 != v69 )
                sub_6D510(&ptr, (unsigned int)v117, v66, v65);
            }
LABEL_103:
            v16 = (__int64)v114;
          }
          v61 = v97;
          v17 = (int *)ptr;
          v62 = (void *)v97[4];
          v63 = v97[6];
          v97[4] = ptr;
          *(__m128i *)(v61 + 5) = _mm_loadu_si128(&v106);
          ptr = v62;
          v106.m128i_i64[1] = v63;
          if ( v62 )
          {
            v106.m128i_i64[0] = 0;
            j__free(v62);
          }
        }
LABEL_40:
        v11 = 0;
LABEL_42:
        v32 = (void (__fastcall ***)(void *, __int64, void *))src;
        if ( src )
        {
          v33 = (*((_DWORD *)src + 2))-- == 1;
          if ( v33 )
            (**v32)(v32, v16, v17);
        }
        goto LABEL_12;
      }
      if ( v111 != v21 )
      {
        v87 = v25;
        v89 = v23;
        v71 = std::_Rb_tree_increment(v21);
        v25 = v87;
        v26 = v89;
        v27 = &v107;
        v17 = (int *)v71;
        if ( v87 >= *(_DWORD *)(v71 + 32) )
          goto LABEL_108;
        v16 = (unsigned int)v94;
        if ( *((_QWORD *)v21 + 3) )
        {
          v21 = (int *)v71;
          goto LABEL_34;
        }
        v17 = v21;
        if ( !v21 )
          goto LABEL_88;
LABEL_136:
        v29 = (unsigned int)v25 < (unsigned int)v16;
LABEL_38:
        v16 = (__int64)v26;
        v94 = (char *)v26;
        std::_Rb_tree_insert_and_rebalance(v29, v26, v17, v99);
        ++v112;
        v21 = (int *)v94;
        goto LABEL_39;
      }
      v17 = v21;
      if ( !v21 )
        goto LABEL_88;
    }
    LODWORD(v16) = v17[8];
    goto LABEL_136;
  }
LABEL_45:
  sub_33A10(&src);
LABEL_46:
  if ( v6 != v8 )
  {
    if ( *(_QWORD *)(v100 + 24) > 1u )
    {
LABEL_116:
      v56 = -1;
      goto LABEL_83;
    }
LABEL_146:
    sub_2DC20((__int64 *)(v100 + 16), "Not found");
    goto LABEL_116;
  }
LABEL_47:
  sub_31C00(v92, v98);
  if ( !v112 || (*(_BYTE *)(a4 + 12) & 2) != 0 )
    goto LABEL_82;
  v36 = (__int64)v110;
  v113.m128_i32[2] = 0;
  v95 = &v113.m128_i8[8];
  v115 = &v113.m128_i8[8];
  v116 = (unsigned __int64)&v113.m128_u64[1];
  v114 = nullptr;
  v117 = 0;
  if ( v110 != v99 )
  {
LABEL_66:
    v42 = v95;
LABEL_57:
    ptr = (void *)(v36 + 36);
    v42 = (_QWORD *)sub_3C180(&v113, (__int64)v42, (__int64)&unk_1B68EF, (signed int **)&ptr);
    while ( 1 )
    {
      v43 = (const char *)v42[5];
      v44 = v42[6];
      v45 = *(_DWORD *)(v36 + 32);
      v46 = (char *)&v43[4 * v44];
      if ( v43 == v46 )
      {
LABEL_63:
        v48 = v44 + 1;
        if ( v42[7] >= v48 )
          goto LABEL_64;
      }
      else
      {
        v47 = (char *)v42[5];
        do
        {
          if ( v45 == *(_DWORD *)v47 )
          {
            if ( v47 != v46 )
            {
              if ( !unk_2439A0 )
                sub_198E10(1565);
              BUG();
            }
            goto LABEL_63;
          }
          v47 += 4;
        }
        while ( v46 != v47 );
        v48 = v44 + 1;
        if ( v42[7] >= v48 )
          goto LABEL_64;
      }
      v72 = sub_1987B0(v42 + 5, v43, v48, 4);
      v73 = v42[6];
      v42[5] = v72;
      v46 = (char *)(v72 + 4 * v73);
LABEL_64:
      *(_DWORD *)v46 = v45;
      ++v42[6];
      v36 = std::_Rb_tree_increment(v36, v43);
      if ( (int *)v36 == v99 )
        break;
      v39 = v114;
      if ( !v114 )
        goto LABEL_66;
      v37 = *(_DWORD *)(v36 + 36);
      v38 = v95;
      do
      {
        while ( 1 )
        {
          v40 = v39[2];
          v41 = v39[3];
          if ( v37 > *((_DWORD *)v39 + 8) )
            break;
          v38 = (char *)v39;
          v39 = (_QWORD *)v39[2];
          if ( !v40 )
            goto LABEL_55;
        }
        v39 = (_QWORD *)v39[3];
      }
      while ( v41 );
LABEL_55:
      v42 = v38;
      if ( v38 == v95 || v37 < *((_DWORD *)v38 + 8) )
        goto LABEL_57;
    }
  }
  unk_241E88(&v102, a1 + 368, v96);
  if ( !v102 )
    goto LABEL_81;
  v53 = (__int64)v115;
  if ( v115 == v95 )
    goto LABEL_148;
  while ( 2 )
  {
    v50 = "UPDATE func_freqs SET counter = counter + %d WHERE ";
    src = nullptr;
    *(_OWORD *)n = 0;
    sub_299F0((char **)&src);
    v94 = *(char **)(v53 + 48);
    if ( !v94 )
    {
      v51 = 1;
      goto LABEL_73;
    }
    v52 = 0;
    do
    {
      v75 = n[0];
      ptr = nullptr;
      v106 = 0;
      if ( n[0] )
      {
        v83 = (void *)sub_198760(n[0]);
        v106.m128i_i64[1] = v75;
        ptr = v83;
        memcpy(v83, src, v75);
        v84 = 1000;
        v106.m128i_i64[0] = v75;
        if ( (unsigned __int64)&v94[-v52] <= 0x3E8 )
          v84 = (__int64)&v94[-v52];
        v100 = v84;
        if ( v94 == (char *)v52 )
        {
LABEL_68:
          v49 = (const char *)ptr;
          goto LABEL_69;
        }
      }
      else
      {
        v76 = 1000;
        v49 = s1;
        if ( (unsigned __int64)&v94[-v52] <= 0x3E8 )
          v76 = (__int64)&v94[-v52];
        v100 = v76;
        if ( v94 == (char *)v52 )
          goto LABEL_69;
      }
      v77 = 4 * v52;
      v78 = 0;
      while ( 1 )
      {
        sub_2AAE0((__int64 *)&ptr);
        if ( ++v78 == v100 )
          break;
        v79 = v106.m128i_i64[0];
        if ( v106.m128i_i64[0] )
        {
          v80 = v106.m128i_i64[0] + 3;
          v81 = v106.m128i_i64[0] + 4;
          v82 = ptr;
          v79 = v106.m128i_i64[0] - 1;
          if ( v106.m128i_i64[1] >= (unsigned __int64)(v106.m128i_i64[0] + 4) )
            goto LABEL_133;
        }
        else
        {
          v82 = ptr;
          v81 = 5;
          v80 = 4;
          if ( v106.m128i_i64[1] >= 5uLL )
            goto LABEL_133;
        }
        v97 = (_QWORD *)v79;
        v98 = v80;
        v99 = (int *)v81;
        ptr = (void *)sub_1987B0(&ptr, v82, v81, 1);
        v79 = (__int64)v97;
        v82 = ptr;
        v80 = v98;
        v81 = (__int64)v99;
LABEL_133:
        v106.m128i_i64[0] = v81;
        v77 += 4;
        v82[v80] = 0;
        *(_DWORD *)((char *)ptr + v79) = 542265120;
      }
      v49 = s1;
      if ( v106.m128i_i64[0] )
        goto LABEL_68;
LABEL_69:
      v50 = v96;
      v51 = sub_33870(a1, (__int64)v96, nullptr, v49, 0);
      v52 += v100;
      if ( ptr )
      {
        v106.m128i_i64[0] = 0;
        j__free(ptr);
      }
    }
    while ( v52 < (unsigned __int64)v94 && v51 );
LABEL_73:
    if ( src )
    {
      n[0] = 0;
      j__free(src);
    }
    v53 = std::_Rb_tree_increment(v53, v50);
    if ( (char *)v53 != v95 )
    {
      if ( !v51 )
      {
        v54 = (__int64 (*)())sub_2C870;
        goto LABEL_78;
      }
      continue;
    }
    break;
  }
  v54 = (__int64 (*)())sub_2C870;
  if ( v51 )
LABEL_148:
    v54 = sub_2C860;
LABEL_78:
  ((void (__fastcall *)(__int64 *, const char *))v54)(&v102, v96);
  v55 = (void (__fastcall ***)(_QWORD))v102;
  if ( v102 )
  {
    v33 = (*(_DWORD *)(v102 + 8))-- == 1;
    if ( v33 )
      (**v55)(v55);
  }
LABEL_81:
  sub_2E310(v114);
LABEL_82:
  v56 = 0;
LABEL_83:
  v57 = (void (__fastcall ***)(_QWORD))v101;
  if ( v101 )
  {
    v33 = (*(_DWORD *)(v101 + 8))-- == 1;
    if ( v33 )
      (**v57)(v57);
  }
LABEL_86:
  sub_2E140(v109);
  return v56;
}
