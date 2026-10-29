signed __int64 __fastcall sub_FF1E0(unsigned __int64 *a1, __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // r9
  unsigned __int8 v7; // cl
  signed __int64 result; // rax
  signed __int64 *v9; // rdx

  v2 = *a1;
  v3 = a2[1];
  if ( *a1 >= v3 )
  {
    if ( !under_debugger )
      sub_37CFE0(50130);
LABEL_16:
    BUG();
  }
  v4 = *a2;
  v5 = 16 * v2;
  v6 = v4 + 16 * v2;
  v7 = *(_BYTE *)(v6 + 8);
  if ( v7 != 5 && !a1[1] )
  {
    if ( !under_debugger )
      sub_37CFE0(50131);
    goto LABEL_16;
  }
  result = v2 + 1;
  if ( result < v3 )
  {
    v9 = (signed __int64 *)(v4 + v5 + 16);
    result = *(unsigned __int8 *)(v4 + v5 + 24);
    if ( v7 >= (unsigned __int8)result )
    {
      if ( (unsigned __int8)result < v7 || (result = *(_QWORD *)v6 + *((int *)a1 + 2), result >= *v9) && result > *v9 )
      {
        if ( !under_debugger )
          sub_37CFE0(50132);
        goto LABEL_16;
      }
    }
  }
  return result;
}

