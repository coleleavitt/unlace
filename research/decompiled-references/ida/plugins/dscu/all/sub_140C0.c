__int64 *__fastcall sub_140C0(__int64 a1, __int64 **a2, double a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  const char *v10; // rdi
  const char *v11; // rax
  __int64 *v12; // r15
  const char *v13; // r13
  size_t v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  size_t v17; // r14
  void *v19; // rdi
  size_t v20; // rdx
  __int64 v21; // rax
  size_t v22; // [rsp+8h] [rbp-40h]

  v7 = *(_QWORD *)(**(_QWORD **)(a1 + 192) + 16 * a6);
  v8 = sub_9C60(*(_QWORD **)(*(_QWORD *)(a1 + 184) + 112LL), v7);
  if ( v8 )
  {
    v10 = byte_190C8;
    if ( v8[105] )
      v10 = (const char *)v8[104];
    v11 = (const char *)qbasename(v10, v7, v9);
    v12 = *a2;
    v13 = v11;
    if ( v11 && (v14 = strlen(v11), (v17 = v14) != 0) )
    {
      v19 = (void *)*v12;
      v20 = v14 + 1;
      if ( v12[2] < v14 + 1 )
      {
        v22 = v14 + 1;
        v21 = qvector_reserve(v12, *v12, v20, 1, v15, v16);
        v20 = v22;
        *v12 = v21;
        v19 = (void *)v21;
      }
      v12[1] = v20;
      memmove(v19, v13, v17);
      *(_BYTE *)(*v12 + v17) = 0;
    }
    else
    {
      v12[1] = 0;
    }
    sub_13580(*a2 + 3, (__int64)"%a", a3);
    sub_13580(*a2 + 6, (__int64)"%a", a3);
    return sub_13580(*a2 + 9, (__int64)"%a", a3);
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr(30645);
    return (__int64 *)sub_14240();
  }
}

