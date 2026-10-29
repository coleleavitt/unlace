__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::out_of_range::create<decltype(nullptr),0>(
        __int64 a1,
        int a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
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
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        __int64 a25)
{
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rdx
  char *v35; // rsi
  char *v36; // rdi
  int v38; // [rsp+0h] [rbp-D8h]
  int v39; // [rsp+8h] [rbp-D0h]
  int v40; // [rsp+8h] [rbp-D0h]
  char *v41; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+18h] [rbp-C0h]
  _QWORD v43[2]; // [rsp+20h] [rbp-B8h] BYREF
  void *v44; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+40h] [rbp-98h] BYREF
  void *v46; // [rsp+50h] [rbp-88h]
  unsigned __int64 v47; // [rsp+58h] [rbp-80h]
  __int64 v48; // [rsp+60h] [rbp-78h] BYREF
  void *v49[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v50[11]; // [rsp+80h] [rbp-58h] BYREF

  v50[3] = __readfsqword(0x28u);
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)v49,
    "",
    (__int64)a3,
    a4,
    a5,
    a6,
    (int)v49,
    v39,
    (__int64)v41);
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v44,
    "out_of_range",
    v27,
    v28,
    v29,
    v30,
    v38,
    v40,
    (__int64)v41);
  nlohmann::json_abi_v3_12_0::detail::exception::name();
  v41 = (char *)v43;
  v42 = 0;
  LOBYTE(v43[0]) = 0;
  std::string::reserve();
  if ( v47 > 0x7FFFFFFFFFFFFFFELL )
    JUMPOUT(0x4D456);
  std::string::_M_append();
  if ( (void *)(0x7FFFFFFFFFFFFFFELL - v42) < v49[1] )
    JUMPOUT(0x4D407);
  std::string::_M_append();
  v34 = a3[1];
  if ( 0x7FFFFFFFFFFFFFFELL - v42 < v34 )
    nlohmann::json_abi_v3_12_0::detail::out_of_range::create<decltype(nullptr),0>(
      (__int64)&v41,
      *a3,
      v34,
      v31,
      v32,
      v33,
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
      a25);
  std::string::_M_append();
  if ( v46 != &v48 )
    operator delete(v46, v48 + 1);
  if ( v44 != &v45 )
    operator delete(v44, v45 + 1);
  if ( v49[0] != v50 )
    operator delete(v49[0], v50[0] + 1LL);
  *(_DWORD *)(a1 + 8) = a2;
  v35 = v41;
  *(_QWORD *)a1 = off_4444D0;
  std::runtime_error::runtime_error((std::runtime_error *)(a1 + 16), v35);
  v36 = v41;
  *(_QWORD *)a1 = off_444570;
  if ( v36 != (char *)v43 )
    operator delete(v36, v43[0] + 1LL);
  return a1;
}

