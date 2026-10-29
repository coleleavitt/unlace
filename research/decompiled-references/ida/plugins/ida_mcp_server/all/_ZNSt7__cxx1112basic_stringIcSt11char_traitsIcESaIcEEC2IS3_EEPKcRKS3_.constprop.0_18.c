unsigned __int64 __fastcall std::string::basic_string<std::allocator<char>>(__int64 *a1, const char *a2)
{
  char *v2; // r13
  size_t v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  size_t v8; // [rsp+0h] [rbp-38h]
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v2 = (char *)(a1 + 2);
  *a1 = (__int64)(a1 + 2);
  if ( !a2 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v3 = strlen(a2);
  v8 = v3;
  v4 = v3;
  if ( v3 > 0xF )
  {
    v5 = std::string::_M_create();
    *a1 = v5;
    v2 = (char *)v5;
    a1[2] = v8;
LABEL_8:
    qmemcpy(v2, a2, v4);
    goto LABEL_9;
  }
  if ( v3 == 1 )
  {
    *((_BYTE *)a1 + 16) = *a2;
  }
  else if ( v3 )
  {
    goto LABEL_8;
  }
LABEL_9:
  v6 = *a1;
  a1[1] = v8;
  *(_BYTE *)(v6 + v8) = 0;
  return v9 - __readfsqword(0x28u);
}

