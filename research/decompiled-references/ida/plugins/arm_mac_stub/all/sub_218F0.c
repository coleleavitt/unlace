__int64 __fastcall sub_218F0(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD v3[7]; // [rsp+0h] [rbp-38h] BYREF

  v3[3] = __readfsqword(0x28u);
  sub_31A90(v3, 16);
  v1 = sub_2E680(a1 + 864, v3, 4294967294LL, 0);
  if ( v3[0] )
  {
    v3[1] = 0;
    qfree();
  }
  return v1;
}

