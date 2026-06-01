__int64 *__fastcall sub_4B10(__int64 a1, int a2)
{
  __int64 *v2; // rcx
  int v3; // edx
  __int64 *v4; // r8
  int v5; // eax
  __int64 *v7; // rcx
  int v8; // edx
  int v9; // eax

  v2 = qword_B520;
  while ( 1 )
  {
    v3 = *((_DWORD *)v2 + 1);
    v4 = v2;
    v5 = v3 & 1;
    if ( (v3 & 1) != 0 )
      v5 = (a2 >> 12) & 0xF;
    if ( (v3 & 2) != 0 )
      v5 = ((a2 >> 8) & 0xF) + 16 * v5;
    if ( (v3 & 4) != 0 )
      v5 = ((a2 >> 4) & 0xF) + 16 * v5;
    if ( (v3 & 8) != 0 )
      v5 = (a2 & 0xF) + 16 * v5;
    if ( *((_DWORD *)v2 + 2) == v5 )
      break;
    v2 += 3;
    if ( v2 == (__int64 *)jpt_616E )
    {
      v4 = nullptr;
      if ( *(_DWORD *)(a1 + 236) == 1 )
      {
        v7 = qword_B240;
        while ( 1 )
        {
          v8 = *((_DWORD *)v7 + 1);
          v4 = v7;
          v9 = v8 & 1;
          if ( (v8 & 1) != 0 )
            v9 = (a2 >> 12) & 0xF;
          if ( (v8 & 2) != 0 )
            v9 = ((a2 >> 8) & 0xF) + 16 * v9;
          if ( (v8 & 4) != 0 )
            v9 = ((a2 >> 4) & 0xF) + 16 * v9;
          if ( (v8 & 8) != 0 )
            v9 = (a2 & 0xF) + 16 * v9;
          if ( *((_DWORD *)v7 + 2) == v9 )
            break;
          v7 += 3;
          if ( &qword_B498[15] == v7 )
            return nullptr;
        }
      }
      return v4;
    }
  }
  return v4;
}

