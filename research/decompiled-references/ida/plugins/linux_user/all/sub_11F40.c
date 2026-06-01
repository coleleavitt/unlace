__int64 __fastcall sub_11F40(__int64 a1, const void *a2, int a3, __int64 a4, int a5, int a6)
{
  _QWORD *v8; // r14
  size_t v9; // rax
  size_t v10; // r13
  const char *v11; // rcx
  __int64 v12; // rax
  void *v14; // rdi
  size_t v15; // r15
  __int64 v16; // rax

  v8 = *(_QWORD **)(a1 + 24);
  if ( a2 && (v9 = strlen((const char *)a2), (v10 = v9) != 0) )
  {
    v14 = (void *)v8[17];
    v15 = v9 + 1;
    if ( v8[19] < v9 + 1 )
    {
      v16 = qvector_reserve();
      v8[17] = v16;
      v14 = (void *)v16;
    }
    v8[18] = v15;
    memmove(v14, a2, v10);
    *(_BYTE *)(v8[17] + v10) = 0;
  }
  else
  {
    v8[18] = 0;
  }
  v11 = s;
  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 160LL) = a3;
  v12 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v12 + 24) )
    v11 = *(const char **)(v12 + 16);
  sub_32190(*(_QWORD *)(a1 + 16), (unsigned int)"debuglink '%s' of '%s'\n", (_DWORD)a2, (_DWORD)v11, a5, a6);
  return 0;
}

