__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
        __int64 a1,
        int a2,
        __int64 *a3,
        __int64 a4)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned int v8; // r13d
  __int64 v9; // r12
  _BYTE *v10; // rdi
  unsigned int v11; // r13d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int8 v14; // r8
  __int64 v15; // rdx
  __int8 v16; // al
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rsi
  unsigned int v20; // r14d
  __int64 v21; // r12
  _BYTE *v22; // rdi
  unsigned int v23; // r14d
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int8 v26; // r8
  __int64 v27; // rdx
  __int8 v28; // al
  __int64 v29; // r12
  char v33[16]; // [rsp+50h] [rbp-1A8h] BYREF
  void *v34; // [rsp+60h] [rbp-198h]
  __int64 v35; // [rsp+68h] [rbp-190h]
  _QWORD v36[2]; // [rsp+70h] [rbp-188h] BYREF
  void *v37; // [rsp+80h] [rbp-178h]
  unsigned __int64 v38; // [rsp+88h] [rbp-170h]
  _QWORD v39[2]; // [rsp+90h] [rbp-168h] BYREF
  void *v40; // [rsp+A0h] [rbp-158h]
  unsigned __int64 v41; // [rsp+A8h] [rbp-150h]
  _QWORD v42[2]; // [rsp+B0h] [rbp-148h] BYREF
  void *v43; // [rsp+C0h] [rbp-138h]
  unsigned __int64 v44; // [rsp+C8h] [rbp-130h]
  _QWORD v45[2]; // [rsp+D0h] [rbp-128h] BYREF
  __m128i si128; // [rsp+E0h] [rbp-118h]
  __m128i v47; // [rsp+F0h] [rbp-108h]
  __m128i v48; // [rsp+100h] [rbp-F8h]
  __m128i v49; // [rsp+110h] [rbp-E8h]
  __m128i v50; // [rsp+120h] [rbp-D8h]
  __m128i v51; // [rsp+130h] [rbp-C8h]
  __m128i v52; // [rsp+140h] [rbp-B8h]
  __m128i v53; // [rsp+150h] [rbp-A8h]
  __m128i v54; // [rsp+160h] [rbp-98h]
  __m128i v55; // [rsp+170h] [rbp-88h]
  __m128i v56; // [rsp+180h] [rbp-78h]
  __m128i v57[2]; // [rsp+190h] [rbp-68h]
  unsigned __int64 v58; // [rsp+1B8h] [rbp-40h]

  v6 = a3[1];
  v58 = __readfsqword(0x28u);
  LOBYTE(v39[0]) = 0;
  v38 = 0;
  v37 = v39;
  if ( v6 <= 9 )
  {
    v9 = 1;
    v8 = 1;
  }
  else
  {
    v7 = v6;
    v8 = 1;
    while ( 1 )
    {
      if ( v7 <= 0x63 )
      {
        v9 = ++v8;
        goto LABEL_9;
      }
      if ( v7 <= 0x3E7 )
      {
        v9 = v8 + 2;
        v8 += 2;
        goto LABEL_9;
      }
      if ( v7 <= 0x270F )
      {
        v9 = v8 + 3;
        v8 += 3;
        goto LABEL_9;
      }
      v8 += 4;
      if ( v7 <= 0x1869F )
        break;
      v7 /= 0x2710u;
    }
    v9 = v8;
  }
LABEL_9:
  v44 = 0;
  v43 = v45;
  LOBYTE(v45[0]) = 0;
  std::string::reserve();
  v10 = v43;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E1F70);
  v47 = _mm_load_si128((const __m128i *)&xmmword_3E1F80);
  v48 = _mm_load_si128((const __m128i *)&xmmword_3E1F90);
  v49 = _mm_load_si128((const __m128i *)&xmmword_3E1FA0);
  v50 = _mm_load_si128((const __m128i *)&xmmword_3E1FB0);
  v51 = _mm_load_si128((const __m128i *)&xmmword_3E1FC0);
  v52 = _mm_load_si128((const __m128i *)&xmmword_3E1FD0);
  v53 = _mm_load_si128((const __m128i *)&xmmword_3E1FE0);
  v54 = _mm_load_si128((const __m128i *)&xmmword_3E1FF0);
  v55 = _mm_load_si128((const __m128i *)&xmmword_3E2000);
  v56 = _mm_load_si128((const __m128i *)&xmmword_3E2010);
  v57[0] = _mm_load_si128((const __m128i *)&xmmword_3E2020);
  *(__m128i *)((char *)v57 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E2030);
  if ( v6 > 0x63 )
  {
    v11 = v8 - 1;
    do
    {
      v12 = v6 % 0x64;
      v13 = v6;
      v6 /= 0x64u;
      v14 = si128.m128i_i8[2 * v12 + 1];
      LOBYTE(v12) = si128.m128i_i8[2 * v12];
      v10[v11] = v14;
      v15 = v11 - 1;
      v11 -= 2;
      v10[v15] = v12;
    }
    while ( v13 > 0x270F );
  }
  v16 = v6 + 48;
  if ( v6 > 9 )
  {
    v10[1] = si128.m128i_i8[2 * v6 + 1];
    v16 = si128.m128i_i8[2 * v6];
  }
  *v10 = v16;
  v44 = v9;
  *((_BYTE *)v43 + v9) = 0;
  v17 = a3[2];
  v18 = v17 + 1;
  if ( (unsigned __int64)(v17 + 1) <= 9 )
  {
    v21 = 1;
    v20 = 1;
  }
  else
  {
    v19 = v17 + 1;
    v20 = 1;
    while ( 1 )
    {
      if ( v19 <= 0x63 )
      {
        v21 = ++v20;
        goto LABEL_22;
      }
      if ( v19 <= 0x3E7 )
      {
        v21 = v20 + 2;
        v20 += 2;
        goto LABEL_22;
      }
      if ( v19 <= 0x270F )
      {
        v21 = v20 + 3;
        v20 += 3;
        goto LABEL_22;
      }
      v20 += 4;
      if ( v19 <= 0x1869F )
        break;
      v19 /= 0x2710u;
    }
    v21 = v20;
  }
LABEL_22:
  v41 = 0;
  v40 = v42;
  LOBYTE(v42[0]) = 0;
  std::string::reserve();
  v22 = v40;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E1F70);
  v47 = _mm_load_si128((const __m128i *)&xmmword_3E1F80);
  v48 = _mm_load_si128((const __m128i *)&xmmword_3E1F90);
  v49 = _mm_load_si128((const __m128i *)&xmmword_3E1FA0);
  v50 = _mm_load_si128((const __m128i *)&xmmword_3E1FB0);
  v51 = _mm_load_si128((const __m128i *)&xmmword_3E1FC0);
  v52 = _mm_load_si128((const __m128i *)&xmmword_3E1FD0);
  v53 = _mm_load_si128((const __m128i *)&xmmword_3E1FE0);
  v54 = _mm_load_si128((const __m128i *)&xmmword_3E1FF0);
  v55 = _mm_load_si128((const __m128i *)&xmmword_3E2000);
  v56 = _mm_load_si128((const __m128i *)&xmmword_3E2010);
  v57[0] = _mm_load_si128((const __m128i *)&xmmword_3E2020);
  *(__m128i *)((char *)v57 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E2030);
  if ( v18 > 0x63 )
  {
    v23 = v20 - 1;
    do
    {
      v24 = v18 % 0x64;
      v25 = v18;
      v18 /= 0x64u;
      v26 = si128.m128i_i8[2 * v24 + 1];
      LOBYTE(v24) = si128.m128i_i8[2 * v24];
      v22[v23] = v26;
      v27 = v23 - 1;
      v23 -= 2;
      v22[v27] = v24;
    }
    while ( v25 > 0x270F );
  }
  v28 = v18 + 48;
  if ( v18 > 9 )
  {
    v22[1] = si128.m128i_i8[2 * v18 + 1];
    v28 = si128.m128i_i8[2 * v18];
  }
  *v22 = v28;
  v41 = v21;
  *((_BYTE *)v40 + v21) = 0;
  v34 = v36;
  v35 = 0;
  LOBYTE(v36[0]) = 0;
  std::string::reserve();
  std::string::_M_append();
  if ( v41 > 0x7FFFFFFFFFFFFFFELL )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  std::string::_M_append();
  if ( 0x7FFFFFFFFFFFFFFELL - v35 < v44 )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  if ( v40 != v42 )
    operator delete(v40, v42[0] + 1LL);
  if ( v43 != v45 )
    operator delete(v43, v45[0] + 1LL);
  v40 = v42;
  strcpy((char *)v42, "parse_error");
  v41 = 11;
  nlohmann::json_abi_v3_12_0::detail::exception::name();
  v33[0] = 0;
  std::string::reserve();
  if ( v44 > 0x7FFFFFFFFFFFFFFELL )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  std::string::_M_append();
  std::string::_M_append();
  std::string::_M_append();
  if ( v38 > 0x7FFFFFFFFFFFFFFELL )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  if ( *(_QWORD *)(a4 + 8) > 0x7FFFFFFFFFFFFFFEuLL )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  if ( v43 != v45 )
    operator delete(v43, v45[0] + 1LL);
  if ( v40 != v42 )
    operator delete(v40, v42[0] + 1LL);
  if ( v34 != v36 )
    operator delete(v34, v36[0] + 1LL);
  if ( v37 != v39 )
    operator delete(v37, v39[0] + 1LL);
  v29 = *a3;
  *(_QWORD *)a1 = off_4444D0;
  *(_DWORD *)(a1 + 8) = a2;
  std::runtime_error::runtime_error((std::runtime_error *)(a1 + 16), v33);
  *(_QWORD *)(a1 + 32) = v29;
  *(_QWORD *)a1 = off_4444F8;
  return a1;
}

