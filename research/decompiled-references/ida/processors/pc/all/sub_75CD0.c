char __fastcall sub_75CD0(__int64 a1, __int64 a2)
{
  char v2; // al
  char result; // al
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  v2 = *(_BYTE *)(a2 + 41);
  if ( v2 == 2 )
    return *(_QWORD *)(a2 + 56) == 0;
  if ( v2 != 3 )
    return 0;
  result = sub_73E00(a1, a2, *(unsigned __int16 *)(a2 + 46), v4, 0);
  if ( result )
    return v4[0] == 0;
  return result;
}
