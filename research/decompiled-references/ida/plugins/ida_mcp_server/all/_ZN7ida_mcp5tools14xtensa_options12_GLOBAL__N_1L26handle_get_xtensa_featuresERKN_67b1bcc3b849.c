ida_mcp::tools::xtensa_options::_anonymous_namespace_ *__fastcall ida_mcp::tools::xtensa_options::`anonymous namespace'::handle_get_xtensa_features(
        ida_mcp::tools::xtensa_options::_anonymous_namespace_ *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        void *a10,
        int a11,
        __int64 a12,
        int a13,
        int a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        int a18,
        int a19,
        int a20,
        int a21,
        char a22,
        int a23,
        int a24,
        int a25,
        int a26,
        __int64 a27)
{
  unsigned int v28; // esi
  const char *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rax
  _QWORD *v43; // rbx
  size_t v44; // r14
  __int64 v45; // r12
  _QWORD *v46; // r15
  size_t v47; // r13
  size_t v48; // rdx
  int v49; // eax
  __int64 v50; // r13
  size_t v51; // r13
  size_t v52; // rdx
  signed __int64 v53; // rax
  char v54; // si
  __int64 v55; // rax
  __int64 *v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  char v62; // si
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  _QWORD *v68; // rax
  char *v69; // rbx
  size_t v70; // r12
  __int64 v71; // r13
  char *v72; // r14
  size_t v73; // r15
  size_t v74; // rdx
  int v75; // eax
  __int64 v76; // r15
  size_t v77; // r15
  size_t v78; // rdx
  signed __int64 v79; // rax
  char v80; // si
  __int64 v81; // rax
  _QWORD *v83; // r13
  _QWORD *v84; // rax
  __int64 v85; // rax
  _QWORD *insert_hint_unique_pos; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  char *v89; // r13
  _QWORD *v90; // r15
  char *v91; // rax
  __int64 v92; // rdx
  char *v93; // rdi
  unsigned int v94; // edx
  unsigned int v95; // eax
  unsigned __int64 v96; // rdx
  unsigned int v97; // eax
  unsigned int v98; // eax
  unsigned int v99; // ecx
  __int64 v100; // rdi
  unsigned __int64 v101; // rcx
  unsigned int v102; // edx
  unsigned int v103; // edx
  unsigned int v104; // esi
  __int64 v105; // rdi
  int v106; // [rsp+0h] [rbp-E8h]
  int v107; // [rsp+0h] [rbp-E8h]
  int v108; // [rsp+0h] [rbp-E8h]
  char *v109; // [rsp+0h] [rbp-E8h]
  int v110; // [rsp+8h] [rbp-E0h]
  int v111; // [rsp+8h] [rbp-E0h]
  int v112; // [rsp+8h] [rbp-E0h]
  __int64 v113; // [rsp+10h] [rbp-D8h]
  __int64 v114; // [rsp+10h] [rbp-D8h]
  __int64 v115; // [rsp+10h] [rbp-D8h]
  __int64 v116; // [rsp+10h] [rbp-D8h]
  char *v117; // [rsp+10h] [rbp-D8h]
  __int64 *v118; // [rsp+20h] [rbp-C8h]
  _DWORD *v119; // [rsp+20h] [rbp-C8h]
  __int64 v120; // [rsp+28h] [rbp-C0h]
  __int64 v121; // [rsp+50h] [rbp-98h]
  __int64 v122; // [rsp+58h] [rbp-90h] BYREF
  void *s2; // [rsp+60h] [rbp-88h] BYREF
  size_t n; // [rsp+68h] [rbp-80h]
  _QWORD v125[15]; // [rsp+70h] [rbp-78h] BYREF

  v125[7] = __readfsqword(0x28u);
  netnode_check();
  v28 = 0;
  if ( (unsigned __int8)netnode_exist() )
    v28 = netnode_altval();
  ida_mcp::tools::xtensa_options::`anonymous namespace'::feature_summary(this, v28);
  v29 = "NOT xtensa (call has no effect)";
  v121 = 0;
  v122 = 0;
  if ( ida_mcp::tools::xtensa_options::`anonymous namespace'::is_xtensa_database(this) )
    v29 = "xtensa";
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v118 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v118, v29, v30, v31, v32, v33, v106, (int)&v122, v113);
  std::string::basic_string<std::allocator<char>>((__int64 *)&s2, "processor", v34, v35, v36, v37, v107, v110, v114);
  if ( !*(_BYTE *)this )
  {
    *(_BYTE *)this = 1;
    v120 = operator new(0x30u);
    v43 = s2;
    *(_DWORD *)(v120 + 8) = 0;
    v44 = n;
    v46 = (_QWORD *)(v120 + 8);
    *(_QWORD *)(v120 + 16) = 0;
    *(_QWORD *)(v120 + 24) = v120 + 8;
    *(_QWORD *)(v120 + 32) = v120 + 8;
    *(_QWORD *)(v120 + 40) = 0;
    *((_QWORD *)this + 1) = v120;
    v115 = v120 + 8;
    goto LABEL_55;
  }
  if ( *(_BYTE *)this != 1 )
    ida_mcp::tools::xtensa_options::`anonymous namespace'::handle_get_xtensa_features(
      (int)&s2,
      (int)"processor",
      v38,
      v39,
      v40,
      v41,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15,
      a16,
      a17,
      a18,
      a19,
      a20,
      a21,
      a22,
      a23,
      a24,
      a25,
      a26,
      a27);
  v42 = *((_QWORD *)this + 1);
  v43 = s2;
  v44 = n;
  v45 = *(_QWORD *)(v42 + 16);
  v46 = (_QWORD *)(v42 + 8);
  v120 = v42;
  v115 = v42 + 8;
  if ( !v45 )
  {
LABEL_55:
    v83 = (_QWORD *)operator new(0x50u);
    v84 = v83 + 6;
    v83[4] = v83 + 6;
    if ( v43 == v125 )
    {
      v94 = v44 + 1;
      if ( (unsigned int)(v44 + 1) >= 8 )
      {
        v83[6] = v125[0];
        *(_QWORD *)((char *)v84 + v94 - 8) = *(_QWORD *)((char *)&v125[-1] + v94);
        v101 = (unsigned __int64)(v83 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v102 = ((_DWORD)v84 - v101 + v94) & 0xFFFFFFF8;
        if ( v102 >= 8 )
        {
          v103 = v102 & 0xFFFFFFF8;
          v104 = 0;
          do
          {
            v105 = v104;
            v104 += 8;
            *(_QWORD *)(v101 + v105) = *(_QWORD *)((char *)v125 - ((char *)v84 - v101) + v105);
          }
          while ( v104 < v103 );
        }
      }
      else if ( (v94 & 4) != 0 )
      {
        *((_DWORD *)v83 + 12) = v125[0];
        *(_DWORD *)((char *)v84 + v94 - 4) = *(_DWORD *)((char *)&n + v94 + 4);
      }
      else if ( (_DWORD)v44 != -1 )
      {
        *((_BYTE *)v83 + 48) = v125[0];
        if ( (v94 & 2) != 0 )
          *(_WORD *)((char *)v84 + v94 - 2) = *(_WORD *)((char *)&n + v94 + 6);
      }
      v43 = v83 + 6;
    }
    else
    {
      v85 = v125[0];
      v83[4] = v43;
      v83[6] = v85;
    }
    v83[5] = v44;
    v83[8] = 0;
    v83[9] = 0;
    s2 = v125;
    n = 0;
    LOBYTE(v125[0]) = 0;
    insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                               (_QWORD *)v120,
                               v46,
                               v43,
                               v44);
    v46 = insert_hint_unique_pos;
    if ( v87 )
    {
      if ( !insert_hint_unique_pos && v115 != v87 )
        std::string::compare(v43, v44, *(const void **)(v87 + 32), *(_QWORD *)(v87 + 40));
      v46 = v83;
      std::_Rb_tree_insert_and_rebalance();
      ++*(_QWORD *)(v120 + 40);
    }
    else
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      std::string::_M_dispose();
      operator delete(v83, 0x50u);
    }
    v43 = s2;
    goto LABEL_27;
  }
  do
  {
    while ( 1 )
    {
      v47 = *(_QWORD *)(v45 + 40);
      v48 = v47;
      if ( v44 <= v47 )
        v48 = v44;
      if ( v48 )
      {
        v49 = memcmp(*(const void **)(v45 + 32), v43, v48);
        if ( v49 )
          goto LABEL_17;
      }
      v50 = v47 - v44;
      if ( v50 <= 0x7FFFFFFF )
        break;
LABEL_9:
      v46 = (_QWORD *)v45;
      v45 = *(_QWORD *)(v45 + 16);
      if ( !v45 )
        goto LABEL_19;
    }
    if ( v50 < (__int64)0xFFFFFFFF80000000LL )
      goto LABEL_18;
    v49 = v50;
LABEL_17:
    if ( v49 >= 0 )
      goto LABEL_9;
LABEL_18:
    v45 = *(_QWORD *)(v45 + 24);
  }
  while ( v45 );
LABEL_19:
  if ( (_QWORD *)v115 == v46 )
    goto LABEL_55;
  v51 = v46[5];
  v52 = v51;
  if ( v44 <= v51 )
    v52 = v44;
  if ( v52 && (LODWORD(v53) = memcmp(v43, (const void *)v46[4], v52), (_DWORD)v53) )
  {
LABEL_26:
    if ( (int)v53 < 0 )
      goto LABEL_55;
  }
  else
  {
    v53 = v44 - v51;
    if ( (__int64)(v44 - v51) <= 0x7FFFFFFF )
    {
      if ( v53 >= (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_26;
      goto LABEL_55;
    }
  }
LABEL_27:
  if ( v43 != v125 )
    operator delete(v43, v125[0] + 1LL);
  v54 = *((_BYTE *)v46 + 64);
  *((_BYTE *)v46 + 64) = 3;
  v55 = v46[9];
  v46[9] = v118;
  LOBYTE(v121) = v54;
  v122 = v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v121 = 0;
  v122 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v56 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v56, "$ xtensa options", v57, v58, v59, v60, (int)v125, v111, v115);
  v61 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v62 = *(_BYTE *)v61;
  v63 = *(_QWORD *)(v61 + 8);
  *(_BYTE *)v61 = 3;
  *(_QWORD *)(v61 + 8) = v56;
  LOBYTE(v121) = v62;
  v122 = v63;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::basic_string<std::allocator<char>>((__int64 *)&s2, "altval_index", v64, v65, v66, v67, v108, v112, v116);
  if ( !*(_BYTE *)this )
  {
    *(_BYTE *)this = 1;
    v119 = (_DWORD *)operator new(0x30u);
    v69 = (char *)s2;
    v119[2] = 0;
    v70 = n;
    v72 = (char *)(v119 + 2);
    *((_QWORD *)v119 + 2) = 0;
    *((_QWORD *)v119 + 3) = v119 + 2;
    *((_QWORD *)v119 + 4) = v119 + 2;
    *((_QWORD *)v119 + 5) = 0;
    *((_QWORD *)this + 1) = v119;
    v117 = (char *)(v119 + 2);
    goto LABEL_62;
  }
  if ( *(_BYTE *)this != 1 )
    JUMPOUT(0x14E2F0);
  v68 = *((_QWORD **)this + 1);
  v69 = (char *)s2;
  v70 = n;
  v71 = v68[2];
  v72 = (char *)(v68 + 1);
  v119 = v68;
  v117 = (char *)(v68 + 1);
  if ( !v71 )
  {
LABEL_62:
    v88 = operator new(0x50u);
    v89 = (char *)(v88 + 48);
    v90 = (_QWORD *)v88;
    *(_QWORD *)(v88 + 32) = v88 + 48;
    if ( v69 == v109 )
    {
      v95 = v70 + 1;
      if ( (unsigned int)(v70 + 1) >= 8 )
      {
        v90[6] = *(_QWORD *)v109;
        *(_QWORD *)&v89[v95 - 8] = *(_QWORD *)&v109[v95 - 8];
        v96 = (unsigned __int64)(v90 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v97 = ((_DWORD)v89 - v96 + v95) & 0xFFFFFFF8;
        if ( v97 >= 8 )
        {
          v98 = v97 & 0xFFFFFFF8;
          v99 = 0;
          do
          {
            v100 = v99;
            v99 += 8;
            *(_QWORD *)(v96 + v100) = *(_QWORD *)(v109 - &v89[-v96] + v100);
          }
          while ( v99 < v98 );
        }
      }
      else if ( (v95 & 4) != 0 )
      {
        *((_DWORD *)v90 + 12) = *(_DWORD *)v109;
        *(_DWORD *)&v89[v95 - 4] = *(_DWORD *)&v109[v95 - 4];
      }
      else if ( (_DWORD)v70 != -1 )
      {
        *((_BYTE *)v90 + 48) = *v109;
        if ( (v95 & 2) != 0 )
          *(_WORD *)&v89[v95 - 2] = *(_WORD *)&v109[v95 - 2];
      }
      v69 = v89;
    }
    else
    {
      *(_QWORD *)(v88 + 32) = v69;
      *(_QWORD *)(v88 + 48) = v125[0];
    }
    v90[5] = v70;
    v90[8] = 0;
    v90[9] = 0;
    s2 = v109;
    n = 0;
    LOBYTE(v125[0]) = 0;
    v91 = (char *)std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                    v119,
                    v72,
                    v69,
                    v70);
    v72 = v91;
    if ( v92 )
    {
      if ( !v91 && v117 != (char *)v92 )
        std::string::compare(v69, v70, *(const void **)(v92 + 32), *(_QWORD *)(v92 + 40));
      v72 = (char *)v90;
      std::_Rb_tree_insert_and_rebalance();
      ++*((_QWORD *)v119 + 5);
    }
    else
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v93 = (char *)v90[4];
      if ( v89 != v93 )
        operator delete(v93, v90[6] + 1LL);
      operator delete(v90, 0x50u);
    }
    v69 = (char *)s2;
    goto LABEL_51;
  }
  while ( 2 )
  {
    while ( 2 )
    {
      v73 = *(_QWORD *)(v71 + 40);
      v74 = v73;
      if ( v70 <= v73 )
        v74 = v70;
      if ( !v74 || (v75 = memcmp(*(const void **)(v71 + 32), v69, v74)) == 0 )
      {
        v76 = v73 - v70;
        if ( v76 <= 0x7FFFFFFF )
        {
          if ( v76 < (__int64)0xFFFFFFFF80000000LL )
            goto LABEL_42;
          v75 = v76;
          break;
        }
LABEL_33:
        v72 = (char *)v71;
        v71 = *(_QWORD *)(v71 + 16);
        if ( !v71 )
          goto LABEL_43;
        continue;
      }
      break;
    }
    if ( v75 >= 0 )
      goto LABEL_33;
LABEL_42:
    v71 = *(_QWORD *)(v71 + 24);
    if ( v71 )
      continue;
    break;
  }
LABEL_43:
  if ( v72 == v117 )
    goto LABEL_62;
  v77 = *((_QWORD *)v72 + 5);
  v78 = v77;
  if ( v70 <= v77 )
    v78 = v70;
  if ( v78 && (LODWORD(v79) = memcmp(v69, *((const void **)v72 + 4), v78), (_DWORD)v79) )
  {
LABEL_50:
    if ( (int)v79 < 0 )
      goto LABEL_62;
  }
  else
  {
    v79 = v70 - v77;
    if ( (__int64)(v70 - v77) <= 0x7FFFFFFF )
    {
      if ( v79 >= (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_50;
      goto LABEL_62;
    }
  }
LABEL_51:
  if ( v69 != v109 )
    operator delete(v69, v125[0] + 1LL);
  v80 = v72[64];
  v81 = *((_QWORD *)v72 + 9);
  v72[64] = 6;
  LOBYTE(v121) = v80;
  *((_QWORD *)v72 + 9) = 0;
  v122 = v81;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return this;
}

