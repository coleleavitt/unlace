__int64 *__fastcall boost::system::detail::system_error_category::message[abi:cxx11](__int64 *a1, __int64 a2, int a3)
{
  void *v3; // rbp
  char *v4; // rax
  char *v5; // r12
  size_t v6; // rax
  size_t v7; // rcx
  __int64 v9; // rax
  size_t v10; // [rsp+8h] [rbp-C0h]
  size_t v11; // [rsp+18h] [rbp-B0h]
  char buf[136]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v13; // [rsp+A8h] [rbp-20h]

  v3 = a1 + 2;
  v13 = __readfsqword(0x28u);
  v4 = strerror_r(a3, buf, 0x80u);
  *a1 = (__int64)(a1 + 2);
  if ( !v4 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v5 = v4;
  v6 = strlen(v4);
  v11 = v6;
  v7 = v6;
  if ( v6 > 0xF )
  {
    v10 = v6;
    v9 = std::string::_M_create();
    v7 = v10;
    *a1 = v9;
    v3 = (void *)v9;
    a1[2] = v11;
    goto LABEL_9;
  }
  if ( v6 != 1 )
  {
    if ( !v6 )
      goto LABEL_5;
LABEL_9:
    memcpy(v3, v5, v7);
    v6 = v11;
    v3 = (void *)*a1;
    goto LABEL_5;
  }
  *((_BYTE *)a1 + 16) = *v5;
LABEL_5:
  a1[1] = v6;
  *((_BYTE *)v3 + v6) = 0;
  return a1;
}

