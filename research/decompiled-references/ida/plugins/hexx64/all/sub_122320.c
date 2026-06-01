unsigned __int64 __fastcall sub_122320(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r9
  unsigned __int64 result; // rax
  unsigned __int64 *v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 *v7; // rdx
  unsigned __int64 v8; // rcx

  v2 = *a1;
  v3 = v2 + 24 * a1[1];
  for ( result = 0; v3 != v2; v2 += 24 )
  {
    v5 = *(unsigned __int64 **)v2;
    v6 = *(_QWORD *)v2 + 8LL * *(_QWORD *)(v2 + 8);
    if ( v6 != *(_QWORD *)v2 )
    {
      v7 = *(unsigned __int64 **)v2;
      if ( (((_BYTE)v6 - (_BYTE)v5) & 8) == 0 )
        goto LABEL_15;
      v8 = *v5;
      if ( result < v8 )
        result = v8;
      if ( (unsigned __int64 *)v6 != ++v7 )
      {
LABEL_15:
        do
        {
          if ( result < *v7 )
            result = *v7;
          if ( result < v7[1] )
            result = v7[1];
          v7 += 2;
        }
        while ( (unsigned __int64 *)v6 != v7 );
      }
    }
  }
  return result;
}

