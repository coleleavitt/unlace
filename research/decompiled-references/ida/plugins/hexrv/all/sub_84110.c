__int64 __fastcall sub_84110(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        _QWORD *a3,
        unsigned __int64 *a4,
        _BYTE *a5,
        unsigned __int64 *a6)
{
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  _QWORD *v13; // r9
  __int64 v14; // r10
  _QWORD *v15; // r11
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  _QWORD *v18; // r9
  __int64 v19; // r10
  _QWORD *v20; // r11
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 j; // r9
  unsigned __int64 i; // r9

  if ( !a3 )
    return 0;
  *a4 = *a1;
  *a5 = 1;
  *a6 = 0;
  v8 = (_QWORD *)*a1;
  if ( !a1[1] )
  {
    *a4 = (unsigned __int64)v8;
    return 1;
  }
  if ( a3 == v8 )
  {
    v16 = a3[2];
    if ( (*(_BYTE *)v16 & 2) != 0 )
    {
      *a4 = (unsigned __int64)a3;
      return 1;
    }
    v21 = *(_QWORD *)(v16 + 24);
    v22 = *a2;
    if ( v21 < v22 )
    {
      *a4 = v16;
      *a5 = 0;
      return 1;
    }
    if ( v22 == v21 )
    {
      *a6 = v16;
      return 1;
    }
    return 0;
  }
  v9 = a3[3];
  v10 = *a2;
  if ( v9 < v10 )
  {
    if ( (*a3 & 2) != 0 )
    {
      v11 = (unsigned __int64)a3;
    }
    else
    {
      v11 = a3[2];
      if ( (*(_BYTE *)v11 & 2) != 0 )
      {
        v13 = (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFCLL);
        v14 = *v13;
        if ( (*v13 & 2) != 0 )
        {
          if ( v8 != v13 && v10 >= v13[3] )
            return 0;
          goto LABEL_20;
        }
        if ( (_QWORD *)v13[2] == a3 )
        {
          while ( 1 )
          {
            v15 = v13;
            v11 = v14 & 0xFFFFFFFFFFFFFFFCLL;
            v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v14 & 2) != 0 )
              break;
            v13 = (_QWORD *)v11;
            if ( *(_QWORD **)(v11 + 16) != v15 )
              goto LABEL_18;
          }
        }
        else
        {
LABEL_18:
          v11 = (unsigned __int64)v13;
        }
        if ( v8 == (_QWORD *)v11 )
          goto LABEL_20;
      }
      else
      {
        for ( i = *(_QWORD *)(v11 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
          v11 = i;
        if ( v8 == (_QWORD *)v11 )
          return 0;
      }
    }
    if ( v10 >= *(_QWORD *)(v11 + 24) )
      return 0;
    if ( (*(_BYTE *)a3[2] & 2) == 0 )
    {
      if ( (**(_BYTE **)(v11 + 8) & 2) != 0 )
      {
        *a4 = v11;
        *a5 = 1;
        return 1;
      }
      return 0;
    }
LABEL_20:
    *a4 = (unsigned __int64)a3;
    *a5 = 0;
    return 1;
  }
  if ( v10 != v9 )
  {
    if ( (*a3 & 2) != 0 )
    {
      v17 = (unsigned __int64)a3;
    }
    else
    {
      v17 = a3[1];
      if ( (*(_BYTE *)v17 & 2) != 0 )
      {
        v18 = (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFCLL);
        v19 = *v18;
        if ( (*v18 & 2) != 0 )
        {
          if ( v8 != v18 && v18[3] >= v10 )
            return 0;
          goto LABEL_31;
        }
        if ( (_QWORD *)v18[1] == a3 )
        {
          while ( 1 )
          {
            v20 = v18;
            v17 = v19 & 0xFFFFFFFFFFFFFFFCLL;
            v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v19 & 2) != 0 )
              break;
            v18 = (_QWORD *)v17;
            if ( *(_QWORD **)(v17 + 8) != v20 )
              goto LABEL_29;
          }
        }
        else
        {
LABEL_29:
          v17 = (unsigned __int64)v18;
        }
        if ( (_QWORD *)v17 == v8 )
          goto LABEL_31;
      }
      else
      {
        for ( j = *(_QWORD *)(v17 + 16); (*(_BYTE *)j & 2) == 0; j = *(_QWORD *)(j + 16) )
          v17 = j;
        if ( v8 == (_QWORD *)v17 )
          return 0;
      }
    }
    if ( *(_QWORD *)(v17 + 24) >= v10 )
      return 0;
    if ( (*(_BYTE *)a3[1] & 2) == 0 )
    {
      if ( (**(_BYTE **)(v17 + 16) & 2) != 0 )
      {
        *a4 = v17;
        *a5 = 0;
        return 1;
      }
      return 0;
    }
LABEL_31:
    *a4 = (unsigned __int64)a3;
    *a5 = 1;
    return 1;
  }
  *a6 = (unsigned __int64)a3;
  return 1;
}

