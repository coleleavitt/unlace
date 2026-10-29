void __fastcall sub_2B69B0(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int8 (*v4)(void); // rax
  __int64 v5; // rbp
  const char *v6; // rax
  const char *v7; // rbx
  size_t v8; // rax
  size_t v9; // r12
  void *v10; // rdi
  size_t v11; // r13
  __int64 v12; // rax

  if ( a3 < *(_QWORD *)(a1 + 48) )
  {
    v3 = (a3 << 6) + *(_QWORD *)(a1 + 40);
    v4 = **(unsigned __int8 (***)(void))v3;
    if ( (char *)v4 == (char *)sub_2A8940 )
    {
      if ( *(_QWORD *)(v3 + 8) == *(_QWORD *)(v3 + 48) )
        return;
    }
    else if ( !v4() )
    {
      return;
    }
    switch_dbctx();
    v5 = sub_2B6950(a2);
    if ( !(unsigned __int8)print_tinfo() )
    {
      v6 = (const char *)dstr_tinfo();
      v7 = v6;
      if ( v6 && (v8 = strlen(v6), (v9 = v8) != 0) )
      {
        v10 = *(void **)v5;
        v11 = v8 + 1;
        if ( *(_QWORD *)(v5 + 16) < v8 + 1 )
        {
          v12 = qvector_reserve();
          *(_QWORD *)v5 = v12;
          v10 = (void *)v12;
        }
        *(_QWORD *)(v5 + 8) = v11;
        memmove(v10, v7, v9);
        *(_BYTE *)(*(_QWORD *)v5 + v9) = 0;
      }
      else
      {
        *(_QWORD *)(v5 + 8) = 0;
      }
    }
  }
}

