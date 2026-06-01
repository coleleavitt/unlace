__int64 __fastcall sub_7BE0(__int64 a1, __int64 a2, int a3)
{
  int v3; // ecx

  v3 = 1 << ((a3 >> 2) & 3 | (a3 >> 5) & 0xC);
  if ( (~(_BYTE)a3 & 3) != 0 )
  {
    if ( (a3 & 1) == 0 )
      return 0;
  }
  else
  {
    v3 ^= 0xFFFFu;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 5;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 5LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) = v3;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

