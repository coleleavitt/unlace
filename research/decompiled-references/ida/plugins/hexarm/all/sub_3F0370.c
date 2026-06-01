__int64 __fastcall sub_3F0370(__int64 a1, __int64 a2, int a3, int a4, int *a5, double a6)
{
  unsigned __int64 v8; // rbp
  size_t v9; // rdx
  size_t v10; // rax
  __int64 result; // rax
  char v12; // dl
  int v13; // ecx

  v8 = a3;
  v9 = 3;
  if ( v8 <= 3 )
    v9 = v8;
  if ( !strncmp((const char *)a2, "sp", v9) )
  {
    if ( a5 )
      *a5 = 8;
    return (unsigned int)(a4 + *(_DWORD *)(a1 + 484));
  }
  v10 = 4;
  if ( v8 <= 4 )
    v10 = v8;
  if ( !strncmp((const char *)a2, "wsp", v10) )
  {
    if ( a5 )
      *a5 = 4;
    return (unsigned int)(a4 + *(_DWORD *)(a1 + 484));
  }
  if ( (unsigned __int8)(*(_BYTE *)a2 - 119) > 1u
    || (unsigned __int8)(*(_BYTE *)(a2 + 1) - 48) > 9u
    || (result = sub_3F0200(a1, a2, v8, 120, nullptr), (_DWORD)result == -1) )
  {
    if ( a5 )
      *a5 = 0;
    return 0xFFFFFFFFLL;
  }
  else if ( a5 )
  {
    v12 = 0;
    v13 = 8;
    if ( *(_BYTE *)a2 == 119 )
    {
      v12 = 1;
      v13 = 4;
    }
    *a5 = v13;
    if ( (v12 == 0 ? 7 : 3) <= a4 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC854u, a6);
      BUG();
    }
  }
  return result;
}

