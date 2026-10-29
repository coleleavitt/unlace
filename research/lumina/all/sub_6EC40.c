bool __fastcall sub_6EC40(__int64 a1, char **a2, __int64 a3)
{
  bool result; // al
  char *v4; // rbx
  char *v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[1] = (char *)__readfsqword(0x28u);
  v5[0] = *a2;
  if ( __CFADD__(a3, v5[0]) )
    return 0;
  v4 = &v5[0][a3];
  if ( !sub_6EB50(a1 + 16, v5, a3) )
    return 0;
  result = sub_6C650((_DWORD *)(a1 + 136), (unsigned __int64 *)v5, (__int64)v4);
  if ( !result )
    return 0;
  *a2 = v5[0];
  return result;
}
