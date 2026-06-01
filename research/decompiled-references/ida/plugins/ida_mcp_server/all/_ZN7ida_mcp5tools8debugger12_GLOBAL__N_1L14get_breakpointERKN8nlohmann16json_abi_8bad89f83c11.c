__m128i *__fastcall ida_mcp::tools::debugger::`anonymous namespace'::get_breakpoint(__m128i *a1)
{
  char v2; // al
  _BYTE *v3; // rbx
  int *v4; // rax
  int *v5; // r12
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r13
  std::runtime_error *exception; // rax
  __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  _QWORD *v32; // r13
  __int64 v33; // rsi
  __int64 v34; // rax
  char v35; // si
  __int64 v36; // rcx
  __int64 v37; // r13
  __int64 v38; // rax
  char v39; // si
  __int64 v40; // rax
  __int32 v41; // ecx
  char v42; // si
  __int64 v43; // rdx
  const char *v44; // r13
  __int64 *v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  char v51; // si
  __int64 v52; // rdx
  unsigned int v53; // edx
  unsigned int v54; // eax
  unsigned __int64 v55; // rdi
  char *v56; // rcx
  char *v57; // r8
  unsigned int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // ecx
  __int64 v61; // rdx
  unsigned __int64 v62; // rdi
  char *v63; // rcx
  char *v64; // r8
  unsigned int v65; // edx
  unsigned int v66; // edx
  unsigned int v67; // ecx
  __int64 v68; // r9
  int v69; // [rsp+0h] [rbp-1C8h]
  int v70; // [rsp+0h] [rbp-1C8h]
  const __m128i *v71; // [rsp+0h] [rbp-1C8h]
  int v72; // [rsp+0h] [rbp-1C8h]
  char v73; // [rsp+8h] [rbp-1C0h]
  int v74; // [rsp+8h] [rbp-1C0h]
  int v75; // [rsp+8h] [rbp-1C0h]
  int v76; // [rsp+8h] [rbp-1C0h]
  __m128i v77; // [rsp+10h] [rbp-1B8h] BYREF
  __int64 v78; // [rsp+20h] [rbp-1A8h]
  _BOOL8 v79; // [rsp+28h] [rbp-1A0h]
  _BYTE *v80; // [rsp+30h] [rbp-198h] BYREF
  __int64 v81; // [rsp+38h] [rbp-190h]
  __int128 v82; // [rsp+40h] [rbp-188h]
  __int64 v83; // [rsp+50h] [rbp-178h]
  __int64 v84; // [rsp+58h] [rbp-170h]
  __int64 v85; // [rsp+60h] [rbp-168h]
  __int64 v86; // [rsp+68h] [rbp-160h]
  __int64 v87; // [rsp+70h] [rbp-158h]
  __int64 v88; // [rsp+78h] [rbp-150h]
  unsigned __int64 v89; // [rsp+80h] [rbp-148h]
  __int64 v90; // [rsp+88h] [rbp-140h]
  void *v91; // [rsp+90h] [rbp-138h] BYREF
  __int64 v92; // [rsp+98h] [rbp-130h]
  _QWORD v93[2]; // [rsp+A0h] [rbp-128h] BYREF
  char v94; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v95; // [rsp+B8h] [rbp-110h] BYREF
  __int64 v96; // [rsp+C8h] [rbp-100h]
  __int64 v97; // [rsp+D0h] [rbp-F8h]
  __int64 v98; // [rsp+D8h] [rbp-F0h]
  void *v99; // [rsp+E0h] [rbp-E8h] BYREF
  __int128 v100; // [rsp+E8h] [rbp-E0h] BYREF
  char v101; // [rsp+F8h] [rbp-D0h]
  __int128 v102; // [rsp+100h] [rbp-C8h]
  __m128i v103; // [rsp+110h] [rbp-B8h] BYREF
  __int64 v104; // [rsp+120h] [rbp-A8h] BYREF
  _QWORD v105[3]; // [rsp+128h] [rbp-A0h] BYREF
  char v106[32]; // [rsp+140h] [rbp-88h] BYREF
  char v107[40]; // [rsp+160h] [rbp-68h] BYREF
  unsigned __int64 v108; // [rsp+188h] [rbp-40h]

  v108 = __readfsqword(0x28u);
  BYTE8(v100) = 0;
  v99 = (char *)&v100 + 8;
  v2 = *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_QWORD *)&v100 = 0;
  v73 = v2;
  if ( v2 != 3 )
    JUMPOUT(0xCA7DF);
  std::string::_M_assign();
  v3 = v99;
  v4 = __errno_location();
  *v4 = 0;
  v5 = v4;
  v8 = __isoc23_strtoull();
  if ( v3 == v80 || *v80 || *v5 == 34 && v8 == -1 )
  {
    if ( v99 != (char *)&v100 + 8 )
      operator delete(v99, *((_QWORD *)&v100 + 1) + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    ida_mcp::tools::debugger::`anonymous namespace'::get_breakpoint();
  }
  if ( v99 != (char *)&v100 + 8 )
    operator delete(v99, *((_QWORD *)&v100 + 1) + 1LL);
  v80 = (_BYTE *)&qword_60;
  v81 = 0;
  v85 = 0xFFFFFFFFLL;
  v83 = -1;
  v89 = 0xFFFFFFFF00000000LL;
  v84 = 0;
  v86 = -1;
  v87 = 4;
  v88 = 9;
  v90 = 0;
  v82 = 0;
  if ( (unsigned __int8)callui(1142, v8, &v80, &callui, v6, v7, &v99, v73, v77.m128i_i64[0], v77.m128i_i64[1]) )
  {
    v79 = 1;
    v77 = 0u;
    v25 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v25 = 4;
    *(_QWORD *)(v25 + 8) = v79;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    qsnprintf();
    std::string::basic_string<std::allocator<char>>(v103.m128i_i64, v107, v26, v27, v28, v29, 0, v74, v77.m128i_i64[0]);
    v78 = 0;
    v79 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v30 = (_QWORD *)operator new(0x20u);
    v31 = v30 + 2;
    v32 = v30;
    v33 = v103.m128i_i64[1];
    *v30 = v30 + 2;
    if ( (__int64 *)v103.m128i_i64[0] == &v104 )
    {
      v54 = v33 + 1;
      if ( (unsigned int)(v33 + 1) >= 8 )
      {
        v32[2] = v104;
        *(_QWORD *)((char *)v31 + v54 - 8) = *(__int64 *)((char *)&v103.m128i_i64[1] + v54);
        v55 = (unsigned __int64)(v32 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v56 = (char *)v31 - v55;
        v57 = (char *)((char *)&v104 - v56);
        v58 = ((_DWORD)v56 + v54) & 0xFFFFFFF8;
        if ( v58 >= 8 )
        {
          v59 = v58 & 0xFFFFFFF8;
          v60 = 0;
          do
          {
            v61 = v60;
            v60 += 8;
            *(_QWORD *)(v55 + v61) = *(_QWORD *)&v57[v61];
          }
          while ( v60 < v59 );
        }
      }
      else if ( (v54 & 4) != 0 )
      {
        *((_DWORD *)v32 + 4) = v104;
        *(_DWORD *)((char *)v31 + v54 - 4) = *(__int32 *)((char *)&v103.m128i_i32[3] + v54);
      }
      else if ( (_DWORD)v33 != -1 )
      {
        *((_BYTE *)v32 + 16) = v104;
        if ( (v54 & 2) != 0 )
          *(_WORD *)((char *)v31 + v54 - 2) = *(__int16 *)((char *)&v103.m128i_i16[7] + v54);
      }
    }
    else
    {
      *v30 = v103.m128i_i64[0];
      v30[2] = v104;
    }
    v32[1] = v33;
    v103.m128i_i64[0] = (__int64)&v104;
    v103.m128i_i64[1] = 0;
    LOBYTE(v104) = 0;
    v34 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v35 = *(_BYTE *)v34;
    v36 = *(_QWORD *)(v34 + 8);
    *(_BYTE *)v34 = 3;
    *(_QWORD *)(v34 + 8) = v32;
    LOBYTE(v78) = v35;
    v79 = v36;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( (__int64 *)v103.m128i_i64[0] != &v104 )
      operator delete((void *)v103.m128i_i64[0], v104 + 1);
    v37 = (int)v89;
    v38 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v39 = *(_BYTE *)v38;
    *(_BYTE *)v38 = 5;
    *(_QWORD *)(v38 + 8) = v37;
    LOBYTE(v78) = v39;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v79 = (v88 & 8) != 0;
    v40 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v41 = v77.m128i_i32[2];
    v42 = *(_BYTE *)v40;
    *(_BYTE *)v40 = 4;
    v43 = *(_QWORD *)(v40 + 8);
    v72 = v41;
    LOBYTE(v78) = v42;
    *(_QWORD *)(v40 + 8) = v79;
    v79 = v43;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( (_DWORD)v87 == 4 )
    {
      v44 = "Software";
    }
    else if ( (int)v87 > 4 )
    {
      v44 = "Unknown";
      if ( (_DWORD)v87 == 8 )
        v44 = "Hardware_Execute";
    }
    else
    {
      v44 = "Hardware_Write";
      if ( (_DWORD)v87 != 1 )
      {
        v44 = "Unknown";
        if ( (_DWORD)v87 == 3 )
          v44 = "Hardware_ReadWrite";
      }
    }
    v78 = 0;
    v79 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v45 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v45, v44, v46, v47, v48, v49, v72, v76, v77.m128i_i64[0]);
    v50 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v51 = *(_BYTE *)v50;
    v52 = *(_QWORD *)(v50 + 8);
    *(_BYTE *)v50 = 3;
    *(_QWORD *)(v50 + 8) = v45;
    LOBYTE(v78) = v51;
    v79 = v52;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    *a1 = _mm_load_si128(&v77);
  }
  else
  {
    v94 = 0;
    *(_QWORD *)&v95 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v94 = 3;
    v10 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v10, "exists", v11, v12, v13, v14, v69, (int)&v95, v77.m128i_i64[0]);
    v96 = 4;
    v97 = 0;
    v98 = 0;
    v95 = (unsigned __int64)v10;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v103,
      (const __m128i *)&v94);
    v104 = 0;
    LOBYTE(v99) = 0;
    *(_QWORD *)&v100 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v99) = 3;
    v15 = operator new(0x20u);
    *(_QWORD *)v15 = v15 + 16;
    strcpy((char *)(v15 + 16), "address");
    *(_QWORD *)(v15 + 8) = 7;
    v100 = (unsigned __int64)v15;
    qsnprintf();
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)&v91,
      v106,
      v16,
      v17,
      v18,
      v19,
      v70,
      v75,
      v77.m128i_i64[0]);
    v101 = 0;
    *(_QWORD *)&v102 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v101 = 3;
    v20 = (_QWORD *)operator new(0x20u);
    v21 = v91;
    v22 = v20 + 2;
    v23 = v92;
    *v20 = v20 + 2;
    if ( v21 == v93 )
    {
      v53 = v23 + 1;
      if ( (unsigned int)(v23 + 1) >= 8 )
      {
        v20[2] = v93[0];
        *(_QWORD *)((char *)v22 + v53 - 8) = *(_QWORD *)((char *)&v93[-1] + v53);
        v62 = (unsigned __int64)(v20 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v63 = (char *)v22 - v62;
        v64 = (char *)((char *)v93 - v63);
        v65 = ((_DWORD)v63 + v53) & 0xFFFFFFF8;
        if ( v65 >= 8 )
        {
          v66 = v65 & 0xFFFFFFF8;
          v67 = 0;
          do
          {
            v68 = v67;
            v67 += 8;
            *(_QWORD *)(v62 + v68) = *(_QWORD *)&v64[v68];
          }
          while ( v67 < v66 );
        }
      }
      else if ( (v53 & 4) != 0 )
      {
        *((_DWORD *)v20 + 4) = v93[0];
        *(_DWORD *)((char *)v22 + v53 - 4) = *(_DWORD *)((char *)&v92 + v53 + 4);
      }
      else if ( (_DWORD)v23 != -1 )
      {
        *((_BYTE *)v20 + 16) = v93[0];
        if ( (v53 & 2) != 0 )
          *(_WORD *)((char *)v22 + v53 - 2) = *(_WORD *)((char *)&v92 + v53 + 6);
      }
    }
    else
    {
      *v20 = v21;
      v20[2] = v93[0];
    }
    v20[1] = v23;
    v91 = v93;
    v92 = 0;
    LOBYTE(v93[0]) = 0;
    v102 = (unsigned __int64)v20;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v105,
      v71);
    v105[2] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      a1,
      &v103);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v91 != v93 )
      operator delete(v91, v93[0] + 1LL);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    qfree();
  }
  return a1;
}

