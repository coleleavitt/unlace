void *__fastcall sub_1BF10(__int64 a1, const void *a2, size_t a3)
{
  size_t v4; // rbx
  void *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx

  v4 = a3;
  if ( a3 )
  {
    v6 = *(void **)a1;
    if ( *(_QWORD *)(a1 + 16) < a3 )
    {
      v7 = qvector_reserve();
      v8 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v7;
      a3 = v4 - v8;
      v6 = (void *)(v7 + v8);
    }
    memset(v6, 0, a3);
    *(_QWORD *)(a1 + 8) = v4;
  }
  return memcpy(*(void **)a1, a2, v4);
}

