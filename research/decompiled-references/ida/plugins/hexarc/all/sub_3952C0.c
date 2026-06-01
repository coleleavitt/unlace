unsigned __int64 __fastcall sub_3952C0(__int64 *a1, __int64 a2, char a3)
{
  _QWORD *v3; // rdi
  _QWORD *exception; // rdi
  _QWORD *v5; // rdi
  unsigned __int64 *v6; // r12
  _QWORD *v7; // r15
  __int64 v8; // r12
  _QWORD *v9; // rdx
  unsigned __int64 *v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // r14
  int v13; // ebx
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  __int64 v16; // rdx
  __int64 *v17; // rdx
  unsigned __int64 v18; // r13
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 *v22; // rsi
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r14
  __int64 v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  unsigned __int64 *v29; // rax
  __m128 v30; // xmm0
  __int64 v31; // r15
  __int64 *v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // eax
  _QWORD *v35; // rdx
  _QWORD *i; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // rcx
  __int64 *v40; // r14
  __int64 v41; // rdx
  __int64 v42; // r15
  unsigned __int64 *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rbp
  __m128i v46; // xmm0
  __int64 v47; // rax
  _QWORD *v48; // r15
  __int64 v49; // rax
  __int64 v50; // r9
  __int64 v51; // rsi
  unsigned __int64 head; // rbx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  char v56; // dl
  unsigned __int64 v57; // rbp
  __int64 v58; // rax
  __m128i v59; // xmm0
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 *v62; // rdx
  unsigned __int64 *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned __int64 v66; // r13
  unsigned __int64 v67; // rbp
  __int64 v68; // rbx
  __int64 *v69; // rdi
  __int64 *v70; // rdi
  __int64 v71; // rbx
  __int64 *v72; // rdi
  __int64 *v73; // rdi
  __int64 v74; // rax
  unsigned __int64 v75; // rbx
  _QWORD *v76; // rbp
  __int64 *v77; // rdi
  __int64 *v78; // rdi
  __int64 v79; // rax
  __m128i v80; // xmm0
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rax
  __m128i v86; // xmm0
  __int64 v87; // rdx
  unsigned __int64 v88; // rdx
  unsigned __int64 *v89; // rsi
  unsigned __int64 v90; // rcx
  __int64 v91; // r13
  int v92; // r14d
  __int64 v93; // rax
  __int64 v94; // rdx
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  __int64 (__fastcall ***v97)(); // r10
  __int64 (__fastcall **v98)(); // rsi
  __int64 *v99; // rdi
  _QWORD *v100; // rdx
  _QWORD *v101; // rax
  double v102; // rax
  unsigned __int64 v103; // rbx
  unsigned __int64 v104; // rdx
  __int64 v105; // rax
  unsigned __int64 v106; // rdx
  unsigned __int64 v107; // rcx
  __int64 v108; // rdx
  _QWORD *v109; // rsi
  unsigned __int64 v110; // rcx
  __int64 v111; // rax
  __m128i v112; // xmm0
  __int64 v113; // [rsp+0h] [rbp-2C8h]
  __int64 **v115; // [rsp+10h] [rbp-2B8h]
  __int64 *v116; // [rsp+10h] [rbp-2B8h]
  __int64 v117; // [rsp+10h] [rbp-2B8h]
  __int64 v118; // [rsp+10h] [rbp-2B8h]
  unsigned __int64 *v119; // [rsp+10h] [rbp-2B8h]
  _QWORD *v120; // [rsp+10h] [rbp-2B8h]
  unsigned __int64 *v121; // [rsp+20h] [rbp-2A8h]
  __int64 (__fastcall ***v122)(); // [rsp+20h] [rbp-2A8h]
  unsigned __int64 v123; // [rsp+28h] [rbp-2A0h]
  char v124; // [rsp+28h] [rbp-2A0h]
  __int64 *v125; // [rsp+40h] [rbp-288h]
  __int64 (__fastcall **v126)(); // [rsp+40h] [rbp-288h]
  _QWORD *v127; // [rsp+48h] [rbp-280h]
  __int64 (__fastcall ****v130)(); // [rsp+60h] [rbp-268h] BYREF
  __int64 (__fastcall ***v131)(); // [rsp+68h] [rbp-260h] BYREF
  __m128i v132; // [rsp+70h] [rbp-258h] BYREF
  __m128i v133; // [rsp+80h] [rbp-248h] BYREF
  __int64 (__fastcall **v134)(); // [rsp+90h] [rbp-238h] BYREF
  __m128 v135; // [rsp+98h] [rbp-230h]
  __int128 v136; // [rsp+A8h] [rbp-220h]
  __int64 v137; // [rsp+B8h] [rbp-210h]
  __int128 v138; // [rsp+C0h] [rbp-208h]
  __int64 (__fastcall **v139)(); // [rsp+D0h] [rbp-1F8h]
  int v140; // [rsp+D8h] [rbp-1F0h]
  __int64 v141; // [rsp+E0h] [rbp-1E8h]
  __int128 v142; // [rsp+E8h] [rbp-1E0h]
  __int64 v143; // [rsp+F8h] [rbp-1D0h]
  __int128 v144; // [rsp+100h] [rbp-1C8h]
  __m128i *v145; // [rsp+110h] [rbp-1B8h]
  __int64 v146; // [rsp+118h] [rbp-1B0h]
  __int128 v147; // [rsp+120h] [rbp-1A8h]
  __int64 v148; // [rsp+130h] [rbp-198h]
  __int64 v149; // [rsp+138h] [rbp-190h]
  __int64 v150; // [rsp+140h] [rbp-188h]
  char v151; // [rsp+148h] [rbp-180h] BYREF
  unsigned __int64 v152; // [rsp+288h] [rbp-40h] BYREF

  v152 = __readfsqword(0x28u);
  v132 = 0u;
  v135.m128_i32[0] = 0;
  v135.m128_u64[1] = 0;
  v137 = 0;
  v134 = off_4B32B0;
  v140 = 0;
  v141 = 0;
  v143 = 0;
  v136 = 0;
  v138 = 0;
  v142 = 0;
  v144 = 0;
  v139 = (__int64 (__fastcall **)())&off_4B3270;
  v145 = &v132;
  v146 = 0;
  sub_24E700((__int64 *)&v134, a2 + 16, 0);
  v134 = off_4B32B0;
  v139 = off_4A8538;
  if ( v143 )
  {
    *(_QWORD *)&v144 = 0;
    qfree();
  }
  if ( v141 )
  {
    *(_QWORD *)&v142 = 0;
    qfree();
  }
  v134 = off_4A8538;
  if ( v137 )
  {
    *(_QWORD *)&v138 = 0;
    qfree();
  }
  if ( v135.m128_u64[1] )
  {
    *(_QWORD *)&v136 = 0;
    qfree();
  }
  v6 = (unsigned __int64 *)v132.m128i_i64[0];
  if ( !v132.m128i_i64[0] )
  {
    v113 = 0;
    goto LABEL_53;
  }
  v113 = v132.m128i_i64[1];
  if ( v132.m128i_i64[1] )
  {
    v7 = *(_QWORD **)(v132.m128i_i64[0] + 8);
    if ( (_QWORD *)v132.m128i_i64[0] != v7 )
    {
      v113 = 0;
      v8 = 0;
      while ( 1 )
      {
        if ( v7[5] == 1 )
        {
          v22 = (__int64 *)v7[4];
          v133.m128i_i64[0] = v8;
          v23 = v7[3];
          v133.m128i_i64[1] = v113;
          v134 = (__int64 (__fastcall **)())v22;
          v24 = sub_395030(&v133, v22, (__int64 **)&v134);
          v113 = v133.m128i_i64[1];
          v8 = v133.m128i_i64[0];
          sub_37D240(v24 + 32, v23);
          if ( v25 )
          {
            *(_QWORD *)(operator new(0x28u) + 32) = v23;
            std::_Rb_tree_insert_and_rebalance();
            ++*(_QWORD *)(v24 + 72);
          }
        }
        if ( (*v7 & 2) != 0 )
          goto LABEL_17;
        v9 = (_QWORD *)v7[2];
        if ( (*(_BYTE *)v9 & 2) != 0 )
        {
          v26 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
          v27 = *v26;
          if ( (*v26 & 2) == 0 && (_QWORD *)v26[2] == v7 )
          {
            do
            {
              v7 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
              v27 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v27 & 2) != 0 )
                goto LABEL_17;
              v28 = v26;
              v26 = v7;
            }
            while ( (_QWORD *)v7[2] == v28 );
          }
          v7 = v26;
          if ( (_QWORD *)v132.m128i_i64[0] == v26 )
          {
LABEL_18:
            v10 = (unsigned __int64 *)v8;
            if ( v7 )
            {
              v6 = v7;
              goto LABEL_21;
            }
            goto LABEL_196;
          }
        }
        else
        {
          do
          {
            v7 = v9;
            v9 = (_QWORD *)v9[1];
          }
          while ( (*(_BYTE *)v9 & 2) == 0 );
LABEL_17:
          if ( (_QWORD *)v132.m128i_i64[0] == v7 )
            goto LABEL_18;
        }
      }
    }
    v11 = v132.m128i_i64[0];
    v6 = nullptr;
    v113 = 0;
  }
  else
  {
    v10 = nullptr;
LABEL_21:
    if ( !v132.m128i_i64[1] )
    {
LABEL_196:
      v6 = v10;
      goto LABEL_53;
    }
    v11 = (__int64)v6;
    v6 = v10;
  }
  v12 = *(_QWORD **)(v11 + 8);
  if ( v12 == (_QWORD *)v11 )
    goto LABEL_53;
  do
  {
    if ( v12[5] <= 1u )
      goto LABEL_76;
    v13 = 0;
    v123 = v12[3];
    v14 = 0;
    do
    {
      while ( 1 )
      {
        v17 = *(__int64 **)(v12[4] + 8 * v14);
        v134 = (__int64 (__fastcall **)())v17;
        if ( !v6 )
        {
LABEL_26:
          v133.m128i_i64[0] = (__int64)v6;
          v131 = &v134;
          v133.m128i_i64[1] = v113;
          v15 = sub_395030(&v133, (__int64 *)&v134, (__int64 **)&v131);
          v113 = v133.m128i_i64[1];
          v6 = (unsigned __int64 *)v133.m128i_i64[0];
          sub_37D240(v15 + 32, v123);
          if ( v16 )
          {
            *(_QWORD *)(operator new(0x28u) + 32) = v123;
            std::_Rb_tree_insert_and_rebalance();
            ++*(_QWORD *)(v15 + 72);
          }
          goto LABEL_28;
        }
        v18 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v18 )
          break;
LABEL_28:
        v14 = ++v13;
        if ( (unsigned __int64)v13 >= v12[5] )
          goto LABEL_76;
      }
      if ( (*(_BYTE *)(*v6 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_26;
      while ( 1 )
      {
        v19 = *(_QWORD *)(v18 + 24);
        v115 = (__int64 **)(v18 + 24);
        if ( (__int64 *)v19 == v17 )
          break;
        if ( v17 == (__int64 *)&byte_1 || !v19 )
        {
          if ( v19 == 1 || !v17 )
            break;
        }
        else
        {
          if ( v19 == 1
            || !v17
            || ((v127 = *(_QWORD **)(v18 + 24), v125 = v17, (v20 = sub_252320((__int64)v17, v19)) != 0)
              ? (v21 = v20 >> 31)
              : (LOBYTE(v21) = (unsigned __int64)*v125 < *v127),
                (_BYTE)v21) )
          {
            v18 = *(_QWORD *)(v18 + 8);
            goto LABEL_41;
          }
          v32 = *v115;
          if ( v134 == (__int64 (__fastcall **)())*v115 || v32 == (__int64 *)&byte_1 || !v134 )
            break;
          if ( v134 != (__int64 (__fastcall **)())&byte_1 && v32 )
          {
            v126 = v134;
            v116 = *v115;
            v33 = sub_252320((__int64)v116, (__int64)v134);
            if ( v33 )
              v34 = v33 >> 31;
            else
              LOBYTE(v34) = *v116 < (unsigned __int64)*v126;
            if ( !(_BYTE)v34 )
              break;
          }
        }
        v18 = *(_QWORD *)(v18 + 16);
LABEL_41:
        if ( (*(_BYTE *)v18 & 2) != 0 )
          goto LABEL_26;
        v17 = (__int64 *)v134;
      }
      if ( v6 == (unsigned __int64 *)v18 )
        goto LABEL_26;
      v14 = ++v13;
    }
    while ( (unsigned __int64)v13 < v12[5] );
LABEL_76:
    if ( (*v12 & 2) == 0 )
    {
      v35 = (_QWORD *)v12[2];
      if ( (*(_BYTE *)v35 & 2) != 0 )
      {
        v37 = (_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFFCLL);
        v38 = *v37;
        if ( (*v37 & 2) != 0 || (_QWORD *)v37[2] != v12 )
        {
LABEL_88:
          v12 = v37;
        }
        else
        {
          while ( 1 )
          {
            v12 = (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCLL);
            v38 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v38 & 2) != 0 )
              break;
            v39 = v37;
            v37 = v12;
            if ( (_QWORD *)v12[2] != v39 )
              goto LABEL_88;
          }
        }
      }
      else
      {
        for ( i = (_QWORD *)v35[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
          v35 = i;
        v12 = v35;
      }
    }
  }
  while ( (_QWORD *)v132.m128i_i64[0] != v12 );
LABEL_53:
  v148 = -1;
  v29 = (unsigned __int64 *)&v151;
  v149 = 0;
  v150 = 0;
  v147 = -1;
  v30.m128_u64[0] = 0;
  do
  {
    *(_WORD *)v29 = 0;
    v29 += 5;
    *((_WORD *)v29 - 19) = 0;
    *((_WORD *)v29 - 18) = 0;
    *((_DWORD *)v29 - 2) = 0;
    *((_WORD *)v29 - 17) = 0;
    *((_OWORD *)v29 - 2) = 0;
    *(v29 - 2) = 0;
  }
  while ( &v152 != v29 );
  if ( !v6 )
  {
    if ( !a3 )
    {
      if ( a1 )
        goto LABEL_143;
      goto LABEL_165;
    }
    v31 = v132.m128i_i64[0];
    if ( !v132.m128i_i64[0] )
    {
      if ( a1 )
        goto LABEL_143;
      return v152 - __readfsqword(0x28u);
    }
    if ( !v132.m128i_i64[1] )
    {
      if ( a1 )
        goto LABEL_143;
      goto LABEL_166;
    }
    goto LABEL_201;
  }
  if ( v113 )
  {
    v121 = (unsigned __int64 *)v6[1];
    while ( v121 != v6 )
    {
      v40 = (__int64 *)(v121 + 3);
      while ( 1 )
      {
        head = prev_head();
        if ( head == -1
          || head == *(_QWORD *)(*(_QWORD *)(a2 + 8) + 40LL)
          || (unsigned __int8)(netnode_charval() - 1) <= 1u
          || !(unsigned int)decode_insn()
          || (unsigned __int8)is_basic_block_end() )
        {
          break;
        }
        v42 = v132.m128i_i64[0];
        if ( !v132.m128i_i64[0] )
        {
          sub_37D240((__int64)(v121 + 4), head);
          if ( v82 )
            goto LABEL_96;
LABEL_181:
          v83 = qalloc();
          if ( !v83 )
          {
            exception = __cxa_allocate_exception(8u);
            *exception = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_QWORD *)(v83 + 48) = 0;
          *(_OWORD *)(v83 + 16) = 0;
          *(_OWORD *)(v83 + 32) = 0;
          *(_QWORD *)v83 = v83 & 0xFFFFFFFFFFFFFFFCLL | 2;
          v132.m128i_i64[0] = v83;
          v84 = *(_QWORD *)v83;
          *(__m128i *)(v83 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v83, (__m128i)(unsigned __int64)v83);
          *(_QWORD *)v83 = v83 & 0xFFFFFFFFFFFFFFFCLL | v84 & 3;
          v85 = v132.m128i_i64[0];
          v86 = (__m128i)v132.m128i_u64[0];
          *(_QWORD *)v132.m128i_i64[0] &= ~1uLL;
          *(__m128i *)(v85 + 8) = _mm_unpacklo_epi64(v86, v86);
          *(_QWORD *)v132.m128i_i64[0] |= 2uLL;
          v42 = v132.m128i_i64[0];
          goto LABEL_98;
        }
        v53 = *(_QWORD *)v132.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v53 )
          break;
        if ( (*(_BYTE *)(*(_QWORD *)v132.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_95;
        while ( 1 )
        {
          v54 = *(_QWORD *)(v53 + 24);
          if ( head >= v54 )
            break;
          v53 = *(_QWORD *)(v53 + 8);
LABEL_116:
          if ( (*(_BYTE *)v53 & 2) != 0 )
            goto LABEL_95;
        }
        if ( v54 < head )
        {
          v53 = *(_QWORD *)(v53 + 16);
          goto LABEL_116;
        }
        if ( v132.m128i_i64[0] != v53 )
          break;
LABEL_95:
        v117 = v132.m128i_i64[0];
        sub_37D240((__int64)(v121 + 4), head);
        if ( !v41 )
        {
          v43 = (unsigned __int64 *)v117;
          if ( v132.m128i_i64[1] )
            goto LABEL_121;
LABEL_98:
          v44 = qalloc();
          v45 = v44;
          if ( !v44 )
          {
            v5 = __cxa_allocate_exception(8u);
            *v5 = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              v5,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_QWORD *)(v44 + 24) = head;
          *(_OWORD *)v44 = 0;
          *(_OWORD *)(v44 + 40) = 0;
          *(_QWORD *)(v44 + 32) = 0;
          *(_QWORD *)v44 = v42 & 0xFFFFFFFFFFFFFFFCLL;
          v46 = _mm_loadl_epi64(&v132);
          *(_QWORD *)v44 = v42 & 0xFFFFFFFFFFFFFFFCLL | 1;
          v47 = v132.m128i_i64[0];
          v30 = (__m128)_mm_unpacklo_epi64(v46, v46);
          *(__m128 *)(v45 + 8) = v30;
          if ( v42 != v47 )
          {
            *(_QWORD *)(v42 + 8) = v45;
            if ( v42 == *(_QWORD *)(v47 + 8) )
              goto LABEL_126;
            goto LABEL_101;
          }
          *(_QWORD *)v42 = v45 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v42 & 3LL;
          goto LABEL_186;
        }
LABEL_96:
        *(_QWORD *)(operator new(0x28u) + 32) = head;
        std::_Rb_tree_insert_and_rebalance();
        v42 = v132.m128i_i64[0];
        ++v121[9];
        v43 = (unsigned __int64 *)v42;
        if ( !v42 )
          goto LABEL_181;
        if ( !v132.m128i_i64[1] )
          goto LABEL_98;
LABEL_121:
        v56 = 1;
        v57 = *(_QWORD *)v42 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v57 & 2) == 0 )
        {
          v60 = *(_QWORD *)(v57 + 24);
          v48 = (_QWORD *)(v57 + 24);
          if ( head < v60 )
          {
LABEL_128:
            v61 = *(_QWORD *)(v57 + 8);
            v56 = 1;
            if ( (*(_BYTE *)v61 & 2) == 0 )
              goto LABEL_129;
LABEL_132:
            v43 = (unsigned __int64 *)v57;
            goto LABEL_122;
          }
          while ( v60 < head )
          {
            v61 = *(_QWORD *)(v57 + 16);
            v56 = 0;
            if ( (*(_BYTE *)v61 & 2) != 0 )
              goto LABEL_132;
LABEL_129:
            v57 = v61;
            v60 = *(_QWORD *)(v61 + 24);
            v48 = (_QWORD *)(v57 + 24);
            if ( head < v60 )
              goto LABEL_128;
          }
          if ( !v57 )
          {
            v43 = nullptr;
            goto LABEL_122;
          }
          goto LABEL_103;
        }
LABEL_122:
        v124 = v56;
        v119 = v43;
        v58 = qalloc();
        v45 = v58;
        if ( !v58 )
        {
          v3 = __cxa_allocate_exception(8u);
          *v3 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v3,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v58 + 24) = head;
        *(_OWORD *)v58 = 0;
        *(_OWORD *)(v58 + 40) = 0;
        *(_QWORD *)(v58 + 32) = 0;
        *(_QWORD *)v58 = (unsigned __int64)v119 & 0xFFFFFFFFFFFFFFFCLL;
        v59 = _mm_loadl_epi64(&v132);
        *(_QWORD *)v58 = (unsigned __int64)v119 & 0xFFFFFFFFFFFFFFFCLL | 1;
        v47 = v132.m128i_i64[0];
        v30 = (__m128)_mm_unpacklo_epi64(v59, v59);
        *(__m128 *)(v45 + 8) = v30;
        if ( (unsigned __int64 *)v47 == v119 )
        {
          *v119 = v45 & 0xFFFFFFFFFFFFFFFCLL | *v119 & 3;
LABEL_186:
          v30 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v45, (__m128i)(unsigned __int64)v45);
          *(__m128 *)(v132.m128i_i64[0] + 8) = v30;
          v87 = *(_QWORD *)v45 & 2LL;
          *(_QWORD *)v45 &= ~1uLL;
          *(_QWORD *)v45 = v87 | v132.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
          goto LABEL_102;
        }
        if ( v124 )
        {
          v119[1] = v45;
          if ( *(unsigned __int64 **)(v47 + 8) == v119 )
LABEL_126:
            *(_QWORD *)(v47 + 8) = v45;
        }
        else
        {
          v119[2] = v45;
          if ( *(unsigned __int64 **)(v47 + 16) == v119 )
            *(_QWORD *)(v47 + 16) = v45;
        }
LABEL_101:
        sub_3410E0(&v132, (__int64 *)v45);
LABEL_102:
        ++v132.m128i_i64[1];
        v48 = (_QWORD *)(v45 + 24);
LABEL_103:
        v49 = v48[2];
        v50 = *v40;
        v51 = v48[1];
        if ( v48[3] < (unsigned __int64)(v49 + 1) )
        {
          v118 = *v40;
          v55 = qvector_reserve();
          v48[1] = v55;
          v51 = v55;
          v50 = v118;
          v49 = v48[2];
        }
        *(_QWORD *)(v51 + 8 * v49) = v50;
        ++v48[2];
      }
      if ( (*v121 & 2) == 0 )
      {
        v62 = (unsigned __int64 *)v121[2];
        if ( (*(_BYTE *)v62 & 2) == 0 )
        {
          do
          {
            v63 = v62;
            v62 = (unsigned __int64 *)v62[1];
          }
          while ( (*(_BYTE *)v62 & 2) == 0 );
          goto LABEL_137;
        }
        v63 = (unsigned __int64 *)(*v121 & 0xFFFFFFFFFFFFFFFCLL);
        v88 = *v63;
        if ( (*v63 & 2) != 0 || (unsigned __int64 *)v63[2] != v121 )
        {
LABEL_137:
          v121 = v63;
        }
        else
        {
          while ( 1 )
          {
            v89 = v63;
            v90 = v88 & 0xFFFFFFFFFFFFFFFCLL;
            v88 = *(_QWORD *)(v88 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v88 & 2) != 0 )
              break;
            v63 = (unsigned __int64 *)v90;
            if ( *(unsigned __int64 **)(v90 + 16) != v89 )
              goto LABEL_137;
          }
          v121 = (unsigned __int64 *)v90;
        }
      }
    }
    if ( !a3 )
    {
      if ( a1 )
        goto LABEL_143;
      goto LABEL_145;
    }
    v31 = v132.m128i_i64[0];
    if ( v132.m128i_i64[0] )
    {
LABEL_141:
      if ( !v132.m128i_i64[1] )
        goto LABEL_142;
LABEL_201:
      v120 = *(_QWORD **)(v31 + 8);
      if ( v120 == (_QWORD *)v31 )
      {
LABEL_142:
        if ( a1 )
          goto LABEL_143;
        goto LABEL_144;
      }
      while ( 1 )
      {
        v91 = v120[3];
        v135 = 0;
        v134 = nullptr;
        if ( !v120[5] )
          goto LABEL_219;
        v92 = 0;
        v93 = 0;
        do
        {
          while ( 1 )
          {
            v94 = v120[4];
            v130 = &v131;
            v133.m128i_i64[0] = (__int64)v6;
            v131 = *(__int64 (__fastcall ****)())(v94 + 8 * v93);
            v133.m128i_i64[1] = v113;
            v95 = sub_395030(&v133, (__int64 *)&v131, (__int64 **)&v130);
            v113 = v133.m128i_i64[1];
            v6 = (unsigned __int64 *)v133.m128i_i64[0];
            if ( !*(_QWORD *)(v95 + 72) )
            {
              if ( !under_debugger )
                sub_37B760(0xC51Fu, *(double *)v30.m128_u64);
              BUG();
            }
            if ( v91 == *(_QWORD *)(*(_QWORD *)(v95 + 56) + 32LL) )
              break;
            v93 = ++v92;
            if ( (unsigned __int64)v92 >= v120[5] )
              goto LABEL_210;
          }
          v96 = v135.m128_u64[0];
          v97 = v131;
          v98 = v134;
          if ( v135.m128_u64[1] < v135.m128_u64[0] + 1 )
          {
            v122 = v131;
            v134 = (__int64 (__fastcall **)())qvector_reserve();
            v98 = v134;
            v97 = v122;
            v96 = v135.m128_u64[0];
          }
          v98[v96] = (__int64 (__fastcall *)())v97;
          ++v92;
          ++v135.m128_u64[0];
          v93 = v92;
        }
        while ( (unsigned __int64)v92 < v120[5] );
LABEL_210:
        if ( v135.m128_u64[0] )
        {
          v99 = (__int64 *)v120[4];
          v30 = _mm_loadh_ps((const double *)v120 + 6);
          v120[4] = v134;
          *(__m128 *)(v120 + 5) = v135;
          v134 = (__int64 (__fastcall **)())v99;
          v135 = v30;
          if ( (*v120 & 2) == 0 )
          {
            v100 = (_QWORD *)v120[2];
            if ( (*(_BYTE *)v100 & 2) != 0 )
            {
              v101 = (_QWORD *)(*v120 & 0xFFFFFFFFFFFFFFFCLL);
              v108 = *v101;
              if ( (*v101 & 2) == 0 && (_QWORD *)v101[2] == v120 )
              {
                while ( 1 )
                {
                  v109 = v101;
                  v110 = v108 & 0xFFFFFFFFFFFFFFFCLL;
                  v108 = *(_QWORD *)(v108 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v108 & 2) != 0 )
                    break;
                  v101 = (_QWORD *)v110;
                  if ( *(_QWORD **)(v110 + 16) != v109 )
                    goto LABEL_214;
                }
                v120 = (_QWORD *)v110;
                goto LABEL_215;
              }
            }
            else
            {
              do
              {
                v101 = v100;
                v100 = (_QWORD *)v100[1];
              }
              while ( (*(_BYTE *)v100 & 2) == 0 );
            }
LABEL_214:
            v120 = v101;
          }
        }
        else
        {
LABEL_219:
          v102 = *(double *)v120;
          v103 = (unsigned __int64)v120;
          if ( (*v120 & 2) == 0 )
          {
            v104 = v120[2];
            if ( (*(_BYTE *)v104 & 2) != 0 )
            {
              v103 = *(_QWORD *)&v102 & 0xFFFFFFFFFFFFFFFCLL;
              v105 = *(_QWORD *)(*(_QWORD *)&v102 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v105 & 2) == 0 )
              {
                v106 = (unsigned __int64)v120;
                do
                {
                  if ( v106 != *(_QWORD *)(v103 + 16) )
                    break;
                  v106 = v103;
                  v107 = v105 & 0xFFFFFFFFFFFFFFFCLL;
                  v105 = *(_QWORD *)(v105 & 0xFFFFFFFFFFFFFFFCLL);
                  v103 = v107;
                }
                while ( (v105 & 2) == 0 );
              }
            }
            else
            {
              do
              {
                v103 = v104;
                v104 = *(_QWORD *)(v104 + 8);
              }
              while ( (*(_BYTE *)v104 & 2) == 0 );
            }
          }
          sub_341C20((unsigned __int64 **)&v132, v120);
          v120 = (_QWORD *)v103;
          v99 = (__int64 *)v134;
        }
LABEL_215:
        if ( v99 )
        {
          v135.m128_u64[0] = 0;
          qfree();
        }
        if ( (_QWORD *)v132.m128i_i64[0] == v120 )
          goto LABEL_142;
      }
    }
    if ( a1 )
      goto LABEL_143;
LABEL_146:
    v66 = *v6;
    v67 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v67 & 2) != 0 )
      goto LABEL_164;
    v68 = *(_QWORD *)(v67 + 8);
    if ( (*(_BYTE *)v68 & 2) != 0 )
    {
      v71 = *(_QWORD *)(v67 + 16);
      if ( (*(_BYTE *)v71 & 2) != 0 )
        goto LABEL_242;
      goto LABEL_155;
    }
    v69 = *(__int64 **)(v68 + 8);
    if ( (*(_BYTE *)v69 & 2) != 0 )
    {
      v70 = *(__int64 **)(v68 + 16);
      if ( (*(_BYTE *)v70 & 2) != 0 )
      {
LABEL_248:
        sub_37F5A0(*(_QWORD **)(v68 + 48));
        *(_QWORD *)v68 |= 2uLL;
LABEL_152:
        if ( v68 )
          qfree();
        v71 = *(_QWORD *)(v67 + 16);
        if ( (*(_BYTE *)v71 & 2) != 0 )
        {
LABEL_161:
          if ( (*(_BYTE *)v67 & 2) != 0 )
          {
LABEL_162:
            if ( v66 > 3 )
              qfree();
LABEL_164:
            qfree();
            goto LABEL_165;
          }
LABEL_242:
          sub_37F5A0(*(_QWORD **)(v67 + 48));
          *(_QWORD *)v67 |= 2uLL;
          goto LABEL_162;
        }
LABEL_155:
        v72 = *(__int64 **)(v71 + 8);
        if ( (*(_BYTE *)v72 & 2) != 0 )
        {
          v73 = *(__int64 **)(v71 + 16);
          if ( (*(_BYTE *)v73 & 2) != 0 )
          {
LABEL_246:
            sub_37F5A0(*(_QWORD **)(v71 + 48));
            *(_QWORD *)v71 |= 2uLL;
LABEL_159:
            if ( v71 )
              qfree();
            goto LABEL_161;
          }
        }
        else
        {
          sub_37F770(v72);
          v73 = *(__int64 **)(v71 + 16);
          if ( (*(_BYTE *)v73 & 2) != 0 )
            goto LABEL_158;
        }
        sub_37F770(v73);
LABEL_158:
        if ( (*(_BYTE *)v71 & 2) != 0 )
          goto LABEL_159;
        goto LABEL_246;
      }
    }
    else
    {
      sub_37F770(v69);
      v70 = *(__int64 **)(v68 + 16);
      if ( (*(_BYTE *)v70 & 2) != 0 )
        goto LABEL_151;
    }
    sub_37F770(v70);
LABEL_151:
    if ( (*(_BYTE *)v68 & 2) != 0 )
      goto LABEL_152;
    goto LABEL_248;
  }
  if ( a3 )
  {
    v31 = v132.m128i_i64[0];
    if ( v132.m128i_i64[0] )
      goto LABEL_141;
  }
  if ( !a1 )
    goto LABEL_164;
LABEL_143:
  v64 = *a1;
  *a1 = v132.m128i_i64[0];
  v132.m128i_i64[0] = v64;
  v65 = a1[1];
  a1[1] = v132.m128i_i64[1];
  v132.m128i_i64[1] = v65;
LABEL_144:
  if ( v6 )
  {
LABEL_145:
    if ( !v113 )
      goto LABEL_164;
    goto LABEL_146;
  }
LABEL_165:
  v31 = v132.m128i_i64[0];
LABEL_166:
  v74 = v31;
  if ( !v31 )
    return v152 - __readfsqword(0x28u);
  v75 = *(_QWORD *)v31;
  if ( !v132.m128i_i64[1] )
  {
    *(_QWORD *)v31 = *(_QWORD *)v31 & 3LL | v31 & 0xFFFFFFFFFFFFFFFCLL;
    v111 = v132.m128i_i64[0];
    v112 = (__m128i)v132.m128i_u64[0];
    *(_QWORD *)v132.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v111 + 8) = _mm_unpacklo_epi64(v112, v112);
    *(_QWORD *)v132.m128i_i64[0] |= 2uLL;
    goto LABEL_177;
  }
  v76 = (_QWORD *)(v75 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*(_BYTE *)(v75 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    goto LABEL_176;
  v77 = (__int64 *)v76[1];
  if ( (*(_BYTE *)v77 & 2) != 0 )
  {
    v78 = (__int64 *)v76[2];
    if ( (*(_BYTE *)v78 & 2) == 0 )
    {
LABEL_171:
      sub_37E090(v78);
      goto LABEL_172;
    }
    goto LABEL_238;
  }
  sub_37E090(v77);
  v78 = (__int64 *)v76[2];
  if ( (*(_BYTE *)v78 & 2) == 0 )
    goto LABEL_171;
LABEL_172:
  if ( (*(_BYTE *)v76 & 2) == 0 )
  {
LABEL_238:
    if ( v76[4] )
    {
      v76[5] = 0;
      qfree();
    }
    *v76 |= 2uLL;
  }
  if ( v75 > 3 )
    qfree();
  v74 = v132.m128i_i64[0];
  v75 = *(_QWORD *)v132.m128i_i64[0];
LABEL_176:
  *(_QWORD *)v74 = v75 & 3 | v74 & 0xFFFFFFFFFFFFFFFCLL;
  v79 = v132.m128i_i64[0];
  v80 = (__m128i)v132.m128i_u64[0];
  *(_QWORD *)v132.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v79 + 8) = _mm_unpacklo_epi64(v80, v80);
  *(_QWORD *)v132.m128i_i64[0] |= 2uLL;
  v132.m128i_i64[1] = 0;
LABEL_177:
  if ( v132.m128i_i64[0] )
    qfree();
  return v152 - __readfsqword(0x28u);
}

