__int64 __fastcall sub_11C750(int *a1, __int64 a2, char a3)
{
  int v3; // r12d
  int v4; // ebp
  char v5; // al
  int *v7; // r13
  __int64 v8; // rbp
  __int64 func; // rax
  __int64 v10; // rax

  if ( *((_BYTE *)a1 + 64) != 8 )
    goto LABEL_2;
  v8 = *((_QWORD *)a1 + 9);
  if ( (*(_BYTE *)(v8 + 280) & 8) != 0 )
    return 1;
  if ( *(_QWORD *)v8 == -1 )
  {
LABEL_2:
    v3 = a3 & 1;
    if ( (a3 & 1) != 0 || *((char *)a1 + 5) >= 0 )
    {
      v4 = *a1;
      if ( *a1 == 57 )
      {
        v7 = a1 + 12;
        if ( *((_BYTE *)a1 + 48) != 6 )
          goto LABEL_7;
      }
      else
      {
        v5 = *((_BYTE *)a1 + 32);
        if ( v5 != 6 )
          goto LABEL_6;
        v7 = a1 + 8;
      }
      if ( (a3 & 2) != 0 )
      {
        func = get_func();
        if ( func )
        {
          if ( (*(_BYTE *)(func + 17) & 2) != 0 )
            return 0;
        }
      }
      if ( (unsigned __int8)func_does_return() )
      {
        if ( v4 != 57 )
        {
          v5 = *(_BYTE *)v7;
          if ( *(_BYTE *)v7 == 6 )
            return 0;
LABEL_6:
          if ( v5 == 11 )
            return 0;
        }
LABEL_7:
        if ( !sub_11C5C0(*(_QWORD *)(a2 + 96), *((_QWORD *)a1 + 3), 0) )
          return 0;
        if ( !v3 )
          a1[1] |= 0x8000u;
      }
    }
    return 1;
  }
  if ( (a3 & 2) != 0 )
  {
    v10 = get_func();
    if ( v10 )
    {
      if ( (*(_BYTE *)(v10 + 17) & 2) != 0 )
        return 0;
    }
  }
  return (unsigned int)func_does_return() ^ 1;
}

