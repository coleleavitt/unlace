bool __fastcall sub_301E0(__int64 a1, __int64 *a2, int a3)
{
  bool result; // al
  char v5; // dl
  int v6; // eax
  _WORD v7[12]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  result = 0;
  if ( a2 )
  {
    v5 = sub_2F860(a1, (__int64)v7, *a2);
    v6 = 0xFFFF;
    if ( v5 )
      v6 = v7[4];
    return v6 == a3;
  }
  return result;
}

