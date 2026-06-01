unsigned __int64 __fastcall sub_14AC0(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rax
  _QWORD *v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 i; // r15
  _QWORD *v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rbp
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v14; // [rsp+8h] [rbp-50h]
  char v15; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 24);
  v16 = __readfsqword(0x28u);
  v14 = v2;
  if ( v2 )
  {
    do
    {
      v4 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 80 * v1);
      v5 = v4[6];
      if ( v5 )
      {
        v6 = v4[7];
        if ( v6 )
        {
          for ( i = 0; i != v6; ++i )
          {
            v8 = (_QWORD *)(v5 + 48 * i);
            if ( v8[3] )
            {
              v8[4] = 0;
              qfree();
            }
            if ( *v8 )
            {
              v8[1] = 0;
              qfree();
            }
            v5 = v4[6];
          }
        }
        v4[7] = 0;
        qfree();
      }
      if ( v4[3] )
      {
        v4[4] = 0;
        qfree();
      }
      if ( *v4 )
      {
        v4[1] = 0;
        qfree();
      }
      ++v1;
    }
    while ( v14 != v1 );
  }
  v9 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 24) = 0;
  v10 = 0;
  *(_BYTE *)(a1 + 40) = 0;
  if ( v9 )
  {
    do
    {
      v11 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 160 * v10);
      sub_93C0(v11 + 17);
      if ( v11[12] )
      {
        v11[13] = 0;
        qfree();
      }
      if ( v11[9] )
      {
        v11[10] = 0;
        qfree();
      }
      if ( v11[6] )
      {
        v11[7] = 0;
        qfree();
      }
      if ( v11[3] )
      {
        v11[4] = 0;
        qfree();
      }
      if ( *v11 )
      {
        v11[1] = 0;
        qfree();
      }
      ++v10;
    }
    while ( v9 != v10 );
  }
  *(_QWORD *)(a1 + 56) = 0;
  while ( (unsigned __int8)sub_10B00((_QWORD *)a1, &v15) )
  {
    while ( v15 )
    {
      v12 = *(_QWORD *)(a1 + 16) + 80LL * *(_QWORD *)(a1 + 24) - 80;
      if ( !*(_QWORD *)(v12 + 8) || strcmp(*(const char **)v12, "device") )
        break;
      sub_12D90((_QWORD *)a1);
      if ( !(unsigned __int8)sub_10B00((_QWORD *)a1, &v15) )
        return v16 - __readfsqword(0x28u);
    }
  }
  return v16 - __readfsqword(0x28u);
}

