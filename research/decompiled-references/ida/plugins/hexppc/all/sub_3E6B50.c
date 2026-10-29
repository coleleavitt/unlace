__int64 __fastcall sub_3E6B50(__int64 a1, __int64 a2, int *a3)
{
  int tinfo_size; // eax
  int v6; // r12d
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax

  tinfo_size = get_tinfo_size();
  *a3 = tinfo_size;
  if ( tinfo_size != -1 )
  {
    if ( (get_tinfo_property() & 0xF) == 9 )
    {
      if ( *(_BYTE *)(a2 + 4413) )
      {
        v8 = *a3;
        if ( *a3 > 8 && v8 != 16 && (!*(_BYTE *)(*(_QWORD *)(a2 + 96) + 144LL) || v8 != 32)
          || *(_DWORD *)(a2 + 420) == -1 )
        {
          goto LABEL_13;
        }
LABEL_12:
        cleanup_argloc();
LABEL_13:
        *(_DWORD *)a1 = 0;
        copy_argloc();
        cleanup_argloc();
        return a1;
      }
      if ( *(_BYTE *)(*(_QWORD *)(a2 + 96) + 144LL) )
        goto LABEL_13;
      v9 = *a3;
      v6 = *(_DWORD *)(a2 + 364);
      if ( *a3 <= 4 )
        goto LABEL_6;
      if ( v9 != 8 )
      {
        if ( v9 != 16 )
          goto LABEL_13;
        v7 = 4;
        goto LABEL_7;
      }
    }
    else
    {
      v6 = *(_DWORD *)(a2 + 364);
      if ( *a3 <= *(_DWORD *)(a2 + 80) )
      {
LABEL_6:
        v7 = 1;
LABEL_7:
        if ( v6 == -1
          || *(_DWORD *)(a2 + 420) != v6 && v7 != 1 && *(_DWORD *)(a2 + 80) != *(_DWORD *)(a2 + 4408) && v7 != 2 )
        {
          goto LABEL_13;
        }
        goto LABEL_12;
      }
      if ( *a3 != 8 )
        goto LABEL_13;
    }
    v7 = 2;
    goto LABEL_7;
  }
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  return a1;
}

