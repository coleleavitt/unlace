unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        _QWORD *a1,
        const __m128i *a2,
        __int64 a3,
        char a4)
{
  const __m128i *v4; // r13
  const __m128i *v5; // rbx
  const __m128i *v6; // rax
  __m128i *v7; // rax
  __m128i *v8; // r15
  __int64 v9; // rbp
  const __m128i *v10; // rbx
  unsigned __int8 *v11; // rdx
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v15; // rax
  const void **v16; // r8
  __m128i *v17; // r14
  unsigned __int64 v18; // r15
  __int64 v19; // rax
  char *v20; // rdi
  __int64 v21; // r15
  char *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r15
  _QWORD *v26; // rax
  _BYTE *v27; // rdi
  __int64 *v28; // r14
  size_t v29; // rsi
  __int64 v30; // rax
  __int64 *v31; // r15
  __int64 v32; // rax
  unsigned __int64 v33; // r14
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // r14
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rax
  int *v41; // rdi
  _QWORD *v42; // r14
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int8 *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // r15
  __int64 v59; // r10
  const void *v60; // rdi
  _QWORD *v61; // r14
  size_t v62; // rbp
  const void *v63; // r12
  size_t v64; // rbx
  _QWORD *v65; // r13
  size_t v66; // rdx
  signed __int64 v67; // rax
  size_t v68; // r13
  size_t v69; // rbp
  size_t v70; // rdx
  int v71; // eax
  __m128i v72; // xmm0
  __int8 v73; // al
  __int64 v74; // r14
  __int64 v75; // rax
  unsigned __int64 v76; // r12
  __m128i *v77; // rbp
  char *v78; // rcx
  size_t v79; // r12
  __int64 v80; // rax
  __int64 v81; // rax
  _BYTE *v82; // r12
  unsigned __int64 v83; // r14
  _QWORD *v84; // rax
  _BYTE *v85; // rdi
  __int64 *v86; // rbp
  size_t v87; // rdx
  __int64 v88; // rax
  __int64 *v89; // r14
  __int64 v90; // rax
  unsigned __int64 v91; // rbp
  __m128i *v92; // r12
  __int64 v93; // rdi
  __int64 v94; // rbp
  __int64 v95; // r14
  __int64 v96; // r12
  __int64 v97; // rax
  int *v98; // rdi
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rax
  unsigned __int64 v106; // rax
  __int64 *v107; // [rsp+0h] [rbp-C8h]
  __int8 v108; // [rsp+0h] [rbp-C8h]
  const void **src; // [rsp+8h] [rbp-C0h]
  const void **srcc; // [rsp+8h] [rbp-C0h]
  _BYTE *srca; // [rsp+8h] [rbp-C0h]
  __m128i *srcb; // [rsp+8h] [rbp-C0h]
  _QWORD *v113; // [rsp+10h] [rbp-B8h]
  const __m128i *v114; // [rsp+18h] [rbp-B0h]
  __int64 v116; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v117; // [rsp+48h] [rbp-80h]
  __int64 v118; // [rsp+50h] [rbp-78h] BYREF
  __int64 v119; // [rsp+58h] [rbp-70h] BYREF
  __m128i v120; // [rsp+60h] [rbp-68h]
  __m128i i; // [rsp+70h] [rbp-58h]
  unsigned __int64 v122; // [rsp+88h] [rbp-40h]

  v4 = a2;
  v122 = __readfsqword(0x28u);
  v5 = a2;
  *a1 = 0;
  v6 = (const __m128i *)a2[1].m128i_i64[0];
  a1[1] = 0;
  if ( !v6 )
    v6 = a2;
  if ( v6->m128i_i8[0] != 2 )
    goto LABEL_4;
  v50 = (_QWORD *)v6->m128i_i64[1];
  if ( v50[1] - *v50 != 32 || *(_BYTE *)*v50 != 3 )
    goto LABEL_4;
  v51 = (__int8 *)a2[2].m128i_i64[1];
  if ( !v51 )
    v51 = &a2[1].m128i_i8[8];
  if ( *v51 != 2 || (v52 = *((_QWORD **)v51 + 1), v52[1] - *v52 != 32) || *(_BYTE *)*v52 != 3 || !a4 )
  {
LABEL_4:
    *(_BYTE *)a1 = 2;
    v7 = (__m128i *)operator new(0x18u);
    v7->m128i_i64[0] = 0;
    v8 = v7;
    v7[1].m128i_i64[0] = 0;
    v107 = (__int64 *)v7;
    v9 = operator new(0x20u);
    v10 = a2 + 3;
    v8[1].m128i_i64[0] = v9 + 32;
    *v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v9);
    v118 = v9;
    v120 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)&v118);
    while ( 1 )
    {
      v11 = (unsigned __int8 *)v4[1].m128i_i64[0];
      if ( v11 )
        break;
      v13 = _mm_loadu_si128(v4);
      v4->m128i_i8[0] = 0;
      v4->m128i_i64[1] = 0;
      *(__m128i *)v9 = v13;
LABEL_8:
      v9 += 16;
      v4 = (const __m128i *)((char *)v4 + 24);
      v118 = v9;
      if ( v4 == v10 )
      {
        v107[1] = v9;
        a1[1] = v107;
        return v122 - __readfsqword(0x28u);
      }
    }
    v12 = *v11;
    *(_QWORD *)(v9 + 8) = 0;
    *(_BYTE *)v9 = v12;
    switch ( v12 )
    {
      case 1LL:
        v39 = *((_QWORD *)v11 + 1);
        v40 = operator new(0x30u);
        *(_QWORD *)(v40 + 16) = 0;
        v41 = *(int **)(v39 + 16);
        v42 = (_QWORD *)v40;
        *(_DWORD *)(v40 + 8) = 0;
        *(_QWORD *)(v40 + 24) = v40 + 8;
        *(_QWORD *)(v40 + 32) = v40 + 8;
        *(_QWORD *)(v40 + 40) = 0;
        if ( v41 )
        {
          v43 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                  v41,
                  v40 + 8);
          v44 = v43;
          do
          {
            v45 = v43;
            v43 = *(_QWORD *)(v43 + 16);
          }
          while ( v43 );
          v42[3] = v45;
          v46 = v44;
          do
          {
            v47 = v46;
            v46 = *(_QWORD *)(v46 + 24);
          }
          while ( v46 );
          v48 = *(_QWORD *)(v39 + 40);
          v42[4] = v47;
          v42[2] = v44;
          v42[5] = v48;
          v49 = v118;
        }
        else
        {
          v49 = v9;
        }
        *(_QWORD *)(v9 + 8) = v42;
        v9 = v49;
        goto LABEL_8;
      case 2LL:
        v31 = *((__int64 **)v11 + 1);
        v32 = operator new(0x18u);
        v33 = v31[1] - *v31;
        srcb = (__m128i *)v32;
        *(_QWORD *)(v32 + 16) = 0;
        *(_OWORD *)v32 = 0;
        if ( v33 )
          v34 = operator new(v33);
        else
          v34 = 0;
        *srcb = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)(unsigned __int64)v34);
        srcb[1].m128i_i64[0] = v34 + v33;
        v35 = *v31;
        v36 = v31[1];
        v119 = v34;
        i = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)(unsigned __int64)&v119);
        if ( v36 == v35 )
        {
          v38 = v9;
        }
        else
        {
          v37 = v35;
          do
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
            v37 += 16;
            v34 = v119 + 16;
            v119 += 16;
          }
          while ( v36 != v37 );
          v38 = v118;
        }
        srcb->m128i_i64[1] = v34;
        *(_QWORD *)(v9 + 8) = srcb;
        v9 = v38;
        goto LABEL_8;
      case 3LL:
        v24 = *((_QWORD *)v11 + 1);
        v25 = *(_QWORD *)(v24 + 8);
        srca = *(_BYTE **)v24;
        v26 = (_QWORD *)operator new(0x20u);
        v27 = v26 + 2;
        i.m128i_i64[0] = v25;
        v28 = v26;
        *v26 = v26 + 2;
        if ( v25 > 0xF )
        {
          v55 = std::string::_M_create();
          *v28 = v55;
          v27 = (_BYTE *)v55;
          v56 = i.m128i_i64[0];
          v28[2] = i.m128i_i64[0];
          v29 = v56 + 1;
          if ( v56 )
          {
            v30 = -1;
            if ( !v29 )
              goto LABEL_21;
            goto LABEL_20;
          }
        }
        else
        {
          v29 = v25 + 1;
          if ( v25 )
          {
LABEL_20:
            memcpy(v27, srca, v29);
            v30 = i.m128i_i64[0];
LABEL_21:
            v28[1] = v30;
            *(_QWORD *)(v9 + 8) = v28;
            v9 = v118;
            goto LABEL_8;
          }
        }
        *v27 = *srca;
        v30 = i.m128i_i64[0];
        goto LABEL_21;
      case 4LL:
        *(_BYTE *)(v9 + 8) = v11[8];
        goto LABEL_8;
      case 5LL:
      case 6LL:
        *(_QWORD *)(v9 + 8) = *((_QWORD *)v11 + 1);
        goto LABEL_8;
      case 7LL:
        *(_QWORD *)(v9 + 8) = *((_QWORD *)v11 + 1);
        goto LABEL_8;
      case 8LL:
        src = *((const void ***)v11 + 1);
        v15 = operator new(0x28u);
        v16 = src;
        v17 = (__m128i *)v15;
        v18 = (_BYTE *)src[1] - (_BYTE *)*src;
        *(_QWORD *)(v15 + 16) = 0;
        *(_OWORD *)v15 = 0;
        if ( v18 )
        {
          v19 = operator new(v18);
          v16 = src;
          v20 = (char *)v19;
        }
        else
        {
          v20 = nullptr;
        }
        v17[1].m128i_i64[0] = (__int64)&v20[v18];
        *v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, (__m128i)(unsigned __int64)v20);
        v21 = (_BYTE *)v16[1] - (_BYTE *)*v16;
        if ( v21 > 0 )
        {
          srcc = v16;
          v22 = (char *)memcpy(v20, *v16, (_BYTE *)v16[1] - (_BYTE *)*v16);
          v16 = srcc;
          v20 = &v22[v21];
        }
        v23 = (__int64)v16[3];
        v17->m128i_i64[1] = (__int64)v20;
        v17[1].m128i_i64[1] = v23;
        v17[2].m128i_i8[0] = *((_BYTE *)v16 + 32);
        *(_QWORD *)(v9 + 8) = v17;
        goto LABEL_8;
      default:
        goto LABEL_8;
    }
  }
  *(_BYTE *)a1 = 1;
  v53 = operator new(0x30u);
  *(_DWORD *)(v53 + 8) = 0;
  *(_QWORD *)(v53 + 16) = 0;
  *(_QWORD *)(v53 + 24) = v53 + 8;
  *(_QWORD *)(v53 + 32) = v53 + 8;
  *(_QWORD *)(v53 + 40) = 0;
  a1[1] = v53;
  v54 = a2[1].m128i_i64[0];
  if ( !v54 )
    goto LABEL_77;
  while ( 2 )
  {
    v120.m128i_i64[1] = 0;
    v108 = *(_BYTE *)v54;
    switch ( *(_BYTE *)v54 )
    {
      case 1:
        v96 = *(_QWORD *)(v54 + 8);
        v97 = operator new(0x30u);
        *(_QWORD *)(v97 + 16) = 0;
        v98 = *(int **)(v96 + 16);
        v77 = (__m128i *)v97;
        *(_DWORD *)(v97 + 8) = 0;
        *(_QWORD *)(v97 + 24) = v97 + 8;
        *(_QWORD *)(v97 + 32) = v97 + 8;
        *(_QWORD *)(v97 + 40) = 0;
        if ( v98 )
        {
          v99 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                  v98,
                  v97 + 8);
          v100 = v99;
          do
          {
            v101 = v99;
            v99 = *(_QWORD *)(v99 + 16);
          }
          while ( v99 );
          v77[1].m128i_i64[1] = v101;
          v102 = v100;
          do
          {
            v103 = v102;
            v102 = *(_QWORD *)(v102 + 24);
          }
          while ( v102 );
          v104 = *(_QWORD *)(v96 + 40);
          v77[2].m128i_i64[0] = v103;
          v77[1].m128i_i64[0] = v100;
          v77[2].m128i_i64[1] = v104;
        }
        goto LABEL_83;
      case 2:
        v89 = *(__int64 **)(v54 + 8);
        v90 = operator new(0x18u);
        v91 = v89[1] - *v89;
        v92 = (__m128i *)v90;
        *(_QWORD *)(v90 + 16) = 0;
        *(_OWORD *)v90 = 0;
        if ( v91 )
          v93 = operator new(v91);
        else
          v93 = 0;
        v92[1].m128i_i64[0] = v93 + v91;
        *v92 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v93, (__m128i)(unsigned __int64)v93);
        v94 = v89[1];
        v95 = *v89;
        v116 = v93;
        for ( i = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v93, (__m128i)(unsigned __int64)&v116);
              v94 != v95;
              v116 += 16 )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v95 += 16;
          v93 = v116 + 16;
        }
        v92->m128i_i64[1] = v93;
        v120.m128i_i64[1] = (__int64)v92;
        goto LABEL_54;
      case 3:
        v81 = *(_QWORD *)(v54 + 8);
        v82 = *(_BYTE **)v81;
        v83 = *(_QWORD *)(v81 + 8);
        v84 = (_QWORD *)operator new(0x20u);
        v85 = v84 + 2;
        v117 = v83;
        v86 = v84;
        *v84 = v84 + 2;
        if ( v83 <= 0xF )
        {
          v87 = v83 + 1;
          if ( v83 )
            goto LABEL_88;
LABEL_104:
          *v85 = *v82;
          v88 = v117;
          goto LABEL_89;
        }
        v105 = std::string::_M_create();
        *v86 = v105;
        v85 = (_BYTE *)v105;
        v106 = v117;
        v86[2] = v117;
        v87 = v106 + 1;
        if ( !v106 )
          goto LABEL_104;
        v88 = -1;
        if ( v87 )
        {
LABEL_88:
          memcpy(v85, v82, v87);
          v88 = v117;
        }
LABEL_89:
        v86[1] = v88;
        v120.m128i_i64[1] = (__int64)v86;
LABEL_54:
        v57 = a1[1];
        v58 = *(_QWORD *)(v57 + 16);
        v59 = *(_QWORD *)(*(_QWORD *)v120.m128i_i64[1] + 8LL);
        if ( !v58 )
          goto LABEL_101;
        v60 = *(const void **)(v58 + 32);
        v114 = v5;
        v61 = (_QWORD *)(v57 + 8);
        v62 = *(_QWORD *)(v58 + 40);
        v63 = *(const void **)v59;
        v64 = *(_QWORD *)(v59 + 8);
        v113 = (_QWORD *)(v57 + 8);
        v65 = *(_QWORD **)(v57 + 16);
        break;
      case 4:
        v120.m128i_i8[8] = *(_BYTE *)(v54 + 8);
        goto LABEL_54;
      case 5:
      case 6:
        v120.m128i_i64[1] = *(_QWORD *)(v54 + 8);
        goto LABEL_54;
      case 7:
        v120.m128i_i64[1] = *(_QWORD *)(v54 + 8);
        goto LABEL_54;
      case 8:
        v74 = *(_QWORD *)(v54 + 8);
        v75 = operator new(0x28u);
        v76 = *(_QWORD *)(v74 + 8) - *(_QWORD *)v74;
        v77 = (__m128i *)v75;
        *(_QWORD *)(v75 + 16) = 0;
        *(_OWORD *)v75 = 0;
        if ( v76 )
          v78 = (char *)operator new(v76);
        else
          v78 = nullptr;
        v77[1].m128i_i64[0] = (__int64)&v78[v76];
        *v77 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v78, (__m128i)(unsigned __int64)v78);
        if ( (__int64)(*(_QWORD *)(v74 + 8) - *(_QWORD *)v74) > 0 )
        {
          v79 = *(_QWORD *)(v74 + 8) - *(_QWORD *)v74;
          v78 = (char *)memcpy(v78, *(const void **)v74, v79) + v79;
        }
        v80 = *(_QWORD *)(v74 + 24);
        v77->m128i_i64[1] = (__int64)v78;
        v77[1].m128i_i64[1] = v80;
        v77[2].m128i_i8[0] = *(_BYTE *)(v74 + 32);
LABEL_83:
        v120.m128i_i64[1] = (__int64)v77;
        goto LABEL_54;
      default:
        goto LABEL_54;
    }
    while ( 1 )
    {
      v66 = v62;
      if ( v64 <= v62 )
        v66 = v64;
      if ( !v66 || (LODWORD(v67) = memcmp(v60, v63, v66), !(_DWORD)v67) )
      {
        v67 = v62 - v64;
        if ( (__int64)(v62 - v64) > 0x7FFFFFFF )
          goto LABEL_56;
        if ( v67 < (__int64)0xFFFFFFFF80000000LL )
          break;
      }
      if ( (int)v67 < 0 )
        break;
LABEL_56:
      v61 = v65;
      v65 = (_QWORD *)v65[2];
      if ( !v65 )
        goto LABEL_66;
LABEL_57:
      v60 = (const void *)v65[4];
      v62 = v65[5];
    }
    v65 = (_QWORD *)v65[3];
    if ( v65 )
      goto LABEL_57;
LABEL_66:
    v68 = v64;
    v5 = v114;
    if ( v113 == v61 )
      goto LABEL_101;
    v69 = v61[5];
    v70 = v69;
    if ( v68 <= v69 )
      v70 = v68;
    if ( v70 && (v71 = memcmp(v63, (const void *)v61[4], v70)) != 0 )
    {
LABEL_74:
      if ( v71 < 0 )
        goto LABEL_101;
    }
    else if ( (__int64)(v68 - v69) <= 0x7FFFFFFF )
    {
      if ( (__int64)(v68 - v69) >= (__int64)0xFFFFFFFF80000000LL )
      {
        v71 = v68 - v69;
        goto LABEL_74;
      }
LABEL_101:
      std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_emplace_hint_unique<std::string,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    }
    v5 = (const __m128i *)((char *)v5 + 24);
    v120.m128i_i8[0] = v108;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( &a2[3] != v5 )
    {
      v54 = v5[1].m128i_i64[0];
      if ( !v54 )
      {
LABEL_77:
        v72 = _mm_loadu_si128(v5);
        v73 = v5->m128i_i8[0];
        v5->m128i_i64[1] = 0;
        v5->m128i_i8[0] = 0;
        v108 = v73;
        v120 = v72;
        goto LABEL_54;
      }
      continue;
    }
    return v122 - __readfsqword(0x28u);
  }
}

