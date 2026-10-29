__int64 __fastcall sub_34A80(__int64 a1, __int64 a2, int a3, const char *a4)
{
  const char *v5; // rbx
  size_t v6; // rax
  size_t v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 *v11; // rax
  void *v13; // rax
  size_t v14; // r15
  void *src; // [rsp+0h] [rbp-98h]
  size_t n; // [rsp+8h] [rbp-90h]
  int v17; // [rsp+20h] [rbp-78h]
  char v18; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( a4 )
  {
    v5 = a4;
  }
  else
  {
    v5 = &v18;
    qsnprintf();
  }
  src = nullptr;
  n = 0;
  v6 = strlen(v5);
  v7 = v6;
  if ( v6 )
  {
    v14 = v6 + 1;
    src = (void *)qvector_reserve();
    n = v14;
    memmove(src, v5, v7);
    *((_BYTE *)src + v7) = 0;
  }
  v17 = a3;
  v8 = *(_QWORD *)(a1 + 72);
  v9 = qalloc_or_throw();
  *(_QWORD *)(v9 + 16) = 0;
  v10 = v9;
  *(_OWORD *)(v9 + 24) = 0;
  if ( n )
  {
    v13 = (void *)qalloc_or_throw();
    *(_QWORD *)(v10 + 16) = v13;
    *(_QWORD *)(v10 + 32) = n;
    memcpy(v13, src, n);
    *(_QWORD *)(v10 + 24) = n;
  }
  *(_QWORD *)(v10 + 40) = a2;
  *(_QWORD *)v10 = v8 + 40;
  *(_DWORD *)(v10 + 48) = v17;
  v11 = *(__int64 **)(v8 + 48);
  *(_QWORD *)(v10 + 8) = v11;
  *v11 = v10;
  ++*(_QWORD *)(v8 + 56);
  *(_QWORD *)(v8 + 48) = v10;
  if ( src )
    qfree();
  return 0;
}

