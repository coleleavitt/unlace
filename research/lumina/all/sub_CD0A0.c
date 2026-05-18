__int64 __fastcall sub_CD0A0(char *a1, int a2, unsigned __int8 a3)
{
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  v4[0] = 0;
  sub_C2450(a1, v4, a2, a3);
  return v4[0];
}
