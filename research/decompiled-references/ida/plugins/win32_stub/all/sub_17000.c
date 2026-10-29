__int64 __fastcall sub_17000(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD v4[7]; // [rsp+0h] [rbp-38h] BYREF

  v4[3] = __readfsqword(0x28u);
  sub_27550(v4, 0);
  sub_265C0(a1 + 864, v4);
  sub_25E20(a1 + 1040, 0xFFFFFFFFLL);
  v2 = v4[0];
  *(_BYTE *)(a1 + 872) = 0;
  if ( v2 )
  {
    v4[1] = 0;
    qfree();
  }
  return 1;
}

