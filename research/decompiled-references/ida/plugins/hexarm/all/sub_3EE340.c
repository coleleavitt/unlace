__int64 __fastcall sub_3EE340(__int64 a1, __int64 a2, char a3)
{
  char v3; // al
  int v5; // ebx
  __int64 v7; // rdx
  int v8; // eax

  v3 = *(_BYTE *)(a2 + 41);
  if ( !v3 )
    return 1;
  v5 = 0;
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    {
      if ( v3 == 12 || v3 == 1 )
      {
        v7 = a2 + 40LL * v5;
        if ( (unsigned __int16)(*(_WORD *)(v7 + 46) - 163) <= 0x1Fu && *(char *)(v7 + 72) > 0 && !*(_BYTE *)(v7 + 74) )
          return 0;
      }
    }
    else if ( v3 == 1 )
    {
      v8 = *(unsigned __int16 *)(a2 + 40LL * v5 + 46);
      if ( (unsigned int)(v8 - 45) <= 0xF || (unsigned int)(v8 - 61) <= 0x1F && (unsigned __int64)get_dtype_size() <= 7 )
        return 0;
    }
    if ( !a3 && sub_3EE2E0(a1, a2 + 8 * (5LL * v5 + 5)) )
      return 0;
    v3 = *(_BYTE *)(a2 + 40LL * ++v5 + 41);
  }
  while ( v3 );
  return 1;
}

