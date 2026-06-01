__int64 __fastcall sub_365BB0(__int64 a1, unsigned int *a2)
{
  char tinfo_property; // al
  __int64 v4; // rdx
  int v5; // eax
  int v6; // r13d

  if ( *(_DWORD *)a1 != 4 )
    return 0;
  tinfo_property = get_tinfo_property();
  v4 = a2[12];
  if ( (tinfo_property & 0xF) == 9 )
  {
    BYTE1(v4) &= 0x20u;
    if ( BYTE1(v4) && *(int *)(a1 + 36) <= 7 )
    {
      if ( *(_BYTE *)(a1 + 64) == 1
        && (*(int (__fastcall **)(unsigned int *, _QWORD, __int64))(*(_QWORD *)a2 + 32LL))(
             a2,
             *(unsigned int *)(a1 + 72),
             v4) <= 7 )
      {
        return 0;
      }
      v5 = 67;
      v6 = 8;
LABEL_8:
      *(_DWORD *)a1 = v5;
      *(_DWORD *)(a1 + 68) = v6;
      return 1;
    }
  }
  else
  {
    BYTE1(v4) &= 8u;
    if ( BYTE1(v4) )
    {
      v6 = a2[20];
      if ( *(_DWORD *)(a1 + 36) < v6
        && (*(_BYTE *)(a1 + 64) != 1
         || v6 <= (*(int (__fastcall **)(unsigned int *, _QWORD, __int64))(*(_QWORD *)a2 + 32LL))(
                    a2,
                    *(unsigned int *)(a1 + 72),
                    v4)) )
      {
        v5 = ((unsigned int)get_tinfo_property() != 1) + 8;
        goto LABEL_8;
      }
    }
  }
  return 0;
}

