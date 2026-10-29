__int64 __fastcall sub_84980(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        _BYTE *a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v8; // rcx
  unsigned __int8 v9; // di
  unsigned __int8 v10; // r10
  __int64 v11; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // r9
  __int64 v16; // r11
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // r9
  __int64 v21; // r11
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r10
  unsigned __int8 v24; // al
  unsigned __int8 v25; // di
  unsigned __int8 v26; // cl
  _QWORD *v27; // r11
  unsigned __int8 v28; // cl
  _QWORD *v29; // r11

  if ( !a3 )
    return 0;
  *a4 = *a1;
  *a5 = 1;
  *a6 = 0;
  v8 = *a1;
  if ( !a1[1] )
  {
    *a4 = v8;
    return 1;
  }
  if ( a3 == v8 )
  {
    v13 = *(_QWORD *)(a3 + 16);
    if ( (*(_BYTE *)v13 & 2) != 0 )
    {
      *a4 = a3;
      return 1;
    }
    v24 = *(_BYTE *)(v13 + 32);
    v25 = *(_BYTE *)(a2 + 8);
    if ( v24 >= v25 )
    {
      if ( v25 < v24 )
        return 0;
      if ( *(_QWORD *)(v13 + 24) >= *(_QWORD *)a2 )
      {
        if ( *(_QWORD *)(v13 + 24) <= *(_QWORD *)a2 )
        {
          *a6 = v13;
          return 1;
        }
        return 0;
      }
    }
    *a4 = v13;
    *a5 = 0;
    return 1;
  }
  v9 = *(_BYTE *)(a2 + 8);
  v10 = *(_BYTE *)(a3 + 32);
  if ( v10 < v9 )
    goto LABEL_23;
  if ( v9 < v10 )
    goto LABEL_14;
  v11 = *(_QWORD *)(a3 + 24);
  if ( *(_QWORD *)a2 > v11 )
  {
LABEL_23:
    if ( (*(_QWORD *)a3 & 2) != 0 )
    {
      v23 = a3;
    }
    else
    {
      v19 = *(_QWORD *)(a3 + 16);
      if ( (*(_BYTE *)v19 & 2) != 0 )
      {
        v20 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
        v21 = *(_QWORD *)v20;
        if ( (*(_QWORD *)v20 & 2) != 0 )
        {
          if ( v20 == v8 )
            goto LABEL_31;
          v26 = *(_BYTE *)(v20 + 32);
          v27 = (_QWORD *)(v20 + 24);
          v23 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
          if ( v9 < v26 )
            goto LABEL_31;
          goto LABEL_37;
        }
        if ( *(_QWORD *)(v20 + 16) == a3 )
        {
          while ( 1 )
          {
            v22 = v20;
            v23 = v21 & 0xFFFFFFFFFFFFFFFCLL;
            v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v21 & 2) != 0 )
              break;
            v20 = v23;
            if ( *(_QWORD *)(v23 + 16) != v22 )
              goto LABEL_29;
          }
        }
        else
        {
LABEL_29:
          v23 = v20;
        }
        if ( v23 == v8 )
          goto LABEL_31;
      }
      else
      {
        do
        {
          v23 = v19;
          v19 = *(_QWORD *)(v19 + 8);
        }
        while ( (*(_BYTE *)v19 & 2) == 0 );
        if ( v23 == v8 )
          return 0;
      }
    }
    v26 = *(_BYTE *)(v23 + 32);
    v27 = (_QWORD *)(v23 + 24);
    if ( v9 < v26 )
    {
LABEL_39:
      if ( (**(_BYTE **)(a3 + 16) & 2) == 0 )
      {
        if ( (**(_BYTE **)(v23 + 8) & 2) != 0 )
        {
          *a4 = v23;
          *a5 = 1;
          return 1;
        }
        return 0;
      }
LABEL_31:
      *a4 = a3;
      *a5 = 0;
      return 1;
    }
LABEL_37:
    if ( v26 < v9 || *(_QWORD *)a2 >= *v27 )
      return 0;
    goto LABEL_39;
  }
  if ( *(_QWORD *)a2 >= v11 )
  {
    *a6 = a3;
    return 1;
  }
LABEL_14:
  if ( (*(_QWORD *)a3 & 2) != 0 )
  {
    v18 = a3;
  }
  else
  {
    v14 = *(_QWORD *)(a3 + 8);
    if ( (*(_BYTE *)v14 & 2) != 0 )
    {
      v15 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
      v16 = *(_QWORD *)v15;
      if ( (*(_QWORD *)v15 & 2) != 0 )
      {
        if ( v15 == v8 )
          goto LABEL_22;
        v28 = *(_BYTE *)(v15 + 32);
        v29 = (_QWORD *)(v15 + 24);
        v18 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v28 < v9 )
          goto LABEL_22;
        goto LABEL_44;
      }
      if ( *(_QWORD *)(v15 + 8) == a3 )
      {
        while ( 1 )
        {
          v17 = v15;
          v18 = v16 & 0xFFFFFFFFFFFFFFFCLL;
          v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v16 & 2) != 0 )
            break;
          v15 = v18;
          if ( *(_QWORD *)(v18 + 8) != v17 )
            goto LABEL_20;
        }
      }
      else
      {
LABEL_20:
        v18 = v15;
      }
      if ( v18 == v8 )
        goto LABEL_22;
    }
    else
    {
      do
      {
        v18 = v14;
        v14 = *(_QWORD *)(v14 + 16);
      }
      while ( (*(_BYTE *)v14 & 2) == 0 );
      if ( v18 == v8 )
        return 0;
    }
  }
  v28 = *(_BYTE *)(v18 + 32);
  v29 = (_QWORD *)(v18 + 24);
  if ( v28 < v9 )
    goto LABEL_51;
LABEL_44:
  if ( v9 >= v28 && *v29 < *(_QWORD *)a2 )
  {
LABEL_51:
    if ( (**(_BYTE **)(a3 + 8) & 2) == 0 )
    {
      if ( (**(_BYTE **)(v18 + 16) & 2) != 0 )
      {
        *a4 = v18;
        *a5 = 0;
        return 1;
      }
      return 0;
    }
LABEL_22:
    *a4 = a3;
    *a5 = 1;
    return 1;
  }
  return 0;
}

