__int64 *__fastcall sub_32870(__int64 *a1, _QWORD *a2)
{
  __int64 *(__fastcall *v2)(__int64 *, __int64); // rax
  const char *v3; // r13
  __int64 v4; // rbx
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // rbp
  void *v8; // rax

  v2 = *(__int64 *(__fastcall **)(__int64 *, __int64))(*a2 + 24LL);
  if ( v2 == sub_32790 )
  {
    v3 = nptr;
    v4 = operator new(0x28u);
    if ( a2[3] )
      v3 = (const char *)a2[2];
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &off_7D8B8;
    *(_QWORD *)(v4 + 16) = 0;
    *(_OWORD *)(v4 + 24) = 0;
    if ( v3 )
    {
      v5 = strlen(v3);
      v6 = v5 + 1;
      v7 = v5;
      v8 = (void *)qvector_reserve();
      *(_QWORD *)(v4 + 16) = v8;
      *(_QWORD *)(v4 + 24) = v6;
      memmove(v8, v3, v7);
      *(_BYTE *)(*(_QWORD *)(v4 + 16) + v7) = 0;
    }
    *a1 = v4;
  }
  else
  {
    v2(a1, (__int64)a2);
  }
  return a1;
}

