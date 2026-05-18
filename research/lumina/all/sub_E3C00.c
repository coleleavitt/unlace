__int64 __fastcall sub_E3C00(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    result = sub_DC1F0(a2, 120, (__int64)sub_D8A60);
  else
    result = (__int64)sub_DC1C0(0, 0x78u);
  if ( result )
  {
    if ( !*(_BYTE *)(result + 112) )
    {
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
      *(_QWORD *)(result + 40) = 0;
      *(_QWORD *)(result + 48) = 0;
      *(_QWORD *)(result + 56) = 0;
      *(_QWORD *)(result + 64) = 0;
      *(_QWORD *)(result + 72) = 0;
      *(_QWORD *)(result + 80) = 0;
      *(_QWORD *)(result + 88) = 0;
      *(_QWORD *)(result + 96) = 0;
      *(_BYTE *)(result + 113) = 1;
    }
  }
  else if ( !*(_BYTE *)(a1 + 103) && !*(_BYTE *)(a1 + 104) )
  {
    sub_DBE60(a1);
    return 0;
  }
  return result;
}
