__int64 __fastcall sub_9BD0(__int64 a1, const char *a2)
{
  int v2; // r14d
  __int64 v3; // rax
  const char *v4; // rdi
  _QWORD *v5; // r13
  unsigned __int64 v6; // r12
  __int64 v7; // r13
  int v8; // r15d
  __int64 v9; // rax
  const char *v10; // rdi
  __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-48h]
  unsigned __int64 v14; // [rsp+8h] [rbp-40h]

  v14 = *(_QWORD *)(a1 + 168);
  if ( !v14 )
    return 0;
  v2 = 0;
  v13 = *(_QWORD *)(a1 + 160);
  v3 = 0;
  while ( 1 )
  {
    v4 = byte_CF28;
    v5 = (_QWORD *)(v13 + 88 * v3);
    if ( v5[2] )
      v4 = (const char *)v5[1];
    if ( !strcmp(v4, a2) )
      return 1;
    v6 = v5[8];
    if ( v6 )
    {
      v7 = v5[7];
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = byte_CF28;
        v11 = v7 + 48 * v9;
        if ( *(_QWORD *)(v11 + 8) )
          v10 = *(const char **)v11;
        if ( !strcmp(v10, a2) )
          return 1;
        v9 = ++v8;
      }
      while ( v8 < v6 );
    }
    v3 = ++v2;
    if ( v2 >= v14 )
      return 0;
  }
}

