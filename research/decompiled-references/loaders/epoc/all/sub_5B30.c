__int64 __fastcall sub_5B30(__int64 a1, int a2)
{
  unsigned __int32 v2; // eax
  int v3; // r8d
  bool v4; // sf
  int v5; // edx
  int v6; // r10d
  char v7; // r9
  int v9; // esi
  _DWORD *v10; // rax
  char v11; // r9

  v2 = *(_DWORD *)(a1 + 4);
  LOBYTE(v3) = a2;
  v4 = *(_DWORD *)a1 - a2 < 0;
  v5 = *(_DWORD *)a1 - a2;
  *(_DWORD *)a1 = v5;
  if ( v4 )
  {
    v9 = *(_DWORD *)(a1 + 8);
    v6 = 0;
    do
    {
      v11 = v3;
      v3 = -v5;
      v6 |= v2 >> (32 - v5 - v11) << -(char)v5;
      if ( v9 <= 0 )
        sub_5960();
      v10 = *(_DWORD **)(a1 + 16);
      v9 -= 32;
      v5 += 32;
      v7 = v5;
      *(_QWORD *)(a1 + 16) = v10 + 1;
      LODWORD(v10) = *v10;
      *(_DWORD *)a1 = v5;
      *(_DWORD *)(a1 + 8) = v9;
      v2 = _byteswap_ulong((unsigned int)v10);
      if ( v9 < 0 )
      {
        v5 += v9;
        *(_DWORD *)a1 = v5;
      }
    }
    while ( v5 < 0 );
  }
  else
  {
    v6 = 0;
    v7 = 32 - a2;
  }
  *(_DWORD *)(a1 + 4) = v2 << v3;
  return v6 | (v2 >> v7);
}
