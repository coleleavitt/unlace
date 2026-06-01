__int64 __fastcall sub_60B0(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  const char *v3; // rbx
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // r12
  void *v8; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v2 = (const char *)sub_5FE0(0, (__int64)"SVD files|*.svd|XML files|*.xml");
  if ( v2 )
  {
    v3 = v2;
    if ( *v2 )
    {
      v9 = 0;
      v5 = strlen(v2);
      v6 = v5 + 1;
      v7 = v5;
      v8 = (void *)qvector_reserve();
      *(_QWORD *)&v9 = v6;
      memmove(v8, v3, v7);
      *((_BYTE *)v8 + v7) = 0;
      (*(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)a2 + 8LL))(a2, 10, &v8);
      if ( v8 )
      {
        *(_QWORD *)&v9 = 0;
        qfree();
      }
    }
  }
  return 0;
}

