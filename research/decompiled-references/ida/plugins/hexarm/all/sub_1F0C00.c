char __fastcall sub_1F0C00(__int64 a1, int *a2, int *a3)
{
  int v4; // ebp
  int v5; // ebx
  int v6; // eax
  int v7; // edx

  v4 = *a2;
  v5 = *a3;
  while ( 1 )
  {
    LOBYTE(v6) = sub_11C4C0(v5);
    if ( (_BYTE)v6 == 1 || v5 > 7 )
      break;
    v6 = sub_11C4D0(v5);
    v7 = v4 & (v6 - 1);
    if ( v7 )
    {
      if ( v7 + v5 > *(_DWORD *)(a1 + 88) )
        break;
      v4 -= v7;
      v5 += v7;
    }
    if ( v5 < v6 )
      v5 = v6;
  }
  *a2 = v4;
  *a3 = v5;
  return v6;
}

