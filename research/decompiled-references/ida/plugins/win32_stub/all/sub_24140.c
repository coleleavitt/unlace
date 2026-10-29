__int64 __fastcall sub_24140(_BYTE *a1, _QWORD *a2, int a3, __int64 a4)
{
  __int64 (__fastcall *v6)(__int64, unsigned __int8, __int64); // rax
  unsigned int *v7; // rbx
  const char *v8; // r13
  char *v9; // rax
  size_t v11; // rax
  size_t v12; // r14
  void *v13; // rdi
  size_t v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+8h] [rbp-50h]

  v6 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)a1 + 16LL);
  if ( v6 == sub_A900 )
    v7 = (unsigned int *)sub_23F10(a1, *(_BYTE *)(*a2 + 4LL), a2, 0);
  else
    v7 = (unsigned int *)v6((__int64)a1, *(_BYTE *)(*a2 + 4LL), (__int64)a2);
  if ( v7 )
  {
    v16 = (unsigned __int64)v7 + *v7 + 5;
    a3 = unpack_dd();
    if ( a3 < 0 && a4 )
    {
      v8 = (char *)v7 + 5;
      v9 = (char *)v7 + 5;
      do
      {
        if ( (unsigned __int64)v9 >= v16 )
          goto LABEL_9;
        ++v9;
      }
      while ( *(v9 - 1) );
      if ( v7 == (unsigned int *)-5LL || (v11 = strlen(v8), (v12 = v11) == 0) )
      {
LABEL_9:
        *(_QWORD *)(a4 + 8) = 0;
        goto LABEL_10;
      }
      v13 = *(void **)a4;
      v14 = v11 + 1;
      if ( *(_QWORD *)(a4 + 16) < v11 + 1 )
      {
        v15 = qvector_reserve();
        *(_QWORD *)a4 = v15;
        v13 = (void *)v15;
      }
      *(_QWORD *)(a4 + 8) = v14;
      memmove(v13, v8, v12);
      *(_BYTE *)(*(_QWORD *)a4 + v12) = 0;
    }
LABEL_10:
    qfree();
  }
  return (unsigned int)a3;
}

