void __fastcall sub_1CB40(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // r12
  const void *v5; // r14
  void *v6; // rax

  if ( a1 + 48 == a2 )
    goto LABEL_4;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 <= 1 )
  {
    *(_QWORD *)(a1 + 56) = 0;
LABEL_4:
    *(_DWORD *)(a1 + 72) = a3;
    return;
  }
  v5 = *(const void **)a2;
  v6 = *(void **)(a1 + 48);
  if ( *(_QWORD *)(a1 + 64) < v4 )
  {
    v6 = (void *)qvector_reserve();
    *(_QWORD *)(a1 + 48) = v6;
  }
  *(_QWORD *)(a1 + 56) = v4;
  memmove(v6, v5, v4 - 1);
  *(_BYTE *)(*(_QWORD *)(a1 + 48) + v4 - 1) = 0;
  *(_DWORD *)(a1 + 72) = a3;
}

