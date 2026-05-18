bool __fastcall sub_70C90(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  bool result; // al
  __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  int v6; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int64 v7[7]; // [rsp+10h] [rbp-38h] BYREF

  v7[1] = __readfsqword(0x28u);
  v7[0] = *a2;
  if ( __CFADD__(a3, v7[0]) )
    return 0;
  v4 = a3 + v7[0];
  if ( !(unsigned __int8)sub_709D0((__int64 *)a1, v7, a3) )
    return 0;
  result = sub_6C650(&v6, v7, v4);
  if ( !result )
    return 0;
  v5 = v7[0];
  *(_BYTE *)(a1 + 64) = v6 != 0;
  *a2 = v5;
  return result;
}
