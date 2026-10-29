__int64 __fastcall sub_227740(__int64 a1, unsigned __int64 a2, int a3, double a4)
{
  _QWORD *v4; // r9
  unsigned __int64 v6; // r10
  _QWORD *v7; // r8
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rax
  _BYTE *v10; // r11
  _BYTE *v11; // rbx
  __int64 v13; // rdi
  _QWORD *v14; // r8
  _QWORD *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rdi
  unsigned __int64 v18; // r8
  _QWORD *v19; // rsi
  _QWORD *v20; // rsi
  _QWORD *v21; // rdx
  __int64 v22; // rsi
  _QWORD *v23; // rax
  unsigned __int64 v24; // rdi
  __int64 v25; // rsi
  unsigned __int64 v26; // r11

  if ( a3 <= 0 )
    return 0;
  v4 = *(_QWORD **)a1;
  v6 = a3 + a2;
  v7 = **(_QWORD ***)a1;
  if ( !v7 )
    return 0;
  v8 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v8 )
  {
    v9 = v7;
    if ( (*(_BYTE *)v8 & 2) != 0 )
      goto LABEL_47;
    v10 = *(_BYTE **)(v8 + 8);
    v11 = *(_BYTE **)(v8 + 16);
    if ( *(_QWORD *)(v8 + 24) >= a2 )
      goto LABEL_10;
    while ( 1 )
    {
      v10 = v11;
      if ( (*v11 & 2) != 0 )
        break;
      while ( 1 )
      {
        v8 = (unsigned __int64)v10;
        v10 = *((_BYTE **)v10 + 1);
        v11 = *(_BYTE **)(v8 + 16);
        if ( *(_QWORD *)(v8 + 24) < a2 )
          break;
LABEL_10:
        v9 = (_QWORD *)v8;
        if ( (*v10 & 2) != 0 )
          goto LABEL_11;
      }
    }
LABEL_11:
    if ( v7 == v9 )
    {
LABEL_47:
      v9 = v7;
      if ( !v4[1] )
        return 0;
      goto LABEL_14;
    }
    v13 = (__int64)(v9 + 3);
    if ( v9[3] >= v6 )
    {
LABEL_13:
      if ( !v4[1] )
      {
LABEL_15:
        if ( (*v9 & 2) != 0 )
        {
          v9 = (_QWORD *)v9[2];
        }
        else
        {
          v14 = (_QWORD *)v9[1];
          if ( (*(_BYTE *)v14 & 2) != 0 )
          {
            v15 = (_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFFCLL);
            v16 = *v15;
            if ( (*v15 & 2) == 0 )
            {
              while ( (_QWORD *)v15[1] == v9 )
              {
                v9 = v15;
                v26 = v16 & 0xFFFFFFFFFFFFFFFCLL;
                v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v16 & 2) != 0 )
                {
                  v9 = (_QWORD *)v26;
                  goto LABEL_20;
                }
                v15 = (_QWORD *)v26;
              }
            }
            v9 = v15;
          }
          else
          {
            do
            {
              v9 = v14;
              v14 = (_QWORD *)v14[2];
            }
            while ( (*(_BYTE *)v14 & 2) == 0 );
          }
        }
LABEL_20:
        v13 = (__int64)(v9 + 3);
        if ( a2 < v9[3] + v9[4] )
          goto LABEL_21;
        return 0;
      }
LABEL_14:
      if ( (_QWORD *)v7[1] == v9 )
        return 0;
      goto LABEL_15;
    }
  }
  else
  {
    v9 = nullptr;
    v13 = 24;
    if ( !v6 )
      goto LABEL_13;
  }
LABEL_21:
  v17 = *(_QWORD *)(v13 + 8);
  if ( !v17 || (v18 = v9[3], v17 + v18 - 1 < a2) || a2 + a3 - 1 < v18 )
  {
    if ( !under_debugger )
      sub_383060(0xCBACu, a4);
    BUG();
  }
  *(_QWORD *)(a1 + 16) = v9;
  *(_QWORD *)(a1 + 8) = v9;
  if ( (*v9 & 2) == 0 )
  {
    v19 = (_QWORD *)v9[2];
    if ( (*(_BYTE *)v19 & 2) != 0 )
    {
      v21 = (_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFFCLL);
      v25 = *v21;
      if ( (*v21 & 2) == 0 )
      {
        while ( (_QWORD *)v21[2] == v9 )
        {
          v9 = v21;
          v24 = v25 & 0xFFFFFFFFFFFFFFFCLL;
          v25 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v25 & 2) != 0 )
            goto LABEL_45;
          v21 = (_QWORD *)v24;
        }
      }
      goto LABEL_37;
    }
    while ( (*(_BYTE *)v19[1] & 2) == 0 )
      v19 = (_QWORD *)v19[1];
    v9 = v19;
  }
  while ( 1 )
  {
    *(_QWORD *)(a1 + 16) = v9;
    if ( (_QWORD *)*v4 == v9 || v9[3] >= v6 )
      return 1;
    if ( (*v9 & 2) == 0 )
    {
      v20 = (_QWORD *)v9[2];
      if ( (*(_BYTE *)v20 & 2) != 0 )
      {
        v21 = (_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFFCLL);
        v22 = *v21;
        if ( (*v21 & 2) != 0 || v9 != (_QWORD *)v21[2] )
        {
LABEL_37:
          v9 = v21;
        }
        else
        {
          while ( 1 )
          {
            v23 = v21;
            v24 = v22 & 0xFFFFFFFFFFFFFFFCLL;
            v22 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v22 & 2) != 0 )
              break;
            v21 = (_QWORD *)v24;
            if ( v23 != *(_QWORD **)(v24 + 16) )
              goto LABEL_37;
          }
LABEL_45:
          v9 = (_QWORD *)v24;
        }
      }
      else
      {
        do
        {
          v9 = v20;
          v20 = (_QWORD *)v20[1];
        }
        while ( (*(_BYTE *)v20 & 2) == 0 );
      }
    }
  }
}

