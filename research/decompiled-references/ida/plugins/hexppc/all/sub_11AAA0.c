bool __fastcall sub_11AAA0(__int64 a1)
{
  char v1; // dl
  bool result; // al
  int v3; // [rsp+0h] [rbp-18h] BYREF
  int v4; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v1 = sub_11A880((int **)a1, &v3, &v4, 0);
  result = 1;
  if ( v1 )
    return v3 + v4 == *(_DWORD *)(a1 + 68);
  return result;
}

