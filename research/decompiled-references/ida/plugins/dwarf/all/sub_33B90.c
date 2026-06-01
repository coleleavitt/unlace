__int64 __fastcall sub_33B90(__int64 a1, char a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  const char *v4; // rbx
  __int64 result; // rax
  char *v6; // rax
  signed __int64 v7; // rdx
  bool v8; // zf
  unsigned __int64 v9; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v9 = v3 - 1;
    result = -1;
    if ( v9 < a3 )
      return result;
    v4 = *(const char **)a1;
  }
  else
  {
    v4 = src;
    result = -1;
    if ( a3 )
      return result;
  }
  v6 = strchr(&v4[a3], a2);
  v7 = v6 - v4;
  v8 = v6 == nullptr;
  result = -1;
  if ( !v8 )
    return v7;
  return result;
}

