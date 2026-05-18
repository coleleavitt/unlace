void __fastcall sub_4BF30(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  char *v4; // rdx
  __int64 v5; // rbp
  __int64 i; // rbx
  char *v7; // rax
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  char *v13; // rdi
  __int64 v14; // r14
  __int64 j; // r13
  char *v16; // rbp
  void *v17; // rdi
  char *v18; // rdx
  __int64 v19; // r15
  __int64 k; // rbx
  char *v21; // rax
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  void *v27; // rdi
  char *v28; // rdx
  __int64 v29; // rbp
  __int64 m; // rbx
  char *v31; // rax
  void *v32; // rdi
  __int64 v33; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = &unk_23D478;
  if ( *(_DWORD *)(a1 + 208) )
  {
    if ( !unk_2439A0 )
      sub_198E10(3090);
    BUG();
  }
  v2 = *(void **)(a1 + 360);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 368) = 0;
    j__free(v2);
  }
  v3 = *(void **)(a1 + 328);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 336) = 0;
    j__free(v3);
  }
  v4 = *(char **)(a1 + 280);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 288);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = &v4[24 * i];
        v8 = *(void **)v7;
        if ( *(_QWORD *)v7 )
        {
          *((_QWORD *)v7 + 1) = 0;
          j__free(v8);
          v4 = *(char **)(a1 + 280);
        }
      }
    }
    *(_QWORD *)(a1 + 288) = 0;
    j__free(v4);
  }
  v9 = *(void **)(a1 + 256);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 264) = 0;
    j__free(v9);
  }
  v10 = *(void **)(a1 + 232);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 240) = 0;
    j__free(v10);
  }
  v11 = *(void **)(a1 + 176);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 184) = 0;
    j__free(v11);
  }
  v12 = *(void **)(a1 + 152);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 160) = 0;
    j__free(v12);
  }
  v13 = *(char **)(a1 + 128);
  if ( v13 )
  {
    v33 = *(_QWORD *)(a1 + 136);
    if ( v33 )
    {
      v14 = 0;
      for ( j = 0; j != v33; ++j )
      {
        v16 = &v13[v14];
        v17 = *(void **)&v13[v14 + 128];
        if ( v17 )
        {
          *((_QWORD *)v16 + 17) = 0;
          j__free(v17);
        }
        v18 = *((char **)v16 + 10);
        if ( v18 )
        {
          v19 = *((_QWORD *)v16 + 11);
          if ( v19 )
          {
            for ( k = 0; k != v19; ++k )
            {
              v21 = &v18[24 * k];
              v22 = *(void **)v21;
              if ( *(_QWORD *)v21 )
              {
                *((_QWORD *)v21 + 1) = 0;
                j__free(v22);
                v18 = *((char **)v16 + 10);
              }
            }
          }
          *((_QWORD *)v16 + 11) = 0;
          j__free(v18);
        }
        v23 = *((void **)v16 + 7);
        if ( v23 )
        {
          *((_QWORD *)v16 + 8) = 0;
          j__free(v23);
        }
        v24 = *((void **)v16 + 4);
        if ( v24 )
        {
          *((_QWORD *)v16 + 5) = 0;
          j__free(v24);
        }
        v13 = *(char **)(a1 + 128);
        v14 += 152;
      }
    }
    *(_QWORD *)(a1 + 136) = 0;
    j__free(v13);
  }
  v25 = *(void **)(a1 + 104);
  if ( v25 )
  {
    *(_QWORD *)(a1 + 112) = 0;
    j__free(v25);
  }
  v26 = *(void **)(a1 + 80);
  if ( v26 )
  {
    *(_QWORD *)(a1 + 88) = 0;
    j__free(v26);
  }
  v27 = *(void **)(a1 + 40);
  if ( v27 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    j__free(v27);
  }
  v28 = *(char **)(a1 + 8);
  if ( v28 )
  {
    v29 = *(_QWORD *)(a1 + 16);
    if ( v29 )
    {
      for ( m = 0; m != v29; ++m )
      {
        v31 = &v28[24 * m];
        v32 = *(void **)v31;
        if ( *(_QWORD *)v31 )
        {
          *((_QWORD *)v31 + 1) = 0;
          j__free(v32);
          v28 = *(char **)(a1 + 8);
        }
      }
    }
    *(_QWORD *)(a1 + 16) = 0;
    j__free(v28);
  }
}
