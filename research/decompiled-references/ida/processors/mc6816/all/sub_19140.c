__int64 __fastcall sub_19140(__int64 a1, int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  __int64 v4; // rbp
  char wide_byte; // al
  __int64 v6; // rdx

  if ( *(_QWORD *)a1 == -1 )
    return 0xFFFFFFFFLL;
  v2 = *(_DWORD *)(a1 + 28) + a2;
  if ( v2 > 7 )
    return 0xFFFFFFFFLL;
  v3 = *(_DWORD *)(a1 + 24);
  if ( v2 >= v3 )
  {
    v4 = *(_QWORD *)a1 + (int)v3;
    while ( (unsigned __int8)is_mapped() )
    {
      ++v4;
      wide_byte = get_wide_byte();
      v6 = (int)v3++;
      *(_BYTE *)(a1 + v6 + 8) = wide_byte;
      *(_BYTE *)(a1 + v6 + 16) = wide_byte;
      if ( v2 < v3 )
      {
        *(_DWORD *)(a1 + 24) = v2 + 1;
        return *(unsigned __int8 *)(a1 + v2 + 16);
      }
    }
    return 0xFFFFFFFFLL;
  }
  return *(unsigned __int8 *)(a1 + v2 + 16);
}

