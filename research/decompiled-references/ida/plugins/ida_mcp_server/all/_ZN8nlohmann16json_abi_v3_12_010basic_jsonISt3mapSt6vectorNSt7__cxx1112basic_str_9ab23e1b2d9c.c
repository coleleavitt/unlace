// Alternative name is '_ZN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES3_IhSaIhEEvEC2ERKSD_'
unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        __int64 a1,
        unsigned __int8 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v14; // rax
  _QWORD *v15; // r8
  __m128i *v16; // rbx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  char *v19; // rcx
  char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rdx
  __m128i *v24; // r15
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rax
  _BYTE *v32; // r15
  _QWORD *v33; // rax
  _BYTE *v34; // rdi
  size_t v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // [rsp+0h] [rbp-68h]
  _QWORD *v40; // [rsp+0h] [rbp-68h]
  unsigned __int64 v41; // [rsp+0h] [rbp-68h]
  size_t v42; // [rsp+0h] [rbp-68h]
  __int64 *v43; // [rsp+0h] [rbp-68h]
  unsigned __int64 v44; // [rsp+0h] [rbp-68h]
  _QWORD *v45; // [rsp+8h] [rbp-60h]
  _QWORD *v46; // [rsp+8h] [rbp-60h]
  __int64 v47; // [rsp+18h] [rbp-50h] BYREF
  __m128i i; // [rsp+20h] [rbp-48h]
  unsigned __int64 v49; // [rsp+38h] [rbp-30h]

  v49 = __readfsqword(0x28u);
  v2 = *a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)a1 = v2;
  switch ( v2 )
  {
    case 1LL:
      v39 = *((_QWORD *)a2 + 1);
      v4 = operator new(0x30u);
      *(_QWORD *)(v4 + 16) = 0;
      v5 = (_QWORD *)v4;
      *(_DWORD *)(v4 + 8) = 0;
      v6 = *(_QWORD *)(v39 + 16);
      *(_QWORD *)(v4 + 24) = v4 + 8;
      *(_QWORD *)(v4 + 32) = v4 + 8;
      *(_QWORD *)(v4 + 40) = 0;
      if ( v6 )
      {
        v7 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>();
        v8 = v7;
        do
        {
          v9 = v7;
          v7 = *(_QWORD *)(v7 + 16);
        }
        while ( v7 );
        v5[3] = v9;
        v10 = v8;
        do
        {
          v11 = v10;
          v10 = *(_QWORD *)(v10 + 24);
        }
        while ( v10 );
        v12 = *(_QWORD *)(v39 + 40);
        v5[4] = v11;
        v5[2] = v8;
        v5[5] = v12;
      }
      goto LABEL_8;
    case 2LL:
      v43 = *((__int64 **)a2 + 1);
      v22 = operator new(0x18u);
      v23 = v43;
      v24 = (__m128i *)v22;
      v25 = v43[1] - *v43;
      *(_QWORD *)(v22 + 16) = 0;
      *(_OWORD *)v22 = 0;
      if ( v25 )
      {
        v26 = operator new(v25);
        v23 = v43;
        v27 = v26;
      }
      else
      {
        v27 = 0;
      }
      v24[1].m128i_i64[0] = v27 + v25;
      *v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)(unsigned __int64)v27);
      v28 = v23[1];
      v29 = *v23;
      v47 = v27;
      v30 = v28;
      for ( i = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)(unsigned __int64)&v47); v30 != v29; v47 += 16 )
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v29 += 16;
        v27 = v47 + 16;
      }
      v24->m128i_i64[1] = v27;
      *(_QWORD *)(a1 + 8) = v24;
      return v49 - __readfsqword(0x28u);
    case 3LL:
      v31 = *((_QWORD *)a2 + 1);
      v32 = *(_BYTE **)v31;
      v44 = *(_QWORD *)(v31 + 8);
      v33 = (_QWORD *)operator new(0x20u);
      v34 = v33 + 2;
      v5 = v33;
      *v33 = v33 + 2;
      i.m128i_i64[0] = v44;
      if ( v44 <= 0xF )
      {
        v35 = v44 + 1;
        if ( v44 )
        {
LABEL_24:
          memcpy(v34, v32, v35);
          v36 = i.m128i_i64[0];
          goto LABEL_25;
        }
        goto LABEL_28;
      }
      v37 = std::string::_M_create();
      *v5 = v37;
      v34 = (_BYTE *)v37;
      v38 = i.m128i_i64[0];
      v5[2] = i.m128i_i64[0];
      v35 = v38 + 1;
      if ( !v38 )
      {
LABEL_28:
        *v34 = *v32;
        v36 = i.m128i_i64[0];
        goto LABEL_25;
      }
      v36 = -1;
      if ( v35 )
        goto LABEL_24;
LABEL_25:
      v5[1] = v36;
LABEL_8:
      *(_QWORD *)(a1 + 8) = v5;
      return v49 - __readfsqword(0x28u);
    case 4LL:
      *(_BYTE *)(a1 + 8) = a2[8];
      return v49 - __readfsqword(0x28u);
    case 5LL:
    case 6LL:
      *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 1);
      return v49 - __readfsqword(0x28u);
    case 7LL:
      *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 1);
      return v49 - __readfsqword(0x28u);
    case 8LL:
      v40 = *((_QWORD **)a2 + 1);
      v14 = operator new(0x28u);
      v15 = v40;
      v16 = (__m128i *)v14;
      v17 = v40[1] - *v40;
      *(_QWORD *)(v14 + 16) = 0;
      *(_OWORD *)v14 = 0;
      if ( v17 )
      {
        v45 = v40;
        v41 = v17;
        v18 = operator new(v17);
        v17 = v41;
        v15 = v45;
        v19 = (char *)v18;
      }
      else
      {
        v19 = nullptr;
      }
      v16[1].m128i_i64[0] = (__int64)&v19[v17];
      *v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
      if ( (__int64)(v15[1] - *v15) > 0 )
      {
        v46 = v15;
        v42 = v15[1] - *v15;
        v20 = (char *)memcpy(v19, (const void *)*v15, v42);
        v15 = v46;
        v19 = &v20[v42];
      }
      v21 = v15[3];
      v16->m128i_i64[1] = (__int64)v19;
      v16[1].m128i_i64[1] = v21;
      v16[2].m128i_i8[0] = *((_BYTE *)v15 + 32);
      *(_QWORD *)(a1 + 8) = v16;
      return v49 - __readfsqword(0x28u);
    default:
      return v49 - __readfsqword(0x28u);
  }
}

