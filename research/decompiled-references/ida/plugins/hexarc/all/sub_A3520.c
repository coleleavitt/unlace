__int64 __fastcall sub_A3520(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v7; // rdx
  _QWORD v9[10]; // [rsp+0h] [rbp-50h] BYREF

  v5 = a1;
  v9[5] = __readfsqword(0x28u);
  sub_11DFC0(v9, a1, a2, 1);
  if ( a4 )
    v7 = *(_QWORD *)(a4 + 16);
  else
    v7 = *(_QWORD *)(a1 + 56);
  LOBYTE(v5) = sub_122A90(a1, (unsigned int)v9, v7, *(_QWORD *)(a3 + 16), 0, 0, 257) != 0;
  if ( v9[2] )
  {
    v9[3] = 0;
    qfree();
  }
  qfree();
  return v5;
}

