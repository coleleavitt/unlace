unsigned __int64 __fastcall sub_E8930(int a1, __int64 a2, _BYTE *a3, __int64 a4, double a5)
{
  _QWORD v6[2]; // [rsp+0h] [rbp-38h] BYREF
  int v7; // [rsp+10h] [rbp-28h]
  __int64 v8; // [rsp+14h] [rbp-24h]
  __int16 v9; // [rsp+1Ch] [rbp-1Ch]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v7 = a1;
  v9 = 0;
  v6[1] = a2;
  v6[0] = 0;
  v8 = 0;
  sub_D9E30((__int64)v6, a3, a4, a5);
  *(_BYTE *)(a2 + HIDWORD(v8)) = 0;
  return __readfsqword(0x28u) ^ v10;
}
