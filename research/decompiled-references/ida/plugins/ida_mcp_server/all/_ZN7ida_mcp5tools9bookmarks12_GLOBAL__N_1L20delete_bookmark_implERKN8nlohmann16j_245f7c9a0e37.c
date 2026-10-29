_QWORD *__fastcall ida_mcp::tools::bookmarks::`anonymous namespace'::delete_bookmark_impl(
        char *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        int a13,
        int a14,
        int a15,
        int a16,
        __int64 a17,
        char a18,
        int a19,
        int a20,
        char a21,
        char a22,
        int a23,
        char a24,
        int a25,
        int a26,
        char a27,
        char a28,
        int a29,
        char a30,
        char a31,
        int a32,
        char a33,
        char a34,
        int a35,
        int a36,
        __int64 a37)
{
  __int64 v37; // rax
  _QWORD *v38; // r14
  _QWORD *v39; // rbx
  _QWORD *v40; // r13
  _QWORD *v41; // rbp
  size_t v42; // rdx
  int v43; // eax
  unsigned __int64 v44; // r15
  unsigned __int64 v45; // rbx
  size_t v46; // rdx
  int v47; // eax
  unsigned __int8 v48; // al
  unsigned int v49; // ebx
  unsigned __int8 v50; // al
  unsigned __int8 v51; // r12
  __int64 v52; // rax
  __int64 v53; // rax
  int v55[2]; // [rsp+10h] [rbp-128h] BYREF
  int v56; // [rsp+18h] [rbp-120h]
  int v57[2]; // [rsp+20h] [rbp-118h]
  int v58[4]; // [rsp+30h] [rbp-108h]
  int v59[2]; // [rsp+40h] [rbp-F8h]
  int v60[2]; // [rsp+48h] [rbp-F0h]
  int v61[2]; // [rsp+50h] [rbp-E8h]
  char v62[8]; // [rsp+58h] [rbp-E0h]
  char v63; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v64; // [rsp+68h] [rbp-D0h]
  char v65; // [rsp+78h] [rbp-C0h]
  __int64 v66; // [rsp+80h] [rbp-B8h]
  __int64 v67; // [rsp+88h] [rbp-B0h]
  char *v68; // [rsp+90h] [rbp-A8h] BYREF
  __int128 s2; // [rsp+98h] [rbp-A0h] BYREF
  char v70; // [rsp+A8h] [rbp-90h]
  __int64 v71; // [rsp+B0h] [rbp-88h]
  __int64 v72; // [rsp+B8h] [rbp-80h]
  __m128i v73; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v74; // [rsp+D0h] [rbp-68h]
  _QWORD v75[12]; // [rsp+D8h] [rbp-60h] BYREF

  v75[4] = __readfsqword(0x28u);
  WORD6(s2) = 120;
  DWORD2(s2) = 1701080681;
  *(_QWORD *)&s2 = 5;
  v68 = (char *)&s2 + 8;
  if ( *a2 != 1 )
    JUMPOUT(0xF3EB9);
  v37 = *((_QWORD *)a2 + 1);
  v38 = a1;
  v39 = *(_QWORD **)(v37 + 16);
  v40 = (_QWORD *)(v37 + 8);
  if ( v39 )
  {
    v41 = (_QWORD *)(v37 + 8);
    do
    {
      while ( 1 )
      {
        v44 = v39[5];
        if ( !v44 )
          break;
        v42 = 5;
        a1 = (char *)v39[4];
        a2 = (char *)&s2 + 8;
        if ( v44 <= 5 )
          v42 = v39[5];
        v43 = memcmp(a1, (char *)&s2 + 8, v42);
        if ( v43 || (v43 = v44 - 5, (__int64)(v44 - 5) <= 0x7FFFFFFF) )
        {
          if ( v43 < 0 )
            break;
        }
        v41 = v39;
        v39 = (_QWORD *)v39[2];
        if ( !v39 )
          goto LABEL_12;
      }
      v39 = (_QWORD *)v39[3];
    }
    while ( v39 );
LABEL_12:
    if ( v40 != v41 )
    {
      v45 = v41[5];
      if ( v45 )
      {
        v46 = 5;
        a2 = (char *)v41[4];
        a1 = (char *)&s2 + 8;
        if ( v45 <= 5 )
          v46 = v41[5];
        v47 = memcmp((char *)&s2 + 8, a2, v46);
        if ( v47 || (v47 = 5 - v45, (__int64)(5 - v45) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v47 >= 0 )
            v40 = v41;
        }
      }
      else
      {
        v40 = v41;
      }
    }
  }
  v48 = *((_BYTE *)v40 + 64);
  if ( v48 == 6 )
    goto LABEL_24;
  if ( v48 > 6u )
  {
    if ( v48 != 7 )
      goto LABEL_32;
    v49 = (int)*((double *)v40 + 9);
  }
  else
  {
    if ( v48 != 4 )
    {
      if ( v48 == 5 )
      {
LABEL_24:
        v49 = *((_DWORD *)v40 + 18);
        goto LABEL_25;
      }
LABEL_32:
      ida_mcp::tools::bookmarks::`anonymous namespace'::delete_bookmark_impl(
        (__int64)a1,
        (__int64)a2,
        a3,
        a4,
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
        a37);
    }
    v49 = *((unsigned __int8 *)v40 + 72);
  }
LABEL_25:
  *(_QWORD *)v62 = v55;
  *(_QWORD *)v57 = getinf();
  *(_QWORD *)v55 = &off_445468;
  v56 = 0;
  *(_QWORD *)v59 = 0;
  *(_QWORD *)v60 = -1;
  *(_QWORD *)v61 = 0;
  *(_OWORD *)v58 = 0;
  *(_QWORD *)v62 = idaplace_t__clone();
  v50 = bookmarks_t_erase();
  v63 = 0;
  v51 = v50;
  *(_QWORD *)&v64 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v63 = 3;
  v52 = operator new(0x20u);
  *(_DWORD *)(v52 + 16) = 1701080681;
  *(_QWORD *)v52 = v52 + 16;
  *(_BYTE *)(v52 + 20) = 120;
  *(_QWORD *)(v52 + 8) = 5;
  *(_BYTE *)(v52 + 21) = 0;
  v65 = 6;
  v66 = v49;
  v67 = 0;
  v64 = (unsigned __int64)v52;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v73,
    (const __m128i *)&v63);
  v74 = 0;
  LOBYTE(v68) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v68) = 3;
  v53 = operator new(0x20u);
  strcpy((char *)(v53 + 16), "success");
  *(_QWORD *)v53 = v53 + 16;
  *(_QWORD *)(v53 + 8) = 7;
  v70 = 4;
  v71 = v51;
  v72 = 0;
  s2 = (unsigned __int64)v53;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v75,
    (const __m128i *)&v68);
  v75[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v38,
    &v73);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( *(_QWORD *)v62 )
    qfree();
  return v38;
}

