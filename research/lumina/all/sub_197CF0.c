bool __fastcall sub_197CF0(char *a1)
{
  int v1; // edx
  bool result; // al
  _WORD v3[44]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v4; // [rsp+58h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v1 = sub_197B50(a1, (__int64)v3);
  result = 0;
  if ( !v1 )
    return (v3[6] & 0xF000) == 0x4000;
  return result;
}
