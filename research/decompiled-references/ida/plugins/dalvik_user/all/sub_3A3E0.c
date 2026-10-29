__int64 __fastcall sub_3A3E0(char *a1, __int64 a2)
{
  __int64 v2; // r12
  const char *v3; // rax
  const char *v4; // rbx
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // r13
  char *v8; // rsi
  unsigned int v9; // ebx
  void *v11; // [rsp+0h] [rbp-48h]

  v2 = *(_QWORD *)(a2 + 8);
  v3 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v11 = nullptr;
  if ( !v3
    || (v4 = v3,
        v5 = strlen(v3),
        v6 = v5 + 1,
        v7 = v5,
        v11 = (void *)qvector_reserve(),
        memmove(v11, v4, v7),
        *((_BYTE *)v11 + v7) = 0,
        v8 = (char *)v11,
        !v6) )
  {
    v8 = (char *)nptr;
  }
  v9 = sub_387A0(a1, v8, 1, 0);
  if ( (_BYTE)v9 )
    sub_3A280(a1, v2, 1);
  if ( v11 )
    qfree();
  return v9;
}

