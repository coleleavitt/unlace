__int64 __fastcall sub_16690(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD v4[7]; // [rsp+0h] [rbp-38h] BYREF

  v4[3] = __readfsqword(0x28u);
  sub_267D0(v4, 18);
  v2 = sub_233C0(a1 + 864, v4, 4294967294LL, a2);
  if ( v4[0] )
  {
    v4[1] = 0;
    qfree();
  }
  return v2;
}

