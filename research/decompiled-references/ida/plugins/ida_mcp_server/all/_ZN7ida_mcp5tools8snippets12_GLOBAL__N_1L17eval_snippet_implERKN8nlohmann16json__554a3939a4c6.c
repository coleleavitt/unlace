_QWORD *__fastcall ida_mcp::tools::snippets::`anonymous namespace'::eval_snippet_impl(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r13
  size_t v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  size_t v10; // rdx
  int v11; // eax
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rax
  char *v15; // r15
  __int64 *v16; // rax
  __int64 *v17; // rbp
  char *v18; // rax
  __int64 v19; // rcx
  void *v20; // r8
  __int64 v21; // rax
  _QWORD *v22; // rax
  unsigned __int64 v23; // rdx
  _BYTE *v24; // rdi
  __int64 *v25; // r15
  __m128i si128; // xmm0
  size_t v27; // rcx
  __int64 v28; // rax
  __m128i *v29; // r15
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // r15
  _QWORD *v33; // rax
  _BYTE *v34; // rdi
  __int64 *v35; // rbp
  __m128i v36; // xmm0
  size_t v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __m128i v40; // xmm0
  __m128i *v41; // r15
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  int v49[4]; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v50[2]; // [rsp+30h] [rbp-1B8h] BYREF
  void *dest; // [rsp+40h] [rbp-1A8h]
  void *src; // [rsp+48h] [rbp-1A0h]
  unsigned __int64 v53; // [rsp+58h] [rbp-190h]
  __m128i v54; // [rsp+60h] [rbp-188h] BYREF
  char *s; // [rsp+70h] [rbp-178h]
  __int128 v56; // [rsp+78h] [rbp-170h]
  void *v57; // [rsp+90h] [rbp-158h]
  __int64 v58; // [rsp+98h] [rbp-150h]
  _QWORD v59[2]; // [rsp+A0h] [rbp-148h] BYREF
  char v60[8]; // [rsp+B0h] [rbp-138h] BYREF
  __int128 v61; // [rsp+B8h] [rbp-130h]
  __int64 v62; // [rsp+C8h] [rbp-120h]
  char v63; // [rsp+D0h] [rbp-118h] BYREF
  int v64[4]; // [rsp+D8h] [rbp-110h]
  __int64 v65; // [rsp+E8h] [rbp-100h]
  __int64 v66; // [rsp+F0h] [rbp-F8h]
  __int64 v67; // [rsp+F8h] [rbp-F0h]
  int v68; // [rsp+100h] [rbp-E8h] BYREF
  __int128 v69; // [rsp+108h] [rbp-E0h]
  char v70; // [rsp+118h] [rbp-D0h]
  int v71[4]; // [rsp+120h] [rbp-C8h]
  char *v72; // [rsp+130h] [rbp-B8h] BYREF
  __int128 s2; // [rsp+138h] [rbp-B0h] BYREF
  _BYTE v74[24]; // [rsp+148h] [rbp-A0h] BYREF
  __m128i v75; // [rsp+160h] [rbp-88h] BYREF
  __int64 v76; // [rsp+170h] [rbp-78h]
  _QWORD v77[2]; // [rsp+178h] [rbp-70h] BYREF
  __int64 v78; // [rsp+188h] [rbp-60h]
  _QWORD v79[2]; // [rsp+190h] [rbp-58h] BYREF
  __int64 v80; // [rsp+1A0h] [rbp-48h]
  _QWORD v81[8]; // [rsp+1A8h] [rbp-40h] BYREF

  v81[0] = __readfsqword(0x28u);
  BYTE12(s2) = 0;
  DWORD2(s2) = 1701080931;
  *(_QWORD *)&s2 = 4;
  v72 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x10A200);
  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(v2 + 16);
  v4 = v2 + 8;
  if ( v3 )
  {
    v5 = v2 + 8;
    do
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v3 + 40);
        if ( !v8 )
          break;
        v6 = 4;
        if ( v8 <= 4 )
          v6 = *(_QWORD *)(v3 + 40);
        v7 = memcmp(*(const void **)(v3 + 32), (char *)&s2 + 8, v6);
        if ( v7 || (v7 = v8 - 4, (__int64)(v8 - 4) <= 0x7FFFFFFF) )
        {
          if ( v7 < 0 )
            break;
        }
        v5 = v3;
        v3 = *(_QWORD *)(v3 + 16);
        if ( !v3 )
          goto LABEL_12;
      }
      v3 = *(_QWORD *)(v3 + 24);
    }
    while ( v3 );
LABEL_12:
    if ( v4 != v5 )
    {
      v9 = *(_QWORD *)(v5 + 40);
      if ( v9 )
      {
        v10 = 4;
        if ( v9 <= 4 )
          v10 = *(_QWORD *)(v5 + 40);
        v11 = memcmp((char *)&s2 + 8, *(const void **)(v5 + 32), v10);
        if ( v11 || (v11 = 4 - v9, (__int64)(4 - v9) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v11 >= 0 )
            v4 = v5;
        }
      }
      else
      {
        v4 = v5;
      }
    }
  }
  v58 = 0;
  v57 = v59;
  LOBYTE(v59[0]) = 0;
  if ( *(_BYTE *)(v4 + 64) != 3 )
    JUMPOUT(0x10A232);
  std::string::_M_assign();
  v61 = 0;
  v60[0] = 2;
  v62 = 0;
  s = nullptr;
  v56 = 0;
  v12 = eval_idc_snippet();
  v63 = 0;
  *(_QWORD *)v64 = 0;
  if ( !v12 )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v63 = 3;
    v13 = operator new(0x20u);
    strcpy((char *)(v13 + 16), "success");
    *(_QWORD *)v13 = v13 + 16;
    *(_QWORD *)(v13 + 8) = 7;
    v65 = 4;
    v66 = 0;
    v67 = 0;
    *(_OWORD *)v64 = (unsigned __int64)v13;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v75,
      (const __m128i *)&v63);
    v76 = 0;
    LOBYTE(v68) = 0;
    *(_QWORD *)&v69 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v68) = 3;
    v14 = operator new(0x20u);
    *(_BYTE *)(v14 + 20) = 114;
    *(_QWORD *)v14 = v14 + 16;
    *(_DWORD *)(v14 + 16) = 1869771365;
    *(_QWORD *)(v14 + 8) = 5;
    *(_BYTE *)(v14 + 21) = 0;
    v69 = (unsigned __int64)v14;
    if ( (_QWORD)v56 )
      v15 = s;
    else
      v15 = _qstring<char>::c_str(void)const::nullstr;
    v70 = 0;
    *(_QWORD *)v71 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v70 = 3;
    v16 = (__int64 *)operator new(0x20u);
    v17 = v16;
    *v16 = (__int64)(v16 + 2);
    if ( !v15 )
      JUMPOUT(0x10A327);
    dest = v16 + 2;
    v18 = (char *)strlen(v15);
    v19 = (__int64)dest;
    v54.m128i_i64[0] = (__int64)v18;
    v20 = v18;
    if ( (unsigned __int64)v18 > 0xF )
    {
      dest = v18;
      v45 = std::string::_M_create();
      *v17 = v45;
      v19 = v45;
      v20 = dest;
      v17[2] = v54.m128i_i64[0];
    }
    else
    {
      if ( v18 == (_BYTE *)&dword_0 + 1 )
      {
        *((_BYTE *)v17 + 16) = *v15;
LABEL_28:
        v17[1] = (__int64)v18;
        v18[v19] = 0;
        dest = &v68;
        *(_OWORD *)v71 = (unsigned __int64)v17;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v77,
          (const __m128i *)&v68);
        v78 = 0;
        LOBYTE(v72) = 0;
        *(_QWORD *)&s2 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v72) = 3;
        v21 = operator new(0x20u);
        *(_QWORD *)v21 = v21 + 16;
        strcpy((char *)(v21 + 16), "code");
        *(_QWORD *)(v21 + 8) = 4;
        v74[0] = 0;
        *(_QWORD *)&v74[8] = 0;
        *(_QWORD *)v49 = &v74[8];
        s2 = (unsigned __int64)v21;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v74[0] = 3;
        src = v57;
        v50[0] = v58;
        v22 = (_QWORD *)operator new(0x20u);
        v23 = v58;
        v24 = v22 + 2;
        v25 = v22;
        *v22 = v22 + 2;
        v53 = v23;
        if ( v23 > 0xF )
        {
          v46 = std::string::_M_create();
          *v25 = v46;
          v24 = (_BYTE *)v46;
          v47 = v53;
          si128 = (__m128i)(unsigned __int64)v25;
          v25[2] = v53;
          v27 = v47 + 1;
          if ( v47 )
          {
            v28 = -1;
            if ( v27 )
              goto LABEL_30;
LABEL_31:
            v25[1] = v28;
            *(__m128i *)&v74[8] = si128;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              v79,
              (const __m128i *)&v72);
            v80 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
              a1,
              &v75,
              3);
            v29 = (__m128i *)v81;
            do
            {
              v29 = (__m128i *)((char *)v29 - 24);
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            }
            while ( v29 != &v75 );
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            goto LABEL_40;
          }
        }
        else
        {
          si128 = (__m128i)(unsigned __int64)v22;
          v27 = v23 + 1;
          if ( v23 )
          {
LABEL_30:
            *(__m128i *)v50 = si128;
            memcpy(v24, src, v27);
            v28 = v53;
            si128 = _mm_load_si128((const __m128i *)v50);
            goto LABEL_31;
          }
        }
        *v24 = *(_BYTE *)src;
        v28 = v53;
        goto LABEL_31;
      }
      if ( !v18 )
        goto LABEL_28;
    }
    memcpy((void *)v19, v15, (size_t)v20);
    v18 = (char *)v54.m128i_i64[0];
    v19 = *v17;
    goto LABEL_28;
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v63 = 3;
  v30 = operator new(0x20u);
  strcpy((char *)(v30 + 16), "success");
  *(_QWORD *)v30 = v30 + 16;
  *(_QWORD *)(v30 + 8) = 7;
  v65 = 4;
  v66 = 1;
  v67 = 0;
  *(_OWORD *)v64 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v75,
    (const __m128i *)&v63);
  v76 = 0;
  LOBYTE(v68) = 0;
  *(_QWORD *)&v69 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v68) = 3;
  v31 = operator new(0x20u);
  *(_QWORD *)v31 = v31 + 16;
  strcpy((char *)(v31 + 16), "code");
  *(_QWORD *)(v31 + 8) = 4;
  v70 = 0;
  *(_QWORD *)v71 = 0;
  v69 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v70 = 3;
  v32 = v58;
  dest = v57;
  v33 = (_QWORD *)operator new(0x20u);
  v34 = v33 + 2;
  v54.m128i_i64[0] = v58;
  v35 = v33;
  *v33 = v33 + 2;
  if ( v32 <= 0xF )
  {
    v36 = (__m128i)(unsigned __int64)v33;
    v37 = v32 + 1;
    if ( v32 )
    {
LABEL_36:
      *(__m128i *)v49 = v36;
      memcpy(v34, dest, v37);
      v38 = v54.m128i_i64[0];
      v36 = _mm_load_si128((const __m128i *)v49);
      goto LABEL_37;
    }
    goto LABEL_54;
  }
  v43 = std::string::_M_create();
  *v35 = v43;
  v34 = (_BYTE *)v43;
  v44 = v54.m128i_i64[0];
  v36 = (__m128i)(unsigned __int64)v35;
  v35[2] = v54.m128i_i64[0];
  v37 = v44 + 1;
  if ( !v44 )
  {
LABEL_54:
    *v34 = *(_BYTE *)dest;
    v38 = v54.m128i_i64[0];
    goto LABEL_37;
  }
  v38 = -1;
  if ( v37 )
    goto LABEL_36;
LABEL_37:
  v35[1] = v38;
  dest = &v68;
  *(__m128i *)v71 = v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v77,
    (const __m128i *)&v68);
  v78 = 0;
  LOBYTE(v72) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v72) = 3;
  v39 = operator new(0x20u);
  *(_QWORD *)v39 = v39 + 16;
  strcpy((char *)(v39 + 16), "result");
  *(_QWORD *)(v39 + 8) = 6;
  s2 = (unsigned __int64)v39;
  ida_mcp::tools::snippets::`anonymous namespace'::idc_value_to_json(&v54, (__int64)v60);
  v40 = _mm_load_si128(&v54);
  *(_QWORD *)&v74[16] = 0;
  *(__m128i *)v74 = v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v79,
    (const __m128i *)&v72);
  v80 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v75,
    3);
  v41 = (__m128i *)v81;
  do
  {
    v41 = (__m128i *)((char *)v41 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v41 != &v75 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_40:
  if ( s )
  {
    *(_QWORD *)&v56 = 0;
    qfree();
  }
  free_idcv();
  if ( v57 != v59 )
    operator delete(v57, v59[0] + 1LL);
  return a1;
}

