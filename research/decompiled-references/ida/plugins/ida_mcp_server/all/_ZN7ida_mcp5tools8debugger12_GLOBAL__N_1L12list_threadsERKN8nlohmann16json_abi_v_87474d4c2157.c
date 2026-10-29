__int64 __fastcall ida_mcp::tools::debugger::`anonymous namespace'::list_threads(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rax
  char v14; // si
  __int64 v15; // rdx
  __int64 v16; // rax
  char v17; // cl
  char v18; // si
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  const char *v25; // r13
  __int64 v26; // rax
  char v27; // si
  __int64 v28; // rdx
  __int64 v29; // rax
  char v30; // si
  __int64 v31; // rdx
  __int64 v32; // rbx
  size_t v33; // rax
  _BYTE *v34; // rcx
  size_t v35; // r8
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 *v43; // r14
  __int64 v45; // [rsp+0h] [rbp-1A8h]
  __int64 v46; // [rsp+0h] [rbp-1A8h]
  __int64 v47; // [rsp+0h] [rbp-1A8h]
  __int64 v48; // [rsp+8h] [rbp-1A0h]
  __int64 v49; // [rsp+8h] [rbp-1A0h]
  __int64 v50; // [rsp+8h] [rbp-1A0h]
  __int64 v51; // [rsp+10h] [rbp-198h]
  __int64 v52; // [rsp+10h] [rbp-198h]
  __int64 v53; // [rsp+18h] [rbp-190h]
  __int64 v54; // [rsp+18h] [rbp-190h]
  __int64 v55; // [rsp+18h] [rbp-190h]
  void *dest; // [rsp+20h] [rbp-188h]
  int v57; // [rsp+28h] [rbp-180h]
  __int64 v58; // [rsp+30h] [rbp-178h]
  __int64 v59; // [rsp+38h] [rbp-170h]
  int v60; // [rsp+48h] [rbp-160h]
  int v61; // [rsp+50h] [rbp-158h]
  size_t v62; // [rsp+58h] [rbp-150h]
  __int64 v63; // [rsp+60h] [rbp-148h] BYREF
  __int64 v64; // [rsp+68h] [rbp-140h]
  __int64 v65; // [rsp+70h] [rbp-138h]
  __int64 v66; // [rsp+78h] [rbp-130h]
  __int64 v67; // [rsp+80h] [rbp-128h]
  _BOOL8 v68; // [rsp+88h] [rbp-120h]
  char v69; // [rsp+90h] [rbp-118h] BYREF
  __int128 v70; // [rsp+98h] [rbp-110h]
  char v71; // [rsp+A8h] [rbp-100h]
  __int64 v72; // [rsp+B0h] [rbp-F8h]
  __int64 v73; // [rsp+B8h] [rbp-F0h]
  char v74; // [rsp+C0h] [rbp-E8h] BYREF
  __int128 v75; // [rsp+C8h] [rbp-E0h]
  char v76; // [rsp+D8h] [rbp-D0h]
  __int64 v77; // [rsp+E0h] [rbp-C8h]
  __int64 v78; // [rsp+E8h] [rbp-C0h]
  char v79; // [rsp+F0h] [rbp-B8h] BYREF
  __int128 v80; // [rsp+F8h] [rbp-B0h]
  __int64 v81; // [rsp+118h] [rbp-90h]
  _QWORD v82[3]; // [rsp+120h] [rbp-88h] BYREF
  _QWORD v83[3]; // [rsp+138h] [rbp-70h] BYREF
  _QWORD v84[3]; // [rsp+150h] [rbp-58h] BYREF
  unsigned __int64 v85; // [rsp+168h] [rbp-40h] BYREF

  v85 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_debugger_on() )
    JUMPOUT(0xCA209);
  v60 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(1013, a2, &callui, v2, v3, v4);
  v57 = callui(1067, a2, &callui, v5, v6, v7, v45, v48, v51, v53);
  LOBYTE(v63) = 0;
  v64 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v63,
    nullptr,
    0,
    2);
  v11 = v64;
  HIBYTE(v54) = v63;
  if ( v60 > 0 )
  {
    v12 = 0;
    v58 = v60;
    while ( 1 )
    {
      v21 = callui(1014, (unsigned int)v12, v8, &callui, v9, v10, v46, v49, v52, v54);
      v25 = (const char *)callui(1193, (unsigned int)v12, v22, &callui, v23, v24, v47, v50, v21, v55);
      v65 = 0;
      v66 = 0;
      v26 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v27 = *(_BYTE *)v26;
      v28 = *(_QWORD *)(v26 + 8);
      *(_BYTE *)v26 = 5;
      *(_QWORD *)(v26 + 8) = v12;
      LOBYTE(v67) = v27;
      v68 = v28;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v29 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v30 = *(_BYTE *)v29;
      *(_BYTE *)v29 = 5;
      v31 = *(_QWORD *)(v29 + 8);
      *(_QWORD *)(v29 + 8) = (int)v52;
      LOBYTE(v67) = v30;
      v68 = v31;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v67 = 0;
      if ( !v25 )
        v25 = "";
      v68 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v32 = operator new(0x20u);
      *(_QWORD *)v32 = v32 + 16;
      LODWORD(dest) = v32 + 16;
      v33 = strlen(v25);
      v34 = (_BYTE *)(v32 + 16);
      v62 = v33;
      v35 = v33;
      if ( v33 > 0xF )
        break;
      if ( v33 == 1 )
      {
        *(_BYTE *)(v32 + 16) = *v25;
        goto LABEL_5;
      }
      if ( v33 )
        goto LABEL_16;
LABEL_5:
      *(_QWORD *)(v32 + 8) = v33;
      v34[v33] = 0;
      v13 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v14 = *(_BYTE *)v13;
      v15 = *(_QWORD *)(v13 + 8);
      *(_BYTE *)v13 = 3;
      *(_QWORD *)(v13 + 8) = v32;
      LOBYTE(v67) = v14;
      v68 = v15;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v68 = v57 == (_DWORD)v52;
      v16 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v17 = v65;
      v18 = *(_BYTE *)v16;
      *(_BYTE *)v16 = 4;
      v19 = *(_QWORD *)(v16 + 8);
      LOBYTE(v49) = v17;
      LOBYTE(v67) = v18;
      *(_QWORD *)(v16 + 8) = v68;
      v68 = v19;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( HIBYTE(v54) )
      {
        if ( HIBYTE(v54) != 2 )
          JUMPOUT(0xCA24E);
        if ( *(_QWORD *)(v11 + 8) != *(_QWORD *)(v11 + 16) )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          *(_QWORD *)(v11 + 8) += 16LL;
          goto LABEL_8;
        }
      }
      else
      {
        v20 = operator new(0x18u);
        *(_QWORD *)(v20 + 16) = 0;
        v11 = v20;
        *(_OWORD *)v20 = 0;
      }
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
LABEL_8:
      ++v12;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      HIBYTE(v54) = 2;
      if ( v12 == v60 )
        goto LABEL_17;
    }
    dest = (void *)v33;
    v36 = std::string::_M_create();
    *(_QWORD *)v32 = v36;
    v34 = (_BYTE *)v36;
    v35 = (size_t)dest;
    *(_QWORD *)(v32 + 16) = v62;
LABEL_16:
    memcpy(v34, v25, v35);
    v33 = v62;
    v34 = *(_BYTE **)v32;
    goto LABEL_5;
  }
LABEL_17:
  v69 = 0;
  *(_QWORD *)&v70 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v69 = 3;
  v37 = operator new(0x20u);
  *(_QWORD *)v37 = v37 + 16;
  strcpy((char *)(v37 + 16), "thread_count");
  *(_QWORD *)(v37 + 8) = 12;
  v71 = 5;
  v72 = v60;
  v73 = 0;
  v70 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v82,
    (const __m128i *)&v69);
  v82[2] = 0;
  v74 = 0;
  *(_QWORD *)&v75 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v74 = 3;
  v38 = operator new(0x20u);
  strcpy((char *)(v38 + 16), "current_thread");
  *(_QWORD *)v38 = v38 + 16;
  *(_QWORD *)(v38 + 8) = 14;
  v76 = 5;
  v77 = v57;
  v78 = 0;
  v75 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v83,
    (const __m128i *)&v74);
  v83[2] = 0;
  v79 = 0;
  *(_QWORD *)&v80 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v79 = 3;
  v39 = operator new(0x20u);
  strcpy((char *)(v39 + 16), "threads");
  *(_QWORD *)v39 = v39 + 16;
  *(_QWORD *)(v39 + 8) = 7;
  v64 = v11;
  LOBYTE(v63) = HIBYTE(v54);
  v80 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v81 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v84,
    (const __m128i *)&v79);
  v84[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v82,
    3,
    v40,
    v41,
    v42,
    v46,
    v49,
    v52,
    v54,
    (int)dest,
    v57,
    v58,
    (int)a1,
    (int)&v63,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v43 = &v85;
  do
  {
    v43 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v43 != v82 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v59;
}

