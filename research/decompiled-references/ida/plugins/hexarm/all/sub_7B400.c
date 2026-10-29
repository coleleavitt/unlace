__int64 __fastcall sub_7B400(__int64 a1)
{
  __int64 v2; // rbp
  _QWORD *v3; // rdi
  __int64 result; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi

  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)v2 & 2) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
        goto LABEL_15;
      goto LABEL_9;
    }
    v3 = *(_QWORD **)(v2 + 8);
    if ( (*(_BYTE *)v3 & 2) != 0 )
    {
      v5 = *(_QWORD **)(v2 + 16);
      if ( (*(_BYTE *)v5 & 2) != 0 )
      {
LABEL_28:
        result = clear_tinfo_t();
        if ( *(_QWORD *)(v2 + 24) )
        {
          *(_QWORD *)(v2 + 32) = 0;
          result = qfree();
        }
        *(_QWORD *)v2 |= 2uLL;
LABEL_6:
        if ( v2 )
          result = qfree();
        v6 = *(_QWORD *)(a1 + 16);
        if ( (*(_BYTE *)v6 & 2) != 0 )
        {
LABEL_14:
          if ( (*(_BYTE *)a1 & 2) != 0 )
          {
LABEL_18:
            if ( a1 )
              return qfree();
            return result;
          }
LABEL_15:
          result = clear_tinfo_t();
          if ( *(_QWORD *)(a1 + 24) )
          {
            *(_QWORD *)(a1 + 32) = 0;
            result = qfree();
          }
          *(_QWORD *)a1 |= 2uLL;
          goto LABEL_18;
        }
LABEL_9:
        v7 = *(_QWORD **)(v6 + 8);
        if ( (*(_BYTE *)v7 & 2) != 0 )
        {
          v8 = *(_QWORD **)(v6 + 16);
          if ( (*(_BYTE *)v8 & 2) != 0 )
            goto LABEL_31;
        }
        else
        {
          result = sub_7B2C0(v7);
          v8 = *(_QWORD **)(v6 + 16);
          if ( (*(_BYTE *)v8 & 2) != 0 )
            goto LABEL_11;
        }
        result = sub_7B2C0(v8);
LABEL_11:
        if ( (*(_BYTE *)v6 & 2) != 0 )
        {
LABEL_12:
          if ( v6 )
            result = qfree();
          goto LABEL_14;
        }
LABEL_31:
        result = clear_tinfo_t();
        if ( *(_QWORD *)(v6 + 24) )
        {
          *(_QWORD *)(v6 + 32) = 0;
          result = qfree();
        }
        *(_QWORD *)v6 |= 2uLL;
        goto LABEL_12;
      }
    }
    else
    {
      result = sub_7B2C0(v3);
      v5 = *(_QWORD **)(v2 + 16);
      if ( (*(_BYTE *)v5 & 2) != 0 )
        goto LABEL_5;
    }
    result = sub_7B2C0(v5);
LABEL_5:
    if ( (*(_BYTE *)v2 & 2) != 0 )
      goto LABEL_6;
    goto LABEL_28;
  }
  return result;
}

