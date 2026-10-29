__int64 __fastcall sub_216C0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD v4[7]; // [rsp+0h] [rbp-38h] BYREF

  v4[3] = __readfsqword(0x28u);
  sub_31A90(v4, 20);
  sub_2F390(v4, a2);
  v2 = sub_2E680(a1 + 864, v4, 4294967294LL, 0);
  if ( v4[0] )
  {
    v4[1] = 0;
    qfree();
  }
  return v2;
}

