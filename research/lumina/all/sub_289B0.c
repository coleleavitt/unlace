void __fastcall sub_289B0(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  unsigned __int64 v4; // rax
  __int64 v5; // r12
  size_t v6; // r13
  __int64 v7; // rbp
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax

  sub_28840(a1, a2, " OR ", 4u);
  if ( a2[1] > 1u )
  {
    v2 = a1[1];
    v3 = *a1;
    v4 = a1[2];
    if ( v2 )
    {
      v5 = v2 + 1;
      v6 = v2 - 1;
      if ( v4 >= v2 + 1 )
      {
        a1[1] = v5;
        *(_BYTE *)(v3 + v2) = 0;
        if ( v2 == 1 )
          goto LABEL_5;
        goto LABEL_12;
      }
    }
    else
    {
      if ( v4 > 1 )
      {
        a1[1] = 2;
        *(_BYTE *)(v3 + 1) = 0;
        *(_BYTE *)*a1 = 40;
        v7 = a1[1];
        if ( v7 )
        {
LABEL_6:
          v8 = v7 + 1;
          v9 = v7;
          v10 = *a1;
          --v7;
          if ( a1[2] >= v8 )
          {
LABEL_7:
            a1[1] = v8;
            *(_BYTE *)(v10 + v7) = 41;
            *(_BYTE *)(*a1 + v9) = 0;
            return;
          }
LABEL_11:
          v11 = sub_1987B0(a1, v10, v8, 1);
          *a1 = v11;
          v10 = v11;
          goto LABEL_7;
        }
LABEL_10:
        v10 = *a1;
        v9 = 1;
        v8 = 2;
        if ( (unsigned __int64)a1[2] >= 2 )
          goto LABEL_7;
        goto LABEL_11;
      }
      v6 = 0;
      v2 = 1;
      v5 = 2;
    }
    v12 = sub_1987B0(a1, v3, v5, 1);
    a1[1] = v5;
    *a1 = v12;
    *(_BYTE *)(v12 + v2) = 0;
    if ( !v6 )
    {
LABEL_5:
      *(_BYTE *)*a1 = 40;
      v7 = a1[1];
      if ( v7 )
        goto LABEL_6;
      goto LABEL_10;
    }
LABEL_12:
    memmove((void *)(*a1 + 1), (const void *)*a1, v6);
    goto LABEL_5;
  }
}
