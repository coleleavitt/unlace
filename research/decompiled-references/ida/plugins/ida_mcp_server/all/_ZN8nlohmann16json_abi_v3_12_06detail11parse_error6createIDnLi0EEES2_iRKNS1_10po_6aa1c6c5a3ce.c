__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        char a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        __int64 a35)
{
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // rdx
  __int64 v46; // r12
  char *v47; // rsi
  char *v48; // rdi
  int v50; // [rsp+0h] [rbp-128h]
  int v51; // [rsp+0h] [rbp-128h]
  int v52; // [rsp+8h] [rbp-120h]
  int v53; // [rsp+8h] [rbp-120h]
  int v54; // [rsp+Ch] [rbp-11Ch]
  __int64 v55; // [rsp+10h] [rbp-118h]
  char *v56; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v57; // [rsp+48h] [rbp-E0h]
  _QWORD v58[2]; // [rsp+50h] [rbp-D8h] BYREF
  void *v59; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v60; // [rsp+68h] [rbp-C0h]
  _QWORD v61[2]; // [rsp+70h] [rbp-B8h] BYREF
  void *v62[2]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+90h] [rbp-98h] BYREF
  void *v64[2]; // [rsp+A0h] [rbp-88h] BYREF
  _QWORD v65[2]; // [rsp+B0h] [rbp-78h] BYREF
  void *v66; // [rsp+C0h] [rbp-68h] BYREF
  unsigned __int64 v67; // [rsp+C8h] [rbp-60h]
  _QWORD v68[11]; // [rsp+D0h] [rbp-58h] BYREF

  v68[3] = __readfsqword(0x28u);
  std::string::basic_string<std::allocator<char>>((__int64 *)v62, "", (__int64)a3, (__int64)a4, a5, a6, v50, v52, v55);
  std::to_string((unsigned __int64)&v66);
  std::to_string((unsigned __int64)v64);
  v59 = v61;
  v60 = 0;
  LOBYTE(v61[0]) = 0;
  std::string::reserve();
  std::string::append();
  if ( v64[1] > (void *)0x7FFFFFFFFFFFFFFELL )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  std::string::append();
  if ( 0x7FFFFFFFFFFFFFFELL - v60 < v67 )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  if ( v64[0] != v65 )
    operator delete(v64[0], v65[0] + 1LL);
  if ( v66 != v68 )
    operator delete(v66, v68[0] + 1LL);
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)v64,
    "parse_error",
    v38,
    v39,
    v40,
    v41,
    v51,
    v53,
    (__int64)&v66);
  nlohmann::json_abi_v3_12_0::detail::exception::name();
  v57 = 0;
  v56 = (char *)v58;
  LOBYTE(v58[0]) = 0;
  std::string::reserve();
  if ( v67 > 0x7FFFFFFFFFFFFFFELL )
    JUMPOUT(0x4D512);
  std::string::_M_append();
  std::string::append();
  if ( 0x7FFFFFFFFFFFFFFELL - v57 < v60 )
    JUMPOUT(0x4D4F3);
  std::string::_M_append();
  std::string::append();
  if ( (void *)(0x7FFFFFFFFFFFFFFELL - v57) < v62[1] )
    JUMPOUT(0x4D595);
  std::string::_M_append();
  v45 = a4[1];
  if ( 0x7FFFFFFFFFFFFFFELL - v57 < v45 )
    nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
      (__int64)&v56,
      *a4,
      v45,
      v42,
      v43,
      v44,
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
      a35);
  std::string::_M_append();
  if ( v66 != v68 )
    operator delete(v66, v68[0] + 1LL);
  if ( v64[0] != v65 )
    operator delete(v64[0], v65[0] + 1LL);
  if ( v59 != v61 )
    operator delete(v59, v61[0] + 1LL);
  if ( v62[0] != &v63 )
    operator delete(v62[0], v63 + 1);
  v46 = *a3;
  v47 = v56;
  *(_QWORD *)a1 = off_4444D0;
  *(_DWORD *)(a1 + 8) = v54;
  std::runtime_error::runtime_error((std::runtime_error *)(a1 + 16), v47);
  v48 = v56;
  *(_QWORD *)(a1 + 32) = v46;
  *(_QWORD *)a1 = off_4444F8;
  if ( v48 != (char *)v58 )
    operator delete(v48, v58[0] + 1LL);
  return a1;
}

