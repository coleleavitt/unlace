void __fastcall sub_366660(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // rbp
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  __int64 v8; // r12
  void *v9; // rdi
  __int64 v10; // r12
  void *v11; // rdi

  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    v1 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)v1 & 2) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 16);
      if ( (*(_BYTE *)v5 & 2) != 0 )
      {
LABEL_15:
        clear_tinfo_t();
        sub_365B50(*(_QWORD **)(a1 + 48));
        *(_QWORD *)a1 |= 2uLL;
LABEL_16:
        if ( a1 )
          qfree();
        return;
      }
      goto LABEL_9;
    }
    v3 = *(_QWORD **)(v1 + 8);
    if ( (*(_BYTE *)v3 & 2) != 0 )
    {
      v4 = *(_QWORD **)(v1 + 16);
      if ( (*(_BYTE *)v4 & 2) != 0 )
      {
LABEL_26:
        clear_tinfo_t();
        v8 = *(_QWORD *)(v1 + 48);
        while ( v8 )
        {
          sub_365B50(*(_QWORD **)(v8 + 24));
          v9 = (void *)v8;
          v8 = *(_QWORD *)(v8 + 16);
          operator delete(v9, 0x28u);
        }
        *(_QWORD *)v1 |= 2uLL;
LABEL_6:
        if ( v1 )
          qfree();
        v5 = *(_QWORD *)(a1 + 16);
        if ( (*(_BYTE *)v5 & 2) != 0 )
        {
LABEL_14:
          if ( (*(_BYTE *)a1 & 2) != 0 )
            goto LABEL_16;
          goto LABEL_15;
        }
LABEL_9:
        v6 = *(_QWORD **)(v5 + 8);
        if ( (*(_BYTE *)v6 & 2) != 0 )
        {
          v7 = *(_QWORD **)(v5 + 16);
          if ( (*(_BYTE *)v7 & 2) != 0 )
            goto LABEL_29;
        }
        else
        {
          sub_366530(v6);
          v7 = *(_QWORD **)(v5 + 16);
          if ( (*(_BYTE *)v7 & 2) != 0 )
            goto LABEL_11;
        }
        sub_366530(v7);
LABEL_11:
        if ( (*(_BYTE *)v5 & 2) != 0 )
        {
LABEL_12:
          if ( v5 )
            qfree();
          goto LABEL_14;
        }
LABEL_29:
        clear_tinfo_t();
        v10 = *(_QWORD *)(v5 + 48);
        while ( v10 )
        {
          sub_365B50(*(_QWORD **)(v10 + 24));
          v11 = (void *)v10;
          v10 = *(_QWORD *)(v10 + 16);
          operator delete(v11, 0x28u);
        }
        *(_QWORD *)v5 |= 2uLL;
        goto LABEL_12;
      }
    }
    else
    {
      sub_366530(v3);
      v4 = *(_QWORD **)(v1 + 16);
      if ( (*(_BYTE *)v4 & 2) != 0 )
        goto LABEL_5;
    }
    sub_366530(v4);
LABEL_5:
    if ( (*(_BYTE *)v1 & 2) != 0 )
      goto LABEL_6;
    goto LABEL_26;
  }
}

