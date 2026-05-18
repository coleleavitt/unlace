__int64 __fastcall sub_CCA50(__int64 a1, unsigned int a2, int a3)
{
  int v3; // r9d
  int v4; // r10d
  int v5; // eax
  _DWORD *v6; // r11
  _DWORD *v7; // rbx
  unsigned int v8; // r12d
  unsigned int v9; // r9d
  unsigned int v10; // r10d
  int v11; // eax

  v3 = a3;
  v4 = a3 - a2;
  v5 = 0;
  v6 = (_DWORD *)(a1 + 52);
  v7 = (_DWORD *)(a1 + 56);
  v8 = *(_DWORD *)(a1 + 56) / 5u;
  if ( a2 > 1 )
    v5 = sub_CCA10((_DWORD *)(a1 + 52), v7, a2);
  v9 = a2 - v3 - (v8 + v4 + v5) / v8;
  v10 = (unsigned int)dword_241470 / *(_DWORD *)(a1 + 52) + 1;
  if ( v10 < a2 )
    v9 = (v10 <= v9) + v9 - 1;
  while ( 1 )
  {
    v11 = 0;
    if ( v9 > 1 )
      v11 = sub_CCA10(v6, v7, v9);
    if ( v10 != v9 && v9 != v11 )
      break;
    --v9;
  }
  return v9;
}
