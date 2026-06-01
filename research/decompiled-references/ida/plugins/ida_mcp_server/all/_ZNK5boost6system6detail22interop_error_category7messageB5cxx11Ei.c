__int64 *__fastcall boost::system::detail::interop_error_category::message[abi:cxx11](
        __int64 *a1,
        __int64 *a2,
        unsigned int a3)
{
  __int64 v3; // rax
  char *(__fastcall *v4)(boost::system::detail::interop_error_category *, int, char *); // rax
  char *v5; // rbp
  _BYTE *v6; // r12
  size_t v7; // rax
  size_t v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  size_t v12; // [rsp+8h] [rbp-70h]
  size_t v13; // [rsp+18h] [rbp-60h]
  char s[56]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-20h]

  v3 = *a2;
  v15 = __readfsqword(0x28u);
  v4 = *(char *(__fastcall **)(boost::system::detail::interop_error_category *, int, char *))(v3 + 40);
  if ( v4 == boost::system::detail::interop_error_category::message )
  {
    v5 = s;
    v6 = a1 + 2;
    __snprintf_chk();
    *a1 = (__int64)(a1 + 2);
  }
  else
  {
    v6 = a1 + 2;
    v11 = ((__int64 (__fastcall *)(__int64 *, _QWORD, char *, __int64))v4)(a2, a3, s, 48);
    *a1 = (__int64)(a1 + 2);
    v5 = (char *)v11;
    if ( !v11 )
      std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  v7 = strlen(v5);
  v13 = v7;
  v8 = v7;
  if ( v7 > 0xF )
  {
    v12 = v7;
    v10 = std::string::_M_create();
    v8 = v12;
    *a1 = v10;
    v6 = (_BYTE *)v10;
    a1[2] = v13;
    goto LABEL_9;
  }
  if ( v7 == 1 )
  {
    *v6 = *v5;
    v6 = (_BYTE *)*a1;
    goto LABEL_6;
  }
  if ( v7 )
  {
LABEL_9:
    memcpy(v6, v5, v8);
    v7 = v13;
    v6 = (_BYTE *)*a1;
  }
LABEL_6:
  a1[1] = v7;
  v6[v7] = 0;
  return a1;
}

