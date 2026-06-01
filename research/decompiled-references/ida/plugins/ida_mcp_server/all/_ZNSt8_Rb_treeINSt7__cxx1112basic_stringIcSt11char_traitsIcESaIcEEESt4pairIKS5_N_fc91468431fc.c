__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
        int *a1,
        unsigned __int64 a2)
{
  __int64 v3; // rax
  __m128i *v4; // r8
  int v5; // r9d
  unsigned __int64 v6; // rdx
  _BYTE *v7; // r14
  _BYTE *v8; // rdi
  __int64 v9; // r12
  char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdi
  int *v15; // rbp
  __int64 v16; // r13
  __int64 v17; // rbx
  __m128i *v18; // r8
  int v19; // r9d
  __int64 v20; // rdx
  _BYTE *v21; // rdi
  _BYTE *v22; // r15
  __int8 *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rax
  _QWORD *v29; // r15
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __m128i *v37; // r15
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  void *v40; // rax
  __int64 v41; // rax
  __m128i **v42; // rax
  _QWORD *v43; // rax
  _BYTE *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // rdi
  __int8 *v50; // rsi
  char *v51; // r15
  __int64 v52; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __m128i *v56; // r14
  unsigned __int64 v57; // r15
  __int64 v58; // rax
  __int64 v59; // r13
  char *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // r15
  _QWORD *v64; // rax
  _BYTE *v65; // rdi
  _QWORD *v66; // r14
  __int64 v67; // rax
  char **v68; // r15
  __int64 v69; // rax
  unsigned __int64 v70; // r14
  __int64 v71; // rdi
  char *v72; // r14
  char *v73; // r15
  __int64 v74; // r15
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rdx
  char *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  void *v85; // [rsp+0h] [rbp-88h]
  __m128i *v86; // [rsp+8h] [rbp-80h]
  char *v87; // [rsp+8h] [rbp-80h]
  __m128i *v88; // [rsp+10h] [rbp-78h]
  _QWORD *v89; // [rsp+10h] [rbp-78h]
  __m128i *src; // [rsp+18h] [rbp-70h]
  int v91[2]; // [rsp+20h] [rbp-68h]
  int v92[2]; // [rsp+20h] [rbp-68h]
  __int64 v93; // [rsp+28h] [rbp-60h] BYREF
  __m128i v94; // [rsp+30h] [rbp-58h]
  unsigned __int64 v95; // [rsp+48h] [rbp-40h]

  v95 = __readfsqword(0x28u);
  v3 = operator new(0x50u);
  v6 = *((_QWORD *)a1 + 5);
  v7 = *((_BYTE **)a1 + 4);
  v8 = (_BYTE *)(v3 + 48);
  v9 = v3;
  *(_QWORD *)(v3 + 32) = v3 + 48;
  *(_QWORD *)v91 = v6;
  if ( v6 > 0xF )
  {
    v54 = std::string::_M_create();
    *(_QWORD *)(v9 + 32) = v54;
    v8 = (_BYTE *)v54;
    *(_QWORD *)(v9 + 48) = *(_QWORD *)v91;
    v10 = (char *)(*(_QWORD *)v91 + 1LL);
    if ( *(_QWORD *)v91 )
    {
      v11 = -1;
      if ( *(_QWORD *)v91 == -1 )
        goto LABEL_4;
      goto LABEL_3;
    }
LABEL_42:
    *v8 = *v7;
    v11 = *(_QWORD *)v91;
    goto LABEL_4;
  }
  v10 = (char *)(v6 + 1);
  if ( !v6 )
    goto LABEL_42;
LABEL_3:
  memcpy(v8, v7, (size_t)v10);
  v11 = *(_QWORD *)v91;
LABEL_4:
  *(_QWORD *)(v9 + 40) = v11;
  v12 = *((unsigned __int8 *)a1 + 64);
  *(_QWORD *)(v9 + 72) = 0;
  *(_BYTE *)(v9 + 64) = v12;
  switch ( v12 )
  {
    case 1LL:
      v74 = *((_QWORD *)a1 + 9);
      v75 = operator new(0x30u);
      *(_QWORD *)(v75 + 16) = 0;
      v76 = *(_QWORD *)(v74 + 16);
      v66 = (_QWORD *)v75;
      *(_DWORD *)(v75 + 8) = 0;
      *(_QWORD *)(v75 + 24) = v75 + 8;
      *(_QWORD *)(v75 + 32) = v75 + 8;
      *(_QWORD *)(v75 + 40) = 0;
      if ( v76 )
      {
        v77 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                v76,
                (int)v75 + 8,
                v6,
                (int)v10,
                (int)v4,
                v5,
                v85,
                (__int64)v86,
                (int)v88,
                (int)src,
                v91[0],
                v93);
        v10 = (char *)v77;
        do
        {
          v78 = v77;
          v77 = *(_QWORD *)(v77 + 16);
        }
        while ( v77 );
        v66[3] = v78;
        v79 = v10;
        do
        {
          v6 = (unsigned __int64)v79;
          v79 = *((char **)v79 + 3);
        }
        while ( v79 );
        v80 = *(_QWORD *)(v74 + 40);
        v66[4] = v6;
        v66[2] = v10;
        v66[5] = v80;
      }
      goto LABEL_74;
    case 2LL:
      v68 = *((char ***)a1 + 9);
      v69 = operator new(0x18u);
      v70 = v68[1] - *v68;
      v86 = (__m128i *)v69;
      *(_QWORD *)(v69 + 16) = 0;
      *(_OWORD *)v69 = 0;
      if ( v70 )
        v71 = operator new(v70);
      else
        v71 = 0;
      *v86 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v71, (__m128i)(unsigned __int64)v71);
      v86[1].m128i_i64[0] = v71 + v70;
      v72 = v68[1];
      v10 = *v68;
      v93 = v71;
      v94 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v71, (__m128i)(unsigned __int64)&v93);
      if ( v72 != v10 )
      {
        v73 = v10;
        do
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v73 += 16;
          v71 = v93 + 16;
          v93 += 16;
        }
        while ( v72 != v73 );
      }
      v86->m128i_i64[1] = v71;
      *(_QWORD *)(v9 + 72) = v86;
      goto LABEL_6;
    case 3LL:
      v62 = *((_QWORD *)a1 + 9);
      v63 = *(_QWORD *)(v62 + 8);
      v86 = *(__m128i **)v62;
      v64 = (_QWORD *)operator new(0x20u);
      v65 = v64 + 2;
      v94.m128i_i64[0] = v63;
      v66 = v64;
      *v64 = v64 + 2;
      if ( v63 <= 0xF )
      {
        v10 = (char *)(v63 + 1);
        if ( v63 )
        {
LABEL_60:
          memcpy(v65, v86, (size_t)v10);
          v67 = v94.m128i_i64[0];
          goto LABEL_61;
        }
        goto LABEL_82;
      }
      v83 = std::string::_M_create();
      *v66 = v83;
      v65 = (_BYTE *)v83;
      v84 = v94.m128i_i64[0];
      v66[2] = v94.m128i_i64[0];
      v10 = (char *)(v84 + 1);
      if ( !v84 )
      {
LABEL_82:
        *v65 = v86->m128i_i8[0];
        v67 = v94.m128i_i64[0];
        goto LABEL_61;
      }
      v67 = -1;
      if ( v10 )
        goto LABEL_60;
LABEL_61:
      v66[1] = v67;
LABEL_74:
      *(_QWORD *)(v9 + 72) = v66;
LABEL_6:
      v13 = *a1;
      v14 = *((_QWORD *)a1 + 3);
      *(_QWORD *)(v9 + 24) = 0;
      *(_OWORD *)(v9 + 8) = a2;
      *(_DWORD *)v9 = v13;
      if ( v14 )
        *(_QWORD *)(v9 + 24) = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                                 v14,
                                 v9,
                                 v6,
                                 (int)v10,
                                 (int)v4,
                                 v5,
                                 v85,
                                 (__int64)v86,
                                 (int)v88,
                                 (int)src,
                                 v91[0],
                                 v93);
      v15 = *((int **)a1 + 2);
      v16 = v9;
      if ( v15 )
      {
        while ( 1 )
        {
          v17 = operator new(0x50u);
          v20 = *((_QWORD *)v15 + 5);
          v21 = (_BYTE *)(v17 + 48);
          v87 = (char *)(v17 + 32);
          *(_QWORD *)(v17 + 32) = v17 + 48;
          v22 = *((_BYTE **)v15 + 4);
          *(_QWORD *)v92 = v20;
          if ( (unsigned __int64)v20 > 0xF )
          {
            v52 = std::string::_M_create();
            *(_QWORD *)(v17 + 32) = v52;
            v21 = (_BYTE *)v52;
            *(_QWORD *)(v17 + 48) = *(_QWORD *)v92;
            v23 = (__int8 *)(*(_QWORD *)v92 + 1LL);
            if ( !*(_QWORD *)v92 )
            {
LABEL_43:
              *v21 = *v22;
              v24 = *(_QWORD *)v92;
              goto LABEL_12;
            }
            v24 = -1;
            if ( *(_QWORD *)v92 == -1 )
              goto LABEL_12;
          }
          else
          {
            v23 = (__int8 *)(v20 + 1);
            if ( !v20 )
              goto LABEL_43;
          }
          memcpy(v21, v22, (size_t)v23);
          v24 = *(_QWORD *)v92;
LABEL_12:
          *(_QWORD *)(v17 + 40) = v24;
          v25 = *((unsigned __int8 *)v15 + 64);
          *(_QWORD *)(v17 + 72) = 0;
          *(_BYTE *)(v17 + 64) = v25;
          switch ( v25 )
          {
            case 1LL:
              v88 = *((__m128i **)v15 + 9);
              v28 = operator new(0x30u);
              LODWORD(v23) = (_DWORD)v88;
              *(_QWORD *)(v28 + 16) = 0;
              v29 = (_QWORD *)v28;
              *(_DWORD *)(v28 + 8) = 0;
              v30 = v88[1].m128i_i64[0];
              *(_QWORD *)(v28 + 24) = v28 + 8;
              *(_QWORD *)(v28 + 32) = v28 + 8;
              *(_QWORD *)(v28 + 40) = 0;
              if ( v30 )
              {
                v31 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                        v30,
                        (int)v28 + 8,
                        v20,
                        (int)v88,
                        (int)v18,
                        v19,
                        v85,
                        (__int64)v87,
                        (int)v88,
                        (int)src,
                        v92[0],
                        v93);
                LODWORD(v23) = (_DWORD)v88;
                v32 = v31;
                do
                {
                  v33 = v31;
                  v31 = *(_QWORD *)(v31 + 16);
                }
                while ( v31 );
                v29[3] = v33;
                v34 = v32;
                do
                {
                  v20 = v34;
                  v34 = *(_QWORD *)(v34 + 24);
                }
                while ( v34 );
                v35 = v88[2].m128i_i64[1];
                v29[4] = v20;
                v29[2] = v32;
                v29[5] = v35;
              }
              goto LABEL_24;
            case 2LL:
              v89 = *((_QWORD **)v15 + 9);
              v46 = operator new(0x18u);
              v20 = (__int64)v89;
              src = (__m128i *)v46;
              v47 = v89[1] - *v89;
              *(_QWORD *)(v46 + 16) = 0;
              *(_OWORD *)v46 = 0;
              if ( v47 )
              {
                v48 = operator new(v47);
                v20 = (__int64)v89;
                v49 = v48;
              }
              else
              {
                v49 = 0;
              }
              *src = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v49, (__m128i)(unsigned __int64)v49);
              src[1].m128i_i64[0] = v49 + v47;
              v50 = *(__int8 **)(v20 + 8);
              v23 = *(__int8 **)v20;
              v93 = v49;
              LODWORD(v88) = (_DWORD)v50;
              v94 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v49, (__m128i)(unsigned __int64)&v93);
              if ( v50 != v23 )
              {
                v51 = v23;
                do
                {
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
                  v51 += 16;
                  v49 = v93 + 16;
                  v93 += 16;
                }
                while ( v50 != v51 );
              }
              src->m128i_i64[1] = v49;
              *(_QWORD *)(v17 + 72) = src;
              goto LABEL_14;
            case 3LL:
              v42 = *((__m128i ***)v15 + 9);
              src = *v42;
              v88 = v42[1];
              v43 = (_QWORD *)operator new(0x20u);
              LODWORD(v20) = (_DWORD)v88;
              v44 = v43 + 2;
              v29 = v43;
              *v43 = v43 + 2;
              v94.m128i_i64[0] = (__int64)v88;
              if ( (unsigned __int64)v88 <= 0xF )
              {
                v23 = &v88->m128i_i8[1];
                if ( v88 )
                  goto LABEL_34;
LABEL_75:
                *v44 = src->m128i_i8[0];
                v45 = v94.m128i_i64[0];
                goto LABEL_35;
              }
              v81 = std::string::_M_create();
              *v29 = v81;
              v44 = (_BYTE *)v81;
              v82 = v94.m128i_i64[0];
              v29[2] = v94.m128i_i64[0];
              v23 = (__int8 *)(v82 + 1);
              if ( !v82 )
                goto LABEL_75;
              v45 = -1;
              if ( v23 )
              {
LABEL_34:
                memcpy(v44, src, (size_t)v23);
                v45 = v94.m128i_i64[0];
              }
LABEL_35:
              v29[1] = v45;
LABEL_24:
              *(_QWORD *)(v17 + 72) = v29;
LABEL_14:
              v26 = *v15;
              *(_QWORD *)(v17 + 24) = 0;
              *(_QWORD *)(v17 + 16) = 0;
              *(_DWORD *)v17 = v26;
              *(_QWORD *)(v16 + 16) = v17;
              *(_QWORD *)(v17 + 8) = v16;
              v27 = *((_QWORD *)v15 + 3);
              if ( v27 )
                *(_QWORD *)(v17 + 24) = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                                          v27,
                                          v17,
                                          v20,
                                          (int)v23,
                                          (int)v18,
                                          v19,
                                          v85,
                                          (__int64)v87,
                                          (int)v88,
                                          (int)src,
                                          v92[0],
                                          v93);
              v15 = *((int **)v15 + 2);
              if ( !v15 )
                return v9;
              v16 = v17;
              break;
            case 4LL:
              *(_BYTE *)(v17 + 72) = *((_BYTE *)v15 + 72);
              goto LABEL_14;
            case 5LL:
            case 6LL:
              *(_QWORD *)(v17 + 72) = *((_QWORD *)v15 + 9);
              goto LABEL_14;
            case 7LL:
              *(_QWORD *)(v17 + 72) = *((_QWORD *)v15 + 9);
              goto LABEL_14;
            case 8LL:
              v88 = *((__m128i **)v15 + 9);
              v36 = operator new(0x28u);
              v18 = v88;
              v37 = (__m128i *)v36;
              v38 = v88->m128i_i64[1] - v88->m128i_i64[0];
              *(_QWORD *)(v36 + 16) = 0;
              *(_OWORD *)v36 = 0;
              if ( v38 )
              {
                src = v88;
                v88 = (__m128i *)v38;
                v39 = operator new(v38);
                v38 = (unsigned __int64)v88;
                v18 = src;
                v23 = (__int8 *)v39;
              }
              else
              {
                v23 = nullptr;
              }
              v37[1].m128i_i64[0] = (__int64)&v23[v38];
              *v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
              v20 = v18->m128i_i64[1] - v18->m128i_i64[0];
              if ( v20 > 0 )
              {
                v88 = v18;
                v87 = (char *)(v18->m128i_i64[1] - v18->m128i_i64[0]);
                v40 = memcpy(v23, (const void *)v18->m128i_i64[0], v20);
                LODWORD(v20) = (_DWORD)v87;
                v18 = v88;
                v23 = &v87[(_QWORD)v40];
              }
              v41 = v18[1].m128i_i64[1];
              v37->m128i_i64[1] = (__int64)v23;
              v37[1].m128i_i64[1] = v41;
              v37[2].m128i_i8[0] = v18[2].m128i_i8[0];
              *(_QWORD *)(v17 + 72) = v37;
              goto LABEL_14;
            default:
              goto LABEL_14;
          }
        }
      }
      return v9;
    case 4LL:
      *(_BYTE *)(v9 + 72) = *((_BYTE *)a1 + 72);
      goto LABEL_6;
    case 5LL:
    case 6LL:
      *(_QWORD *)(v9 + 72) = *((_QWORD *)a1 + 9);
      goto LABEL_6;
    case 7LL:
      *(_QWORD *)(v9 + 72) = *((_QWORD *)a1 + 9);
      goto LABEL_6;
    case 8LL:
      v86 = *((__m128i **)a1 + 9);
      v55 = operator new(0x28u);
      v4 = v86;
      v56 = (__m128i *)v55;
      v57 = v86->m128i_i64[1] - v86->m128i_i64[0];
      *(_QWORD *)(v55 + 16) = 0;
      *(_OWORD *)v55 = 0;
      if ( v57 )
      {
        v58 = operator new(v57);
        v4 = v86;
        v10 = (char *)v58;
      }
      else
      {
        v10 = nullptr;
      }
      v56[1].m128i_i64[0] = (__int64)&v10[v57];
      *v56 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
      v59 = v4->m128i_i64[1] - v4->m128i_i64[0];
      if ( v59 > 0 )
      {
        v86 = v4;
        v60 = (char *)memcpy(v10, (const void *)v4->m128i_i64[0], v4->m128i_i64[1] - v4->m128i_i64[0]);
        v4 = v86;
        v10 = &v60[v59];
      }
      v61 = v4[1].m128i_i64[1];
      v56->m128i_i64[1] = (__int64)v10;
      v56[1].m128i_i64[1] = v61;
      v56[2].m128i_i8[0] = v4[2].m128i_i8[0];
      *(_QWORD *)(v9 + 72) = v56;
      goto LABEL_6;
    default:
      goto LABEL_6;
  }
}

