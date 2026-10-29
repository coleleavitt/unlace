__int64 __fastcall sub_ABE0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // eax
  __int64 v6; // rcx
  unsigned int v7; // edx
  int v8; // edi
  int v9; // ecx
  __int64 v10; // rax
  _DWORD *v11; // rdx
  __int64 v12; // rsi
  int v14; // eax

  v4 = *(unsigned __int16 *)(a2 + 24);
  if ( (_WORD)v4 != 12 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = 0;
    v8 = *(_DWORD *)(v6 + 104);
    if ( v4 >= v8 && v4 < *(_DWORD *)(v6 + 108) )
    {
      v9 = *(_DWORD *)(*(_QWORD *)(v6 + 112) + 16LL * (v4 - v8) + 8);
      if ( v9 )
      {
        v10 = a2 + 41;
        v11 = &dword_13CA0;
        v12 = a2 + 161;
        while ( (*v11 & v9) == 0 || *(_BYTE *)v10 != 1 || *(unsigned __int16 *)(v10 + 5) != a3 )
        {
          v10 += 40;
          ++v11;
          if ( v10 == v12 )
            return 0;
        }
        return 1;
      }
    }
    return v7;
  }
  v7 = 0;
  if ( *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26) == a4 )
    return v7;
  v14 = a3 - 16;
  LOBYTE(v7) = (unsigned int)(a3 - 16) > 0xF;
  LOBYTE(v14) = a3 != 14;
  return v14 & v7;
}

