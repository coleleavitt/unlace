__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
        int *a1,
        unsigned __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  _BYTE *v5; // r13
  _BYTE *v6; // rdi
  __int64 v7; // r12
  size_t v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // eax
  __int64 v15; // rdi
  int *v16; // rbp
  __int64 v17; // r13
  __int64 v18; // rbx
  __m128i *v19; // r8
  int v20; // r9d
  __int64 v21; // rdx
  _BYTE *v22; // rdi
  _BYTE *v23; // r15
  __int8 *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rax
  _QWORD *v30; // r15
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __m128i *v38; // r15
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  char *v41; // rax
  __int64 v42; // rax
  __m128i **v43; // rax
  _QWORD *v44; // rax
  _BYTE *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // rdi
  __m128i *v51; // rsi
  __m128i *v52; // r15
  __int64 v53; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  int v59; // [rsp+0h] [rbp-88h]
  __int64 v60; // [rsp+8h] [rbp-80h]
  __int64 v61; // [rsp+8h] [rbp-80h]
  __m128i *v62; // [rsp+10h] [rbp-78h]
  _QWORD *v63; // [rsp+10h] [rbp-78h]
  __m128i *src; // [rsp+18h] [rbp-70h]
  int v65; // [rsp+20h] [rbp-68h]
  int v66[2]; // [rsp+20h] [rbp-68h]
  __int64 v67; // [rsp+28h] [rbp-60h] BYREF
  int v68[4]; // [rsp+30h] [rbp-58h]
  __int64 v69; // [rsp+40h] [rbp-48h]
  unsigned __int64 v70; // [rsp+48h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  v3 = operator new(0x50u);
  v4 = *((_QWORD *)a1 + 5);
  v5 = *((_BYTE **)a1 + 4);
  v6 = (_BYTE *)(v3 + 48);
  v7 = v3;
  *(_QWORD *)(v3 + 32) = v3 + 48;
  *(_QWORD *)v68 = v4;
  if ( v4 <= 0xF )
  {
    v8 = v4 + 1;
    if ( v4 )
    {
LABEL_3:
      memcpy(v6, v5, v8);
      v9 = *(_QWORD *)v68;
      goto LABEL_4;
    }
    goto LABEL_40;
  }
  v55 = std::string::_M_create();
  *(_QWORD *)(v7 + 32) = v55;
  v6 = (_BYTE *)v55;
  v56 = *(_QWORD *)v68;
  *(_QWORD *)(v7 + 48) = *(_QWORD *)v68;
  v8 = v56 + 1;
  if ( !v56 )
  {
LABEL_40:
    *v6 = *v5;
    v9 = *(_QWORD *)v68;
    goto LABEL_4;
  }
  v9 = -1;
  if ( v8 )
    goto LABEL_3;
LABEL_4:
  *(_QWORD *)(v7 + 40) = v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v14 = *a1;
  v15 = *((_QWORD *)a1 + 3);
  *(_QWORD *)(v7 + 24) = 0;
  *(_OWORD *)(v7 + 8) = a2;
  *(_DWORD *)v7 = v14;
  if ( v15 )
    *(_QWORD *)(v7 + 24) = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                             v15,
                             v7,
                             v10,
                             v11,
                             v12,
                             v13,
                             v59,
                             v60,
                             v62,
                             (int)src,
                             v65,
                             v67,
                             v68[0],
                             v68[2],
                             v69);
  v16 = *((int **)a1 + 2);
  v17 = v7;
  if ( v16 )
  {
    while ( 1 )
    {
      v18 = operator new(0x50u);
      v21 = *((_QWORD *)v16 + 5);
      v22 = (_BYTE *)(v18 + 48);
      v61 = v18 + 32;
      *(_QWORD *)(v18 + 32) = v18 + 48;
      v23 = *((_BYTE **)v16 + 4);
      *(_QWORD *)v66 = v21;
      if ( (unsigned __int64)v21 > 0xF )
      {
        v53 = std::string::_M_create();
        *(_QWORD *)(v18 + 32) = v53;
        v22 = (_BYTE *)v53;
        *(_QWORD *)(v18 + 48) = *(_QWORD *)v66;
        v24 = (__int8 *)(*(_QWORD *)v66 + 1LL);
        if ( !*(_QWORD *)v66 )
        {
LABEL_41:
          *v22 = *v23;
          v25 = *(_QWORD *)v66;
          goto LABEL_10;
        }
        v25 = -1;
        if ( *(_QWORD *)v66 == -1 )
          goto LABEL_10;
      }
      else
      {
        v24 = (__int8 *)(v21 + 1);
        if ( !v21 )
          goto LABEL_41;
      }
      memcpy(v22, v23, (size_t)v24);
      v25 = *(_QWORD *)v66;
LABEL_10:
      *(_QWORD *)(v18 + 40) = v25;
      v26 = *((unsigned __int8 *)v16 + 64);
      *(_QWORD *)(v18 + 72) = 0;
      *(_BYTE *)(v18 + 64) = v26;
      switch ( v26 )
      {
        case 1LL:
          v62 = *((__m128i **)v16 + 9);
          v29 = operator new(0x30u);
          LODWORD(v24) = (_DWORD)v62;
          *(_QWORD *)(v29 + 16) = 0;
          v30 = (_QWORD *)v29;
          *(_DWORD *)(v29 + 8) = 0;
          v31 = v62[1].m128i_i64[0];
          *(_QWORD *)(v29 + 24) = v29 + 8;
          *(_QWORD *)(v29 + 32) = v29 + 8;
          *(_QWORD *)(v29 + 40) = 0;
          if ( v31 )
          {
            v32 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                    v31,
                    (int)v29 + 8,
                    v21,
                    (int)v62,
                    (int)v19,
                    v20,
                    v59,
                    v61,
                    v62,
                    (int)src,
                    v66[0],
                    v67,
                    v68[0],
                    v68[2],
                    v69);
            LODWORD(v24) = (_DWORD)v62;
            v33 = v32;
            do
            {
              v34 = v32;
              v32 = *(_QWORD *)(v32 + 16);
            }
            while ( v32 );
            v30[3] = v34;
            v35 = v33;
            do
            {
              v21 = v35;
              v35 = *(_QWORD *)(v35 + 24);
            }
            while ( v35 );
            v36 = v62[2].m128i_i64[1];
            v30[4] = v21;
            v30[2] = v33;
            v30[5] = v36;
          }
          goto LABEL_22;
        case 2LL:
          v63 = *((_QWORD **)v16 + 9);
          v47 = operator new(0x18u);
          v21 = (__int64)v63;
          src = (__m128i *)v47;
          v48 = v63[1] - *v63;
          *(_QWORD *)(v47 + 16) = 0;
          *(_OWORD *)v47 = 0;
          if ( v48 )
          {
            v49 = operator new(v48);
            v21 = (__int64)v63;
            v50 = v49;
          }
          else
          {
            v50 = 0;
          }
          *src = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v50, (__m128i)(unsigned __int64)v50);
          src[1].m128i_i64[0] = v50 + v48;
          v51 = *(__m128i **)(v21 + 8);
          v24 = *(__int8 **)v21;
          v67 = v50;
          v62 = v51;
          *(__m128i *)v68 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v50, (__m128i)(unsigned __int64)&v67);
          if ( v51 != (__m128i *)v24 )
          {
            v52 = (__m128i *)v24;
            do
            {
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
              ++v52;
              v50 = v67 + 16;
              v67 += 16;
            }
            while ( v51 != v52 );
          }
          src->m128i_i64[1] = v50;
          *(_QWORD *)(v18 + 72) = src;
          goto LABEL_12;
        case 3LL:
          v43 = *((__m128i ***)v16 + 9);
          src = *v43;
          v62 = v43[1];
          v44 = (_QWORD *)operator new(0x20u);
          LODWORD(v21) = (_DWORD)v62;
          v45 = v44 + 2;
          v30 = v44;
          *v44 = v44 + 2;
          *(_QWORD *)v68 = v62;
          if ( (unsigned __int64)v62 <= 0xF )
          {
            v24 = &v62->m128i_i8[1];
            if ( v62 )
              goto LABEL_32;
LABEL_49:
            *v45 = src->m128i_i8[0];
            v46 = *(_QWORD *)v68;
            goto LABEL_33;
          }
          v57 = std::string::_M_create();
          *v30 = v57;
          v45 = (_BYTE *)v57;
          v58 = *(_QWORD *)v68;
          v30[2] = *(_QWORD *)v68;
          v24 = (__int8 *)(v58 + 1);
          if ( !v58 )
            goto LABEL_49;
          v46 = -1;
          if ( v24 )
          {
LABEL_32:
            memcpy(v45, src, (size_t)v24);
            v46 = *(_QWORD *)v68;
          }
LABEL_33:
          v30[1] = v46;
LABEL_22:
          *(_QWORD *)(v18 + 72) = v30;
LABEL_12:
          v27 = *v16;
          *(_QWORD *)(v18 + 24) = 0;
          *(_QWORD *)(v18 + 16) = 0;
          *(_DWORD *)v18 = v27;
          *(_QWORD *)(v17 + 16) = v18;
          *(_QWORD *)(v18 + 8) = v17;
          v28 = *((_QWORD *)v16 + 3);
          if ( v28 )
            *(_QWORD *)(v18 + 24) = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                                      v28,
                                      v18,
                                      v21,
                                      (int)v24,
                                      (int)v19,
                                      v20,
                                      v59,
                                      v61,
                                      v62,
                                      (int)src,
                                      v66[0],
                                      v67,
                                      v68[0],
                                      v68[2],
                                      v69);
          v16 = *((int **)v16 + 2);
          if ( !v16 )
            return v7;
          v17 = v18;
          break;
        case 4LL:
          *(_BYTE *)(v18 + 72) = *((_BYTE *)v16 + 72);
          goto LABEL_12;
        case 5LL:
        case 6LL:
          *(_QWORD *)(v18 + 72) = *((_QWORD *)v16 + 9);
          goto LABEL_12;
        case 7LL:
          *(_QWORD *)(v18 + 72) = *((_QWORD *)v16 + 9);
          goto LABEL_12;
        case 8LL:
          v62 = *((__m128i **)v16 + 9);
          v37 = operator new(0x28u);
          v19 = v62;
          v38 = (__m128i *)v37;
          v39 = v62->m128i_i64[1] - v62->m128i_i64[0];
          *(_QWORD *)(v37 + 16) = 0;
          *(_OWORD *)v37 = 0;
          if ( v39 )
          {
            src = v62;
            v62 = (__m128i *)v39;
            v40 = operator new(v39);
            v39 = (unsigned __int64)v62;
            v19 = src;
            v24 = (__int8 *)v40;
          }
          else
          {
            v24 = nullptr;
          }
          v38[1].m128i_i64[0] = (__int64)&v24[v39];
          *v38 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)(unsigned __int64)v24);
          v21 = v19->m128i_i64[1] - v19->m128i_i64[0];
          if ( v21 > 0 )
          {
            v62 = v19;
            v61 = v19->m128i_i64[1] - v19->m128i_i64[0];
            v41 = (char *)memcpy(v24, (const void *)v19->m128i_i64[0], v21);
            LODWORD(v21) = v61;
            v19 = v62;
            v24 = &v41[v61];
          }
          v42 = v19[1].m128i_i64[1];
          v38->m128i_i64[1] = (__int64)v24;
          v38[1].m128i_i64[1] = v42;
          v38[2].m128i_i8[0] = v19[2].m128i_i8[0];
          *(_QWORD *)(v18 + 72) = v38;
          goto LABEL_12;
        default:
          goto LABEL_12;
      }
    }
  }
  return v7;
}

