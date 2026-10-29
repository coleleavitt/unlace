__int64 __fastcall sub_3E5500(__int64 a1, __int64 a2, int *a3)
{
  int tinfo_size; // eax
  char tinfo_property; // al
  int v7; // ecx
  int v8; // edx
  int v9; // r12d
  int v10; // eax

  tinfo_size = get_tinfo_size();
  *a3 = tinfo_size;
  if ( tinfo_size != -1 )
  {
    tinfo_property = get_tinfo_property();
    v7 = *a3;
    v8 = *(_DWORD *)(a2 + 80);
    if ( (tinfo_property & 0xF) == 9 )
    {
      if ( v8 < v7 && v7 != 8 )
      {
        if ( v7 == 16 && v8 == 8 )
        {
          cleanup_argloc();
          *(_DWORD *)a1 = 0;
          copy_argloc();
          cleanup_argloc();
          return a1;
        }
        goto LABEL_9;
      }
      v9 = *(_DWORD *)(a2 + 484);
    }
    else
    {
      if ( *(_DWORD *)(a2 + 748) == 5 )
      {
        v9 = *(_DWORD *)(a2 + 372);
        v10 = *(_DWORD *)(a2 + 376);
      }
      else
      {
        v9 = *(_DWORD *)(a2 + 364);
        v10 = *(_DWORD *)(a2 + 368);
      }
      if ( v8 < v7 )
      {
        if ( 2 * v8 != v7 )
        {
LABEL_9:
          *(_DWORD *)a1 = 0;
          copy_argloc();
          cleanup_argloc();
          return a1;
        }
        if ( *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
          v9 = v10;
      }
    }
    if ( v9 != -1 )
      cleanup_argloc();
    goto LABEL_9;
  }
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  return a1;
}

