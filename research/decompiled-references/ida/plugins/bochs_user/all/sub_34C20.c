__int64 __fastcall sub_34C20(int *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // r12
  __int64 v7; // rax
  size_t v8; // r14
  size_t v9; // r14
  int v10; // eax
  __int64 v11; // rdi
  int *v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rax
  size_t v16; // r15
  size_t v17; // r15
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rax
  size_t v21; // r15
  void *v22; // rax
  void *v24; // rax
  __int64 v25; // rdx
  __int64 j; // rax
  __int64 v27; // rax
  void *v28; // rax
  __int64 v29; // rax
  size_t v30; // r14
  void *v31; // rax
  __int64 v32; // rdx
  __int64 i; // rax
  __int64 v34; // rax
  void *v35; // rax
  void *v36; // rax
  const void *v37; // rsi

  v6 = a3[1];
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    a3[1] = v7;
    if ( v7 )
    {
      if ( v6 == *(_QWORD *)(v7 + 24) )
      {
        *(_QWORD *)(v7 + 24) = 0;
        v32 = *(_QWORD *)(a3[1] + 16LL);
        if ( v32 )
        {
          a3[1] = v32;
          for ( i = *(_QWORD *)(v32 + 24); i; i = *(_QWORD *)(i + 24) )
          {
            a3[1] = i;
            v32 = i;
          }
          v34 = *(_QWORD *)(v32 + 16);
          if ( v34 )
            a3[1] = v34;
        }
      }
      else
      {
        *(_QWORD *)(v7 + 16) = 0;
      }
    }
    else
    {
      *a3 = 0;
    }
    if ( *(_QWORD *)(v6 + 56) )
    {
      *(_QWORD *)(v6 + 64) = 0;
      qfree();
    }
    if ( *(_QWORD *)(v6 + 32) )
    {
      *(_QWORD *)(v6 + 40) = 0;
      qfree();
    }
    *(_QWORD *)(v6 + 32) = 0;
    *(_OWORD *)(v6 + 40) = 0;
    v8 = *((_QWORD *)a1 + 5);
    if ( v8 )
    {
      v35 = (void *)qalloc_or_throw();
      *(_QWORD *)(v6 + 32) = v35;
      *(_QWORD *)(v6 + 48) = v8;
      memcpy(v35, *((const void **)a1 + 4), v8);
      *(_QWORD *)(v6 + 40) = v8;
    }
    *(_QWORD *)(v6 + 56) = 0;
    *(_OWORD *)(v6 + 64) = 0;
    v9 = *((_QWORD *)a1 + 8);
    if ( !v9 )
      goto LABEL_12;
LABEL_45:
    v31 = (void *)qalloc_or_throw();
    *(_QWORD *)(v6 + 56) = v31;
    *(_QWORD *)(v6 + 72) = v9;
    memcpy(v31, *((const void **)a1 + 7), v9);
    *(_QWORD *)(v6 + 64) = v9;
    goto LABEL_12;
  }
  v29 = operator new(0x58u);
  v30 = *((_QWORD *)a1 + 5);
  *(_QWORD *)(v29 + 32) = 0;
  v6 = v29;
  *(_OWORD *)(v29 + 40) = 0;
  if ( v30 )
  {
    v36 = (void *)qalloc_or_throw();
    *(_QWORD *)(v6 + 32) = v36;
    v37 = *((const void **)a1 + 4);
    *(_QWORD *)(v6 + 48) = v30;
    memcpy(v36, v37, v30);
    *(_QWORD *)(v6 + 40) = v30;
  }
  v9 = *((_QWORD *)a1 + 8);
  *(_QWORD *)(v6 + 56) = 0;
  *(_OWORD *)(v6 + 64) = 0;
  if ( v9 )
    goto LABEL_45;
LABEL_12:
  *(_DWORD *)(v6 + 80) = a1[20];
  *(_WORD *)(v6 + 84) = *((_WORD *)a1 + 42);
  v10 = *a1;
  *(_QWORD *)(v6 + 16) = 0;
  *(_DWORD *)v6 = v10;
  *(_QWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 8) = a2;
  v11 = *((_QWORD *)a1 + 3);
  if ( v11 )
    *(_QWORD *)(v6 + 24) = sub_34C20(v11, v6, a3);
  v12 = *((int **)a1 + 2);
  v13 = v6;
  if ( v12 )
  {
    v14 = a3[1];
    if ( v14 )
      goto LABEL_16;
LABEL_30:
    v20 = operator new(0x58u);
    *(_QWORD *)(v20 + 32) = 0;
    v14 = v20;
    *(_OWORD *)(v20 + 40) = 0;
    v21 = *((_QWORD *)v12 + 5);
    if ( v21 )
    {
      v28 = (void *)qalloc_or_throw();
      *(_QWORD *)(v14 + 32) = v28;
      *(_QWORD *)(v14 + 48) = v21;
      memcpy(v28, *((const void **)v12 + 4), v21);
      *(_QWORD *)(v14 + 40) = v21;
    }
    *(_QWORD *)(v14 + 56) = 0;
    *(_OWORD *)(v14 + 64) = 0;
    v17 = *((_QWORD *)v12 + 8);
    if ( v17 )
    {
LABEL_33:
      v22 = (void *)qalloc_or_throw();
      *(_QWORD *)(v14 + 56) = v22;
      *(_QWORD *)(v14 + 72) = v17;
      memcpy(v22, *((const void **)v12 + 7), v17);
      *(_QWORD *)(v14 + 64) = v17;
      goto LABEL_26;
    }
    while ( 1 )
    {
LABEL_26:
      *(_DWORD *)(v14 + 80) = v12[20];
      *(_WORD *)(v14 + 84) = *((_WORD *)v12 + 42);
      v18 = *v12;
      *(_QWORD *)(v14 + 16) = 0;
      *(_DWORD *)v14 = v18;
      *(_QWORD *)(v14 + 24) = 0;
      *(_QWORD *)(v13 + 16) = v14;
      *(_QWORD *)(v14 + 8) = v13;
      v19 = *((_QWORD *)v12 + 3);
      if ( v19 )
        *(_QWORD *)(v14 + 24) = sub_34C20(v19, v14, a3);
      v12 = *((int **)v12 + 2);
      if ( !v12 )
        break;
      v13 = v14;
      v14 = a3[1];
      if ( !v14 )
        goto LABEL_30;
LABEL_16:
      v15 = *(_QWORD *)(v14 + 8);
      a3[1] = v15;
      if ( v15 )
      {
        if ( v14 == *(_QWORD *)(v15 + 24) )
        {
          *(_QWORD *)(v15 + 24) = 0;
          v25 = *(_QWORD *)(a3[1] + 16LL);
          if ( v25 )
          {
            a3[1] = v25;
            for ( j = *(_QWORD *)(v25 + 24); j; j = *(_QWORD *)(j + 24) )
            {
              a3[1] = j;
              v25 = j;
            }
            v27 = *(_QWORD *)(v25 + 16);
            if ( v27 )
              a3[1] = v27;
          }
        }
        else
        {
          *(_QWORD *)(v15 + 16) = 0;
        }
      }
      else
      {
        *a3 = 0;
      }
      if ( *(_QWORD *)(v14 + 56) )
      {
        *(_QWORD *)(v14 + 64) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v14 + 32) )
      {
        *(_QWORD *)(v14 + 40) = 0;
        qfree();
      }
      *(_QWORD *)(v14 + 32) = 0;
      *(_OWORD *)(v14 + 40) = 0;
      v16 = *((_QWORD *)v12 + 5);
      if ( v16 )
      {
        v24 = (void *)qalloc_or_throw();
        *(_QWORD *)(v14 + 32) = v24;
        *(_QWORD *)(v14 + 48) = v16;
        memcpy(v24, *((const void **)v12 + 4), v16);
        *(_QWORD *)(v14 + 40) = v16;
      }
      *(_QWORD *)(v14 + 56) = 0;
      *(_OWORD *)(v14 + 64) = 0;
      v17 = *((_QWORD *)v12 + 8);
      if ( v17 )
        goto LABEL_33;
    }
  }
  return v6;
}

