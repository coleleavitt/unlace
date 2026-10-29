__int64 __fastcall sub_1108E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, double a7, __m128 a8)
{
  int v8; // ecx
  int v9; // ebp
  __int64 v10; // r13
  int v11; // edx

  sub_139B90(*(_QWORD *)(a1 + 40), a2, a3, a4, a5, a6);
  v8 = 2 * a2 + 1;
  v9 = 1 << (2 * a2 + 1);
  v10 = a1 + 32LL * v8 + 56;
  if ( (*(_DWORD *)(a1 + 48) & v9) != 0 )
  {
    if ( *(_DWORD *)(32LL * v8 + a1 + 80) )
    {
      return 0;
    }
    else
    {
      v11 = 258;
      if ( (_DWORD)a2 != 2 )
      {
        v11 = 130;
        if ( (int)a2 <= 0 )
          v11 = 2;
      }
      sub_1103D0((__int64 *)a1, a1 + 32LL * v8 + 56, v11, a7, a8);
      ++*(_DWORD *)(a1 + 52);
      *(_DWORD *)(a1 + 48) &= ~v9;
    }
  }
  return v10;
}

