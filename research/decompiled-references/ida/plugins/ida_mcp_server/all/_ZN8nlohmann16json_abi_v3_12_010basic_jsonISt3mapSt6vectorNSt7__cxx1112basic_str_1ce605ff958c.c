unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        _QWORD *a1,
        const __m128i *a2)
{
  const __m128i *v2; // rdx
  const __m128i *v3; // rbx
  const __m128i *v4; // rbp
  const __m128i *v5; // rax
  __m128i *v6; // rax
  __m128i *v7; // rbp
  _OWORD *v8; // rdi
  __m128i v9; // xmm0
  _QWORD *v10; // rax
  __int8 *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // r8
  _QWORD *v18; // r13
  __int64 v19; // r10
  const __m128i *v20; // rax
  const void *v21; // r12
  const void *v22; // rdi
  _QWORD *v23; // r14
  size_t v24; // rbp
  size_t v25; // rbx
  const __m128i *v26; // r15
  size_t v27; // rdx
  signed __int64 v28; // rax
  size_t v29; // r15
  size_t v30; // rbx
  size_t v31; // rdx
  int v32; // eax
  __int64 v34; // r14
  __int64 v35; // rax
  unsigned __int64 v36; // r12
  __m128i *v37; // rbx
  char *v38; // rcx
  size_t v39; // r12
  __int64 v40; // rax
  __int64 v41; // rax
  _BYTE *v42; // r12
  unsigned __int64 v43; // r14
  _QWORD *v44; // rax
  _BYTE *v45; // rdi
  __int64 *v46; // rbx
  size_t v47; // rdx
  __int64 v48; // rax
  __int64 *v49; // r14
  __int64 v50; // rax
  unsigned __int64 v51; // rbx
  __m128i *v52; // r12
  __int64 v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // r14
  __int64 v56; // r12
  __int64 v57; // rax
  int *v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  char v67; // [rsp+7h] [rbp-B1h]
  _QWORD *v68; // [rsp+18h] [rbp-A0h]
  __int64 v70; // [rsp+48h] [rbp-70h] BYREF
  int v71[4]; // [rsp+50h] [rbp-68h] BYREF
  __m128i i; // [rsp+60h] [rbp-58h]
  unsigned __int64 v73; // [rsp+78h] [rbp-40h]

  v2 = a2;
  v3 = a2;
  v73 = __readfsqword(0x28u);
  v4 = a2;
  *a1 = 0;
  v5 = (const __m128i *)a2[1].m128i_i64[0];
  a1[1] = 0;
  if ( !v5 )
    v5 = a2;
  if ( v5->m128i_i8[0] != 2 )
    goto LABEL_4;
  v10 = (_QWORD *)v5->m128i_i64[1];
  if ( v10[1] - *v10 != 32 || *(_BYTE *)*v10 != 3 )
    goto LABEL_4;
  v11 = (__int8 *)a2[2].m128i_i64[1];
  v2 = (const __m128i *)((char *)a2 + 24);
  if ( !v11 )
    v11 = &a2[1].m128i_i8[8];
  if ( *v11 != 2 || (v12 = *((_QWORD **)v11 + 1), v12[1] - *v12 != 32) || *(_BYTE *)*v12 != 3 )
  {
LABEL_4:
    if ( &a2[3] != v2 )
    {
      *(_BYTE *)a1 = 2;
      v6 = (__m128i *)operator new(0x18u);
      v6->m128i_i64[0] = 0;
      v7 = v6;
      v6[1].m128i_i64[0] = 0;
      v8 = (_OWORD *)operator new(0x20u);
      v7[1].m128i_i64[0] = (__int64)(v8 + 2);
      *v7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v8);
      *(_QWORD *)v71 = v8;
      i = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v71);
      do
      {
        if ( v3[1].m128i_i64[0] )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v8 = *(_OWORD **)v71;
        }
        else
        {
          v9 = _mm_loadu_si128(v3);
          v3->m128i_i8[0] = 0;
          v3->m128i_i64[1] = 0;
          *v8 = v9;
        }
        ++v8;
        v3 = (const __m128i *)((char *)v3 + 24);
        *(_QWORD *)v71 = v8;
      }
      while ( &a2[3] != v3 );
      v7->m128i_i64[1] = (__int64)v8;
      a1[1] = v7;
      return v73 - __readfsqword(0x28u);
    }
  }
  *(_BYTE *)a1 = 1;
  v13 = operator new(0x30u);
  *(_DWORD *)(v13 + 8) = 0;
  *(_QWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 24) = v13 + 8;
  *(_QWORD *)(v13 + 32) = v13 + 8;
  *(_QWORD *)(v13 + 40) = 0;
  a1[1] = v13;
  do
  {
    v14 = v4[1].m128i_i64[0];
    if ( v14 )
    {
      *(_QWORD *)&v71[2] = 0;
      v67 = *(_BYTE *)v14;
      switch ( *(_BYTE *)v14 )
      {
        case 1:
          v56 = *(_QWORD *)(v14 + 8);
          v57 = operator new(0x30u);
          *(_QWORD *)(v57 + 16) = 0;
          v58 = *(int **)(v56 + 16);
          v37 = (__m128i *)v57;
          *(_DWORD *)(v57 + 8) = 0;
          *(_QWORD *)(v57 + 24) = v57 + 8;
          *(_QWORD *)(v57 + 32) = v57 + 8;
          *(_QWORD *)(v57 + 40) = 0;
          if ( !v58 )
            goto LABEL_52;
          v59 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                  v58,
                  v57 + 8);
          v60 = v59;
          do
          {
            v61 = v59;
            v59 = *(_QWORD *)(v59 + 16);
          }
          while ( v59 );
          v37[1].m128i_i64[1] = v61;
          v62 = v60;
          do
          {
            v63 = v62;
            v62 = *(_QWORD *)(v62 + 24);
          }
          while ( v62 );
          v64 = *(_QWORD *)(v56 + 40);
          v37[2].m128i_i64[0] = v63;
          v37[1].m128i_i64[0] = v60;
          v37[2].m128i_i64[1] = v64;
          *(_QWORD *)&v71[2] = v37;
          break;
        case 2:
          v49 = *(__int64 **)(v14 + 8);
          v50 = operator new(0x18u);
          v51 = v49[1] - *v49;
          v52 = (__m128i *)v50;
          *(_QWORD *)(v50 + 16) = 0;
          *(_OWORD *)v50 = 0;
          if ( v51 )
            v53 = operator new(v51);
          else
            v53 = 0;
          v52[1].m128i_i64[0] = v53 + v51;
          *v52 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v53, (__m128i)(unsigned __int64)v53);
          v54 = v49[1];
          v55 = *v49;
          v70 = v53;
          for ( i = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v53, (__m128i)(unsigned __int64)&v70);
                v54 != v55;
                v70 += 16 )
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
            v55 += 16;
            v53 = v70 + 16;
          }
          v52->m128i_i64[1] = v53;
          *(_QWORD *)&v71[2] = v52;
          break;
        case 3:
          v41 = *(_QWORD *)(v14 + 8);
          v42 = *(_BYTE **)v41;
          v43 = *(_QWORD *)(v41 + 8);
          v44 = (_QWORD *)operator new(0x20u);
          v45 = v44 + 2;
          i.m128i_i64[0] = v43;
          v46 = v44;
          *v44 = v44 + 2;
          if ( v43 <= 0xF )
          {
            v47 = v43 + 1;
            if ( v43 )
              goto LABEL_56;
LABEL_75:
            *v45 = *v42;
            v48 = i.m128i_i64[0];
            goto LABEL_57;
          }
          v65 = std::string::_M_create();
          *v46 = v65;
          v45 = (_BYTE *)v65;
          v66 = i.m128i_i64[0];
          v46[2] = i.m128i_i64[0];
          v47 = v66 + 1;
          if ( !v66 )
            goto LABEL_75;
          v48 = -1;
          if ( v47 )
          {
LABEL_56:
            memcpy(v45, v42, v47);
            v48 = i.m128i_i64[0];
          }
LABEL_57:
          v46[1] = v48;
          *(_QWORD *)&v71[2] = v46;
          break;
        case 4:
          LOBYTE(v71[2]) = *(_BYTE *)(v14 + 8);
          break;
        case 5:
        case 6:
          *(_QWORD *)&v71[2] = *(_QWORD *)(v14 + 8);
          break;
        case 7:
          *(_QWORD *)&v71[2] = *(_QWORD *)(v14 + 8);
          break;
        case 8:
          v34 = *(_QWORD *)(v14 + 8);
          v35 = operator new(0x28u);
          v36 = *(_QWORD *)(v34 + 8) - *(_QWORD *)v34;
          v37 = (__m128i *)v35;
          *(_QWORD *)(v35 + 16) = 0;
          *(_OWORD *)v35 = 0;
          if ( v36 )
            v38 = (char *)operator new(v36);
          else
            v38 = nullptr;
          v37[1].m128i_i64[0] = (__int64)&v38[v36];
          *v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v38, (__m128i)(unsigned __int64)v38);
          if ( (__int64)(*(_QWORD *)(v34 + 8) - *(_QWORD *)v34) > 0 )
          {
            v39 = *(_QWORD *)(v34 + 8) - *(_QWORD *)v34;
            v38 = (char *)memcpy(v38, *(const void **)v34, v39) + v39;
          }
          v40 = *(_QWORD *)(v34 + 24);
          v37->m128i_i64[1] = (__int64)v38;
          v37[1].m128i_i64[1] = v40;
          v37[2].m128i_i8[0] = *(_BYTE *)(v34 + 32);
LABEL_52:
          *(_QWORD *)&v71[2] = v37;
          break;
        default:
          break;
      }
    }
    else
    {
      v15 = v4->m128i_u8[0];
      v16 = _mm_loadu_si128(v4);
      v4->m128i_i8[0] = 0;
      v4->m128i_i64[1] = 0;
      v67 = v15;
      *(__m128i *)v71 = v16;
    }
    v17 = a1[1];
    v18 = *(_QWORD **)(v17 + 16);
    v19 = *(_QWORD *)(**(_QWORD **)&v71[2] + 8LL);
    if ( !v18 )
      goto LABEL_44;
    v20 = v4;
    v21 = *(const void **)v19;
    v22 = (const void *)v18[4];
    v23 = (_QWORD *)(v17 + 8);
    v24 = v18[5];
    v68 = (_QWORD *)(v17 + 8);
    v25 = *(_QWORD *)(v19 + 8);
    v26 = v20;
    while ( 1 )
    {
      v27 = v24;
      if ( v25 <= v24 )
        v27 = v25;
      if ( !v27 || (LODWORD(v28) = memcmp(v22, v21, v27), !(_DWORD)v28) )
      {
        v28 = v24 - v25;
        if ( (__int64)(v24 - v25) > 0x7FFFFFFF )
          goto LABEL_23;
        if ( v28 < (__int64)0xFFFFFFFF80000000LL )
          break;
      }
      if ( (int)v28 < 0 )
        break;
LABEL_23:
      v23 = v18;
      v18 = (_QWORD *)v18[2];
      if ( !v18 )
        goto LABEL_33;
LABEL_24:
      v22 = (const void *)v18[4];
      v24 = v18[5];
    }
    v18 = (_QWORD *)v18[3];
    if ( v18 )
      goto LABEL_24;
LABEL_33:
    v4 = v26;
    v29 = v25;
    if ( v68 == v23 )
      goto LABEL_44;
    v30 = v23[5];
    v31 = v30;
    if ( v29 <= v30 )
      v31 = v29;
    if ( v31 && (v32 = memcmp(v21, (const void *)v23[4], v31)) != 0 )
    {
LABEL_41:
      if ( v32 < 0 )
        goto LABEL_44;
    }
    else if ( (__int64)(v29 - v30) <= 0x7FFFFFFF )
    {
      if ( (__int64)(v29 - v30) >= (__int64)0xFFFFFFFF80000000LL )
      {
        v32 = v29 - v30;
        goto LABEL_41;
      }
LABEL_44:
      std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_emplace_hint_unique<std::string,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    }
    v4 = (const __m128i *)((char *)v4 + 24);
    LOBYTE(v71[0]) = v67;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v4 != &a2[3] );
  return v73 - __readfsqword(0x28u);
}

