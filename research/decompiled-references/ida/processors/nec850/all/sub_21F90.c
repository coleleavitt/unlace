bool __fastcall sub_21F90(__int64 a1, __int64 a2)
{
  int v2; // edx
  bool result; // al
  int v4; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v2 = sub_21900(a1, nullptr, &v4, a2);
  result = 0;
  if ( v2 == 5 )
    return (v4 & 5) == 1;
  return result;
}

