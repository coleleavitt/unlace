__int64 __fastcall sub_222B40(__int64 a1, unsigned __int64 a2, int a3)
{
  _QWORD *v3; // r9
  unsigned __int64 v5; // r10
  _QWORD *v6; // r8
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax
  _BYTE *v9; // r11
  _BYTE *v10; // rbx
  __int64 v12; // rdi
  _QWORD *v13; // r8
  _QWORD *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdi
  unsigned __int64 v17; // r8
  _QWORD *v18; // rsi
  _QWORD *v19; // rsi
  _QWORD *v20; // rdx
  __int64 v21; // rsi
  _QWORD *v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned __int64 v25; // r11

  if ( a3 <= 0 )
    return 0;
  v3 = *(_QWORD **)a1;
  v5 = a3 + a2;
  v6 = **(_QWORD ***)a1;
  if ( !v6 )
    return 0;
  v7 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v7 )
  {
    v8 = v6;
    if ( (*(_BYTE *)v7 & 2) != 0 )
      goto LABEL_47;
    v9 = *(_BYTE **)(v7 + 8);
    v10 = *(_BYTE **)(v7 + 16);
    if ( *(_QWORD *)(v7 + 24) >= a2 )
      goto LABEL_10;
    while ( 1 )
    {
      v9 = v10;
      if ( (*v10 & 2) != 0 )
        break;
      while ( 1 )
      {
        v7 = (unsigned __int64)v9;
        v9 = *((_BYTE **)v9 + 1);
        v10 = *(_BYTE **)(v7 + 16);
        if ( *(_QWORD *)(v7 + 24) < a2 )
          break;
LABEL_10:
        v8 = (_QWORD *)v7;
        if ( (*v9 & 2) != 0 )
          goto LABEL_11;
      }
    }
LABEL_11:
    if ( v6 == v8 )
    {
LABEL_47:
      v8 = v6;
      if ( !v3[1] )
        return 0;
      goto LABEL_14;
    }
    v12 = (__int64)(v8 + 3);
    if ( v8[3] >= v5 )
    {
LABEL_13:
      if ( !v3[1] )
      {
LABEL_15:
        if ( (*v8 & 2) != 0 )
        {
          v8 = (_QWORD *)v8[2];
        }
        else
        {
          v13 = (_QWORD *)v8[1];
          if ( (*(_BYTE *)v13 & 2) != 0 )
          {
            v14 = (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFFCLL);
            v15 = *v14;
            if ( (*v14 & 2) == 0 )
            {
              while ( (_QWORD *)v14[1] == v8 )
              {
                v8 = v14;
                v25 = v15 & 0xFFFFFFFFFFFFFFFCLL;
                v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v15 & 2) != 0 )
                {
                  v8 = (_QWORD *)v25;
                  goto LABEL_20;
                }
                v14 = (_QWORD *)v25;
              }
            }
            v8 = v14;
          }
          else
          {
            do
            {
              v8 = v13;
              v13 = (_QWORD *)v13[2];
            }
            while ( (*(_BYTE *)v13 & 2) == 0 );
          }
        }
LABEL_20:
        v12 = (__int64)(v8 + 3);
        if ( a2 < v8[3] + v8[4] )
          goto LABEL_21;
        return 0;
      }
LABEL_14:
      if ( (_QWORD *)v6[1] == v8 )
        return 0;
      goto LABEL_15;
    }
  }
  else
  {
    v8 = nullptr;
    v12 = 24;
    if ( !v5 )
      goto LABEL_13;
  }
LABEL_21:
  v16 = *(_QWORD *)(v12 + 8);
  if ( !v16 || (v17 = v8[3], v16 + v17 - 1 < a2) || a2 + a3 - 1 < v17 )
  {
    if ( !under_debugger )
      sub_37DDE0(52140);
    BUG();
  }
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)(a1 + 8) = v8;
  if ( (*v8 & 2) == 0 )
  {
    v18 = (_QWORD *)v8[2];
    if ( (*(_BYTE *)v18 & 2) != 0 )
    {
      v20 = (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFFCLL);
      v24 = *v20;
      if ( (*v20 & 2) == 0 )
      {
        while ( (_QWORD *)v20[2] == v8 )
        {
          v8 = v20;
          v23 = v24 & 0xFFFFFFFFFFFFFFFCLL;
          v24 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v24 & 2) != 0 )
            goto LABEL_45;
          v20 = (_QWORD *)v23;
        }
      }
      goto LABEL_37;
    }
    while ( (*(_BYTE *)v18[1] & 2) == 0 )
      v18 = (_QWORD *)v18[1];
    v8 = v18;
  }
  while ( 1 )
  {
    *(_QWORD *)(a1 + 16) = v8;
    if ( (_QWORD *)*v3 == v8 || v8[3] >= v5 )
      return 1;
    if ( (*v8 & 2) == 0 )
    {
      v19 = (_QWORD *)v8[2];
      if ( (*(_BYTE *)v19 & 2) != 0 )
      {
        v20 = (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFFCLL);
        v21 = *v20;
        if ( (*v20 & 2) != 0 || v8 != (_QWORD *)v20[2] )
        {
LABEL_37:
          v8 = v20;
        }
        else
        {
          while ( 1 )
          {
            v22 = v20;
            v23 = v21 & 0xFFFFFFFFFFFFFFFCLL;
            v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v21 & 2) != 0 )
              break;
            v20 = (_QWORD *)v23;
            if ( v22 != *(_QWORD **)(v23 + 16) )
              goto LABEL_37;
          }
LABEL_45:
          v8 = (_QWORD *)v23;
        }
      }
      else
      {
        do
        {
          v8 = v19;
          v19 = (_QWORD *)v19[1];
        }
        while ( (*(_BYTE *)v19 & 2) == 0 );
      }
    }
  }
}

