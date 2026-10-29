signed __int64 __fastcall sub_103DA0(unsigned __int64 *a1, __int64 *a2, double a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 v7; // r9
  unsigned __int8 v8; // cl
  signed __int64 result; // rax
  _QWORD *v10; // rdx

  v3 = *a1;
  v4 = a2[1];
  if ( *a1 >= v4 )
  {
    if ( !under_debugger )
      sub_383060(0xC3D2u, a3);
LABEL_16:
    BUG();
  }
  v5 = *a2;
  v6 = 16 * v3;
  v7 = v5 + 16 * v3;
  v8 = *(_BYTE *)(v7 + 8);
  if ( v8 != 5 && !a1[1] )
  {
    if ( !under_debugger )
      sub_383060(0xC3D3u, a3);
    goto LABEL_16;
  }
  result = v3 + 1;
  if ( result < v4 )
  {
    v10 = (_QWORD *)(v5 + v6 + 16);
    result = *(unsigned __int8 *)(v5 + v6 + 24);
    if ( v8 >= (unsigned __int8)result )
    {
      if ( (unsigned __int8)result < v8 || (result = *(_QWORD *)v7 + *((int *)a1 + 2), result >= *v10) && result > *v10 )
      {
        if ( !under_debugger )
          sub_383060(0xC3D4u, a3);
        goto LABEL_16;
      }
    }
  }
  return result;
}

