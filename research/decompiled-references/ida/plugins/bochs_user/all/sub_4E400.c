void *__fastcall sub_4E400(__int64 a1, const void *a2, size_t a3)
{
  size_t v3; // r13
  void *v6; // rdi
  void *result; // rax
  __int64 v8; // rax

  v3 = a3 + 1;
  v6 = *(void **)a1;
  if ( *(_QWORD *)(a1 + 16) < a3 + 1 )
  {
    v8 = qvector_reserve();
    *(_QWORD *)a1 = v8;
    v6 = (void *)v8;
  }
  *(_QWORD *)(a1 + 8) = v3;
  memmove(v6, a2, a3);
  result = *(void **)a1;
  *(_BYTE *)(*(_QWORD *)a1 + a3) = 0;
  return result;
}

