__int64 __fastcall sub_40A200(__int64 a1, const char *a2)
{
  const char *v2; // rbx
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // rbx
  size_t v6; // rbx
  size_t v7; // r14
  char *v8; // rsi
  __int64 result; // rax
  unsigned __int8 v10; // [rsp+Fh] [rbp-79h]
  char *v11; // [rsp+10h] [rbp-78h]
  void *src; // [rsp+30h] [rbp-58h]
  size_t v13; // [rsp+38h] [rbp-50h]

  v2 = a2;
  if ( (unsigned __int8)sub_32AF50() )
    return 1;
  while ( *v2 == 95 )
  {
    ++v2;
    if ( (unsigned __int8)sub_32AF50() )
      return 1;
  }
  v11 = (char *)qvector_reserve();
  strcpy(v11, "__");
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    v5 = v3;
    src = (void *)qvector_reserve();
    v13 = v4;
    memmove(src, a2, v5);
    *((_BYTE *)src + v5) = 0;
    v6 = v4;
    if ( v4 )
    {
      v7 = v4 - 1;
      if ( v13 != 1 )
      {
        v8 = v11;
        if ( v6 != -2 )
        {
          v11 = (char *)qvector_reserve();
          v8 = v11;
        }
        v8[v7 + 2] = 0;
        memcpy(v11 + 2, src, v7);
      }
    }
    if ( src )
      qfree();
  }
  result = sub_32AF50();
  if ( !(_BYTE)result )
    result = sub_32AF50();
  if ( v11 )
  {
    v10 = result;
    qfree();
    return v10;
  }
  return result;
}

