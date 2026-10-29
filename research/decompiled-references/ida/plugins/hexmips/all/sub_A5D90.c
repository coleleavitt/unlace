__int64 __fastcall sub_A5D90(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v6[11]; // [rsp+0h] [rbp-58h] BYREF

  v6[5] = __readfsqword(0x28u);
  if ( a2 && (v4 = a2, (unsigned __int8)sub_11E040(a3, *(_QWORD *)(a2 + 8), 0)) )
  {
    sub_123820(v6, a1, a2, 1);
    LOBYTE(v4) = sub_A5B90(a1, v6, *(_QWORD *)(a2 + 8), a3, 1u) == 0;
    if ( v6[2] )
    {
      v6[3] = 0;
      qfree();
    }
    qfree();
  }
  else
  {
    return 1;
  }
  return v4;
}

