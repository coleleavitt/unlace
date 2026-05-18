bool __fastcall sub_19F910(__int64 a1)
{
  pthread_mutex_t *v1; // r13
  const void *v3; // r12
  size_t v4; // rax
  size_t v5; // rbp
  _BYTE *v7; // rsi
  void *v8; // rdi
  size_t v9; // r14
  _BYTE *v10; // rax
  void *v11; // rax

  v1 = (pthread_mutex_t *)qword_243A00;
  sub_19A520((pthread_mutex_t *)qword_243A00);
  if ( qword_2439F8 )
  {
    v3 = (const void *)(qword_2439F8 + 8);
    v4 = strlen((const char *)(qword_2439F8 + 8));
    v5 = v4;
    if ( v4 )
    {
      v8 = *(void **)a1;
      v9 = v4 + 1;
      if ( *(_QWORD *)(a1 + 16) < v4 + 1 )
      {
        v11 = sub_1987B0(a1, *(void **)a1, v4 + 1, 1u);
        *(_QWORD *)a1 = v11;
        v8 = v11;
      }
      *(_QWORD *)(a1 + 8) = v9;
      memmove(v8, v3, v5);
      *(_BYTE *)(*(_QWORD *)a1 + v5) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
  }
  else
  {
    v7 = *(_BYTE **)a1;
    if ( *(_QWORD *)(a1 + 16) <= 3u )
    {
      v10 = sub_1987B0(a1, v7, 4u, 1u);
      *(_QWORD *)a1 = v10;
      v7 = v10;
    }
    *(_QWORD *)(a1 + 8) = 4;
    *(_WORD *)v7 = 25705;
    v7[2] = 97;
    *(_BYTE *)(*(_QWORD *)a1 + 3LL) = 0;
  }
  return sub_19A570(v1);
}
