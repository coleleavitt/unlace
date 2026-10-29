unsigned __int64 __fastcall ida_mcp::tools::control_flow::`anonymous namespace'::find_block_paths(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(int)#1}::operator()(
        char **a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        __int64 a35)
{
  char *v36; // rdx
  char v38; // al
  unsigned __int64 v39; // rax
  char *v40; // r12
  int *v41; // rax
  char *v42; // rax
  __int64 v43; // r14
  __int64 i; // rbp
  qflow_chart_t *v45; // rdi
  __int64 (__fastcall *v46)(qflow_chart_t *__hidden, int, int); // rax
  __int64 v47; // rcx
  __int64 v48; // rsi
  char *v49; // rdx
  char v50; // al
  unsigned __int64 v51; // rax
  unsigned __int64 *v52; // rdx
  char *v53; // rax
  qflow_chart_t *v54; // rdi
  __int64 (__fastcall *v55)(qflow_chart_t *__hidden, int); // rax
  int **v57; // rax
  int *v58; // r14
  _QWORD *v59; // rdx
  _QWORD *v60; // rax
  _QWORD *v61; // rdx
  _QWORD *v62; // r12
  size_t v63; // rcx
  __int64 v64; // rax
  char v65; // si
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  _QWORD *v71; // rax
  _QWORD *v72; // rdx
  _QWORD *v73; // r12
  size_t v74; // rcx
  __int64 v75; // rax
  char v76; // si
  __int64 v77; // rdx
  __int64 v78; // rbp
  __int64 v79; // rax
  char v80; // si
  __int64 v81; // rdx
  size_t v82; // rax
  unsigned int v83; // ecx
  _QWORD *v84; // rax
  unsigned int v85; // esi
  unsigned int v86; // esi
  unsigned __int64 v87; // rdx
  char *v88; // rax
  char *v89; // r12
  unsigned int v90; // ecx
  unsigned int v91; // ecx
  unsigned int v92; // eax
  __int64 v93; // rsi
  void *v94; // r14
  signed __int64 v95; // rbp
  __int64 v96; // rdx
  __int64 v97; // rax
  unsigned __int64 v98; // rax
  __int64 v99; // r13
  char *v100; // rax
  char *v101; // rsi
  char *v102; // rcx
  char *v103; // rax
  __int64 v104; // rbp
  unsigned __int64 v105; // rdi
  char *v106; // r8
  unsigned int v107; // eax
  unsigned int v108; // edx
  __int64 v109; // rsi
  unsigned __int64 v110; // rdi
  char *v111; // r8
  unsigned int v112; // eax
  unsigned int v113; // edx
  __int64 v114; // rsi
  char *v115; // [rsp+0h] [rbp-128h]
  __int64 *v116; // [rsp+0h] [rbp-128h]
  int v117; // [rsp+8h] [rbp-120h]
  _QWORD *v118; // [rsp+8h] [rbp-120h]
  int v119; // [rsp+10h] [rbp-118h]
  int v120; // [rsp+18h] [rbp-110h]
  char v121; // [rsp+1Fh] [rbp-109h]
  __int64 v122; // [rsp+28h] [rbp-100h]
  __int64 v123; // [rsp+30h] [rbp-F8h]
  int *v124; // [rsp+38h] [rbp-F0h]
  unsigned int v125; // [rsp+48h] [rbp-E0h]
  __int64 v126; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD v127[2]; // [rsp+60h] [rbp-C8h] BYREF
  size_t v128; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v129; // [rsp+78h] [rbp-B0h] BYREF
  void *v130; // [rsp+80h] [rbp-A8h] BYREF
  size_t v131; // [rsp+88h] [rbp-A0h]
  _QWORD v132[2]; // [rsp+90h] [rbp-98h] BYREF
  char s[32]; // [rsp+A0h] [rbp-88h] BYREF
  char v134[40]; // [rsp+C0h] [rbp-68h] BYREF
  unsigned __int64 v135; // [rsp+E8h] [rbp-40h]

  v36 = *a1;
  v135 = __readfsqword(0x28u);
  v38 = *v36;
  if ( *v36 == 1 )
  {
    v39 = *(_QWORD *)(*((_QWORD *)v36 + 1) + 40LL);
  }
  else if ( v38 == 2 )
  {
    v39 = (__int64)(*(_QWORD *)(*((_QWORD *)v36 + 1) + 8LL) - **((_QWORD **)v36 + 1)) >> 4;
  }
  else
  {
    v39 = v38 != 0;
  }
  if ( v39 < *(_QWORD *)a1[1] )
  {
    v40 = a1[2];
    v41 = *((int **)v40 + 1);
    if ( v41 == *((int **)v40 + 2) )
    {
      v94 = *(void **)v40;
      v95 = (signed __int64)v41 - *(_QWORD *)v40;
      v96 = v95 >> 2;
      if ( v95 >> 2 == 0x1FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("vector::_M_realloc_append");
      v97 = 1;
      v115 = *((char **)v40 + 2);
      if ( v96 )
        v97 = v95 >> 2;
      v98 = v96 + v97;
      if ( v98 > 0x1FFFFFFFFFFFFFFFLL )
        v98 = 0x1FFFFFFFFFFFFFFFLL;
      v99 = 4 * v98;
      v100 = (char *)operator new(4 * v98);
      v101 = v115;
      *(_DWORD *)&v100[v95] = a2;
      v102 = v100;
      if ( v95 )
      {
        v103 = (char *)memcpy(v100, v94, v95);
        v101 = *((char **)v40 + 2);
        v102 = v103;
      }
      v104 = (__int64)&v102[v95 + 4];
      if ( v94 )
      {
        v115 = v102;
        operator delete(v94, v101 - (_BYTE *)v94);
        v102 = v115;
      }
      *(_QWORD *)v40 = v102;
      *((_QWORD *)v40 + 1) = v104;
      *((_QWORD *)v40 + 2) = &v102[v99];
    }
    else
    {
      *v41 = a2;
      *((_QWORD *)v40 + 1) = v41 + 1;
    }
    v122 = 1LL << a2;
    v123 = 8 * ((unsigned __int64)a2 >> 6);
    v42 = a1[4];
    *(_QWORD *)(*(_QWORD *)a1[3] + v123) |= 1LL << a2;
    if ( *(_DWORD *)v42 != a2 )
    {
      v43 = (__int64)a2 << 6;
      for ( i = 0; ; ++i )
      {
        v54 = (qflow_chart_t *)a1[5];
        v55 = *(__int64 (__fastcall **)(qflow_chart_t *__hidden, int))(*(_QWORD *)v54 + 96LL);
        if ( v55 == qflow_chart_t::nsucc )
        {
          if ( *(_DWORD *)(*((_QWORD *)v54 + 9) + v43 + 24) <= (int)i )
            goto LABEL_22;
        }
        else if ( (int)v55(v54, a2) <= (int)i )
        {
          goto LABEL_22;
        }
        v45 = (qflow_chart_t *)a1[5];
        v46 = *(__int64 (__fastcall **)(qflow_chart_t *__hidden, int, int))(*(_QWORD *)v45 + 112LL);
        if ( v46 == qflow_chart_t::succ )
          v47 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v45 + 9) + v43 + 16) + 4 * i);
        else
          v47 = (unsigned int)v46(v45, a2, i);
        v48 = *(_QWORD *)a1[3];
        if ( (*(_QWORD *)(v48 + 8 * ((unsigned __int64)(int)v47 >> 6)) & (1LL << v47)) == 0 )
        {
          v49 = *a1;
          v50 = **a1;
          if ( v50 == 1 )
            v51 = *(_QWORD *)(*((_QWORD *)v49 + 1) + 40LL);
          else
            v51 = v50 == 2 ? (__int64)(*(_QWORD *)(*((_QWORD *)v49 + 1) + 8LL) - **((_QWORD **)v49 + 1)) >> 4 : v50 != 0;
          v52 = (unsigned __int64 *)a1[1];
          if ( v51 < *v52 )
          {
            v53 = a1[6];
            LODWORD(v128) = v47;
            if ( !*((_QWORD *)v53 + 2) )
              ida_mcp::tools::control_flow::`anonymous namespace'::find_block_paths(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(int)#1}::operator()(
                (__int64)v45,
                v48,
                (__int64)v52,
                v47,
                a5,
                a6,
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
                a27,
                a28,
                a29,
                a30,
                a31,
                a32,
                a33,
                a34,
                a35);
            (*((void (__fastcall **)(char *, size_t *))v53 + 3))(v53, &v128);
          }
        }
      }
    }
    LOBYTE(v126) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v126,
      0,
      0,
      1LL << a2,
      a5,
      a6,
      (int)v115,
      v117,
      v119,
      v120,
      (int)&v126,
      v122,
      v123);
    v121 = v126;
    v57 = (int **)a1[2];
    v58 = *v57;
    v124 = v57[1];
    if ( v124 != *v57 )
    {
      v118 = v127;
      v116 = &v129;
      while ( 1 )
      {
        v78 = *v58;
        v127[0] = 0;
        v127[1] = 0;
        v79 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v80 = *(_BYTE *)v79;
        v81 = *(_QWORD *)(v79 + 8);
        *(_BYTE *)v79 = 5;
        LOBYTE(v128) = v80;
        *(_QWORD *)(v79 + 8) = v78;
        v129 = v81;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        qsnprintf();
        v130 = v132;
        v82 = strlen(s);
        v128 = v82;
        v83 = v82;
        if ( v82 > 0xF )
          break;
        if ( v82 == 1 )
        {
          LOBYTE(v132[0]) = s[0];
        }
        else if ( v82 )
        {
          v84 = v132;
LABEL_47:
          if ( v83 >= 8 )
          {
            *v84 = *(_QWORD *)s;
            *(_QWORD *)((char *)v84 + v83 - 8) = *(_QWORD *)((char *)&v132[1] + v83);
            v87 = (unsigned __int64)(v84 + 1) & 0xFFFFFFFFFFFFFFF8LL;
            v88 = (char *)v84 - v87;
            v89 = (char *)(s - v88);
            v90 = ((_DWORD)v88 + v83) & 0xFFFFFFF8;
            if ( v90 >= 8 )
            {
              v91 = v90 & 0xFFFFFFF8;
              v92 = 0;
              do
              {
                v93 = v92;
                v92 += 8;
                *(_QWORD *)(v87 + v93) = *(_QWORD *)&v89[v93];
              }
              while ( v92 < v91 );
            }
          }
          else if ( (v83 & 4) != 0 )
          {
            *(_DWORD *)v84 = *(_DWORD *)s;
            *(_DWORD *)((char *)v84 + v83 - 4) = *(_DWORD *)((char *)&v132[1] + v83 + 4);
          }
          else if ( v83 )
          {
            *(_BYTE *)v84 = s[0];
            if ( (v83 & 2) != 0 )
              *(_WORD *)((char *)v84 + v83 - 2) = *(_WORD *)((char *)&v132[1] + v83 + 6);
          }
          v82 = v128;
          v59 = v130;
          goto LABEL_33;
        }
        v59 = v132;
LABEL_33:
        v131 = v82;
        *((_BYTE *)v59 + v82) = 0;
        v128 = 0;
        v129 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v60 = (_QWORD *)operator new(0x20u);
        v61 = v60 + 2;
        v62 = v60;
        v63 = v131;
        *v60 = v60 + 2;
        if ( v130 == v132 )
        {
          v86 = v63 + 1;
          if ( (unsigned int)(v63 + 1) >= 8 )
          {
            v60[2] = v132[0];
            *(_QWORD *)((char *)v61 + v86 - 8) = *(_QWORD *)((char *)&v132[-1] + v86);
            v110 = (unsigned __int64)(v60 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v111 = (char *)((char *)v132 - ((char *)v61 - v110));
            if ( ((v86 + (_DWORD)v61 - (_DWORD)v110) & 0xFFFFFFF8) >= 8 )
            {
              v112 = (v86 + (_DWORD)v61 - v110) & 0xFFFFFFF8;
              v113 = 0;
              do
              {
                v114 = v113;
                v113 += 8;
                *(_QWORD *)(v110 + v114) = *(_QWORD *)&v111[v114];
              }
              while ( v113 < v112 );
            }
          }
          else if ( (v86 & 4) != 0 )
          {
            *((_DWORD *)v60 + 4) = v132[0];
            *(_DWORD *)((char *)v61 + v86 - 4) = *(_DWORD *)((char *)&v131 + v86 + 4);
          }
          else if ( (_DWORD)v63 != -1 )
          {
            *((_BYTE *)v60 + 16) = v132[0];
            if ( (v86 & 2) != 0 )
              *(_WORD *)((char *)v61 + v86 - 2) = *(_WORD *)((char *)&v131 + v86 + 6);
          }
        }
        else
        {
          *v60 = v130;
          v60[2] = v132[0];
        }
        v62[1] = v63;
        v130 = v132;
        v131 = 0;
        LOBYTE(v132[0]) = 0;
        v64 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v65 = *(_BYTE *)v64;
        v66 = *(_QWORD *)(v64 + 8);
        *(_BYTE *)v64 = 3;
        *(_QWORD *)(v64 + 8) = v62;
        LOBYTE(v128) = v65;
        v129 = v66;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v130 != v132 )
          operator delete(v130, v132[0] + 1LL);
        qsnprintf();
        std::string::basic_string<std::allocator<char>>(
          (__int64 *)&v130,
          v134,
          v67,
          v68,
          v69,
          v70,
          (int)v116,
          (int)v118,
          (__int64)&v130);
        v128 = 0;
        v129 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v71 = (_QWORD *)operator new(0x20u);
        v72 = v71 + 2;
        v73 = v71;
        v74 = v131;
        *v71 = v71 + 2;
        if ( v130 == v132 )
        {
          v85 = v74 + 1;
          if ( (unsigned int)(v74 + 1) >= 8 )
          {
            v71[2] = v132[0];
            *(_QWORD *)((char *)v72 + v85 - 8) = *(_QWORD *)((char *)&v132[-1] + v85);
            v105 = (unsigned __int64)(v71 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v106 = (char *)((char *)v132 - ((char *)v72 - v105));
            if ( ((v85 + (_DWORD)v72 - (_DWORD)v105) & 0xFFFFFFF8) >= 8 )
            {
              v107 = (v85 + (_DWORD)v72 - v105) & 0xFFFFFFF8;
              v108 = 0;
              do
              {
                v109 = v108;
                v108 += 8;
                *(_QWORD *)(v105 + v109) = *(_QWORD *)&v106[v109];
              }
              while ( v108 < v107 );
            }
          }
          else if ( (v85 & 4) != 0 )
          {
            *((_DWORD *)v71 + 4) = v132[0];
            *(_DWORD *)((char *)v72 + v85 - 4) = *(_DWORD *)((char *)&v131 + v85 + 4);
          }
          else if ( (_DWORD)v74 != -1 )
          {
            *((_BYTE *)v71 + 16) = v132[0];
            if ( (v85 & 2) != 0 )
              *(_WORD *)((char *)v72 + v85 - 2) = *(_WORD *)((char *)&v131 + v85 + 6);
          }
        }
        else
        {
          *v71 = v130;
          v71[2] = v132[0];
        }
        v73[1] = v74;
        v130 = v132;
        v131 = 0;
        LOBYTE(v132[0]) = 0;
        v75 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v76 = *(_BYTE *)v75;
        v77 = *(_QWORD *)(v75 + 8);
        *(_BYTE *)v75 = 3;
        *(_QWORD *)(v75 + 8) = v73;
        LOBYTE(v128) = v76;
        v129 = v77;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v130 != v132 )
          operator delete(v130, v132[0] + 1LL);
        LOBYTE(v126) = v121;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
        ++v58;
        v121 = v126;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v124 == v58 )
          goto LABEL_67;
      }
      v125 = v82;
      v84 = (_QWORD *)std::string::_M_create();
      v130 = v84;
      v83 = v125;
      v132[0] = v128;
      goto LABEL_47;
    }
LABEL_67:
    LOBYTE(v126) = v121;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_22:
    *((_QWORD *)a1[2] + 1) -= 4LL;
    *(_QWORD *)(*(_QWORD *)a1[3] + v123) &= ~v122;
  }
  return v135 - __readfsqword(0x28u);
}

