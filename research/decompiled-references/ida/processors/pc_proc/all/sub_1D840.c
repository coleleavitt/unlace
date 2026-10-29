__int64 __fastcall sub_1D840(char **a1)
{
  char *v1; // rsi
  char v2; // cl
  int v3; // eax
  int v4; // r10d
  char v5; // dl
  char v7; // r8
  char v8; // dl

  v1 = *a1;
  v2 = **a1;
  if ( (v2 & 0xDF) == 0x45 )
  {
    v2 = v1[1];
    v3 = 14;
    ++v1;
    v4 = 4;
  }
  else
  {
    v3 = 30;
    v4 = 2;
  }
  while ( 1 )
  {
    v5 = aAxcxdxbxspbpsi[v3];
    if ( v5 == v2 || ((unsigned __int8)v5 | 0x20) == v2 )
    {
      v7 = v1[1];
      v8 = aAxcxdxbxspbpsi[v3 + 1];
      if ( v8 == v7 || v7 == ((unsigned __int8)v8 | 0x20) )
        break;
    }
    v3 -= 2;
    if ( v3 == -2 )
      return 0;
  }
  *a1 = v1 + 2;
  if ( v3 <= 15 )
    return (v4 << 8) | (unsigned int)(v3 >> 1);
  else
    return ((v3 & 0xF) >> 1) | 0x100u;
}

