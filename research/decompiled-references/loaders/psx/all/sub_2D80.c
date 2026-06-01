bool __fastcall sub_2D80(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al
  _QWORD v3[5]; // [rsp+0h] [rbp-28h] BYREF

  v3[3] = __readfsqword(0x28u);
  qlseek(a1, 0, 0);
  v1 = qlread(a1, v3, 16);
  result = 0;
  if ( v1 == 16 )
    return (v3[1] ^ 0xAC2810103C011F80LL | v3[0] ^ 0x3508243F3C080013LL) == 0;
  return result;
}
