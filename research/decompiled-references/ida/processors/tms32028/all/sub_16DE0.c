__int64 __fastcall sub_16DE0(__int64 a1)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // r14
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 i; // r15
  _QWORD *v12; // r13
  __int64 v14; // [rsp+0h] [rbp-48h]
  __int64 v15; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD **)(a1 + 272);
  *(_QWORD *)a1 = &off_29490;
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    operator delete(v3, 0x10u);
  }
  memset(*(void **)(a1 + 256), 0, 8LL * *(_QWORD *)(a1 + 264));
  v4 = *(void **)(a1 + 256);
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  if ( v4 != (void *)(a1 + 304) )
    operator delete(v4, 8LL * *(_QWORD *)(a1 + 264));
  *(_QWORD *)(a1 + 224) = &off_29D10;
  remove_event_listener();
  v5 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 128) = &off_29398;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 192) = 0;
    qfree();
  }
  v6 = *(_QWORD *)(a1 + 160);
  if ( v6 )
  {
    v15 = *(_QWORD *)(a1 + 168);
    if ( v15 )
    {
      v14 = 0;
      v7 = 0;
      do
      {
        v8 = (_QWORD *)(v6 + v7);
        v9 = *(_QWORD *)(v6 + v7 + 56);
        if ( v9 )
        {
          v10 = v8[8];
          if ( v10 )
          {
            for ( i = 0; i != v10; ++i )
            {
              v12 = (_QWORD *)(v9 + 48 * i);
              if ( v12[3] )
              {
                v12[4] = 0;
                qfree();
              }
              if ( *v12 )
              {
                v12[1] = 0;
                qfree();
              }
              v9 = v8[7];
            }
          }
          v8[8] = 0;
          qfree();
        }
        if ( v8[4] )
        {
          v8[5] = 0;
          qfree();
        }
        if ( v8[1] )
        {
          v8[2] = 0;
          qfree();
        }
        ++v14;
        v6 = *(_QWORD *)(a1 + 160);
        v7 += 88;
      }
      while ( v15 != v14 );
    }
    *(_QWORD *)(a1 + 168) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 136) )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree();
  }
  *(_QWORD *)a1 = &off_29D10;
  remove_event_listener();
  return qfree();
}

