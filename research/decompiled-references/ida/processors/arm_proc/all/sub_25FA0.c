__int64 __fastcall sub_25FA0(__int64 a1, __int64 a2, signed int a3)
{
  int v5; // edx
  unsigned int v6; // ecx
  __int64 v7; // rax
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // edi
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax

  v5 = *(unsigned __int16 *)(a2 + 24);
  if ( (_WORD)v5 != 43 )
  {
    if ( (unsigned __int16)v5 > 0x2Bu )
    {
      if ( (_WORD)v5 == 872 )
      {
        v6 = 0;
        if ( a3 > 1 && *(_BYTE *)(a2 + 41) == 1 )
          LOBYTE(v6) = a3 - 1 == *(unsigned __int16 *)(a2 + 46);
        return v6;
      }
      goto LABEL_12;
    }
    v6 = 1;
    if ( (_WORD)v5 != 1 )
    {
      if ( (_WORD)v5 == 34 )
      {
        v6 = 0;
        if ( a3 <= 15 )
        {
          v7 = *(_QWORD *)(a2 + 104);
          LOBYTE(v6) = _bittest((const int *)&v7, a3);
        }
        return v6;
      }
LABEL_12:
      v9 = *(_QWORD *)(a1 + 16);
      v10 = 0;
      v11 = *(_DWORD *)(v9 + 104);
      if ( v5 >= v11 && v5 < *(_DWORD *)(v9 + 108) )
        v10 = *(_DWORD *)(*(_QWORD *)(v9 + 112) + 16LL * (v5 - v11) + 8);
      v12 = a2 + 41;
      v13 = &unk_8B1A0;
      v14 = a2 + 241;
      while ( (*v13 & v10) == 0 || *(_BYTE *)v12 != 1 || a3 != *(unsigned __int16 *)(v12 + 5) )
      {
        v12 += 40;
        ++v13;
        if ( v12 == v14 )
          return 0;
      }
      return 1;
    }
    return v6;
  }
  v6 = 0;
  if ( a3 > 15 )
    return v6;
  v15 = *(_QWORD *)(a2 + 64);
  LOBYTE(v6) = _bittest((const int *)&v15, a3);
  return v6;
}

