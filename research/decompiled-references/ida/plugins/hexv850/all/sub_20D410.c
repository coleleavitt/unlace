__int64 __fastcall sub_20D410(__int64 a1)
{
  __int64 v2; // rbp
  __int64 *v3; // rdi
  __int64 result; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbp
  __int64 *v7; // rdi
  __int64 *v8; // rdi

  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)v2 & 2) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
      {
        if ( !*(_QWORD *)(a1 + 24) )
          goto LABEL_17;
        goto LABEL_16;
      }
      goto LABEL_9;
    }
    v3 = *(__int64 **)(v2 + 8);
    if ( (*(_BYTE *)v3 & 2) != 0 )
    {
      v5 = *(__int64 **)(v2 + 16);
      if ( (*(_BYTE *)v5 & 2) != 0 )
      {
LABEL_29:
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
            goto LABEL_18;
          if ( !*(_QWORD *)(a1 + 24) )
          {
LABEL_17:
            *(_QWORD *)a1 |= 2uLL;
LABEL_18:
            if ( a1 )
              return qfree();
            return result;
          }
LABEL_16:
          *(_QWORD *)(a1 + 32) = 0;
          result = qfree();
          goto LABEL_17;
        }
LABEL_9:
        v7 = *(__int64 **)(v6 + 8);
        if ( (*(_BYTE *)v7 & 2) != 0 )
        {
          v8 = *(__int64 **)(v6 + 16);
          if ( (*(_BYTE *)v8 & 2) != 0 )
            goto LABEL_32;
        }
        else
        {
          result = sub_20D2E0(v7);
          v8 = *(__int64 **)(v6 + 16);
          if ( (*(_BYTE *)v8 & 2) != 0 )
            goto LABEL_11;
        }
        result = sub_20D2E0(v8);
LABEL_11:
        if ( (*(_BYTE *)v6 & 2) != 0 )
        {
LABEL_12:
          if ( v6 )
            result = qfree();
          goto LABEL_14;
        }
LABEL_32:
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
      result = sub_20D2E0(v3);
      v5 = *(__int64 **)(v2 + 16);
      if ( (*(_BYTE *)v5 & 2) != 0 )
        goto LABEL_5;
    }
    result = sub_20D2E0(v5);
LABEL_5:
    if ( (*(_BYTE *)v2 & 2) != 0 )
      goto LABEL_6;
    goto LABEL_29;
  }
  return result;
}

