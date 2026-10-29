unsigned __int64 __fastcall std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>(
        __int64 a1,
        unsigned __int8 *a2)
{
  __m128i *v2; // r14
  const __m128i *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rax
  const __m128i *v13; // rax
  __int64 v14; // rdx
  __m128i v15; // xmm0
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v19; // rax
  __int8 *v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  char *v23; // rcx
  char *v24; // rax
  __int8 v25; // al
  __int64 v26; // rax
  int *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  char **v35; // rcx
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdi
  char *v39; // rsi
  char *v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // rax
  _BYTE *v43; // rdi
  size_t v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __m128i *v47; // [rsp+8h] [rbp-80h]
  _QWORD *v48; // [rsp+8h] [rbp-80h]
  char **v49; // [rsp+8h] [rbp-80h]
  void *v50; // [rsp+8h] [rbp-80h]
  char *v51; // [rsp+8h] [rbp-80h]
  _QWORD *v52; // [rsp+8h] [rbp-80h]
  __int8 *v53; // [rsp+10h] [rbp-78h]
  int v54[2]; // [rsp+10h] [rbp-78h]
  int v55[2]; // [rsp+10h] [rbp-78h]
  int v56[2]; // [rsp+10h] [rbp-78h]
  int v57[2]; // [rsp+10h] [rbp-78h]
  int v58[2]; // [rsp+10h] [rbp-78h]
  __int8 *srcb; // [rsp+18h] [rbp-70h]
  __int8 *srcc; // [rsp+18h] [rbp-70h]
  __m128i *src; // [rsp+18h] [rbp-70h]
  _BYTE *srca; // [rsp+18h] [rbp-70h]
  __int64 v63; // [rsp+28h] [rbp-60h] BYREF
  __m128i v64; // [rsp+30h] [rbp-58h]
  unsigned __int64 v65; // [rsp+48h] [rbp-40h]

  v2 = *(__m128i **)a1;
  v65 = __readfsqword(0x28u);
  v3 = *(const __m128i **)(a1 + 8);
  v4 = v3 - v2;
  if ( v4 == 0x7FFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v5 = 1;
  if ( v4 )
    v5 = (__int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v2) >> 4;
  v7 = v4 + v5;
  if ( v7 > 0x7FFFFFFFFFFFFFFLL )
    v7 = 0x7FFFFFFFFFFFFFFLL;
  v8 = 16 * v7;
  v9 = operator new(v8);
  v10 = v9 + (char *)v3 - (char *)v2;
  v11 = v9;
  v12 = *a2;
  *(_QWORD *)(v10 + 8) = 0;
  *(_BYTE *)v10 = v12;
  switch ( v12 )
  {
    case 1LL:
      *(_QWORD *)v56 = *((_QWORD *)a2 + 1);
      v26 = operator new(0x30u);
      *(_QWORD *)(v26 + 16) = 0;
      v48 = (_QWORD *)v26;
      v27 = *(int **)(*(_QWORD *)v56 + 16LL);
      *(_DWORD *)(v26 + 8) = 0;
      *(_QWORD *)(v26 + 24) = v26 + 8;
      *(_QWORD *)(v26 + 32) = v26 + 8;
      *(_QWORD *)(v26 + 40) = 0;
      if ( v27 )
      {
        v28 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                v27,
                v26 + 8);
        v29 = v28;
        do
        {
          v30 = v28;
          v28 = *(_QWORD *)(v28 + 16);
        }
        while ( v28 );
        v48[3] = v30;
        v31 = v29;
        do
        {
          v32 = v31;
          v31 = *(_QWORD *)(v31 + 24);
        }
        while ( v31 );
        v33 = *(_QWORD *)(*(_QWORD *)v56 + 40LL);
        v48[4] = v32;
        v48[5] = v33;
        v48[2] = v29;
      }
      *(_QWORD *)(v10 + 8) = v48;
      goto LABEL_8;
    case 2LL:
      v49 = *((char ***)a2 + 1);
      v34 = operator new(0x18u);
      v35 = v49;
      src = (__m128i *)v34;
      v36 = v49[1] - *v49;
      *(_QWORD *)(v34 + 16) = 0;
      *(_OWORD *)v34 = 0;
      if ( v36 )
      {
        *(_QWORD *)v57 = v49;
        v50 = (void *)v36;
        v37 = operator new(v36);
        v36 = (unsigned __int64)v50;
        v35 = *(char ***)v57;
        v38 = v37;
      }
      else
      {
        v38 = 0;
      }
      *src = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v38, (__m128i)(unsigned __int64)v38);
      src[1].m128i_i64[0] = v38 + v36;
      v39 = v35[1];
      v40 = *v35;
      v63 = v38;
      v64 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v38, (__m128i)(unsigned __int64)&v63);
      if ( v39 != v40 )
      {
        do
        {
          v51 = v40;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v38 = v63 + 16;
          v40 = v51 + 16;
          v63 += 16;
        }
        while ( v39 != v51 + 16 );
      }
      src->m128i_i64[1] = v38;
      *(_QWORD *)(v10 + 8) = src;
      goto LABEL_8;
    case 3LL:
      v41 = *((_QWORD *)a2 + 1);
      srca = *(_BYTE **)v41;
      *(_QWORD *)v58 = *(_QWORD *)(v41 + 8);
      v42 = (_QWORD *)operator new(0x20u);
      v43 = v42 + 2;
      v52 = v42;
      *v42 = v42 + 2;
      v64.m128i_i64[0] = *(_QWORD *)v58;
      if ( *(_QWORD *)v58 <= 0xFu )
      {
        v44 = *(_QWORD *)v58 + 1LL;
        if ( *(_QWORD *)v58 )
        {
LABEL_35:
          memcpy(v43, srca, v44);
          v45 = v64.m128i_i64[0];
          goto LABEL_36;
        }
        goto LABEL_39;
      }
      v43 = (_BYTE *)std::string::_M_create();
      *v52 = v43;
      v46 = v64.m128i_i64[0];
      v52[2] = v64.m128i_i64[0];
      v44 = v46 + 1;
      if ( !v46 )
      {
LABEL_39:
        *v43 = *srca;
        v45 = v64.m128i_i64[0];
        goto LABEL_36;
      }
      v45 = -1;
      if ( v44 )
        goto LABEL_35;
LABEL_36:
      v52[1] = v45;
      *(_QWORD *)(v10 + 8) = v52;
LABEL_8:
      v13 = v2;
      v14 = v11;
      if ( v3 == v2 )
      {
LABEL_19:
        v16 = v11;
      }
      else
      {
        do
        {
LABEL_9:
          v15 = _mm_loadu_si128(v13++);
          v14 += 16;
          *(__m128i *)(v14 - 16) = v15;
        }
        while ( v3 != v13 );
        v16 = v11 + (char *)v3 - (char *)v2;
      }
      v17 = v16 + 16;
      if ( v2 )
        operator delete(v2, *(_QWORD *)(a1 + 16) - (_QWORD)v2);
      *(_QWORD *)a1 = v11;
      *(_QWORD *)(a1 + 8) = v17;
      *(_QWORD *)(a1 + 16) = v8 + v11;
      return v65 - __readfsqword(0x28u);
    case 4LL:
      *(_BYTE *)(v10 + 8) = a2[8];
      goto LABEL_8;
    case 5LL:
    case 6LL:
      *(_QWORD *)(v10 + 8) = *((_QWORD *)a2 + 1);
      goto LABEL_8;
    case 7LL:
      *(_QWORD *)(v10 + 8) = *((_QWORD *)a2 + 1);
      goto LABEL_8;
    case 8LL:
      v53 = *((__int8 **)a2 + 1);
      v19 = operator new(0x28u);
      v20 = v53;
      v47 = (__m128i *)v19;
      v21 = *((_QWORD *)v53 + 1) - *(_QWORD *)v53;
      *(_QWORD *)(v19 + 16) = 0;
      *(_OWORD *)v19 = 0;
      if ( v21 )
      {
        srcb = v53;
        *(_QWORD *)v54 = v21;
        v22 = operator new(v21);
        v21 = *(_QWORD *)v54;
        v20 = srcb;
        v23 = (char *)v22;
      }
      else
      {
        v23 = nullptr;
      }
      v47[1].m128i_i64[0] = (__int64)&v23[v21];
      *v47 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
      if ( (__int64)(*((_QWORD *)v20 + 1) - *(_QWORD *)v20) > 0 )
      {
        srcc = v20;
        *(_QWORD *)v55 = *((_QWORD *)v20 + 1) - *(_QWORD *)v20;
        v24 = (char *)memcpy(v23, *(const void **)v20, *(size_t *)v55);
        v20 = srcc;
        v23 = &v24[*(_QWORD *)v55];
      }
      v14 = v11;
      v47[1].m128i_i64[1] = *((_QWORD *)v20 + 3);
      v25 = v20[32];
      v47->m128i_i64[1] = (__int64)v23;
      v47[2].m128i_i8[0] = v25;
      v13 = v2;
      *(_QWORD *)(v10 + 8) = v47;
      if ( v3 == v2 )
        goto LABEL_19;
      goto LABEL_9;
    default:
      goto LABEL_8;
  }
}

