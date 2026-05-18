__int64 __fastcall sub_C7180(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int16 v2; // dx
  __int64 v3; // rsi
  __int16 v4; // cx
  int v5; // eax
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  char *v13; // r9
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // r8d
  __int64 v17; // r10

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 5;
  if ( *(_WORD *)(a1 + 94) <= 5u )
    v2 = *(_WORD *)(a1 + 94);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_WORD *)(v1 + 58);
  v5 = v2;
  if ( v4 <= 98 )
  {
    v4 = 99;
    *(_WORD *)(v1 + 58) = 99;
  }
  if ( *(_QWORD *)(a1 + 72) )
    v4 -= 10;
  *(_WORD *)v3 = v4;
  v6 = v3 + 2;
  v7 = 2 * v2;
  if ( v7 >= 8 )
  {
    *(_QWORD *)(v3 + 2) = 0x1C001E00200021LL;
    *(_QWORD *)(v6 + v7 - 8) = *(__int64 *)((char *)&qword_1BACC0 + v7 - 8);
    v11 = (v3 + 10) & 0xFFFFFFFFFFFFFFF8LL;
    v12 = v6 - v11;
    v13 = (char *)&qword_1BACC0 - v12;
    v14 = (v12 + v7) & 0xFFFFFFF8;
    if ( v14 >= 8 )
    {
      v15 = v14 & 0xFFFFFFF8;
      v16 = 0;
      do
      {
        v17 = v16;
        v16 += 8;
        *(_QWORD *)(v11 + v17) = *(_QWORD *)&v13[v17];
      }
      while ( v16 < v15 );
    }
  }
  else if ( (v7 & 4) != 0 )
  {
    *(_DWORD *)(v3 + 2) = 2097185;
    *(_DWORD *)(v6 + v7 - 4) = *(_DWORD *)((char *)&qword_1BACC0 + v7 - 4);
  }
  else if ( v7 )
  {
    *(_BYTE *)(v3 + 2) = 33;
    if ( (v7 & 2) != 0 )
      *(_WORD *)(v3 + v7) = *(_WORD *)((char *)&qword_1BACC0 + v7 - 2);
  }
  result = (unsigned int)(v5 + 1);
  v9 = *(unsigned __int16 *)(a1 + 94);
  if ( (int)result <= *(unsigned __int16 *)(a1 + 94) )
  {
    v10 = v3 + 2LL * (int)result;
    do
    {
      result = (unsigned int)(result + 1);
      v10 += 2;
      *(_WORD *)(v10 - 2) = 23;
      v9 = *(unsigned __int16 *)(a1 + 94);
    }
    while ( *(unsigned __int16 *)(a1 + 94) >= (int)result );
  }
  if ( *(_BYTE *)(a1 + 98) )
  {
    result = 0;
    *(_WORD *)(v3 + 2 * v9) = 0;
  }
  return result;
}
