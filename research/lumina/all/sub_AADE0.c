bool __fastcall sub_AADE0(__int64 a1, char **a2, __int64 a3)
{
  bool result; // al
  char *v4; // rbx
  char *v5; // r14
  char *v6; // rdx
  char *v7; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v8[7]; // [rsp+10h] [rbp-38h] BYREF

  v8[1] = __readfsqword(0x28u);
  v7 = *a2;
  if ( __CFADD__(a3, v7) )
    return 0;
  v4 = &v7[a3];
  if ( !(unsigned __int8)sub_6B1B0((__int64 *)(a1 + 16), (const void **)&v7, (unsigned __int64)&v7[a3]) )
    return 0;
  v5 = v7;
  v8[0] = v7;
  *(_DWORD *)(a1 + 40) = sub_196ED0(v8, v4);
  v7 = (char *)v8[0];
  if ( (unsigned __int64)v5 >= v8[0] )
    return 0;
  result = sub_6C650((_DWORD *)(a1 + 44), (unsigned __int64 *)&v7, (__int64)v4);
  if ( !result )
    return 0;
  if ( v7 >= v4 )
  {
    *(_BYTE *)(a1 + 48) = 0;
    return 0;
  }
  v6 = v7 + 1;
  *(_BYTE *)(a1 + 48) = *v7;
  *a2 = v6;
  return result;
}
