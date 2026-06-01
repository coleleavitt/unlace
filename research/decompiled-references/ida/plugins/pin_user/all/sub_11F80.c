__int64 __fastcall sub_11F80(__int64 a1, const char *a2, unsigned int a3)
{
  __int64 v3; // r14
  const char *v6; // rbp
  size_t v7; // rax
  size_t v8; // r13
  unsigned __int64 v10; // r15
  void *v11; // rdi
  __int64 v12; // rax

  v3 = a1 + 2264;
  if ( a2 && (v6 = a2, *a2) )
  {
    v7 = strlen(a2);
    v8 = v7;
    if ( !v7 )
    {
      *(_QWORD *)(a1 + 2272) = 0;
      goto LABEL_5;
    }
    v10 = v7 + 1;
  }
  else
  {
    v10 = 10;
    v6 = "localhost";
    v8 = 9;
  }
  v11 = *(void **)(a1 + 2264);
  if ( *(_QWORD *)(a1 + 2280) < v10 )
  {
    v12 = qvector_reserve();
    *(_QWORD *)(a1 + 2264) = v12;
    v11 = (void *)v12;
  }
  *(_QWORD *)(a1 + 2272) = v10;
  memmove(v11, v6, v8);
  *(_BYTE *)(*(_QWORD *)(a1 + 2264) + v8) = 0;
LABEL_5:
  *(_DWORD *)(a1 + 2288) = a3;
  sub_1CB40(a1 + 952, v3, a3);
  return 1;
}

