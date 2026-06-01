unsigned __int64 __fastcall std::string::basic_string<std::allocator<char>>(
        __int64 *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9)
{
  void *v9; // rbp
  size_t v10; // rax
  size_t v11; // rcx
  __int64 v13; // rax
  size_t v14; // [rsp+8h] [rbp-30h]
  size_t v15; // [rsp+10h] [rbp-28h]
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v9 = a1 + 2;
  *a1 = (__int64)(a1 + 2);
  if ( !a2 )
    std::string::basic_string<std::allocator<char>>((__int64)a1, 0, a3, a4, a5, a6, a7, a8, a9);
  v10 = strlen(a2);
  v15 = v10;
  v11 = v10;
  if ( v10 > 0xF )
  {
    v14 = v10;
    v13 = std::string::_M_create();
    v11 = v14;
    *a1 = v13;
    v9 = (void *)v13;
    a1[2] = v15;
    goto LABEL_9;
  }
  if ( v10 != 1 )
  {
    if ( !v10 )
      goto LABEL_5;
LABEL_9:
    memcpy(v9, a2, v11);
    v10 = v15;
    v9 = (void *)*a1;
    goto LABEL_5;
  }
  *((_BYTE *)a1 + 16) = *a2;
LABEL_5:
  a1[1] = v10;
  *((_BYTE *)v9 + v10) = 0;
  return v16 - __readfsqword(0x28u);
}

