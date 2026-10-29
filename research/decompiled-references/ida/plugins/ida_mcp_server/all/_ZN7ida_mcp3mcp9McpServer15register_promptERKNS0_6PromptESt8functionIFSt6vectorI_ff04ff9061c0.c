int __fastcall ida_mcp::mcp::McpServer::register_prompt(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v5; // rax
  size_t v6; // r15
  _QWORD *v7; // r14
  const void *v8; // rbp
  __m128i v9; // xmm0
  const void *v10; // rdi
  size_t v11; // r13
  _QWORD *v12; // rbx
  size_t v13; // rdx
  int v14; // eax
  __int64 v15; // r13
  _QWORD *v16; // rdi
  void **v17; // r14
  void **v18; // r12
  void **v19; // rdi
  unsigned __int8 *v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  void (__fastcall *v27)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v28; // rdx
  _QWORD *v30; // r13
  const void *v31; // r14
  size_t v32; // rbp
  size_t v33; // rsi
  const void *v34; // rdi
  _QWORD *v35; // rdx
  __m128i v36; // xmm0
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // r15
  _WORD *v40; // rbx
  __int16 v41; // ax
  char *v42; // rbp
  char *v43; // rbx
  __m128i v44; // xmm0
  __int64 v45; // rax
  __int64 v46; // rbp
  __int64 v47; // r13
  void *v48; // rdi
  _QWORD *v49; // rax
  size_t v50; // rcx
  const void *v51; // rdx
  _QWORD *insert_unique_pos; // rax
  _QWORD *v53; // rdx
  _QWORD *v54; // r8
  bool v55; // al
  _QWORD *v56; // r8
  size_t v57; // rcx
  const void *v58; // rdx
  size_t v59; // rsi
  const void *v60; // rdi
  int v61; // eax
  _QWORD *v62; // rax
  size_t v63; // rsi
  const void *v64; // rdi
  unsigned int v65; // edx
  unsigned __int64 v66; // rdi
  char *v67; // rcx
  char *v68; // r9
  unsigned int v69; // edx
  unsigned int v70; // edx
  unsigned int v71; // ecx
  __int64 v72; // r8
  __int64 v73; // [rsp+0h] [rbp-128h]
  pthread_mutex_t *mutex; // [rsp+8h] [rbp-120h]
  unsigned __int8 **v75; // [rsp+10h] [rbp-118h]
  _QWORD *v76; // [rsp+18h] [rbp-110h]
  _QWORD *v77; // [rsp+20h] [rbp-108h]
  __int64 v78; // [rsp+28h] [rbp-100h]
  _QWORD *v79; // [rsp+30h] [rbp-F8h]
  size_t v80; // [rsp+38h] [rbp-F0h]
  __m128i v81; // [rsp+40h] [rbp-E8h] BYREF
  void (__fastcall *v82)(_QWORD, _QWORD, _QWORD); // [rsp+50h] [rbp-D8h]
  __int64 v83; // [rsp+58h] [rbp-D0h]
  void *v84; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v85[2]; // [rsp+70h] [rbp-B8h] BYREF
  unsigned __int8 *v86; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v87; // [rsp+88h] [rbp-A0h]
  _QWORD v88[2]; // [rsp+90h] [rbp-98h] BYREF
  char v89; // [rsp+A0h] [rbp-88h]
  void *v90[2]; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v91; // [rsp+B8h] [rbp-70h]
  char v92; // [rsp+C0h] [rbp-68h]
  __m128i v93; // [rsp+C8h] [rbp-60h] BYREF
  __int128 v94; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v95; // [rsp+E8h] [rbp-40h]

  v95 = __readfsqword(0x28u);
  mutex = (pthread_mutex_t *)(a1 + 224);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 224)) )
    JUMPOUT(0x511C5);
  v75 = (unsigned __int8 **)&v84;
  v76 = v85;
  v84 = v85;
  std::string::_M_construct<true>();
  v89 = 0;
  if ( *(_BYTE *)(a2 + 64) )
  {
    v86 = (unsigned __int8 *)v88;
    std::string::_M_construct<true>();
    v89 = 1;
  }
  v92 = 0;
  if ( *(_BYTE *)(a2 + 96) )
  {
    v38 = *(_QWORD *)(a2 + 80);
    v39 = *(_QWORD *)(a2 + 72);
    v91 = 0;
    *(_OWORD *)v90 = 0;
    if ( v38 == v39 )
      v73 = 0;
    else
      v73 = operator new(v38 - v39);
    v40 = (_WORD *)v73;
    v91 = v73 + v38 - v39;
    for ( *(__m128i *)v90 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v73, (__m128i)(unsigned __int64)v73);
          v38 != v39;
          *(v40 - 4) = v41 )
    {
      *(_QWORD *)v40 = v40 + 8;
      std::string::_M_construct<true>();
      *((_BYTE *)v40 + 64) = 0;
      if ( *(_BYTE *)(v39 + 64) )
      {
        *((_QWORD *)v40 + 4) = v40 + 24;
        std::string::_M_construct<true>();
        *((_BYTE *)v40 + 64) = 1;
      }
      v41 = *(_WORD *)(v39 + 72);
      v39 += 80;
      v40 += 40;
    }
    v90[1] = v40;
    v92 = 1;
  }
  v5 = a3[1].m128i_i64[1];
  v6 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)&v94 = 0;
  v7 = *(_QWORD **)(a1 + 136);
  v8 = *(const void **)a2;
  v93 = 0;
  *((_QWORD *)&v94 + 1) = v5;
  if ( a3[1].m128i_i64[0] )
  {
    v9 = _mm_loadu_si128(a3);
    *(_QWORD *)&v94 = a3[1].m128i_i64[0];
    v93 = v9;
    a3[1] = 0;
  }
  v78 = a1 + 120;
  v73 = a1 + 128;
  if ( !v7 )
  {
    v30 = (_QWORD *)operator new(0xC8u);
    v12 = (_QWORD *)v73;
    v77 = v30 + 4;
    v30[4] = v30 + 6;
LABEL_54:
    std::string::_M_construct<true>();
    memset(v30 + 8, 0, 0x88u);
    v30[8] = v30 + 10;
    v31 = (const void *)v30[4];
    v32 = v30[5];
    if ( v12 == (_QWORD *)v73 )
    {
      if ( *(_QWORD *)(a1 + 160) )
      {
        v56 = *(_QWORD **)(a1 + 152);
        v57 = v30[5];
        v58 = (const void *)v30[4];
        v59 = v56[5];
        v60 = (const void *)v56[4];
        v79 = v56;
        v61 = std::string::compare(v60, v59, v58, v57);
        v54 = v79;
        if ( v61 < 0 )
        {
LABEL_96:
          v55 = 0;
LABEL_89:
          if ( (_QWORD *)v73 == v54 || v55 )
            goto LABEL_91;
          v12 = v54;
          goto LABEL_106;
        }
      }
    }
    else
    {
      v33 = v30[5];
      v34 = (const void *)v30[4];
      v35 = (_QWORD *)v12[4];
      v80 = v12[5];
      v79 = v35;
      if ( std::string::compare(v34, v33, v35, v80) >= 0 )
      {
        if ( std::string::compare(v79, v80, v31, v32) >= 0 )
        {
LABEL_57:
          std::string::_M_dispose();
          std::string::_M_dispose();
          operator delete(v30, 0xC8u);
          goto LABEL_22;
        }
        if ( *(_QWORD **)(a1 + 152) == v12 )
        {
LABEL_106:
          std::string::compare(v31, v32, (const void *)v12[4], v12[5]);
LABEL_91:
          v12 = v30;
          std::_Rb_tree_insert_and_rebalance();
          ++*(_QWORD *)(a1 + 160);
          goto LABEL_22;
        }
        v49 = (_QWORD *)std::_Rb_tree_increment();
        v50 = v49[5];
        v51 = (const void *)v49[4];
        v79 = v49;
        if ( std::string::compare(v31, v32, v51, v50) < 0 )
        {
          if ( v12[3] )
            goto LABEL_91;
          goto LABEL_106;
        }
        goto LABEL_87;
      }
      if ( v12 == *(_QWORD **)(a1 + 144) )
        goto LABEL_91;
      v62 = (_QWORD *)std::_Rb_tree_decrement();
      v63 = v62[5];
      v64 = (const void *)v62[4];
      v79 = v62;
      if ( std::string::compare(v64, v63, v31, v32) < 0 )
      {
        v54 = v79;
        if ( v79[3] )
          goto LABEL_91;
        goto LABEL_96;
      }
    }
LABEL_87:
    insert_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,ida_mcp::mcp::McpServer::PromptEntry>,std::_Select1st<std::pair<std::string const,ida_mcp::mcp::McpServer::PromptEntry>>,std::less<std::string>,std::allocator<std::pair<std::string const,ida_mcp::mcp::McpServer::PromptEntry>>>::_M_get_insert_unique_pos(
                          v78,
                          v31,
                          v32);
    v12 = insert_unique_pos;
    v54 = v53;
    if ( !v53 )
      goto LABEL_57;
    v55 = insert_unique_pos != nullptr;
    goto LABEL_89;
  }
  v10 = (const void *)v7[4];
  v11 = v7[5];
  v12 = (_QWORD *)(a1 + 128);
  while ( 1 )
  {
    v13 = v6;
    if ( v11 <= v6 )
      v13 = v11;
    if ( !v13 || (v14 = memcmp(v10, v8, v13)) == 0 )
    {
      v15 = v11 - v6;
      if ( v15 > 0x7FFFFFFF )
        goto LABEL_9;
      if ( v15 < (__int64)0xFFFFFFFF80000000LL )
        break;
      v14 = v15;
    }
    if ( v14 < 0 )
      break;
LABEL_9:
    v12 = v7;
    v7 = (_QWORD *)v7[2];
    if ( !v7 )
      goto LABEL_20;
LABEL_10:
    v10 = (const void *)v7[4];
    v11 = v7[5];
  }
  v7 = (_QWORD *)v7[3];
  if ( v7 )
    goto LABEL_10;
LABEL_20:
  if ( v12 == (_QWORD *)v73 || std::string::compare(v8, v6, (const void *)v12[4], v12[5]) < 0 )
  {
    v30 = (_QWORD *)operator new(0xC8u);
    v77 = v30 + 4;
    v30[4] = v30 + 6;
    goto LABEL_54;
  }
LABEL_22:
  std::string::operator=((__int64)(v12 + 8), v75);
  if ( *((_BYTE *)v12 + 128) )
  {
    if ( v89 )
    {
      std::string::operator=((__int64)(v12 + 12), &v86);
    }
    else
    {
      v16 = (_QWORD *)v12[12];
      *((_BYTE *)v12 + 128) = 0;
      if ( v16 != v12 + 14 )
        operator delete(v16, v12[14] + 1LL);
    }
LABEL_26:
    if ( *((_BYTE *)v12 + 160) )
      goto LABEL_27;
LABEL_40:
    if ( v92 )
    {
      v36 = _mm_loadu_si128((const __m128i *)v90);
      v37 = v91;
      *((_BYTE *)v12 + 160) = 1;
      v91 = 0;
      *(__m128i *)(v12 + 17) = v36;
      v12[19] = v37;
      *(_OWORD *)v90 = 0;
    }
  }
  else
  {
    if ( !v89 )
      goto LABEL_26;
    v20 = v86;
    v21 = v12 + 14;
    v22 = v87;
    v12[12] = v12 + 14;
    if ( v20 == (unsigned __int8 *)v88 )
    {
      v65 = v22 + 1;
      if ( (unsigned int)(v22 + 1) >= 8 )
      {
        *v21 = v88[0];
        *(_QWORD *)((char *)v21 + v65 - 8) = *(_QWORD *)((char *)&v88[-1] + v65);
        v66 = (unsigned __int64)(v12 + 15) & 0xFFFFFFFFFFFFFFF8LL;
        v67 = (char *)v21 - v66;
        v68 = (char *)((char *)v88 - v67);
        v69 = ((_DWORD)v67 + v65) & 0xFFFFFFF8;
        if ( v69 >= 8 )
        {
          v70 = v69 & 0xFFFFFFF8;
          v71 = 0;
          do
          {
            v72 = v71;
            v71 += 8;
            *(_QWORD *)(v66 + v72) = *(_QWORD *)&v68[v72];
          }
          while ( v71 < v70 );
        }
      }
      else if ( (v65 & 4) != 0 )
      {
        *(_DWORD *)v21 = v88[0];
        *(_DWORD *)((char *)v21 + v65 - 4) = *(_DWORD *)((char *)&v87 + v65 + 4);
      }
      else if ( (_DWORD)v22 != -1 )
      {
        *(_BYTE *)v21 = v88[0];
        if ( (v65 & 2) != 0 )
          *(_WORD *)((char *)v21 + v65 - 2) = *(_WORD *)((char *)&v87 + v65 + 6);
      }
    }
    else
    {
      v12[12] = v20;
      v12[14] = v88[0];
    }
    v12[13] = v22;
    v86 = (unsigned __int8 *)v88;
    v87 = 0;
    LOBYTE(v88[0]) = 0;
    *((_BYTE *)v12 + 128) = 1;
    if ( !*((_BYTE *)v12 + 160) )
      goto LABEL_40;
LABEL_27:
    v17 = (void **)v12[18];
    v18 = (void **)v12[17];
    if ( v92 )
    {
      v44 = _mm_loadu_si128((const __m128i *)v90);
      v45 = v91;
      v46 = v12[17];
      v91 = 0;
      v47 = v12[19];
      *(__m128i *)(v12 + 17) = v44;
      v12[19] = v45;
      *(_OWORD *)v90 = 0;
      if ( v17 != v18 )
      {
        do
        {
          if ( *(_BYTE *)(v46 + 64) )
          {
            v48 = *(void **)(v46 + 32);
            if ( v48 != (void *)(v46 + 48) )
              operator delete(v48, *(_QWORD *)(v46 + 48) + 1LL);
          }
          if ( *(_QWORD *)v46 != v46 + 16 )
            operator delete(*(void **)v46, *(_QWORD *)(v46 + 16) + 1LL);
          v46 += 80;
        }
        while ( (void **)v46 != v17 );
      }
      if ( v18 )
        operator delete(v18, v47 - (_QWORD)v18);
    }
    else
    {
      *((_BYTE *)v12 + 160) = 0;
      if ( v17 != v18 )
      {
        do
        {
          if ( *((_BYTE *)v18 + 64) )
          {
            v19 = (void **)v18[4];
            if ( v19 != v18 + 6 )
              operator delete(v19, (unsigned __int64)v18[6] + 1);
          }
          if ( *v18 != v18 + 2 )
            operator delete(*v18, (unsigned __int64)v18[2] + 1);
          v18 += 10;
        }
        while ( v18 != v17 );
        v18 = (void **)v12[17];
      }
      if ( v18 )
        operator delete(v18, v12[19] - (_QWORD)v18);
    }
  }
  v23 = v94;
  v82 = nullptr;
  v24 = *((_QWORD *)&v94 + 1);
  v81 = 0;
  if ( (_QWORD)v94 )
  {
    v81 = _mm_loadu_si128(&v93);
    v94 = 0;
  }
  v25 = _mm_load_si128(&v81);
  v26 = _mm_loadu_si128((const __m128i *)(v12 + 21));
  v27 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v12[23];
  v12[23] = v23;
  v28 = v12[24];
  v81 = v26;
  v82 = v27;
  v83 = v28;
  v12[24] = v24;
  *(__m128i *)(v12 + 21) = v25;
  if ( v27 )
  {
    v27(&v81, &v81, 3);
    if ( (_QWORD)v94 )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v94)(&v93, &v93, 3);
  }
  if ( v92 )
  {
    v42 = (char *)v90[1];
    v43 = (char *)v90[0];
    v92 = 0;
    if ( v90[1] != v90[0] )
    {
      do
      {
        if ( v43[64] )
        {
          v43[64] = 0;
          std::string::_M_dispose();
        }
        if ( *(char **)v43 != v43 + 16 )
          operator delete(*(void **)v43, *((_QWORD *)v43 + 2) + 1LL);
        v43 += 80;
      }
      while ( v42 != v43 );
      v43 = (char *)v90[0];
    }
    if ( v43 )
      operator delete(v43, v91 - (_QWORD)v43);
  }
  if ( v89 )
  {
    v89 = 0;
    std::string::_M_dispose();
  }
  if ( v84 != v76 )
    operator delete(v84, v85[0] + 1LL);
  return pthread_mutex_unlock(mutex);
}

