int __fastcall ida_mcp::mcp::McpServer::register_resource(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v5; // rax
  size_t v6; // r14
  _QWORD *v7; // r15
  const void *v8; // rbp
  __m128i v9; // xmm0
  const void *v10; // rdi
  size_t v11; // r12
  _QWORD *v12; // rbx
  size_t v13; // rdx
  int v14; // eax
  __int64 v15; // r12
  double *v16; // rdi
  size_t v17; // xmm0_8
  double v18; // rdx
  __m128 v19; // xmm0
  double *v20; // rdi
  size_t v21; // xmm0_8
  double v22; // rdx
  __m128 v23; // xmm0
  _QWORD *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  void (__fastcall *v29)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v30; // rdx
  unsigned __int8 *v32; // rdx
  _QWORD *v33; // rcx
  __int64 v34; // rsi
  unsigned __int8 *v35; // rdx
  _QWORD *v36; // rcx
  __int64 v37; // rsi
  char *v38; // rax
  __m128i v39; // xmm0
  __m128i v40; // xmm0
  _QWORD *v41; // r12
  const void *v42; // r14
  size_t v43; // rbp
  _QWORD *v44; // rdx
  __m128i v45; // xmm0
  void *v46; // rdi
  unsigned __int64 v47; // rsi
  void *v48; // rdi
  _QWORD *v49; // rax
  size_t v50; // rcx
  const void *v51; // rdx
  _QWORD *insert_unique_pos; // rax
  _QWORD *v53; // rdx
  _QWORD *v54; // r8
  bool v55; // al
  _QWORD *v56; // r8
  size_t v57; // rsi
  const void *v58; // rdi
  int v59; // eax
  _QWORD *v60; // rax
  size_t v61; // rsi
  const void *v62; // rdi
  const void *v63; // r15
  __int64 v64; // r12
  unsigned __int64 v65; // r12
  char *v66; // rax
  char *v67; // r14
  __m128i si128; // xmm0
  char *v69; // rax
  unsigned int v70; // edx
  unsigned int v71; // edx
  __m128i v72; // xmm0
  char *v73; // rax
  unsigned __int64 v74; // rdi
  char *v75; // rcx
  char *v76; // r9
  unsigned int v77; // edx
  unsigned int v78; // edx
  unsigned int v79; // ecx
  __int64 v80; // r8
  unsigned __int64 v81; // rdi
  char *v82; // rcx
  char *v83; // r9
  unsigned int v84; // edx
  unsigned int v85; // edx
  unsigned int v86; // ecx
  __int64 v87; // r8
  _QWORD *v88; // [rsp+0h] [rbp-1C8h]
  void *v89; // [rsp+8h] [rbp-1C0h]
  void *src; // [rsp+10h] [rbp-1B8h]
  pthread_mutex_t *mutex; // [rsp+18h] [rbp-1B0h]
  __int64 v92; // [rsp+20h] [rbp-1A8h]
  void **v93; // [rsp+28h] [rbp-1A0h]
  void **v94; // [rsp+30h] [rbp-198h]
  ida_mcp::mcp::Resource *v95; // [rsp+38h] [rbp-190h]
  _QWORD *v96; // [rsp+40h] [rbp-188h]
  size_t v97; // [rsp+48h] [rbp-180h]
  __m128i v98; // [rsp+50h] [rbp-178h] BYREF
  void (__fastcall *v99)(_QWORD, _QWORD, _QWORD); // [rsp+60h] [rbp-168h]
  __int64 v100; // [rsp+68h] [rbp-160h]
  void *v101; // [rsp+70h] [rbp-158h] BYREF
  size_t v102; // [rsp+78h] [rbp-150h]
  double v103[2]; // [rsp+80h] [rbp-148h] BYREF
  void *v104; // [rsp+90h] [rbp-138h] BYREF
  size_t n; // [rsp+98h] [rbp-130h]
  double v106[2]; // [rsp+A0h] [rbp-128h] BYREF
  unsigned __int8 *v107; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v108; // [rsp+B8h] [rbp-110h]
  _QWORD v109[2]; // [rsp+C0h] [rbp-108h] BYREF
  char v110; // [rsp+D0h] [rbp-F8h]
  unsigned __int8 *v111; // [rsp+D8h] [rbp-F0h] BYREF
  __int64 v112; // [rsp+E0h] [rbp-E8h]
  _QWORD v113[2]; // [rsp+E8h] [rbp-E0h] BYREF
  char v114; // [rsp+F8h] [rbp-D0h]
  void *v115[2]; // [rsp+100h] [rbp-C8h] BYREF
  char *v116; // [rsp+110h] [rbp-B8h]
  char v117; // [rsp+118h] [rbp-B0h]
  __m128i v118; // [rsp+120h] [rbp-A8h] BYREF
  char *v119; // [rsp+130h] [rbp-98h]
  char v120; // [rsp+140h] [rbp-88h] BYREF
  char v121; // [rsp+150h] [rbp-78h]
  char v122; // [rsp+158h] [rbp-70h]
  __m128i v123; // [rsp+160h] [rbp-68h] BYREF
  __int128 v124; // [rsp+170h] [rbp-58h]
  unsigned __int64 v125; // [rsp+188h] [rbp-40h]

  v125 = __readfsqword(0x28u);
  mutex = (pthread_mutex_t *)(a1 + 224);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 224)) )
    ida_mcp::mcp::McpServer::register_resource();
  v93 = &v101;
  v89 = v103;
  v101 = v103;
  std::string::_M_construct<true>();
  src = v106;
  v104 = v106;
  v94 = &v104;
  std::string::_M_construct<true>();
  v110 = 0;
  if ( *(_BYTE *)(a2 + 96) )
  {
    v107 = (unsigned __int8 *)v109;
    std::string::_M_construct<true>();
    v110 = 1;
  }
  v114 = 0;
  if ( *(_BYTE *)(a2 + 136) )
  {
    v111 = (unsigned __int8 *)v113;
    std::string::_M_construct<true>();
    v114 = 1;
  }
  v122 = 0;
  if ( *(_BYTE *)(a2 + 232) )
  {
    v117 = 0;
    if ( *(_BYTE *)(a2 + 168) )
    {
      v63 = *(const void **)(a2 + 144);
      v64 = *(_QWORD *)(a2 + 152);
      v116 = nullptr;
      *(_OWORD *)v115 = 0;
      v65 = v64 - (_QWORD)v63;
      if ( v65 )
      {
        v66 = (char *)operator new(v65);
        v67 = &v66[v65];
        v116 = &v66[v65];
        *(__m128i *)v115 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v66, (__m128i)(unsigned __int64)v66);
        memcpy(v66, v63, v65);
      }
      else
      {
        v115[0] = nullptr;
        v67 = nullptr;
        v116 = nullptr;
      }
      v115[1] = v67;
      v117 = 1;
    }
    v45 = _mm_loadu_si128((const __m128i *)(a2 + 176));
    v121 = 0;
    v118 = v45;
    if ( *(_BYTE *)(a2 + 224) )
    {
      v119 = &v120;
      std::string::_M_construct<true>();
      v121 = 1;
    }
    v122 = 1;
  }
  v5 = a3[1].m128i_i64[1];
  v6 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)&v124 = 0;
  v7 = *(_QWORD **)(a1 + 64);
  v8 = *(const void **)a2;
  v123 = 0;
  *((_QWORD *)&v124 + 1) = v5;
  if ( a3[1].m128i_i64[0] )
  {
    v9 = _mm_loadu_si128(a3);
    *(_QWORD *)&v124 = a3[1].m128i_i64[0];
    v123 = v9;
    a3[1] = 0;
  }
  v92 = a1 + 48;
  v88 = (_QWORD *)(a1 + 56);
  if ( !v7 )
  {
    v41 = (_QWORD *)operator new(0x150u);
    v12 = v88;
    v41[4] = v41 + 6;
LABEL_74:
    std::string::_M_construct<true>();
    v95 = (ida_mcp::mcp::Resource *)(v41 + 8);
    memset(v41 + 8, 0, 0x110u);
    v41[8] = v41 + 10;
    v42 = (const void *)v41[4];
    v43 = v41[5];
    v41[12] = v41 + 14;
    if ( v88 == v12 )
    {
      if ( *(_QWORD *)(a1 + 88) )
      {
        v56 = *(_QWORD **)(a1 + 80);
        v57 = v56[5];
        v58 = (const void *)v56[4];
        v96 = v56;
        v59 = std::string::compare(v58, v57, v42, v43);
        v54 = v96;
        if ( v59 < 0 )
        {
LABEL_123:
          v55 = 0;
LABEL_106:
          if ( v54 == v88 || v55 )
            goto LABEL_108;
          v12 = v54;
          goto LABEL_135;
        }
      }
    }
    else
    {
      v44 = (_QWORD *)v12[4];
      v97 = v12[5];
      v96 = v44;
      if ( std::string::compare(v42, v43, v44, v97) >= 0 )
      {
        if ( std::string::compare(v96, v97, v42, v43) >= 0 )
        {
LABEL_77:
          ida_mcp::mcp::Resource::~Resource(v95);
          std::string::_M_dispose();
          operator delete(v41, 0x150u);
          goto LABEL_24;
        }
        if ( *(_QWORD **)(a1 + 80) == v12 )
        {
LABEL_135:
          std::string::compare(v42, v43, (const void *)v12[4], v12[5]);
LABEL_108:
          v12 = v41;
          std::_Rb_tree_insert_and_rebalance();
          ++*(_QWORD *)(a1 + 88);
          goto LABEL_24;
        }
        v49 = (_QWORD *)std::_Rb_tree_increment();
        v50 = v49[5];
        v51 = (const void *)v49[4];
        v96 = v49;
        if ( std::string::compare(v42, v43, v51, v50) < 0 )
        {
          if ( v12[3] )
            goto LABEL_108;
          goto LABEL_135;
        }
        goto LABEL_104;
      }
      if ( *(_QWORD **)(a1 + 72) == v12 )
        goto LABEL_108;
      v60 = (_QWORD *)std::_Rb_tree_decrement();
      v61 = v60[5];
      v62 = (const void *)v60[4];
      v96 = v60;
      if ( std::string::compare(v62, v61, v42, v43) < 0 )
      {
        v54 = v96;
        if ( v96[3] )
          goto LABEL_108;
        goto LABEL_123;
      }
    }
LABEL_104:
    insert_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,ida_mcp::mcp::McpServer::ResourceEntry>,std::_Select1st<std::pair<std::string const,ida_mcp::mcp::McpServer::ResourceEntry>>,std::less<std::string>,std::allocator<std::pair<std::string const,ida_mcp::mcp::McpServer::ResourceEntry>>>::_M_get_insert_unique_pos(
                          v92,
                          v42,
                          v43);
    v12 = insert_unique_pos;
    v54 = v53;
    if ( !v53 )
      goto LABEL_77;
    v55 = insert_unique_pos != nullptr;
    goto LABEL_106;
  }
  v10 = (const void *)v7[4];
  v11 = v7[5];
  v12 = (_QWORD *)(a1 + 56);
  while ( 1 )
  {
    v13 = v6;
    if ( v11 <= v6 )
      v13 = v11;
    if ( !v13 || (v14 = memcmp(v10, v8, v13)) == 0 )
    {
      v15 = v11 - v6;
      if ( v15 > 0x7FFFFFFF )
        goto LABEL_11;
      if ( v15 < (__int64)0xFFFFFFFF80000000LL )
        break;
      v14 = v15;
    }
    if ( v14 < 0 )
      break;
LABEL_11:
    v12 = v7;
    v7 = (_QWORD *)v7[2];
    if ( !v7 )
      goto LABEL_22;
LABEL_12:
    v10 = (const void *)v7[4];
    v11 = v7[5];
  }
  v7 = (_QWORD *)v7[3];
  if ( v7 )
    goto LABEL_12;
LABEL_22:
  if ( v88 == v12 || std::string::compare(v8, v6, (const void *)v12[4], v12[5]) < 0 )
  {
    v41 = (_QWORD *)operator new(0x150u);
    v41[4] = v41 + 6;
    goto LABEL_74;
  }
LABEL_24:
  v16 = (double *)v12[8];
  v17 = v102;
  if ( v16 == (double *)(v12 + 10) )
  {
    if ( v101 != v89 )
    {
      v12[8] = v101;
      *(__m128 *)(v12 + 9) = _mm_loadh_ps(v103);
      goto LABEL_92;
    }
    goto LABEL_115;
  }
  if ( v101 == v89 )
  {
LABEL_115:
    if ( v93 == v12 + 8 )
    {
      v16 = (double *)v101;
    }
    else
    {
      if ( v102 )
      {
        if ( v102 == 1 )
          *(_BYTE *)v16 = LOBYTE(v103[0]);
        else
          memcpy(v16, v89, v102);
        v17 = v102;
        v16 = (double *)v12[8];
      }
      v12[9] = v17;
      *((_BYTE *)v16 + v17) = 0;
      v16 = (double *)v101;
    }
    goto LABEL_28;
  }
  v18 = *((double *)v12 + 10);
  v19 = _mm_loadh_ps(v103);
  v12[8] = v101;
  *(__m128 *)(v12 + 9) = v19;
  if ( v16 )
  {
    v101 = v16;
    v103[0] = v18;
    goto LABEL_28;
  }
LABEL_92:
  v101 = v89;
  v89 = v103;
  v16 = v103;
LABEL_28:
  v102 = 0;
  *(_BYTE *)v16 = 0;
  v20 = (double *)v12[12];
  v21 = n;
  if ( v20 == (double *)(v12 + 14) )
  {
    if ( v104 != src )
    {
      v12[12] = v104;
      *(__m128 *)(v12 + 13) = _mm_loadh_ps(v106);
      goto LABEL_89;
    }
    goto LABEL_109;
  }
  if ( v104 == src )
  {
LABEL_109:
    if ( v94 == v12 + 12 )
    {
      v20 = (double *)v104;
    }
    else
    {
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)v20 = LOBYTE(v106[0]);
        else
          memcpy(v20, src, n);
        v21 = n;
        v20 = (double *)v12[12];
      }
      v12[13] = v21;
      *((_BYTE *)v20 + v21) = 0;
      v20 = (double *)v104;
    }
    goto LABEL_32;
  }
  v22 = *((double *)v12 + 14);
  v23 = _mm_loadh_ps(v106);
  v12[12] = v104;
  *(__m128 *)(v12 + 13) = v23;
  if ( v20 )
  {
    v104 = v20;
    v106[0] = v22;
    goto LABEL_32;
  }
LABEL_89:
  v104 = src;
  src = v106;
  v20 = v106;
LABEL_32:
  n = 0;
  *(_BYTE *)v20 = 0;
  if ( !*((_BYTE *)v12 + 160) )
  {
    if ( !v110 )
      goto LABEL_36;
    v32 = v107;
    v33 = v12 + 18;
    v34 = v108;
    v12[16] = v12 + 18;
    if ( v32 == (unsigned __int8 *)v109 )
    {
      v71 = v34 + 1;
      if ( (unsigned int)(v34 + 1) >= 8 )
      {
        *v33 = v109[0];
        *(_QWORD *)((char *)v33 + v71 - 8) = *(_QWORD *)((char *)&v109[-1] + v71);
        v81 = (unsigned __int64)(v12 + 19) & 0xFFFFFFFFFFFFFFF8LL;
        v82 = (char *)v33 - v81;
        v83 = (char *)((char *)v109 - v82);
        v84 = ((_DWORD)v82 + v71) & 0xFFFFFFF8;
        if ( v84 >= 8 )
        {
          v85 = v84 & 0xFFFFFFF8;
          v86 = 0;
          do
          {
            v87 = v86;
            v86 += 8;
            *(_QWORD *)(v81 + v87) = *(_QWORD *)&v83[v87];
          }
          while ( v86 < v85 );
        }
      }
      else if ( (v71 & 4) != 0 )
      {
        *(_DWORD *)v33 = v109[0];
        *(_DWORD *)((char *)v33 + v71 - 4) = *(_DWORD *)((char *)&v108 + v71 + 4);
      }
      else if ( (_DWORD)v34 != -1 )
      {
        *(_BYTE *)v33 = v109[0];
        if ( (v71 & 2) != 0 )
          *(_WORD *)((char *)v33 + v71 - 2) = *(_WORD *)((char *)&v108 + v71 + 6);
      }
    }
    else
    {
      v12[16] = v32;
      v12[18] = v109[0];
    }
    v12[17] = v34;
    v107 = (unsigned __int8 *)v109;
    v108 = 0;
    LOBYTE(v109[0]) = 0;
    *((_BYTE *)v12 + 160) = 1;
    if ( !*((_BYTE *)v12 + 200) )
      goto LABEL_63;
LABEL_37:
    if ( v114 )
    {
      std::string::operator=((__int64)(v12 + 21), &v111);
    }
    else
    {
      *((_BYTE *)v12 + 200) = 0;
      std::string::_M_dispose();
    }
LABEL_39:
    if ( !*((_BYTE *)v12 + 296) )
      goto LABEL_67;
LABEL_40:
    if ( !v122 )
    {
      *((_BYTE *)v12 + 296) = 0;
      if ( *((_BYTE *)v12 + 288) )
      {
        *((_BYTE *)v12 + 288) = 0;
        std::string::_M_dispose();
      }
      if ( *((_BYTE *)v12 + 232) )
      {
        v48 = (void *)v12[26];
        if ( v48 )
          operator delete(v48, v12[28] - (_QWORD)v48);
      }
      goto LABEL_44;
    }
    if ( !*((_BYTE *)v12 + 232) )
    {
      if ( v117 )
      {
        si128 = _mm_load_si128((const __m128i *)v115);
        v69 = v116;
        *((_BYTE *)v12 + 232) = 1;
        v116 = nullptr;
        *((__m128i *)v12 + 13) = si128;
        v12[28] = v69;
        *(_OWORD *)v115 = 0;
      }
      goto LABEL_98;
    }
    v46 = (void *)v12[26];
    v47 = v12[28] - (_QWORD)v46;
    if ( v117 )
    {
      v72 = _mm_load_si128((const __m128i *)v115);
      v73 = v116;
      v116 = nullptr;
      *((__m128i *)v12 + 13) = v72;
      v12[28] = v73;
      *(_OWORD *)v115 = 0;
      if ( !v46 )
        goto LABEL_98;
    }
    else
    {
      *((_BYTE *)v12 + 232) = 0;
      if ( !v46 )
      {
LABEL_98:
        *((__m128i *)v12 + 15) = _mm_load_si128(&v118);
        std::_Optional_payload_base<std::string>::_M_move_assign();
        goto LABEL_44;
      }
    }
    operator delete(v46, v47);
    goto LABEL_98;
  }
  if ( v110 )
  {
    std::string::operator=((__int64)(v12 + 16), &v107);
  }
  else
  {
    v24 = (_QWORD *)v12[16];
    *((_BYTE *)v12 + 160) = 0;
    if ( v24 != v12 + 18 )
      operator delete(v24, v12[18] + 1LL);
  }
LABEL_36:
  if ( *((_BYTE *)v12 + 200) )
    goto LABEL_37;
LABEL_63:
  if ( !v114 )
    goto LABEL_39;
  v35 = v111;
  v36 = v12 + 23;
  v37 = v112;
  v12[21] = v12 + 23;
  if ( v35 == (unsigned __int8 *)v113 )
  {
    v70 = v37 + 1;
    if ( (unsigned int)(v37 + 1) >= 8 )
    {
      *v36 = v113[0];
      *(_QWORD *)((char *)v36 + v70 - 8) = *(_QWORD *)((char *)&v113[-1] + v70);
      v74 = (unsigned __int64)(v12 + 24) & 0xFFFFFFFFFFFFFFF8LL;
      v75 = (char *)v36 - v74;
      v76 = (char *)((char *)v113 - v75);
      v77 = ((_DWORD)v75 + v70) & 0xFFFFFFF8;
      if ( v77 >= 8 )
      {
        v78 = v77 & 0xFFFFFFF8;
        v79 = 0;
        do
        {
          v80 = v79;
          v79 += 8;
          *(_QWORD *)(v74 + v80) = *(_QWORD *)&v76[v80];
        }
        while ( v79 < v78 );
      }
    }
    else if ( (v70 & 4) != 0 )
    {
      *(_DWORD *)v36 = v113[0];
      *(_DWORD *)((char *)v36 + v70 - 4) = *(_DWORD *)((char *)&v112 + v70 + 4);
    }
    else if ( (_DWORD)v37 != -1 )
    {
      *(_BYTE *)v36 = v113[0];
      if ( (v70 & 2) != 0 )
        *(_WORD *)((char *)v36 + v70 - 2) = *(_WORD *)((char *)&v112 + v70 + 6);
    }
  }
  else
  {
    v12[21] = v35;
    v12[23] = v113[0];
  }
  v12[22] = v37;
  v111 = (unsigned __int8 *)v113;
  v112 = 0;
  LOBYTE(v113[0]) = 0;
  *((_BYTE *)v12 + 200) = 1;
  if ( *((_BYTE *)v12 + 296) )
    goto LABEL_40;
LABEL_67:
  if ( v122 )
  {
    *((_BYTE *)v12 + 232) = 0;
    if ( v117 )
    {
      v38 = v116;
      *((_BYTE *)v12 + 232) = 1;
      v39 = _mm_load_si128((const __m128i *)v115);
      v116 = nullptr;
      v12[28] = v38;
      *((__m128i *)v12 + 13) = v39;
      *(_OWORD *)v115 = 0;
    }
    v40 = _mm_load_si128(&v118);
    *((_BYTE *)v12 + 288) = 0;
    *((__m128i *)v12 + 15) = v40;
    if ( v121 )
    {
      std::string::basic_string();
      *((_BYTE *)v12 + 288) = 1;
    }
    *((_BYTE *)v12 + 296) = 1;
  }
LABEL_44:
  v25 = v124;
  v99 = nullptr;
  v26 = *((_QWORD *)&v124 + 1);
  v98 = 0;
  if ( (_QWORD)v124 )
  {
    v98 = _mm_load_si128(&v123);
    v124 = 0;
  }
  v27 = _mm_load_si128(&v98);
  v28 = _mm_loadu_si128((const __m128i *)v12 + 19);
  v29 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v12[40];
  v12[40] = v25;
  v30 = v12[41];
  v98 = v28;
  v99 = v29;
  v100 = v30;
  v12[41] = v26;
  *((__m128i *)v12 + 19) = v27;
  if ( v29 )
  {
    v29(&v98, &v98, 3);
    if ( (_QWORD)v124 )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v124)(&v123, &v123, 3);
  }
  if ( v122 )
  {
    v122 = 0;
    if ( v121 )
    {
      v121 = 0;
      std::string::_M_dispose();
    }
    if ( v117 && v115[0] )
      operator delete(v115[0], v116 - (char *)v115[0]);
  }
  if ( v114 )
  {
    v114 = 0;
    std::string::_M_dispose();
  }
  if ( v110 )
  {
    v110 = 0;
    std::string::_M_dispose();
  }
  if ( v104 != src )
    operator delete(v104, *(_QWORD *)&v106[0] + 1LL);
  if ( v101 != v89 )
    operator delete(v101, *(_QWORD *)&v103[0] + 1LL);
  return pthread_mutex_unlock(mutex);
}

