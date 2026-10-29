void __fastcall sub_1A700(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rbx
  _QWORD *v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rbx
  void *v12; // rdi
  __int64 v13; // rbx
  void *v14; // rdi
  __int64 v15; // rbx
  void *v16; // rdi
  __int64 v17; // rdi
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // r14
  __int64 v21; // r12
  __int64 j; // rbp
  _QWORD *v23; // r15
  __int64 v24; // rbx
  void *v25; // rdi
  __int64 v26; // rbx
  _QWORD *v27; // rbp
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // r12
  __int64 k; // rbx
  _QWORD *v32; // rbp
  __int64 i; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+10h] [rbp-48h]
  __int64 v35; // [rsp+18h] [rbp-40h]

  qmutex_free();
  v2 = *(_QWORD *)(a1 + 536);
  *(_OWORD *)a1 = 0;
  while ( v2 )
  {
    v3 = (_QWORD *)v2;
    sub_18B70(*(_QWORD **)(v2 + 24));
    v4 = *(_QWORD *)(v2 + 48);
    v2 = *(_QWORD *)(v2 + 16);
    if ( v4 )
    {
      v3[7] = 0;
      qfree();
    }
    operator delete(v3, 0x48u);
  }
  v5 = *(_QWORD *)(a1 + 488);
  while ( v5 )
  {
    v6 = (_QWORD *)v5;
    sub_18E30(*(_QWORD **)(v5 + 24));
    v7 = *(_QWORD *)(v5 + 48);
    v5 = *(_QWORD *)(v5 + 16);
    if ( v7 )
    {
      v6[7] = 0;
      qfree();
    }
    operator delete(v6, 0x48u);
  }
  v8 = *(_QWORD *)(a1 + 440);
  while ( v8 )
  {
    v9 = (_QWORD *)v8;
    sub_190F0(*(_QWORD **)(v8 + 24));
    v10 = *(_QWORD *)(v8 + 48);
    v8 = *(_QWORD *)(v8 + 16);
    if ( v10 )
    {
      v9[7] = 0;
      qfree();
    }
    operator delete(v9, 0x48u);
  }
  sub_175B0(*(void **)(a1 + 392));
  sub_17310(*(void **)(a1 + 344));
  v11 = *(_QWORD *)(a1 + 296);
  while ( v11 )
  {
    sub_17A50(*(_QWORD **)(v11 + 24));
    v12 = (void *)v11;
    v11 = *(_QWORD *)(v11 + 16);
    operator delete(v12, 0x30u);
  }
  v13 = *(_QWORD *)(a1 + 248);
  while ( v13 )
  {
    sub_189A0(*(_QWORD **)(v13 + 24));
    v14 = (void *)v13;
    v13 = *(_QWORD *)(v13 + 16);
    operator delete(v14, 0x30u);
  }
  v15 = *(_QWORD *)(a1 + 200);
  while ( v15 )
  {
    sub_17C20(*(_QWORD **)(v15 + 24));
    v16 = (void *)v15;
    v15 = *(_QWORD *)(v15 + 16);
    operator delete(v16, 0x38u);
  }
  v17 = *(_QWORD *)(a1 + 160);
  if ( v17 )
  {
    v35 = *(_QWORD *)(a1 + 168);
    if ( v35 )
    {
      v34 = 0;
      for ( i = 0; i != v35; ++i )
      {
        v18 = (_QWORD *)(v17 + v34);
        if ( *(_QWORD *)(v17 + v34 + 368) )
        {
          v18[47] = 0;
          qfree();
        }
        v19 = v18[18];
        if ( v19 )
        {
          v20 = v18[19];
          if ( v20 )
          {
            v21 = 0;
            for ( j = 0; j != v20; ++j )
            {
              v23 = (_QWORD *)(v19 + v21);
              if ( *(_QWORD *)(v19 + v21 + 56) )
              {
                v23[8] = 0;
                qfree();
              }
              if ( v23[4] )
              {
                v23[5] = 0;
                qfree();
              }
              if ( v23[1] )
              {
                v23[2] = 0;
                qfree();
              }
              v19 = v18[18];
              v21 += 120;
            }
          }
          v18[19] = 0;
          qfree();
        }
        if ( v18[14] )
        {
          v18[15] = 0;
          qfree();
        }
        if ( v18[8] )
        {
          v18[9] = 0;
          qfree();
        }
        if ( v18[5] )
        {
          v18[6] = 0;
          qfree();
        }
        if ( v18[2] )
        {
          v18[3] = 0;
          qfree();
        }
        v17 = *(_QWORD *)(a1 + 160);
        v34 += 392;
      }
    }
    *(_QWORD *)(a1 + 168) = 0;
    qfree();
  }
  v24 = *(_QWORD *)(a1 + 128);
  while ( v24 )
  {
    sub_189A0(*(_QWORD **)(v24 + 24));
    v25 = (void *)v24;
    v24 = *(_QWORD *)(v24 + 16);
    operator delete(v25, 0x30u);
  }
  v26 = *(_QWORD *)(a1 + 80);
  while ( v26 )
  {
    v27 = (_QWORD *)v26;
    sub_180B0(*(_QWORD **)(v26 + 24));
    v28 = *(_QWORD *)(v26 + 32);
    v26 = *(_QWORD *)(v26 + 16);
    if ( v28 )
    {
      v27[5] = 0;
      qfree();
    }
    operator delete(v27, 0x40u);
  }
  v29 = *(_QWORD *)(a1 + 40);
  if ( v29 )
  {
    v30 = *(_QWORD *)(a1 + 48);
    if ( v30 )
    {
      for ( k = 0; k != v30; ++k )
      {
        v32 = (_QWORD *)(v29 + 72 * k);
        if ( v32[5] )
        {
          v32[6] = 0;
          qfree();
        }
        if ( v32[2] )
        {
          v32[3] = 0;
          qfree();
        }
        v29 = *(_QWORD *)(a1 + 40);
      }
    }
    *(_QWORD *)(a1 + 48) = 0;
    qfree();
  }
}

