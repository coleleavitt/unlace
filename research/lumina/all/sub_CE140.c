unsigned __int64 __fastcall sub_CE140(__int64 a1, __int64 a2)
{
  _QWORD v3[4]; // [rsp+0h] [rbp-48h] BYREF
  int v4; // [rsp+20h] [rbp-28h]
  __int64 v5; // [rsp+28h] [rbp-20h]
  unsigned __int64 v6; // [rsp+38h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v4 = 0;
  v5 = a1;
  v3[0] = 0;
  v3[1] = sub_F9B10;
  v3[2] = sub_C4320;
  v3[3] = sub_C4330;
  if ( a2 )
    sub_CDCD0((__int64)v3, a2);
  return __readfsqword(0x28u) ^ v6;
}
