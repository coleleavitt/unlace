__int64 __fastcall sub_93E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v5; // rbx
  int v6; // edx
  int v7; // r8d
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx

  v5 = &qword_16340;
  v6 = (a3 >> 2) & 0x3FFFFFF;
  while ( *((_DWORD *)v5 + 2) != (v6 & *((_DWORD *)v5 + 3)) )
  {
    v5 += 3;
    if ( v5 == (__int64 *)&dword_16D48 )
      return 0;
  }
  LOBYTE(v7) = 0;
  *(_BYTE *)(a2 + 32) = *((_BYTE *)v5 + 16) + ((a3 & 2) != 0);
  if ( *(_WORD *)v5 != 96 )
  {
    if ( (v5[2] & 0xFFFFFFFB) == 1 )
    {
      v7 = (a3 >> 12) & 1;
    }
    else
    {
      LOBYTE(v7) = (a3 & 2) != 0;
      if ( *((_BYTE *)v5 + 20) )
        v7 = (a3 >> 12) & 1;
    }
  }
  result = sub_89B0(a1, a2, a3, (__int64)v5, v7);
  if ( *(_WORD *)(a2 + 24) != 6
    || (v9 = *(unsigned __int8 *)(a2 + 32), (unsigned __int8)v9 <= 8u) && (v10 = 340, _bittest64(&v10, v9)) )
  {
    if ( *((_BYTE *)v5 + 2) == 30 )
      *(_BYTE *)(a2 + 29) &= ~4u;
  }
  else
  {
    *(_BYTE *)(a2 + 29) |= 4u;
  }
  return result;
}

