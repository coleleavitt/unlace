unsigned __int64 __fastcall sub_1D7370(__int64 a1, unsigned int a2, int a3)
{
  _QWORD v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+10h] [rbp-38h] BYREF
  int v6; // [rsp+18h] [rbp-30h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v4[1] = a2;
  v4[0] = 0xFFFFFFFF00000007LL;
  if ( a3 == -1 )
  {
    sub_1D5E90(a1, 55, (unsigned __int8 *)v4, nullptr, nullptr);
  }
  else
  {
    v6 = a3;
    v5 = 0x100000001LL;
    sub_1D5E90(a1, 42, (unsigned __int8 *)&v5, nullptr, (unsigned __int8 *)v4);
    sub_11C7E0((__int64)&v5);
  }
  sub_11C7E0((__int64)v4);
  return v7 - __readfsqword(0x28u);
}

