__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::out_of_range::create<decltype(nullptr),0>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        char a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        __int64 a55)
{
  unsigned int v57; // r8d
  unsigned int v58; // edi
  unsigned int v59; // ecx
  unsigned int i; // r15d
  unsigned int v61; // eax
  unsigned __int64 v62; // rbp
  unsigned int v63; // r8d
  char *v64; // rcx
  __m128i si128; // xmm0
  char *v66; // rcx
  unsigned int v67; // eax
  unsigned int v68; // esi
  __int64 v69; // rax
  __int64 v70; // rdi
  __int64 v71; // rdx
  char v72; // r8
  __int64 v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rdx
  char *v80; // rsi
  char *v81; // rdi
  __int64 v83; // r8
  __int64 v84; // rax
  char *v85; // rcx
  __int64 v87; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v88; // [rsp+20h] [rbp-1A8h]
  unsigned int v89; // [rsp+28h] [rbp-1A0h]
  unsigned __int64 v90; // [rsp+28h] [rbp-1A0h]
  char v91; // [rsp+28h] [rbp-1A0h]
  char v92[16]; // [rsp+40h] [rbp-188h] BYREF
  void *v93; // [rsp+50h] [rbp-178h] BYREF
  unsigned __int64 v94; // [rsp+58h] [rbp-170h]
  _QWORD v95[2]; // [rsp+60h] [rbp-168h] BYREF
  void *v96; // [rsp+70h] [rbp-158h]
  unsigned __int64 v97; // [rsp+78h] [rbp-150h]
  _QWORD v98[2]; // [rsp+80h] [rbp-148h] BYREF
  char *v99; // [rsp+90h] [rbp-138h]
  unsigned __int64 v100; // [rsp+98h] [rbp-130h]
  _QWORD v101[2]; // [rsp+A0h] [rbp-128h] BYREF
  _OWORD v102[11]; // [rsp+B0h] [rbp-118h]
  __m128i v103[2]; // [rsp+160h] [rbp-68h]
  unsigned __int64 v104; // [rsp+188h] [rbp-40h]

  v57 = -a2;
  if ( a2 > 0 )
    v57 = a2;
  v58 = (unsigned int)a2 >> 31;
  v104 = __readfsqword(0x28u);
  LOBYTE(v98[0]) = 0;
  v97 = 0;
  v96 = v98;
  strcpy(v92, "out_of_range");
  v87 = (unsigned int)a2 >> 31;
  if ( v57 <= 9 )
  {
    v62 = v58 + 1;
    v91 = v57;
    v100 = 0;
    v99 = (char *)v101;
    LOBYTE(v101[0]) = 0;
    std::string::reserve();
    v85 = v99;
    LOBYTE(v63) = v91;
    *v99 = 45;
    v66 = &v85[v87];
LABEL_14:
    v72 = v63 + 48;
    goto LABEL_15;
  }
  v59 = v57;
  for ( i = 1; ; i += 4 )
  {
    if ( v59 <= 0x63 )
    {
      v61 = i + 1;
      goto LABEL_11;
    }
    if ( v59 <= 0x3E7 )
    {
      v61 = i + 2;
      ++i;
      goto LABEL_11;
    }
    if ( v59 <= 0x270F )
    {
      v61 = i + 3;
      i += 2;
      goto LABEL_11;
    }
    v61 = i + 4;
    if ( v59 <= 0x1869F )
      break;
    v59 /= 0x2710u;
  }
  i += 3;
LABEL_11:
  v62 = v61 + v58;
  v89 = v57;
  v100 = 0;
  v99 = (char *)v101;
  LOBYTE(v101[0]) = 0;
  std::string::reserve();
  v63 = v89;
  v64 = v99;
  v102[0] = _mm_load_si128((const __m128i *)&xmmword_3E1F70);
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E1F80);
  *v99 = 45;
  v66 = &v64[v87];
  v102[1] = si128;
  v102[2] = _mm_load_si128((const __m128i *)&xmmword_3E1F90);
  v102[3] = _mm_load_si128((const __m128i *)&xmmword_3E1FA0);
  v102[4] = _mm_load_si128((const __m128i *)&xmmword_3E1FB0);
  v102[5] = _mm_load_si128((const __m128i *)&xmmword_3E1FC0);
  v102[6] = _mm_load_si128((const __m128i *)&xmmword_3E1FD0);
  v102[7] = _mm_load_si128((const __m128i *)&xmmword_3E1FE0);
  v102[8] = _mm_load_si128((const __m128i *)&xmmword_3E1FF0);
  v102[9] = _mm_load_si128((const __m128i *)&xmmword_3E2000);
  v102[10] = _mm_load_si128((const __m128i *)&xmmword_3E2010);
  v103[0] = _mm_load_si128((const __m128i *)&xmmword_3E2020);
  *(__m128i *)((char *)v103 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E2030);
  if ( v89 > 0x63 )
  {
    do
    {
      v67 = v63 % 0x64;
      v68 = v63;
      v63 /= 0x64u;
      v69 = 2 * v67;
      v70 = (unsigned int)(v69 + 1);
      LOBYTE(v69) = *((_BYTE *)v102 + v69);
      v66[i] = *((_BYTE *)v102 + v70);
      v71 = i - 1;
      i -= 2;
      v66[v71] = v69;
    }
    while ( v68 > 0x270F );
    if ( v68 <= 0x3E7 )
      goto LABEL_14;
  }
  v83 = 2 * v63;
  v84 = (unsigned int)(v83 + 1);
  v72 = *((_BYTE *)v102 + v83);
  v66[1] = *((_BYTE *)v102 + v84);
LABEL_15:
  *v66 = v72;
  v100 = v62;
  v99[v62] = 0;
  v93 = v95;
  v73 = v100 + 31;
  LOBYTE(v95[0]) = 0;
  v94 = 0;
  std::string::reserve();
  if ( v94 - 0x7FFFFFFFFFFFFFEFLL <= 0xF )
    nlohmann::json_abi_v3_12_0::detail::out_of_range::create<decltype(nullptr),0>(
      (__int64)&v93,
      v73,
      v74,
      v75,
      v76,
      v77,
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
      a55);
  std::string::_M_append();
  if ( 0x7FFFFFFFFFFFFFFELL - v94 < 0xC )
    JUMPOUT(0x156DA6);
  std::string::_M_append();
  v78 = v94;
  v79 = 15;
  if ( v93 != v95 )
    v79 = v95[0];
  if ( v79 < v94 + 1 )
  {
    v90 = v94 + 1;
    v88 = v94;
    std::string::_M_mutate();
    *((_BYTE *)v93 + v88) = 46;
    v94 = v90;
    *((_BYTE *)v93 + v88 + 1) = 0;
  }
  else
  {
    *((_BYTE *)v93 + v94) = 46;
    v94 = v78 + 1;
    *((_BYTE *)v93 + v78 + 1) = 0;
  }
  if ( 0x7FFFFFFFFFFFFFFELL - v94 < v100 )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  if ( v94 - 0x7FFFFFFFFFFFFFFDLL <= 1 )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  if ( v99 != (char *)v101 )
    operator delete(v99, v101[0] + 1LL);
  v99 = (char *)v101;
  LOBYTE(v101[0]) = 0;
  v100 = 0;
  std::string::reserve();
  if ( 0x7FFFFFFFFFFFFFFELL - v100 < v94 )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  if ( 0x7FFFFFFFFFFFFFFELL - v100 < v97 )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  if ( 0x7FFFFFFFFFFFFFFELL - v100 < *(_QWORD *)(a3 + 8) )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  if ( v93 != v95 )
    operator delete(v93, v95[0] + 1LL);
  if ( v96 != v98 )
    operator delete(v96, v98[0] + 1LL);
  *(_DWORD *)(a1 + 8) = a2;
  v80 = v99;
  *(_QWORD *)a1 = off_4444D0;
  std::runtime_error::runtime_error((std::runtime_error *)(a1 + 16), v80);
  v81 = v99;
  *(_QWORD *)a1 = off_444570;
  if ( v81 != (char *)v101 )
    operator delete(v81, v101[0] + 1LL);
  return a1;
}

