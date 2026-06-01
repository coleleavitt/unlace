__int64 __fastcall sub_3D20(unsigned __int64 a1, int a2)
{
  unsigned int v2; // edx
  unsigned __int64 v3; // rax
  unsigned int v4; // esi
  int v5; // r8d
  int v6; // edx
  unsigned int v7; // edx

  v2 = 1;
  v3 = a1 + 4LL * a2;
  if ( a1 >= v3 )
    return v2;
  v4 = 0x8000000;
  v5 = 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v3 - 4);
    v3 -= 4LL;
    if ( v6 > 0 )
      break;
LABEL_7:
    if ( a1 >= v3 )
      return v5 <= 1 || v4 == 0;
  }
  v5 += v6;
  if ( v6 <= 27 )
  {
    v7 = 1 << (27 - v6);
    if ( v4 >= v7 )
    {
      v4 -= v7;
      goto LABEL_7;
    }
  }
  return 0;
}
