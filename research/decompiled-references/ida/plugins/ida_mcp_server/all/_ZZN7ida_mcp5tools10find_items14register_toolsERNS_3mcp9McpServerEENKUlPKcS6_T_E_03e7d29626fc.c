unsigned __int64 __fastcall ZZN7ida_mcp5tools10find_items14register_toolsERNS_3mcp9McpServerEENKUlPKcS6_T_E_clIPFN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNSB_14adl_serializerESE_IhSaIhEEvEERKSO_EEEDaS6_S6_S7_(
        void ***a1,
        const char *a2,
        const char *a3,
        __int64 a4)
{
  void **v5; // rcx
  char v6; // bl
  __int64 v7; // rax
  void *v8; // rcx
  __m128i *v9; // r15
  int *v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  char v18; // si
  __m128i *v19; // rax
  __m128i si128; // xmm0
  void **v22; // r15
  _QWORD *v23; // rax
  char *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdi
  _QWORD *v27; // rax
  char *v28; // rdx
  char *v29; // rcx
  char *v30; // r15
  __m128i *v31; // rax
  __int64 v32; // rax
  const void **v33; // r8
  __m128i *v34; // r15
  void *v35; // rdx
  __int64 v36; // rax
  char *v37; // rcx
  const void *v38; // rsi
  void *v39; // rdx
  char *v40; // rax
  __int64 v41; // rax
  void **v42; // rax
  void *v43; // rdx
  __m128i *v44; // rax
  void *v45; // rdx
  _BYTE *m128i_i8; // rdi
  size_t v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  void *v51[2]; // [rsp+0h] [rbp-158h] BYREF
  int v52[2]; // [rsp+10h] [rbp-148h]
  void *src; // [rsp+18h] [rbp-140h]
  __int64 v54; // [rsp+28h] [rbp-130h] BYREF
  char v55; // [rsp+30h] [rbp-128h]
  __m128i *v56; // [rsp+38h] [rbp-120h]
  __m128i v57; // [rsp+40h] [rbp-118h]
  _QWORD v58[2]; // [rsp+50h] [rbp-108h] BYREF
  __m128i v59; // [rsp+60h] [rbp-F8h]
  void *v60; // [rsp+70h] [rbp-E8h]
  __int64 v61; // [rsp+78h] [rbp-E0h]
  _QWORD v62[2]; // [rsp+80h] [rbp-D8h] BYREF
  void *v63; // [rsp+90h] [rbp-C8h]
  __int64 v64; // [rsp+98h] [rbp-C0h]
  _QWORD v65[2]; // [rsp+A0h] [rbp-B8h] BYREF
  char v66; // [rsp+B0h] [rbp-A8h]
  __m128i *v67; // [rsp+B8h] [rbp-A0h]
  char v68; // [rsp+D0h] [rbp-88h]
  void *v69; // [rsp+D8h] [rbp-80h]
  __int64 v70; // [rsp+E8h] [rbp-70h] BYREF
  char v71; // [rsp+F8h] [rbp-60h]
  char v72; // [rsp+108h] [rbp-50h]
  unsigned __int64 v73; // [rsp+118h] [rbp-40h]

  *(_QWORD *)v52 = a4;
  v73 = __readfsqword(0x28u);
  v60 = v62;
  v61 = 0;
  LOBYTE(v62[0]) = 0;
  v63 = v65;
  v64 = 0;
  LOBYTE(v65[0]) = 0;
  v66 = 0;
  v67 = nullptr;
  v68 = 0;
  v72 = 0;
  strlen(a2);
  std::string::_M_replace();
  strlen(a3);
  std::string::_M_replace();
  v56 = nullptr;
  v5 = *a1;
  v55 = *(_BYTE *)*a1;
  v6 = v55;
  switch ( v55 )
  {
    case 1:
      v51[0] = v5[1];
      v7 = operator new(0x30u);
      v8 = v51[0];
      *(_QWORD *)(v7 + 16) = 0;
      v9 = (__m128i *)v7;
      *(_DWORD *)(v7 + 8) = 0;
      v10 = *((int **)v8 + 2);
      *(_QWORD *)(v7 + 24) = v7 + 8;
      *(_QWORD *)(v7 + 32) = v7 + 8;
      *(_QWORD *)(v7 + 40) = 0;
      if ( v10 )
      {
        v11 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                v10,
                v7 + 8);
        v12 = v51[0];
        v13 = v11;
        do
        {
          v14 = v11;
          v11 = *(_QWORD *)(v11 + 16);
        }
        while ( v11 );
        v9[1].m128i_i64[1] = v14;
        v15 = v13;
        do
        {
          v16 = v15;
          v15 = *(_QWORD *)(v15 + 24);
        }
        while ( v15 );
        v17 = v12[5];
        v9[2].m128i_i64[0] = v16;
        v9[1].m128i_i64[0] = v13;
        v9[2].m128i_i64[1] = v17;
      }
      goto LABEL_8;
    case 2:
      v22 = (void **)v5[1];
      v23 = (_QWORD *)operator new(0x18u);
      v24 = (char *)((_BYTE *)v22[1] - (_BYTE *)*v22);
      src = v23;
      v23[2] = 0;
      *(_OWORD *)v23 = 0;
      if ( v24 )
      {
        v51[0] = v24;
        v25 = operator new((unsigned __int64)v24);
        v24 = (char *)v51[0];
        v26 = v25;
      }
      else
      {
        v26 = 0;
      }
      v27 = src;
      *(__m128i *)src = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
      v27[2] = &v24[v26];
      v28 = (char *)v22[1];
      v29 = (char *)*v22;
      v54 = v26;
      v51[0] = v28;
      v57 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)&v54);
      if ( v28 != v29 )
      {
        v30 = v29;
        do
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v30 += 16;
          v26 = v54 + 16;
          v54 += 16;
        }
        while ( v51[0] != v30 );
      }
      v31 = (__m128i *)src;
      *((_QWORD *)src + 1) = v26;
      v56 = v31;
      goto LABEL_9;
    case 3:
      v42 = (void **)v5[1];
      v43 = v42[1];
      src = *v42;
      v51[0] = v43;
      v44 = (__m128i *)operator new(0x20u);
      v45 = v51[0];
      m128i_i8 = v44[1].m128i_i8;
      v9 = v44;
      v44->m128i_i64[0] = (__int64)v44[1].m128i_i64;
      v57.m128i_i64[0] = (__int64)v45;
      if ( (unsigned __int64)v45 <= 0xF )
      {
        v47 = (size_t)v45 + 1;
        if ( v45 )
        {
LABEL_37:
          memcpy(m128i_i8, src, v47);
          v48 = v57.m128i_i64[0];
          goto LABEL_38;
        }
        goto LABEL_41;
      }
      v49 = std::string::_M_create();
      v9->m128i_i64[0] = v49;
      m128i_i8 = (_BYTE *)v49;
      v50 = v57.m128i_i64[0];
      v9[1].m128i_i64[0] = v57.m128i_i64[0];
      v47 = v50 + 1;
      if ( !v50 )
      {
LABEL_41:
        *m128i_i8 = *(_BYTE *)src;
        v48 = v57.m128i_i64[0];
        goto LABEL_38;
      }
      v48 = -1;
      if ( v47 )
        goto LABEL_37;
LABEL_38:
      v9->m128i_i64[1] = v48;
LABEL_8:
      v56 = v9;
LABEL_9:
      v18 = v66;
      v66 = v6;
      v19 = v67;
      *(__m128 *)v51 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
      v55 = v18;
      v67 = v56;
      v56 = v19;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      si128 = _mm_load_si128((const __m128i *)v51);
      v58[1] = 0;
      v58[0] = *(_QWORD *)v52;
      v59 = si128;
      ida_mcp::mcp::McpServer::register_tool();
      if ( v59.m128i_i64[0] )
        ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v59.m128i_i64[0])(v58, v58, 3);
      if ( v72 && v71 && v69 != &v70 )
        operator delete(v69, v70 + 1);
      if ( v68 )
      {
        v68 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v63 != v65 )
        operator delete(v63, v65[0] + 1LL);
      if ( v60 != v62 )
        operator delete(v60, v62[0] + 1LL);
      return v73 - __readfsqword(0x28u);
    case 4:
      LOBYTE(v56) = *((_BYTE *)v5 + 8);
      goto LABEL_9;
    case 5:
    case 6:
      v56 = (__m128i *)v5[1];
      goto LABEL_9;
    case 7:
      v56 = (__m128i *)v5[1];
      goto LABEL_9;
    case 8:
      v51[0] = v5[1];
      v32 = operator new(0x28u);
      v33 = (const void **)v51[0];
      v34 = (__m128i *)v32;
      v35 = (void *)(*((_QWORD *)v51[0] + 1) - *(_QWORD *)v51[0]);
      *(_QWORD *)(v32 + 16) = 0;
      *(_OWORD *)v32 = 0;
      if ( v35 )
      {
        src = v33;
        v51[0] = v35;
        v36 = operator new((unsigned __int64)v35);
        v35 = v51[0];
        v33 = (const void **)src;
        v37 = (char *)v36;
      }
      else
      {
        v37 = nullptr;
      }
      v34[1].m128i_i64[0] = (__int64)v35 + (_QWORD)v37;
      *v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v37, (__m128i)(unsigned __int64)v37);
      v38 = *v33;
      v39 = (void *)((_BYTE *)v33[1] - (_BYTE *)*v33);
      if ( (__int64)v39 > 0 )
      {
        src = v33;
        v51[0] = v39;
        v40 = (char *)memcpy(v37, v38, (size_t)v39);
        v33 = (const void **)src;
        v37 = &v40[(unsigned __int64)v51[0]];
      }
      v41 = (__int64)v33[3];
      v34->m128i_i64[1] = (__int64)v37;
      v34[1].m128i_i64[1] = v41;
      v34[2].m128i_i8[0] = *((_BYTE *)v33 + 32);
      v56 = v34;
      goto LABEL_9;
    default:
      goto LABEL_9;
  }
}

