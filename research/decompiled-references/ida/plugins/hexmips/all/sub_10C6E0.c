__int64 __fastcall sub_10C6E0(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  int v5; // ebp
  __int64 v6; // r13
  int v7; // edx

  sub_135990(*(_QWORD *)(a1 + 40));
  v4 = (unsigned int)(2 * a2 + 1);
  v5 = 1 << (2 * a2 + 1);
  v6 = a1 + 32LL * (int)v4 + 56;
  if ( (*(_DWORD *)(a1 + 48) & v5) != 0 )
  {
    if ( *(_DWORD *)(32LL * (int)v4 + a1 + 80) )
    {
      return 0;
    }
    else
    {
      v7 = 258;
      if ( a2 != 2 )
      {
        v7 = 130;
        if ( a2 <= 0 )
          v7 = 2;
      }
      sub_10C1D0(a1, a1 + 32LL * (int)v4 + 56, v7, v4, v2, v3);
      ++*(_DWORD *)(a1 + 52);
      *(_DWORD *)(a1 + 48) &= ~v5;
    }
  }
  return v6;
}

