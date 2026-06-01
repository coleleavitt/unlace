_QWORD *__fastcall ida_mcp::tools::fixups::`anonymous namespace'::handle_get_fixup_type_description(
        char *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        int a12,
        int a13,
        __int64 a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        char a20,
        int a21,
        int a22,
        char a23,
        char a24,
        int a25,
        char a26,
        int a27,
        int a28,
        char a29,
        int a30,
        int a31,
        char a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        __int64 a39)
{
  __int64 v39; // rcx
  __int64 v40; // rax
  _QWORD *v41; // rbx
  _QWORD *v42; // r13
  _QWORD *v43; // rbp
  size_t v44; // rdx
  int v45; // eax
  unsigned __int64 v46; // r14
  unsigned __int64 v47; // rbx
  size_t v48; // rdx
  int v49; // eax
  unsigned __int8 v50; // al
  int v51; // ebx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 *v54; // rax
  __int64 *v55; // rbx
  size_t v56; // rax
  void *v57; // rcx
  size_t v58; // r8
  __int64 v60; // rax
  _QWORD *v61; // [rsp+0h] [rbp-148h]
  void *dest; // [rsp+8h] [rbp-140h]
  void *desta; // [rsp+8h] [rbp-140h]
  size_t v64; // [rsp+18h] [rbp-130h]
  char v65; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v66; // [rsp+78h] [rbp-D0h]
  char v67; // [rsp+88h] [rbp-C0h]
  __int64 v68; // [rsp+90h] [rbp-B8h]
  __int64 v69; // [rsp+98h] [rbp-B0h]
  char *v70; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 s2; // [rsp+A8h] [rbp-A0h] BYREF
  char v72[8]; // [rsp+B8h] [rbp-90h] BYREF
  __int128 v73; // [rsp+C0h] [rbp-88h]
  __m128i v74; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v75; // [rsp+E0h] [rbp-68h]
  _QWORD v76[12]; // [rsp+E8h] [rbp-60h] BYREF

  v39 = 25968;
  v61 = a1;
  v76[4] = __readfsqword(0x28u);
  *((_QWORD *)&s2 + 1) = 0x79745F7075786966LL;
  strcpy(v72, "pe");
  *(_QWORD *)&s2 = 10;
  v70 = (char *)&s2 + 8;
  if ( *a2 != 1 )
    JUMPOUT(0xA5D2B);
  v40 = *((_QWORD *)a2 + 1);
  v41 = *(_QWORD **)(v40 + 16);
  v42 = (_QWORD *)(v40 + 8);
  if ( v41 )
  {
    v43 = (_QWORD *)(v40 + 8);
    do
    {
      while ( 1 )
      {
        v46 = v41[5];
        if ( !v46 )
          break;
        v44 = 10;
        a1 = (char *)v41[4];
        a2 = (char *)&s2 + 8;
        if ( v46 <= 0xA )
          v44 = v41[5];
        v45 = memcmp(a1, (char *)&s2 + 8, v44);
        if ( v45 || (v45 = v46 - 10, (__int64)(v46 - 10) <= 0x7FFFFFFF) )
        {
          if ( v45 < 0 )
            break;
        }
        v43 = v41;
        v41 = (_QWORD *)v41[2];
        if ( !v41 )
          goto LABEL_12;
      }
      v41 = (_QWORD *)v41[3];
    }
    while ( v41 );
LABEL_12:
    if ( v42 != v43 )
    {
      v47 = v43[5];
      if ( v47 )
      {
        v48 = 10;
        a2 = (char *)v43[4];
        a1 = (char *)&s2 + 8;
        if ( v47 <= 0xA )
          v48 = v43[5];
        v49 = memcmp((char *)&s2 + 8, a2, v48);
        if ( v49 || (v49 = 10 - v47, (__int64)(10 - v47) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v49 >= 0 )
            v42 = v43;
        }
      }
      else
      {
        v42 = v43;
      }
    }
  }
  v50 = *((_BYTE *)v42 + 64);
  if ( v50 == 6 )
    goto LABEL_24;
  if ( v50 > 6u )
  {
    if ( v50 != 7 )
      goto LABEL_37;
    v51 = (int)*((double *)v42 + 9);
  }
  else
  {
    if ( v50 != 4 )
    {
      if ( v50 == 5 )
      {
LABEL_24:
        LOWORD(v51) = *((_WORD *)v42 + 36);
        goto LABEL_25;
      }
LABEL_37:
      ida_mcp::tools::fixups::`anonymous namespace'::handle_get_fixup_type_description(
        (__int64)a1,
        (__int64)a2,
        a3,
        v39,
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
        a35,
        a36,
        a37,
        a38,
        a39);
    }
    LOWORD(v51) = *((unsigned __int8 *)v42 + 72);
  }
LABEL_25:
  get_fixup_desc();
  *(_QWORD *)&v66 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v65 = 3;
  v52 = operator new(0x20u);
  *(_QWORD *)v52 = v52 + 16;
  strcpy((char *)(v52 + 16), "fixup_type");
  *(_QWORD *)(v52 + 8) = 10;
  v67 = 6;
  v68 = (unsigned __int16)v51;
  v69 = 0;
  v66 = (unsigned __int64)v52;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v74,
    (const __m128i *)&v65);
  v75 = 0;
  LOBYTE(v70) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v70) = 3;
  v53 = operator new(0x20u);
  *(_QWORD *)v53 = v53 + 16;
  strcpy((char *)(v53 + 16), "description");
  *(_QWORD *)(v53 + 8) = 11;
  v72[0] = 0;
  *(_QWORD *)&v73 = 0;
  s2 = (unsigned __int64)v53;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v72[0] = 3;
  v54 = (__int64 *)operator new(0x20u);
  v55 = v54;
  *v54 = (__int64)(v54 + 2);
  if ( !"No description available" )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  dest = v54 + 2;
  v56 = strlen("No description available");
  v57 = dest;
  v64 = v56;
  v58 = v56;
  if ( v56 > 0xF )
  {
    desta = (void *)v56;
    v60 = std::string::_M_create();
    *v55 = v60;
    v57 = (void *)v60;
    v58 = (size_t)desta;
    v55[2] = v64;
    goto LABEL_34;
  }
  if ( v56 == 1 )
  {
    *((_BYTE *)v55 + 16) = aNoDescriptionA[0];
    goto LABEL_29;
  }
  if ( v56 )
  {
LABEL_34:
    memcpy(v57, "No description available", v58);
    v56 = v64;
    v57 = (void *)*v55;
  }
LABEL_29:
  v55[1] = v56;
  *((_BYTE *)v57 + v56) = 0;
  v73 = (unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v76,
    (const __m128i *)&v70);
  v76[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v61,
    &v74);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v61;
}

