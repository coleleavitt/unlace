bool __fastcall sub_71C00(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  bool result; // al
  __int64 v4; // rbx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v8[7]; // [rsp+10h] [rbp-38h] BYREF

  v8[1] = __readfsqword(0x28u);
  v7 = *a2;
  if ( __CFADD__(a3, v7) )
    return 0;
  v4 = a3 + v7;
  if ( !(unsigned __int8)sub_709D0((__int64 *)a1, &v7, a3) )
    return 0;
  v5 = v7;
  v8[0] = v7;
  *(_QWORD *)(a1 + 64) = sub_196FF0(v8, v4);
  v7 = v8[0];
  if ( v5 >= v8[0] )
    return 0;
  if ( !sub_6C650((_DWORD *)(a1 + 72), &v7, v4) )
    return 0;
  --*(_DWORD *)(a1 + 72);
  result = sub_6C650((_DWORD *)(a1 + 76), &v7, v4);
  if ( !result )
    return 0;
  v6 = v7;
  --*(_DWORD *)(a1 + 76);
  *a2 = v6;
  return result;
}
