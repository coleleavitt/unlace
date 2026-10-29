int __fastcall ida_mcp::mcp::McpServer::register_tool(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r14
  size_t v7; // r15
  const void *v8; // r12
  __m128i v9; // xmm0
  __int64 v10; // rax
  const void *v11; // rdi
  size_t v12; // rbp
  _QWORD *v13; // rbx
  size_t v14; // rdx
  int v15; // eax
  __int64 v16; // rbp
  double *v17; // rdi
  size_t v18; // xmm0_8
  double v19; // rdx
  __m128 v20; // xmm0
  __int8 v21; // al
  __int64 v22; // xmm0_8^8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  void (__fastcall *v27)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v28; // rdx
  __m128i v30; // xmm0
  __int16 v31; // ax
  _QWORD *v32; // rbp
  const void *v33; // r14
  size_t v34; // r12
  __int16 v35; // ax
  __int64 v36; // xmm0_8^8
  __int8 v37; // al
  _QWORD *insert_unique_pos; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  bool v41; // al
  int v42; // eax
  __int64 v43; // [rsp+8h] [rbp-180h]
  pthread_mutex_t *mutex; // [rsp+18h] [rbp-170h]
  const void *v45; // [rsp+40h] [rbp-148h]
  __int64 v46; // [rsp+40h] [rbp-148h]
  __int64 v47; // [rsp+40h] [rbp-148h]
  __int64 v48; // [rsp+40h] [rbp-148h]
  size_t v49; // [rsp+48h] [rbp-140h]
  __m128i v50; // [rsp+60h] [rbp-128h] BYREF
  void (__fastcall *v51)(_QWORD, _QWORD, _QWORD); // [rsp+70h] [rbp-118h]
  __int64 v52; // [rsp+78h] [rbp-110h]
  void *v53; // [rsp+80h] [rbp-108h] BYREF
  _QWORD v54[2]; // [rsp+90h] [rbp-F8h] BYREF
  void *v55; // [rsp+A0h] [rbp-E8h] BYREF
  size_t n; // [rsp+A8h] [rbp-E0h]
  double v57[2]; // [rsp+B0h] [rbp-D8h] BYREF
  __m128i v58; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i v59; // [rsp+D0h] [rbp-B8h] BYREF
  char v60; // [rsp+E0h] [rbp-A8h]
  void *v61; // [rsp+E8h] [rbp-A0h]
  char v62; // [rsp+F8h] [rbp-90h] BYREF
  char v63; // [rsp+108h] [rbp-80h]
  __int16 v64; // [rsp+110h] [rbp-78h]
  __int16 v65; // [rsp+112h] [rbp-76h]
  __int16 v66; // [rsp+114h] [rbp-74h]
  __int16 v67; // [rsp+116h] [rbp-72h]
  char v68; // [rsp+118h] [rbp-70h]
  __m128i v69; // [rsp+120h] [rbp-68h] BYREF
  __int128 v70; // [rsp+130h] [rbp-58h]
  unsigned __int64 v71; // [rsp+148h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  mutex = (pthread_mutex_t *)(a1 + 224);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 224)) )
    JUMPOUT(0x515E1);
  v53 = v54;
  std::string::_M_construct<true>();
  v55 = v57;
  std::string::_M_construct<true>();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v60 = 0;
  if ( *(_BYTE *)(a2 + 96) )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v60 = 1;
  }
  v68 = 0;
  if ( *(_BYTE *)(a2 + 152) )
  {
    v63 = 0;
    if ( *(_BYTE *)(a2 + 136) )
    {
      v61 = &v62;
      std::string::_M_construct<true>();
      v63 = 1;
    }
    v35 = *(_WORD *)(a2 + 144);
    v68 = 1;
    v64 = v35;
    v65 = *(_WORD *)(a2 + 146);
    v66 = *(_WORD *)(a2 + 148);
    v67 = *(_WORD *)(a2 + 150);
  }
  v5 = a3[1].m128i_i64[1];
  v6 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)&v70 = 0;
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(const void **)a2;
  v69 = 0;
  *((_QWORD *)&v70 + 1) = v5;
  if ( !a3[1].m128i_i64[0] )
  {
    v10 = a1 + 8;
    v43 = a1 + 8;
    if ( v6 )
      goto LABEL_7;
LABEL_63:
    v32 = (_QWORD *)operator new(0x100u);
    v13 = (_QWORD *)v43;
    v32[4] = v32 + 6;
LABEL_55:
    std::string::_M_construct<true>();
    memset(v32 + 8, 0, 0xC0u);
    v32[8] = v32 + 10;
    v33 = (const void *)v32[4];
    v34 = v32[5];
    v32[12] = v32 + 14;
    if ( (_QWORD *)v43 == v13 )
    {
      if ( *(_QWORD *)(a1 + 40) )
      {
        v47 = *(_QWORD *)(a1 + 32);
        v42 = std::string::compare(*(const void **)(v47 + 32), *(_QWORD *)(v47 + 40), v33, v34);
        v40 = v47;
        if ( v42 < 0 )
        {
LABEL_84:
          v41 = 0;
LABEL_73:
          if ( v40 == v43 || v41 )
            goto LABEL_75;
          v13 = (_QWORD *)v40;
          goto LABEL_90;
        }
      }
    }
    else
    {
      v49 = v13[5];
      v45 = (const void *)v13[4];
      if ( std::string::compare(v33, v34, v45, v49) >= 0 )
      {
        if ( std::string::compare(v45, v49, v33, v34) >= 0 )
        {
LABEL_58:
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          std::string::_M_dispose();
          std::string::_M_dispose();
          std::string::_M_dispose();
          operator delete(v32, 0x100u);
          goto LABEL_21;
        }
        if ( *(_QWORD **)(a1 + 32) == v13 )
        {
LABEL_90:
          std::string::compare(v33, v34, (const void *)v13[4], v13[5]);
LABEL_75:
          v13 = v32;
          std::_Rb_tree_insert_and_rebalance();
          ++*(_QWORD *)(a1 + 40);
          goto LABEL_21;
        }
        v46 = std::_Rb_tree_increment();
        if ( std::string::compare(v33, v34, *(const void **)(v46 + 32), *(_QWORD *)(v46 + 40)) < 0 )
        {
          if ( v13[3] )
            goto LABEL_75;
          goto LABEL_90;
        }
        goto LABEL_71;
      }
      if ( v13 == *(_QWORD **)(a1 + 24) )
        goto LABEL_75;
      v48 = std::_Rb_tree_decrement();
      if ( std::string::compare(*(const void **)(v48 + 32), *(_QWORD *)(v48 + 40), v33, v34) < 0 )
      {
        v40 = v48;
        if ( *(_QWORD *)(v48 + 24) )
          goto LABEL_75;
        goto LABEL_84;
      }
    }
LABEL_71:
    insert_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,ida_mcp::mcp::McpServer::ToolEntry>,std::_Select1st<std::pair<std::string const,ida_mcp::mcp::McpServer::ToolEntry>>,std::less<std::string>,std::allocator<std::pair<std::string const,ida_mcp::mcp::McpServer::ToolEntry>>>::_M_get_insert_unique_pos(
                          a1,
                          v33,
                          v34);
    v13 = insert_unique_pos;
    v40 = v39;
    if ( !v39 )
      goto LABEL_58;
    v41 = insert_unique_pos != nullptr;
    goto LABEL_73;
  }
  v9 = _mm_loadu_si128(a3);
  *(_QWORD *)&v70 = a3[1].m128i_i64[0];
  v10 = a1 + 8;
  v43 = a1 + 8;
  v69 = v9;
  a3[1] = 0;
  if ( !v6 )
    goto LABEL_63;
LABEL_7:
  v11 = (const void *)v6[4];
  v12 = v6[5];
  v13 = (_QWORD *)v10;
  while ( 1 )
  {
    v14 = v12;
    if ( v7 <= v12 )
      v14 = v7;
    if ( !v14 || (v15 = memcmp(v11, v8, v14)) == 0 )
    {
      v16 = v12 - v7;
      if ( v16 > 0x7FFFFFFF )
        goto LABEL_8;
      if ( v16 < (__int64)0xFFFFFFFF80000000LL )
        break;
      v15 = v16;
    }
    if ( v15 < 0 )
      break;
LABEL_8:
    v13 = v6;
    v6 = (_QWORD *)v6[2];
    if ( !v6 )
      goto LABEL_19;
LABEL_9:
    v11 = (const void *)v6[4];
    v12 = v6[5];
  }
  v6 = (_QWORD *)v6[3];
  if ( v6 )
    goto LABEL_9;
LABEL_19:
  if ( (_QWORD *)v43 == v13 || std::string::compare(v8, v7, (const void *)v13[4], v13[5]) < 0 )
  {
    v32 = (_QWORD *)operator new(0x100u);
    v32[4] = v32 + 6;
    goto LABEL_55;
  }
LABEL_21:
  std::string::operator=((__int64)(v13 + 8), (unsigned __int8 **)&v53);
  v17 = (double *)v13[12];
  v18 = n;
  if ( v17 == (double *)(v13 + 14) )
  {
    if ( v55 != v57 )
    {
      v13[12] = v55;
      *(__m128 *)(v13 + 13) = _mm_loadh_ps(v57);
      goto LABEL_66;
    }
    goto LABEL_76;
  }
  if ( v55 == v57 )
  {
LABEL_76:
    if ( &v55 == v13 + 12 )
    {
      v17 = (double *)v55;
    }
    else
    {
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)v17 = LOBYTE(v57[0]);
        else
          memcpy(v17, v57, n);
        v18 = n;
        v17 = (double *)v13[12];
      }
      v13[13] = v18;
      *((_BYTE *)v17 + v18) = 0;
      v17 = (double *)v55;
    }
    goto LABEL_25;
  }
  v19 = *((double *)v13 + 14);
  v20 = _mm_loadh_ps(v57);
  v13[12] = v55;
  *(__m128 *)(v13 + 13) = v20;
  if ( v17 )
  {
    v55 = v17;
    v57[0] = v19;
    goto LABEL_25;
  }
LABEL_66:
  v55 = v57;
  v17 = v57;
LABEL_25:
  n = 0;
  *(_BYTE *)v17 = 0;
  v21 = v58.m128i_i8[0];
  v22 = _mm_load_si128(&v58).m128i_i64[1];
  v58.m128i_i8[0] = 0;
  *((_BYTE *)v13 + 128) = v21;
  v58.m128i_i64[1] = 0;
  v13[17] = v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( *((_BYTE *)v13 + 160) )
  {
    if ( v60 )
    {
      v36 = _mm_load_si128(&v59).m128i_i64[1];
      v37 = v59.m128i_i8[0];
      v59.m128i_i8[0] = 0;
      v59.m128i_i64[1] = 0;
      *((_BYTE *)v13 + 144) = v37;
      v13[19] = v36;
    }
    else
    {
      *((_BYTE *)v13 + 160) = 0;
    }
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  else if ( v60 )
  {
    v30 = _mm_load_si128(&v59);
    *((_BYTE *)v13 + 160) = 1;
    v59.m128i_i8[0] = 0;
    v59.m128i_i64[1] = 0;
    *((__m128i *)v13 + 9) = v30;
  }
  if ( *((_BYTE *)v13 + 216) )
  {
    if ( v68 )
    {
      std::_Optional_payload_base<std::string>::_M_move_assign();
      *((_WORD *)v13 + 104) = v64;
      *((_WORD *)v13 + 105) = v65;
      *((_WORD *)v13 + 106) = v66;
      *((_WORD *)v13 + 107) = v67;
    }
    else
    {
      *((_BYTE *)v13 + 216) = 0;
      if ( *((_BYTE *)v13 + 200) )
      {
        *((_BYTE *)v13 + 200) = 0;
        std::string::_M_dispose();
      }
    }
  }
  else if ( v68 )
  {
    *((_BYTE *)v13 + 200) = 0;
    if ( v63 )
    {
      std::string::basic_string();
      *((_BYTE *)v13 + 200) = 1;
    }
    v31 = v64;
    *((_BYTE *)v13 + 216) = 1;
    *((_WORD *)v13 + 104) = v31;
    *((_WORD *)v13 + 105) = v65;
    *((_WORD *)v13 + 106) = v66;
    *((_WORD *)v13 + 107) = v67;
  }
  v23 = v70;
  v51 = nullptr;
  v24 = *((_QWORD *)&v70 + 1);
  v50 = 0;
  if ( (_QWORD)v70 )
  {
    v50 = _mm_load_si128(&v69);
    v70 = 0;
  }
  v25 = _mm_load_si128(&v50);
  v26 = _mm_loadu_si128((const __m128i *)v13 + 14);
  v27 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v13[30];
  v13[30] = v23;
  v28 = v13[31];
  v50 = v26;
  v51 = v27;
  v52 = v28;
  v13[31] = v24;
  *((__m128i *)v13 + 14) = v25;
  if ( v27 )
  {
    v27(&v50, &v50, 3);
    if ( (_QWORD)v70 )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v70)(&v69, &v69, 3);
  }
  if ( v68 )
  {
    v68 = 0;
    if ( v63 )
    {
      v63 = 0;
      std::string::_M_dispose();
    }
  }
  if ( v60 )
  {
    v60 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v55 != v57 )
    operator delete(v55, *(_QWORD *)&v57[0] + 1LL);
  if ( v53 != v54 )
    operator delete(v53, v54[0] + 1LL);
  return pthread_mutex_unlock(mutex);
}

