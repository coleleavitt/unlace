__int64 __fastcall sub_8D4B0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  _QWORD v6[11]; // [rsp+0h] [rbp-58h] BYREF

  v4 = a1;
  v6[5] = __readfsqword(0x28u);
  sub_121360(v6, a1, a2, 1);
  LOBYTE(v4) = sub_A36D0(a1, v6, *(_QWORD *)(a2 + 8), a3, 1) != 0;
  if ( v6[2] )
  {
    v6[3] = 0;
    qfree();
  }
  qfree();
  return v4;
}

