__int64 __fastcall sub_14320(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 i; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdi
  _QWORD *v12; // [rsp+8h] [rbp-40h]

  *a1 = &off_C75B8;
  a1[13] = off_C75E8;
  v12 = a1 + 19;
  callui(1098, a1 + 19);
  v2 = a1[344];
  if ( v2 )
  {
    a1[345] = 0;
    qfree(v2);
  }
  a1[341] = &off_C9B80;
  v3 = a1 + 338;
  remove_event_listener(a1 + 341);
  do
  {
    if ( *v3 )
    {
      v4 = v3[1];
      if ( v4 )
      {
        v5 = *v3;
        for ( i = 0; i != v4; ++i )
        {
          v7 = v5 + 32 * i;
          v8 = *(_QWORD *)(v7 + 8);
          if ( v8 )
          {
            *(_QWORD *)(v7 + 16) = 0;
            qfree(v8);
            v5 = *v3;
          }
        }
      }
      else
      {
        v5 = *v3;
      }
      v3[1] = 0;
      qfree(v5);
    }
    v3 -= 3;
  }
  while ( v3 != a1 + 38 );
  v9 = a1[38];
  if ( v9 )
  {
    a1[39] = 0;
    qfree(v9);
  }
  sub_6A1D0(v12);
  v10 = a1[15];
  if ( v10 )
  {
    a1[16] = 0;
    qfree(v10);
  }
  a1[13] = &off_C9B80;
  return remove_event_listener(a1 + 13);
}

