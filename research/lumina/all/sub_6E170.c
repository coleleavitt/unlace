bool __fastcall sub_6E170(__int64 a1, const void **a2, __int64 a3)
{
  char *v3; // rbx
  bool result; // al
  const void *v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[1] = (const void *)__readfsqword(0x28u);
  v5[0] = *a2;
  v3 = (char *)v5[0] + a3;
  if ( __CFADD__(v5[0], a3) )
    return 0;
  if ( !(unsigned __int8)sub_6B1B0((__int64 *)a1, v5, (unsigned __int64)v3) )
    return 0;
  result = sub_6C650((_DWORD *)(a1 + 24), (unsigned __int64 *)v5, (__int64)v3);
  if ( !result )
    return 0;
  *a2 = v5[0];
  return result;
}
