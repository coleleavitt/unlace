__int64 __fastcall sub_DEE0(__int64 a1)
{
  __int16 v1; // ax
  char v2; // dl
  unsigned __int16 v4; // dx
  char v5; // dl
  __int64 v6; // rax
  char v7; // al
  char v8; // al

  v1 = *(_WORD *)(a1 + 40);
  if ( v1 == 85 || v1 == 80 )
  {
    if ( *(_BYTE *)(a1 + 97) == 1 && *(_BYTE *)(a1 + 57) == 1 )
    {
      v4 = *(_WORD *)(a1 + 102);
      if ( *(_WORD *)(a1 + 62) == v4 && (unsigned int)(((int)v4 >> 3) - 1) <= 1 )
        return set_moved_jpt();
    }
    return 0;
  }
  if ( v1 != 54 )
  {
    if ( v1 != 46 )
      return 0;
    if ( *(_BYTE *)(a1 + 101) != 1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 == 1 )
      {
        v8 = *(_BYTE *)(a1 + 97);
        if ( v8 == 1 )
        {
          if ( *(_WORD *)(a1 + 102) > 0x27u )
            return 0;
        }
        else
        {
          if ( v8 != 4 )
          {
            if ( v8 == 3 )
            {
              if ( *(_BYTE *)(a1 + 128) )
                return 0;
              return set_moved_jpt();
            }
            if ( v8 != 2 )
              return 0;
          }
          if ( *(_BYTE *)(a1 + 128) > 1u )
            return 0;
        }
        return set_moved_jpt();
      }
      if ( v6 != 2 )
        return 0;
    }
    v7 = *(_BYTE *)(a1 + 97);
    if ( v7 == 1 )
    {
      if ( *(_WORD *)(a1 + 102) > 0x27u )
        return 0;
    }
    else
    {
      if ( v7 != 4 )
      {
        if ( v7 == 3 )
        {
          if ( *(_BYTE *)(a1 + 128) )
            return 0;
          return set_moved_jpt();
        }
        if ( v7 != 2 )
          return 0;
      }
      if ( *(_BYTE *)(a1 + 128) > 1u )
        return 0;
    }
    return set_moved_jpt();
  }
  if ( *(_BYTE *)(a1 + 97) != 1
    || *(_BYTE *)(a1 + 57) != 5
    || *(_QWORD *)(a1 + 64)
    || (unsigned int)(((int)*(unsigned __int16 *)(a1 + 102) >> 3) - 1) > 1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 96);
    v2 = *(_BYTE *)(a1 + 97);
    switch ( v2 )
    {
      case 1:
        if ( *(_WORD *)(a1 + 102) > 0x27u )
          return 0;
        goto LABEL_17;
      case 4:
        goto LABEL_9;
      case 3:
        if ( *(_BYTE *)(a1 + 128) )
          return 0;
        goto LABEL_17;
      case 2:
LABEL_9:
        if ( *(_BYTE *)(a1 + 128) > 1u )
          return 0;
LABEL_17:
        v5 = *(_BYTE *)(a1 + 57);
        if ( v5 == 1 )
        {
          if ( *(_WORD *)(a1 + 62) > 0x27u )
            return 0;
        }
        else
        {
          if ( v5 != 4 )
          {
            if ( v5 == 3 )
            {
              if ( *(_BYTE *)(a1 + 88) )
                return 0;
              return set_moved_jpt();
            }
            if ( v5 != 2 )
              return 0;
          }
          if ( *(_BYTE *)(a1 + 88) > 1u )
            return 0;
        }
        return set_moved_jpt();
    }
    return 0;
  }
  return set_moved_jpt();
}

