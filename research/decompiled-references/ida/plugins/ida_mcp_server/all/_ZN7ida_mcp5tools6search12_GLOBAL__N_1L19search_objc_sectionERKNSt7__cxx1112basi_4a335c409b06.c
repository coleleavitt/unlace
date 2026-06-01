char *__fastcall ida_mcp::tools::search::`anonymous namespace'::search_objc_section(
        char *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  __int64 *segm_by_name; // rbp
  unsigned __int64 head; // rbx
  char v11; // al
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  __int64 max_strlit_length; // r13
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  _QWORD *v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __m128i v37; // xmm0
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rbp
  char *v46; // rbx
  unsigned int v47; // ecx
  unsigned __int64 v48; // r8
  char *v49; // rsi
  char *v50; // r9
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // esi
  __int64 v54; // r10
  int v55; // [rsp+0h] [rbp-258h]
  int v56; // [rsp+0h] [rbp-258h]
  const char *v57; // [rsp+0h] [rbp-258h]
  int v58; // [rsp+0h] [rbp-258h]
  int v59; // [rsp+0h] [rbp-258h]
  int v60; // [rsp+0h] [rbp-258h]
  int v61; // [rsp+8h] [rbp-250h]
  int v62; // [rsp+8h] [rbp-250h]
  int v63; // [rsp+8h] [rbp-250h]
  int v64; // [rsp+8h] [rbp-250h]
  const char *v65; // [rsp+8h] [rbp-250h]
  __int64 v66; // [rsp+8h] [rbp-250h]
  __int64 v67; // [rsp+10h] [rbp-248h]
  __int64 v68; // [rsp+10h] [rbp-248h]
  __int64 v69; // [rsp+10h] [rbp-248h]
  __int64 v70; // [rsp+10h] [rbp-248h]
  __int64 v71; // [rsp+10h] [rbp-248h]
  __m128i v72; // [rsp+20h] [rbp-238h] BYREF
  __m128i *v73; // [rsp+30h] [rbp-228h]
  __int64 *v74; // [rsp+38h] [rbp-220h]
  __m128i v75; // [rsp+40h] [rbp-218h] BYREF
  __m128i *v76; // [rsp+50h] [rbp-208h]
  __m128i *v77; // [rsp+58h] [rbp-200h]
  __m128i v78; // [rsp+60h] [rbp-1F8h] BYREF
  __m128i v79; // [rsp+70h] [rbp-1E8h] BYREF
  _QWORD **v80; // [rsp+80h] [rbp-1D8h]
  char *v81; // [rsp+88h] [rbp-1D0h]
  char *v82; // [rsp+90h] [rbp-1C8h]
  __int64 *v83; // [rsp+98h] [rbp-1C0h]
  __int64 v84; // [rsp+A0h] [rbp-1B8h] BYREF
  __int64 *v85; // [rsp+B0h] [rbp-1A8h]
  __int128 v86; // [rsp+B8h] [rbp-1A0h]
  _QWORD *v87; // [rsp+F0h] [rbp-168h] BYREF
  __int64 v88; // [rsp+F8h] [rbp-160h]
  _QWORD v89[2]; // [rsp+100h] [rbp-158h] BYREF
  char v90; // [rsp+110h] [rbp-148h] BYREF
  __m128i v91; // [rsp+118h] [rbp-140h] BYREF
  char v92; // [rsp+128h] [rbp-130h]
  __int128 v93; // [rsp+130h] [rbp-128h] BYREF
  char v94; // [rsp+140h] [rbp-118h] BYREF
  __m128i v95; // [rsp+148h] [rbp-110h] BYREF
  char v96; // [rsp+158h] [rbp-100h]
  __m128i v97; // [rsp+160h] [rbp-F8h] BYREF
  _QWORD v98[3]; // [rsp+170h] [rbp-E8h] BYREF
  char v99; // [rsp+188h] [rbp-D0h]
  __m128i v100; // [rsp+190h] [rbp-C8h] BYREF
  _QWORD v101[3]; // [rsp+1A0h] [rbp-B8h] BYREF
  _QWORD v102[3]; // [rsp+1B8h] [rbp-A0h] BYREF
  _QWORD v103[3]; // [rsp+1D0h] [rbp-88h] BYREF
  char v104; // [rsp+1E8h] [rbp-70h] BYREF
  char v105; // [rsp+1F0h] [rbp-68h] BYREF
  unsigned __int64 v106; // [rsp+218h] [rbp-40h]

  v55 = a5;
  v61 = a6;
  v106 = __readfsqword(0x28u);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  segm_by_name = (__int64 *)get_segm_by_name();
  if ( (segm_by_name || (segm_by_name = (__int64 *)get_segm_by_name()) != nullptr) && !(unsigned int)qregcomp() )
  {
    head = *segm_by_name;
    if ( *segm_by_name >= (unsigned __int64)segm_by_name[1] )
      goto LABEL_21;
    v11 = *a1;
    v12 = a7;
    if ( *a1 == 1 )
      goto LABEL_9;
    if ( v11 == 2 )
    {
      v12 = a7;
      goto LABEL_25;
    }
    if ( !v11 )
    {
      v12 = a7;
      v13 = 0;
      goto LABEL_10;
    }
    v12 = a7;
LABEL_20:
    if ( v12 <= 1 )
    {
LABEL_21:
      qregfree();
      return a1;
    }
    while ( 1 )
    {
      v85 = nullptr;
      v86 = 0;
      max_strlit_length = get_max_strlit_length();
      if ( (unsigned __int64)(max_strlit_length - 1) <= 0x3FE && get_strlit_contents() )
      {
        if ( !(unsigned int)qregexec() )
        {
          v90 = 0;
          v73 = &v91;
          v91.m128i_i64[0] = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v90 = 3;
          v74 = (__int64 *)operator new(0x20u);
          v72 = (__m128i)(unsigned __int64)v74;
          std::string::basic_string<std::allocator<char>>(v74, "address", v16, v17, v18, v19, v55, v61, v67);
          v20 = _mm_load_si128(&v72);
          v72.m128i_i64[0] = (__int64)&v105;
          v91 = v20;
          qsnprintf();
          v80 = &v87;
          std::string::basic_string<std::allocator<char>>(
            (__int64 *)&v87,
            (const char *)v72.m128i_i64[0],
            v21,
            v22,
            v23,
            v24,
            v56,
            v62,
            v68);
          v92 = 0;
          v74 = (__int64 *)&v93;
          *(_QWORD *)&v93 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v92 = 3;
          v25 = (_QWORD *)operator new(0x20u);
          v26 = v87;
          v27 = v25 + 2;
          v28 = v88;
          *v25 = v25 + 2;
          if ( v26 == v89 )
          {
            v47 = v28 + 1;
            if ( (unsigned int)(v28 + 1) >= 8 )
            {
              v25[2] = v89[0];
              *(_QWORD *)((char *)v27 + v47 - 8) = *(_QWORD *)((char *)&v89[-1] + v47);
              v48 = (unsigned __int64)(v25 + 3) & 0xFFFFFFFFFFFFFFF8LL;
              v49 = (char *)v27 - v48;
              v50 = (char *)((char *)v89 - v49);
              v51 = ((_DWORD)v49 + v47) & 0xFFFFFFF8;
              if ( v51 >= 8 )
              {
                v52 = v51 & 0xFFFFFFF8;
                v53 = 0;
                do
                {
                  v54 = v53;
                  v53 += 8;
                  *(_QWORD *)(v48 + v54) = *(_QWORD *)&v50[v54];
                }
                while ( v53 < v52 );
              }
            }
            else if ( (v47 & 4) != 0 )
            {
              *((_DWORD *)v25 + 4) = v89[0];
              *(_DWORD *)((char *)v27 + v47 - 4) = *(_DWORD *)((char *)&v88 + v47 + 4);
            }
            else if ( (_DWORD)v28 != -1 )
            {
              *((_BYTE *)v25 + 16) = v89[0];
              if ( (v47 & 2) != 0 )
                *(_WORD *)((char *)v27 + v47 - 2) = *(_WORD *)((char *)&v88 + v47 + 6);
            }
          }
          else
          {
            *v25 = v26;
            v25[2] = v89[0];
          }
          v25[1] = v28;
          v81 = &v90;
          v87 = v89;
          v88 = 0;
          LOBYTE(v89[0]) = 0;
          v72.m128i_i64[0] = (__int64)v101;
          v93 = (unsigned __int64)v25;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            v101,
            (const __m128i *)&v90);
          v101[2] = 0;
          v94 = 0;
          v95.m128i_i64[0] = 0;
          v76 = &v95;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v94 = 3;
          v77 = (__m128i *)operator new(0x20u);
          v75 = (__m128i)(unsigned __int64)v77;
          std::string::basic_string<std::allocator<char>>(v77->m128i_i64, v57, v29, v30, v31, v32, (int)v57, v63, v69);
          v95 = _mm_load_si128(&v75);
          if ( (_QWORD)v86 )
            v77 = (__m128i *)v85;
          else
            v77 = (__m128i *)&_qstring<char>::c_str(void)const::nullstr;
          v96 = 0;
          v75.m128i_i64[0] = (__int64)&v97;
          v97.m128i_i64[0] = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v96 = 3;
          v79.m128i_i64[0] = operator new(0x20u);
          v78 = (__m128i)v79.m128i_u64[0];
          std::string::basic_string<std::allocator<char>>(
            (__int64 *)v79.m128i_i64[0],
            v77->m128i_i8,
            v33,
            v34,
            v35,
            v36,
            v58,
            v64,
            v70);
          v37 = _mm_load_si128(&v78);
          v82 = &v94;
          v97 = v37;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            v102,
            (const __m128i *)&v94);
          v102[2] = 0;
          v77 = (__m128i *)v98;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(v98);
          v98[2] = 0;
          v99 = 0;
          v100.m128i_i64[0] = 0;
          v78.m128i_i64[0] = (__int64)&v100;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v99 = 3;
          v83 = (__int64 *)operator new(0x20u);
          v79 = (__m128i)(unsigned __int64)v83;
          std::string::basic_string<std::allocator<char>>(v83, v65, v38, v39, v40, v41, v59, (int)v65, v71);
          v100 = _mm_load_si128(&v79);
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            v103,
            v77);
          v103[2] = 0;
          LOBYTE(v84) = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            &v84,
            v72.m128i_i64[0],
            3,
            v42,
            v43,
            v44,
            v60,
            v66,
            v72.m128i_i32[0],
            3,
            v72.m128i_i32[0],
            v72.m128i_i32[2],
            (__int64)v73,
            (int)v74,
            v75.m128i_i32[0],
            v75.m128i_i32[2],
            (int)v76,
            (char)v77,
            v78.m128i_i64[0],
            v78.m128i_i32[2],
            (__int64)&v84);
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v77 = (__m128i *)segm_by_name;
          v45 = v72.m128i_i64[0];
          v79.m128i_i64[0] = head;
          v46 = &v104;
          do
          {
            v46 -= 24;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
          while ( v46 != (char *)v45 );
          segm_by_name = (__int64 *)v77;
          head = v79.m128i_i64[0];
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          std::string::_M_dispose();
        }
        head += max_strlit_length + 1;
        if ( !v85 )
          goto LABEL_16;
      }
      else
      {
        head = next_head();
        if ( !v85 )
          goto LABEL_16;
      }
      *(_QWORD *)&v86 = 0;
      qfree();
LABEL_16:
      if ( head >= segm_by_name[1] )
        goto LABEL_21;
      v15 = *a1;
      if ( *a1 == 1 )
      {
LABEL_9:
        v13 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 40LL);
LABEL_10:
        if ( v13 >= v12 )
          goto LABEL_21;
      }
      else
      {
        if ( v15 == 2 )
        {
LABEL_25:
          v13 = (__int64)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL) - **((_QWORD **)a1 + 1)) >> 4;
          goto LABEL_10;
        }
        if ( v15 )
          goto LABEL_20;
      }
    }
  }
  return a1;
}

