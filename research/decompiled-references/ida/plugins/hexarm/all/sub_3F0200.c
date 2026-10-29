__int64 __fastcall sub_3F0200(__int64 a1, __int64 a2, int a3, char a4, int *a5)
{
  __int64 v8; // rbx
  char v9; // al
  size_t v10; // r12
  __int64 result; // rax
  bool v12; // dl
  char v13; // al
  int v14; // eax
  int v15; // edx

  if ( (*(_DWORD *)(a1 + 80) == 8 || a4 != 115) && a4 != 100
    || (unsigned __int8)(*(_BYTE *)(a2 + 1) - 48) > 9u
    || (v13 = *(_BYTE *)(a2 + 2)) != 0 && ((unsigned __int8)(v13 - 48) > 9u || *(_BYTE *)(a2 + 3))
    || (v14 = strtol((const char *)(a2 + 1), nullptr, 10), v14 > 31) )
  {
    v8 = *(_QWORD *)(a1 + 688);
    if ( a3 > 1 && (v9 = *(_BYTE *)(v8 + 8), v10 = a3 - 1, v9) )
    {
      while ( v9 != a4 || strncmp((const char *)(a2 + 1), (const char *)(v8 + 9), v10) )
      {
        v9 = *(_BYTE *)(v8 + 32);
        v8 += 24;
        if ( !v9 )
          goto LABEL_13;
      }
      if ( !a5 )
        return *(unsigned int *)(v8 + 16);
      *a5 = *(__int16 *)(v8 + 12);
      result = *(unsigned int *)(v8 + 16);
      v12 = (_DWORD)result == -1;
    }
    else
    {
LABEL_13:
      v12 = 1;
      result = 0xFFFFFFFFLL;
      if ( !a5 )
        return result;
    }
    if ( v12 )
      *a5 = 0;
  }
  else
  {
    v15 = 4 * (a4 != 115) + 4;
    if ( a5 )
      *a5 = v15;
    return (unsigned int)(*(_DWORD *)(a1 + 488) + v15 * v14);
  }
  return result;
}

