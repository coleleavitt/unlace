__int64 __fastcall sub_64960(__int64 a1, unsigned __int64 a2)
{
  bool v4; // zf
  __int64 **v5; // rax
  unsigned int v6; // r12d
  unsigned __int64 v8; // rdi
  __int64 ***v9; // r8
  unsigned __int64 v10; // r9
  __int64 **v11; // rax
  __int64 **v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(a1 + 24) == 0;
  v14[0] = a2;
  if ( v4 )
  {
    v5 = *(__int64 ***)(a1 + 16);
    if ( !v5 )
      goto LABEL_3;
    while ( (__int64 *)a2 != v5[1] )
    {
      v5 = (__int64 **)*v5;
      if ( !v5 )
        goto LABEL_3;
    }
    return *((unsigned __int8 *)v5 + 16);
  }
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(__int64 ****)(*(_QWORD *)a1 + 8 * (a2 % v8));
  v10 = a2 % v8;
  if ( v9 )
  {
    v11 = *v9;
    if ( (__int64 *)a2 != (*v9)[1] )
    {
      do
      {
        v12 = (__int64 **)*v11;
        if ( !*v11 )
          goto LABEL_3;
        v9 = (__int64 ***)v11;
        if ( v10 != (unsigned __int64)v12[1] % v8 )
          goto LABEL_3;
        v11 = (__int64 **)*v11;
      }
      while ( (__int64 *)a2 != v12[1] );
    }
    if ( v9 )
    {
      v5 = *v9;
      if ( *v9 )
        return *((unsigned __int8 *)v5 + 16);
    }
  }
LABEL_3:
  v6 = sub_64710(a1, a2);
  if ( (_BYTE)v6 == 0xFF )
  {
    v13 = sub_64800(a1, a2);
    if ( v13 != -1 )
      v6 = sub_64710(a1, v13);
  }
  *(_BYTE *)sub_53130((char **)a1, v14) = v6;
  return v6;
}
