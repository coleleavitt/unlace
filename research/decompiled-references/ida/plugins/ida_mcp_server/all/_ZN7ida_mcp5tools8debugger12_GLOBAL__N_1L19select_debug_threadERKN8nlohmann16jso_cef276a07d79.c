_QWORD *__fastcall ida_mcp::tools::debugger::`anonymous namespace'::select_debug_thread(
        char *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
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
        char a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        char a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        __int64 a37)
{
  _QWORD *v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // rbx
  _QWORD *v44; // r13
  _QWORD *v45; // rbp
  size_t v46; // rdx
  int v47; // eax
  unsigned __int64 v48; // r15
  unsigned __int64 v49; // rbx
  size_t v50; // rdx
  int v51; // eax
  unsigned __int8 v52; // al
  int v53; // r15d
  unsigned __int8 v54; // bp
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 *v64; // rbx
  __int64 v66; // [rsp+0h] [rbp-138h]
  int v67; // [rsp+0h] [rbp-138h]
  struct _Unwind_Exception *v68; // [rsp+8h] [rbp-130h]
  struct _Unwind_Exception *v69; // [rsp+8h] [rbp-130h]
  __int64 v70; // [rsp+10h] [rbp-128h]
  int v71; // [rsp+10h] [rbp-128h]
  __int64 v72; // [rsp+18h] [rbp-120h]
  int v73; // [rsp+18h] [rbp-120h]
  int v74; // [rsp+20h] [rbp-118h] BYREF
  __int128 v75; // [rsp+28h] [rbp-110h]
  int v76; // [rsp+38h] [rbp-100h]
  __int64 v77; // [rsp+40h] [rbp-F8h]
  __int64 v78; // [rsp+48h] [rbp-F0h]
  int v79; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v80; // [rsp+58h] [rbp-E0h]
  int v81; // [rsp+68h] [rbp-D0h]
  __int64 v82; // [rsp+70h] [rbp-C8h]
  __int64 v83; // [rsp+78h] [rbp-C0h]
  char *v84; // [rsp+80h] [rbp-B8h] BYREF
  __int128 s2; // [rsp+88h] [rbp-B0h] BYREF
  char v86; // [rsp+98h] [rbp-A0h]
  char v87; // [rsp+99h] [rbp-9Fh]
  __int64 v88; // [rsp+A0h] [rbp-98h]
  __int64 v89; // [rsp+A8h] [rbp-90h]
  _QWORD v90[3]; // [rsp+B0h] [rbp-88h] BYREF
  _QWORD v91[3]; // [rsp+C8h] [rbp-70h] BYREF
  _QWORD v92[3]; // [rsp+E0h] [rbp-58h] BYREF
  unsigned __int64 v93; // [rsp+F8h] [rbp-40h] BYREF

  v37 = a1;
  v93 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_debugger_on() )
    JUMPOUT(0xCCB65);
  v86 = 100;
  v84 = (char *)&s2 + 8;
  *((_QWORD *)&s2 + 1) = 0x695F646165726874LL;
  *(_QWORD *)&s2 = 9;
  v87 = 0;
  if ( *a2 != 1 )
    JUMPOUT(0xCCB3B);
  v42 = *((_QWORD *)a2 + 1);
  v43 = *(_QWORD **)(v42 + 16);
  v44 = (_QWORD *)(v42 + 8);
  if ( v43 )
  {
    v45 = (_QWORD *)(v42 + 8);
    do
    {
      while ( 1 )
      {
        v48 = v43[5];
        if ( !v48 )
          break;
        v46 = 9;
        a1 = (char *)v43[4];
        a2 = (char *)&s2 + 8;
        if ( v48 <= 9 )
          v46 = v43[5];
        v47 = memcmp(a1, (char *)&s2 + 8, v46);
        if ( v47 || (v47 = v48 - 9, (__int64)(v48 - 9) <= 0x7FFFFFFF) )
        {
          if ( v47 < 0 )
            break;
        }
        v45 = v43;
        v43 = (_QWORD *)v43[2];
        if ( !v43 )
          goto LABEL_13;
      }
      v43 = (_QWORD *)v43[3];
    }
    while ( v43 );
LABEL_13:
    if ( v44 != v45 )
    {
      v49 = v45[5];
      if ( v49 )
      {
        v50 = 9;
        a2 = (char *)v45[4];
        a1 = (char *)&s2 + 8;
        if ( v49 <= 9 )
          v50 = v45[5];
        v51 = memcmp((char *)&s2 + 8, a2, v50);
        if ( v51 || (v51 = 9 - v49, (__int64)(9 - v49) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v51 >= 0 )
            v44 = v45;
        }
      }
      else
      {
        v44 = v45;
      }
    }
  }
  v52 = *((_BYTE *)v44 + 64);
  if ( v52 == 6 )
    goto LABEL_25;
  if ( v52 > 6u )
  {
    if ( v52 == 7 )
    {
      v53 = (int)*((double *)v44 + 9);
      goto LABEL_26;
    }
    goto LABEL_33;
  }
  if ( v52 == 4 )
  {
    v53 = *((unsigned __int8 *)v44 + 72);
    goto LABEL_26;
  }
  if ( v52 != 5 )
LABEL_33:
    ida_mcp::tools::debugger::`anonymous namespace'::select_debug_thread(
      (__int64)a1,
      (__int64)a2,
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
      a37);
LABEL_25:
  v53 = *((_DWORD *)v44 + 18);
LABEL_26:
  *(_QWORD *)&v75 = 0;
  v54 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, __int64))callui)(
          1015,
          (unsigned int)v53,
          v38,
          v39,
          v40,
          v41);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v74) = 3;
  v55 = operator new(0x20u);
  strcpy((char *)(v55 + 16), "success");
  *(_QWORD *)v55 = v55 + 16;
  *(_QWORD *)(v55 + 8) = 7;
  v77 = v54;
  LOBYTE(v76) = 4;
  v78 = 0;
  v75 = (unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v90,
    (const __m128i *)&v74);
  LOBYTE(v79) = 0;
  v90[2] = 0;
  *(_QWORD *)&v80 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v79) = 3;
  v56 = operator new(0x20u);
  *(_QWORD *)v56 = v56 + 16;
  strcpy((char *)(v56 + 16), "thread_id");
  *(_QWORD *)(v56 + 8) = 9;
  LOBYTE(v81) = 5;
  v82 = v53;
  v83 = 0;
  v80 = (unsigned __int64)v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v91,
    (const __m128i *)&v79);
  v91[2] = 0;
  LOBYTE(v84) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v84) = 3;
  v57 = operator new(0x20u);
  *(_QWORD *)(v57 + 16) = 0x5F746E6572727563LL;
  *(_QWORD *)v57 = v57 + 16;
  s2 = (unsigned __int64)v57;
  strcpy((char *)(v57 + 22), "t_thread");
  *(_QWORD *)(v57 + 8) = 14;
  v60 = callui(1067, 0, v57 + 16, 0x6461657268745F74LL, v58, v59, v66, v68, v70, v72);
  v86 = 5;
  v88 = v60;
  v89 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v92,
    (const __m128i *)&v84);
  v92[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v37,
    (__int64)v90,
    3,
    v61,
    v62,
    v63,
    v67,
    (__int64)v69,
    v71,
    v73,
    v74,
    v75,
    *((__int64 *)&v75 + 1),
    v76,
    v77,
    v78,
    v79,
    v80,
    *((__int64 *)&v80 + 1),
    v81,
    v82);
  v64 = &v93;
  do
  {
    v64 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v64 != v90 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v37;
}

