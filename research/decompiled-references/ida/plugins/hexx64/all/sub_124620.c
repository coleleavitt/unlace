__int64 __fastcall sub_124620(__int64 a1, __int64 a2, int a3, double a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // edx
  int v6; // r8d
  unsigned __int16 v7; // ax
  unsigned int v8; // edx

  v4 = *(unsigned __int16 *)(a1 + 24);
  v5 = 8 * a3;
  v6 = *(unsigned __int16 *)(a1 + 26);
  v7 = *(_WORD *)(a1 + 24) - v5;
  if ( v4 < v5 )
  {
    v8 = v5 - v4;
    if ( (unsigned __int16)v6 >= v8 )
      v6 -= v8;
    else
      v6 = 0;
    v7 = 0;
  }
  sub_123EA0(*(_QWORD *)(a1 + 8), *(__int64 **)(a1 + 16), a2, *(unsigned int *)(a1 + 28), v7 | (v6 << 16), a4);
  return 0;
}

