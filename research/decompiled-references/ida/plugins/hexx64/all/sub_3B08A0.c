void __fastcall sub_3B08A0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  __int64 v7; // rbp
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi

  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    v4 = a1[1];
    if ( (*(_BYTE *)v4 & 2) != 0 )
    {
      v7 = a1[2];
      if ( (*(_BYTE *)v7 & 2) != 0 )
      {
LABEL_15:
        sub_3ACAB0((__int64)(a1 + 4), a3);
        *a1 |= 2uLL;
LABEL_16:
        if ( a1 )
          qfree((__int64)a1);
        return;
      }
      goto LABEL_9;
    }
    v5 = *(_QWORD **)(v4 + 8);
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v6 = *(_QWORD **)(v4 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
      {
LABEL_26:
        sub_3ACAB0(v4 + 32, a3);
        *(_QWORD *)v4 |= 2uLL;
LABEL_6:
        if ( v4 )
          qfree(v4);
        v7 = a1[2];
        if ( (*(_BYTE *)v7 & 2) != 0 )
        {
LABEL_14:
          if ( (*(_BYTE *)a1 & 2) != 0 )
            goto LABEL_16;
          goto LABEL_15;
        }
LABEL_9:
        v8 = *(_QWORD **)(v7 + 8);
        if ( (*(_BYTE *)v8 & 2) != 0 )
        {
          v9 = *(_QWORD **)(v7 + 16);
          if ( (*(_BYTE *)v9 & 2) != 0 )
          {
LABEL_27:
            sub_3ACAB0(v7 + 32, a3);
            *(_QWORD *)v7 |= 2uLL;
LABEL_12:
            if ( v7 )
              qfree(v7);
            goto LABEL_14;
          }
        }
        else
        {
          sub_3B0790(v8, a2, a3);
          v9 = *(_QWORD **)(v7 + 16);
          if ( (*(_BYTE *)v9 & 2) != 0 )
            goto LABEL_11;
        }
        sub_3B0790(v9, a2, a3);
LABEL_11:
        if ( (*(_BYTE *)v7 & 2) != 0 )
          goto LABEL_12;
        goto LABEL_27;
      }
    }
    else
    {
      sub_3B0790(v5, a2, a3);
      v6 = *(_QWORD **)(v4 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
        goto LABEL_5;
    }
    sub_3B0790(v6, a2, a3);
LABEL_5:
    if ( (*(_BYTE *)v4 & 2) != 0 )
      goto LABEL_6;
    goto LABEL_26;
  }
}

