char __fastcall sub_1F0840(__int64 a1, int *a2, int *a3, double a4)
{
  int v5; // ebp
  int v6; // ebx
  int v7; // eax
  int v8; // edx

  v5 = *a2;
  v6 = *a3;
  while ( 1 )
  {
    LOBYTE(v7) = sub_11CA80(v6);
    if ( (_BYTE)v7 == 1 || v6 > 7 )
      break;
    v7 = sub_11CA90(v6, a4);
    v8 = v5 & (v7 - 1);
    if ( v8 )
    {
      if ( v8 + v6 > *(_DWORD *)(a1 + 88) )
        break;
      v5 -= v8;
      v6 += v8;
    }
    if ( v6 < v7 )
      v6 = v7;
  }
  *a2 = v5;
  *a3 = v6;
  return v7;
}

