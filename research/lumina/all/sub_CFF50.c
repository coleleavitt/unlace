unsigned __int8 *__fastcall sub_CFF50(__int64 a1, unsigned __int8 **a2)
{
  __int64 v2; // rbp
  unsigned __int8 *result; // rax
  _QWORD *v4; // r10
  __int64 v5; // r9
  unsigned __int8 *v6; // rbx
  _BYTE *v7; // rdi
  unsigned __int8 *i; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL);
  result = a2[11];
  v4 = *(_QWORD **)(v2 + 64);
  if ( !v4 )
    return result;
  while ( 2 )
  {
    while ( 1 )
    {
      v5 = v4[2];
      v6 = *(unsigned __int8 **)(v5 + 48);
      if ( v6 != a2[12] )
        break;
      v7 = *(_BYTE **)(v5 + 8);
      if ( !v7 )
        break;
      for ( i = *a2; ; ++i )
      {
        v9 = (unsigned __int8)*v7;
        v10 = *i;
        if ( (_DWORD)v9 == (_DWORD)v10 )
          break;
        if ( byte_1BF000[v9] != byte_1BF000[v10] )
          goto LABEL_5;
LABEL_12:
        ++v7;
      }
      if ( *v7 )
        goto LABEL_12;
      if ( (unsigned __int8 *)v2 == v6 )
        break;
LABEL_7:
      *(_QWORD *)(v5 + 64) = result;
      v4 = (_QWORD *)*v4;
      result = (unsigned __int8 *)v5;
      if ( !v4 )
        return result;
    }
LABEL_5:
    if ( *(_BYTE *)(v5 + 16) == 0x96 )
    {
      *(_QWORD *)(v5 + 8) = *a2;
      *(_QWORD *)(v5 + 48) = a2[12];
      goto LABEL_7;
    }
    v4 = (_QWORD *)*v4;
    if ( v4 )
      continue;
    return result;
  }
}
