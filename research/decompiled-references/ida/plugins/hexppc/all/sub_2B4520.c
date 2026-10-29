unsigned __int64 __fastcall sub_2B4520(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[2]; // [rsp+0h] [rbp-38h] BYREF
  char v5; // [rsp+10h] [rbp-28h]
  __int64 v6; // [rsp+18h] [rbp-20h]
  unsigned __int64 v7; // [rsp+28h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  if ( a3 )
  {
    v4[1] = a2;
    v6 = a3;
    v5 = 109;
    v4[0] = &off_4CE260;
    sub_2B2580(a1, (__int64)v4);
  }
  return v7 - __readfsqword(0x28u);
}

