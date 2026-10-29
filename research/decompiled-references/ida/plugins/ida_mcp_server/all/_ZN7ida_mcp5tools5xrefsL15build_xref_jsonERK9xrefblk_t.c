__int64 __fastcall ida_mcp::tools::xrefs::build_xref_json(int a1, _BYTE *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rsi
  __int64 *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // rsi
  __int64 *v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  const char *v35; // r15
  __int64 *v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 *v41; // r12
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int8 v46; // al
  __int64 *v47; // r12
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned __int8 v52; // al
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  char *v56; // rbp
  unsigned int v58; // edx
  unsigned int v59; // edx
  unsigned __int64 v60; // rdi
  char *v61; // rcx
  char *v62; // r8
  unsigned int v63; // edx
  unsigned int v64; // edx
  unsigned int v65; // ecx
  __int64 v66; // r9
  unsigned __int64 v67; // rdi
  char *v68; // rcx
  char *v69; // r8
  unsigned int v70; // edx
  unsigned int v71; // edx
  unsigned int v72; // ecx
  __int64 v73; // r9
  int v74; // [rsp+0h] [rbp-2A8h]
  int v75; // [rsp+0h] [rbp-2A8h]
  int v76; // [rsp+0h] [rbp-2A8h]
  int v77; // [rsp+0h] [rbp-2A8h]
  int v78; // [rsp+0h] [rbp-2A8h]
  int v79; // [rsp+0h] [rbp-2A8h]
  int v80; // [rsp+0h] [rbp-2A8h]
  int v81; // [rsp+0h] [rbp-2A8h]
  int v82; // [rsp+0h] [rbp-2A8h]
  int v83; // [rsp+8h] [rbp-2A0h]
  int v84; // [rsp+8h] [rbp-2A0h]
  int v85; // [rsp+8h] [rbp-2A0h]
  int v86; // [rsp+8h] [rbp-2A0h]
  int v87; // [rsp+8h] [rbp-2A0h]
  int v88; // [rsp+8h] [rbp-2A0h]
  int v89; // [rsp+8h] [rbp-2A0h]
  _QWORD *v90; // [rsp+8h] [rbp-2A0h]
  __int64 v91; // [rsp+8h] [rbp-2A0h]
  __int64 v92; // [rsp+10h] [rbp-298h]
  __int64 v93; // [rsp+10h] [rbp-298h]
  __int64 v94; // [rsp+10h] [rbp-298h]
  __int64 v95; // [rsp+10h] [rbp-298h]
  __int64 v96; // [rsp+10h] [rbp-298h]
  __int64 v97; // [rsp+10h] [rbp-298h]
  __int64 v98; // [rsp+10h] [rbp-298h]
  int v99; // [rsp+10h] [rbp-298h]
  void *v100; // [rsp+70h] [rbp-238h] BYREF
  __int64 v101; // [rsp+78h] [rbp-230h]
  _QWORD v102[2]; // [rsp+80h] [rbp-228h] BYREF
  void *v103; // [rsp+90h] [rbp-218h] BYREF
  __int64 v104; // [rsp+98h] [rbp-210h]
  _QWORD v105[2]; // [rsp+A0h] [rbp-208h] BYREF
  char v106; // [rsp+B0h] [rbp-1F8h] BYREF
  __int128 v107; // [rsp+B8h] [rbp-1F0h] BYREF
  char v108; // [rsp+C8h] [rbp-1E0h]
  __int128 v109; // [rsp+D0h] [rbp-1D8h] BYREF
  char v110; // [rsp+E0h] [rbp-1C8h] BYREF
  __int128 v111; // [rsp+E8h] [rbp-1C0h] BYREF
  char v112; // [rsp+F8h] [rbp-1B0h]
  __int128 v113; // [rsp+100h] [rbp-1A8h] BYREF
  char v114; // [rsp+110h] [rbp-198h] BYREF
  __int128 v115; // [rsp+118h] [rbp-190h] BYREF
  char v116; // [rsp+128h] [rbp-180h]
  __int128 v117; // [rsp+130h] [rbp-178h] BYREF
  char v118; // [rsp+140h] [rbp-168h] BYREF
  __int128 v119; // [rsp+148h] [rbp-160h] BYREF
  char v120; // [rsp+158h] [rbp-150h]
  __int64 v121; // [rsp+160h] [rbp-148h]
  __int64 v122; // [rsp+168h] [rbp-140h]
  char v123; // [rsp+170h] [rbp-138h] BYREF
  __int128 v124; // [rsp+178h] [rbp-130h]
  char v125; // [rsp+188h] [rbp-120h]
  __int64 v126; // [rsp+190h] [rbp-118h]
  __int64 v127; // [rsp+198h] [rbp-110h]
  _QWORD v128[3]; // [rsp+1A0h] [rbp-108h] BYREF
  _QWORD v129[3]; // [rsp+1B8h] [rbp-F0h] BYREF
  _QWORD v130[3]; // [rsp+1D0h] [rbp-D8h] BYREF
  _QWORD v131[3]; // [rsp+1E8h] [rbp-C0h] BYREF
  _QWORD v132[3]; // [rsp+200h] [rbp-A8h] BYREF
  char v133; // [rsp+218h] [rbp-90h] BYREF
  char v134[32]; // [rsp+220h] [rbp-88h] BYREF
  char v135[40]; // [rsp+240h] [rbp-68h] BYREF
  unsigned __int64 v136; // [rsp+268h] [rbp-40h]

  v136 = __readfsqword(0x28u);
  *(_QWORD *)&v107 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v106 = 3;
  v3 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v3, "from", v4, v5, v6, v7, v74, a1, (__int64)&v107);
  v107 = (unsigned __int64)v3;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v100, v134, v8, v9, v10, v11, v75, v83, v92);
  v108 = 0;
  *(_QWORD *)&v109 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v108 = 3;
  v12 = (_QWORD *)operator new(0x20u);
  v13 = v100;
  v14 = v12 + 2;
  v15 = v101;
  *v12 = v12 + 2;
  if ( v13 == v102 )
  {
    v59 = v15 + 1;
    if ( (unsigned int)(v15 + 1) >= 8 )
    {
      v12[2] = v102[0];
      *(_QWORD *)((char *)v14 + v59 - 8) = *(_QWORD *)((char *)&v102[-1] + v59);
      v67 = (unsigned __int64)(v12 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v68 = (char *)v14 - v67;
      v69 = (char *)((char *)v102 - v68);
      v70 = ((_DWORD)v68 + v59) & 0xFFFFFFF8;
      if ( v70 >= 8 )
      {
        v71 = v70 & 0xFFFFFFF8;
        v72 = 0;
        do
        {
          v73 = v72;
          v72 += 8;
          *(_QWORD *)(v67 + v73) = *(_QWORD *)&v69[v73];
        }
        while ( v72 < v71 );
      }
    }
    else if ( (v59 & 4) != 0 )
    {
      *((_DWORD *)v12 + 4) = v102[0];
      *(_DWORD *)((char *)v14 + v59 - 4) = *(_DWORD *)((char *)&v101 + v59 + 4);
    }
    else if ( (_DWORD)v15 != -1 )
    {
      *((_BYTE *)v12 + 16) = v102[0];
      if ( (v59 & 2) != 0 )
        *(_WORD *)((char *)v14 + v59 - 2) = *(_WORD *)((char *)&v101 + v59 + 6);
    }
  }
  else
  {
    *v12 = v13;
    v12[2] = v102[0];
  }
  v12[1] = v15;
  v100 = v102;
  v101 = 0;
  LOBYTE(v102[0]) = 0;
  v109 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v128,
    (const __m128i *)&v106);
  v128[2] = 0;
  v110 = 0;
  *(_QWORD *)&v111 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v110 = 3;
  v16 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v16, "to", v17, v18, v19, v20, v76, v84, v93);
  v111 = (unsigned __int64)v16;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v103, v135, v21, v22, v23, v24, v77, v85, v94);
  v112 = 0;
  *(_QWORD *)&v113 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v112 = 3;
  v25 = (_QWORD *)operator new(0x20u);
  v26 = v103;
  v27 = v25 + 2;
  v28 = v104;
  *v25 = v25 + 2;
  if ( v26 == v105 )
  {
    v58 = v28 + 1;
    if ( (unsigned int)(v28 + 1) >= 8 )
    {
      v25[2] = v105[0];
      *(_QWORD *)((char *)v27 + v58 - 8) = *(_QWORD *)((char *)&v105[-1] + v58);
      v60 = (unsigned __int64)(v25 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v61 = (char *)v27 - v60;
      v62 = (char *)((char *)v105 - v61);
      v63 = ((_DWORD)v61 + v58) & 0xFFFFFFF8;
      if ( v63 >= 8 )
      {
        v64 = v63 & 0xFFFFFFF8;
        v65 = 0;
        do
        {
          v66 = v65;
          v65 += 8;
          *(_QWORD *)(v60 + v66) = *(_QWORD *)&v62[v66];
        }
        while ( v65 < v64 );
      }
    }
    else if ( (v58 & 4) != 0 )
    {
      *((_DWORD *)v25 + 4) = v105[0];
      *(_DWORD *)((char *)v27 + v58 - 4) = *(_DWORD *)((char *)&v104 + v58 + 4);
    }
    else if ( (_DWORD)v28 != -1 )
    {
      *((_BYTE *)v25 + 16) = v105[0];
      if ( (v58 & 2) != 0 )
        *(_WORD *)((char *)v27 + v58 - 2) = *(_WORD *)((char *)&v104 + v58 + 6);
    }
  }
  else
  {
    *v25 = v26;
    v25[2] = v105[0];
  }
  v25[1] = v28;
  v103 = v105;
  v104 = 0;
  LOBYTE(v105[0]) = 0;
  v113 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v129,
    (const __m128i *)&v110);
  v129[2] = 0;
  v114 = 0;
  *(_QWORD *)&v115 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v114 = 3;
  v29 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v29, "type", v30, v31, v32, v33, v78, v86, v95);
  v34 = (unsigned __int8)a2[17];
  v115 = (unsigned __int64)v29;
  if ( a2[16] )
  {
    switch ( (char)v34 )
    {
      case 16:
        v35 = "Call_Far";
        break;
      case 17:
        v35 = "Call_Near";
        break;
      case 18:
        v35 = "Jump_Far";
        break;
      case 19:
        v35 = "Jump_Near";
        break;
      case 21:
        v35 = "Flow";
        break;
      default:
        v35 = "Code_Unknown";
        break;
    }
  }
  else
  {
    switch ( v34 )
    {
      case 1LL:
        v35 = "Data_Offset";
        break;
      case 2LL:
        v35 = "Data_Write";
        break;
      case 3LL:
        v35 = "Data_Read";
        break;
      case 4LL:
        v35 = "Data_Text";
        break;
      case 5LL:
        v35 = "Data_Informational";
        break;
      default:
        v35 = "Data_Unknown";
        break;
    }
  }
  v116 = 0;
  *(_QWORD *)&v117 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v116 = 3;
  v36 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v36, v35, v37, v38, v39, v40, v79, v87, v96);
  v117 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v130,
    (const __m128i *)&v114);
  v130[2] = 0;
  v118 = 0;
  *(_QWORD *)&v119 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v118 = 3;
  v41 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v41, "is_code", v42, v43, v44, v45, v80, v88, v97);
  v46 = a2[16];
  v120 = 4;
  v121 = v46;
  v122 = 0;
  v119 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v131,
    (const __m128i *)&v118);
  v131[2] = 0;
  v123 = 0;
  *(_QWORD *)&v124 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v123 = 3;
  v47 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v47, "user_defined", v48, v49, v50, v51, v81, v89, v98);
  v52 = a2[18];
  v125 = 4;
  v126 = v52;
  v127 = 0;
  v124 = (unsigned __int64)v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v132,
    (const __m128i *)&v123);
  v132[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v90,
    (__int64)v128,
    5,
    v53,
    v54,
    v55,
    v82,
    (__int64)v90,
    v99,
    (int)&v109,
    (int)&v111,
    (int)&v113,
    (__int64)&v115,
    (int)&v117,
    (int)&v119,
    (int)&v106,
    (int)&v110,
    (char)&v114,
    (__int64)&v100,
    (int)&v103,
    (__int64)v100);
  v56 = &v133;
  do
  {
    v56 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v56 != (char *)v128 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v103 != v105 )
    operator delete(v103, v105[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v100 != v102 )
    operator delete(v100, v102[0] + 1LL);
  return v91;
}

