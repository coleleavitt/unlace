_QWORD *__fastcall ida_mcp::tools::undo::`anonymous namespace'::get_undo_label_impl(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        int a12,
        int a13,
        __int64 a14,
        __int64 a15,
        int a16,
        int a17,
        __int64 a18,
        __int64 a19,
        int a20,
        int a21,
        char a22,
        int a23,
        int a24,
        char a25,
        char a26,
        int a27,
        char a28,
        char a29,
        int a30,
        char a31,
        char a32,
        int a33,
        char a34,
        int a35,
        int a36,
        char a37,
        char a38,
        int a39,
        char a40,
        int a41,
        int a42,
        char a43,
        int a44,
        int a45,
        char a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        char a58,
        __int64 a59)
{
  unsigned __int8 undo_action_label; // bl
  unsigned __int8 redo_action_label; // r12
  __int64 v61; // rax
  __int64 v62; // rax
  const char *v63; // r15
  __int64 *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 *v68; // rbx
  size_t v69; // rax
  void *v70; // rcx
  size_t v71; // r8
  __int64 v72; // rax
  __int64 v73; // rax
  const char *v74; // r12
  __int64 *v75; // rax
  __int64 *v76; // rbx
  size_t v77; // rax
  void *v78; // rcx
  size_t v79; // r8
  __m128i *v80; // rbx
  __int64 v82; // rax
  __int64 v83; // rax
  void *dest; // [rsp+8h] [rbp-1E0h]
  void *desta; // [rsp+8h] [rbp-1E0h]
  void *v86; // [rsp+20h] [rbp-1C8h]
  void *v87; // [rsp+20h] [rbp-1C8h]
  int v88[2]; // [rsp+38h] [rbp-1B0h]
  int v89[2]; // [rsp+38h] [rbp-1B0h]
  char v90; // [rsp+80h] [rbp-168h] BYREF
  int v91[4]; // [rsp+88h] [rbp-160h]
  char v92; // [rsp+98h] [rbp-150h]
  __int64 v93; // [rsp+A0h] [rbp-148h]
  __int64 v94; // [rsp+A8h] [rbp-140h]
  int v95; // [rsp+B0h] [rbp-138h] BYREF
  __int128 v96; // [rsp+B8h] [rbp-130h]
  char v97; // [rsp+C8h] [rbp-120h]
  __int128 v98; // [rsp+D0h] [rbp-118h]
  char v99; // [rsp+E0h] [rbp-108h] BYREF
  int v100[4]; // [rsp+E8h] [rbp-100h]
  char v101; // [rsp+F8h] [rbp-F0h]
  __int64 v102; // [rsp+100h] [rbp-E8h]
  __int64 v103; // [rsp+108h] [rbp-E0h]
  char v104; // [rsp+110h] [rbp-D8h] BYREF
  __int128 v105; // [rsp+118h] [rbp-D0h]
  char v106; // [rsp+128h] [rbp-C0h]
  int v107[4]; // [rsp+130h] [rbp-B8h]
  __m128i v108; // [rsp+140h] [rbp-A8h] BYREF
  __int64 v109; // [rsp+150h] [rbp-98h]
  _QWORD v110[3]; // [rsp+158h] [rbp-90h] BYREF
  _QWORD v111[3]; // [rsp+170h] [rbp-78h] BYREF
  _QWORD v112[3]; // [rsp+188h] [rbp-60h] BYREF
  char v113; // [rsp+1A0h] [rbp-48h] BYREF
  unsigned __int64 v114; // [rsp+1A8h] [rbp-40h]

  v114 = __readfsqword(0x28u);
  undo_action_label = get_undo_action_label();
  redo_action_label = get_redo_action_label();
  *(_QWORD *)v91 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v90 = 3;
  v61 = operator new(0x20u);
  *(_QWORD *)v61 = v61 + 16;
  strcpy((char *)(v61 + 16), "has_undo");
  *(_QWORD *)(v61 + 8) = 8;
  v92 = 4;
  v93 = undo_action_label;
  v94 = 0;
  *(_OWORD *)v91 = (unsigned __int64)v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v108,
    (const __m128i *)&v90,
    2);
  v109 = 0;
  LOBYTE(v95) = 0;
  *(_QWORD *)&v96 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v95) = 3;
  v62 = operator new(0x20u);
  *(_QWORD *)v62 = v62 + 16;
  v63 = "";
  strcpy((char *)(v62 + 16), "undo_label");
  *(_QWORD *)(v62 + 8) = 10;
  v96 = (unsigned __int64)v62;
  if ( undo_action_label )
    v63 = _qstring<char>::c_str(void)const::nullstr;
  v97 = 0;
  *(_QWORD *)&v98 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v97 = 3;
  v64 = (__int64 *)operator new(0x20u);
  v68 = v64;
  *v64 = (__int64)(v64 + 2);
  if ( !v63 )
    ida_mcp::tools::undo::`anonymous namespace'::get_undo_label_impl(
      32,
      0,
      v65,
      (__int64)(v64 + 2),
      v66,
      v67,
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
      a35,
      a36,
      a37,
      a38,
      a39,
      a40,
      a41,
      a42,
      a43,
      a44,
      a45,
      a46,
      a47,
      a48,
      a49,
      a50,
      a51,
      a52,
      a53,
      a54,
      a55,
      a56,
      a57,
      a58,
      a59);
  dest = v64 + 2;
  v69 = strlen(v63);
  v70 = dest;
  *(_QWORD *)v88 = v69;
  v71 = v69;
  if ( v69 > 0xF )
  {
    desta = (void *)v69;
    v82 = std::string::_M_create();
    *v68 = v82;
    v70 = (void *)v82;
    v71 = (size_t)desta;
    v68[2] = *(_QWORD *)v88;
LABEL_22:
    memcpy(v70, v63, v71);
    v69 = *(_QWORD *)v88;
    v70 = (void *)*v68;
    goto LABEL_7;
  }
  if ( v69 == 1 )
  {
    *((_BYTE *)v68 + 16) = *v63;
    goto LABEL_7;
  }
  if ( v69 )
    goto LABEL_22;
LABEL_7:
  v68[1] = v69;
  *((_BYTE *)v70 + v69) = 0;
  v98 = (unsigned __int64)v68;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v110,
    (const __m128i *)&v95,
    2);
  v110[2] = 0;
  v99 = 0;
  *(_QWORD *)v100 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v99 = 3;
  v72 = operator new(0x20u);
  *(_QWORD *)v72 = v72 + 16;
  strcpy((char *)(v72 + 16), "has_redo");
  *(_QWORD *)(v72 + 8) = 8;
  v101 = 4;
  v102 = redo_action_label;
  v103 = 0;
  *(_OWORD *)v100 = (unsigned __int64)v72;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v111,
    (const __m128i *)&v99,
    2);
  v111[2] = 0;
  v104 = 0;
  *(_QWORD *)&v105 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v104 = 3;
  v73 = operator new(0x20u);
  strcpy((char *)(v73 + 16), "redo_label");
  *(_QWORD *)v73 = v73 + 16;
  *(_QWORD *)(v73 + 8) = 10;
  v105 = (unsigned __int64)v73;
  if ( redo_action_label )
    v74 = _qstring<char>::c_str(void)const::nullstr;
  else
    v74 = "";
  v106 = 0;
  *(_QWORD *)v107 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v106 = 3;
  v75 = (__int64 *)operator new(0x20u);
  v76 = v75;
  *v75 = (__int64)(v75 + 2);
  if ( !v74 )
    JUMPOUT(0xF1EE6);
  v86 = v75 + 2;
  v77 = strlen(v74);
  v78 = v86;
  *(_QWORD *)v89 = v77;
  v79 = v77;
  if ( v77 > 0xF )
  {
    v87 = (void *)v77;
    v83 = std::string::_M_create();
    *v76 = v83;
    v78 = (void *)v83;
    v79 = (size_t)v87;
    v76[2] = *(_QWORD *)v89;
    goto LABEL_24;
  }
  if ( v77 != 1 )
  {
    if ( !v77 )
      goto LABEL_13;
LABEL_24:
    memcpy(v78, v74, v79);
    v77 = *(_QWORD *)v89;
    v78 = (void *)*v76;
    goto LABEL_13;
  }
  *((_BYTE *)v76 + 16) = *v74;
LABEL_13:
  v76[1] = v77;
  *((_BYTE *)v78 + v77) = 0;
  *(_OWORD *)v107 = (unsigned __int64)v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v112,
    (const __m128i *)&v104,
    2);
  v112[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v108,
    4);
  v80 = (__m128i *)&v113;
  do
  {
    v80 = (__m128i *)((char *)v80 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v80 != &v108 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

