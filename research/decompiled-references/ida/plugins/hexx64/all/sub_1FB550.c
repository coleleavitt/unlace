bool __fastcall sub_1FB550(unsigned int *a1, __int64 a2, __int64 a3, char a4, char a5)
{
  int tinfo_size; // r12d
  __int64 v10; // r12
  int v11; // edi
  int v12; // edi
  int v13; // ebp
  signed int v14; // edi
  char v15; // al
  int v16; // eax

  if ( a3 )
  {
    tinfo_size = get_tinfo_size();
    if ( (get_tinfo_property() & 0x2F) == 0xD )
      return (int)a1[3] <= tinfo_size;
    if ( tinfo_size > 0 && a1[3] == tinfo_size )
      return 1;
  }
  v10 = *(_QWORD *)(a2 + 1504);
  if ( *((_BYTE *)a1 + 8) != 1 )
  {
    v11 = a1[3];
    if ( !a5 )
      goto LABEL_8;
LABEL_15:
    v13 = 16;
    if ( (*(_BYTE *)(v10 + 50) & 8) == 0 )
      v13 = 2 * *(_DWORD *)(v10 + 80);
    if ( !a4 )
      goto LABEL_21;
    if ( sub_11CB40(v11) )
      return 1;
    v14 = a1[3];
    if ( v13 > v14 )
    {
      while ( 1 )
      {
        v11 = v14 + 1;
        a1[3] = v11;
LABEL_21:
        if ( (unsigned __int8)sub_227ED0(a2, (__int64)a1, nullptr, v11) )
          break;
        v14 = a1[3];
        if ( v13 <= v14 )
          return 0;
      }
      return 1;
    }
    return 0;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v10 + 32LL))(*(_QWORD *)(a2 + 1504), *a1);
  v11 = a1[3];
  if ( v11 == v16 )
    return 1;
  if ( a5 )
    goto LABEL_15;
LABEL_8:
  if ( !a4 )
    goto LABEL_12;
  if ( sub_11CAD0(v11) )
    return 1;
  v12 = a1[3];
  if ( v12 <= 15 )
  {
    while ( 1 )
    {
      v11 = v12 + 1;
      a1[3] = v11;
LABEL_12:
      if ( v11 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 1496) + 112LL) + 88LL) && *((_BYTE *)a1 + 8) != 1
        || sub_11CA80(v11) )
      {
        break;
      }
      v12 = a1[3];
      if ( v12 > 15 )
      {
        v15 = *((_BYTE *)a1 + 8);
        if ( v15 == 5 )
          return 1;
        if ( v15 == 1 )
          return *(_DWORD *)(v10 + 68) <= (int)*a1;
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

