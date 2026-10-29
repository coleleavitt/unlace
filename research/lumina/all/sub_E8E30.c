__int64 __fastcall sub_E8E30(int a1)
{
  __int64 v2; // [rsp+8h] [rbp-20h] BYREF
  __int64 v3[3]; // [rsp+10h] [rbp-18h] BYREF

  v3[1] = __readfsqword(0x28u);
  sub_E8C70(0, &v2, v3, a1);
  return v3[0];
}
