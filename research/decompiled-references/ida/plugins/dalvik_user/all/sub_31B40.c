__int64 *__fastcall sub_31B40(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbp
  size_t v5; // r13
  __int64 v6; // rax
  void *v8; // rax

  v2 = operator new(0x40u);
  v3 = *(int *)(a2 + 40);
  *(_DWORD *)(v2 + 8) = 1;
  *(_QWORD *)(v2 + 16) = 0;
  v4 = *(_QWORD *)(a2 + 16) + 48 * v3;
  *(_QWORD *)v2 = &off_7D900;
  *(_OWORD *)(v2 + 24) = 0;
  v5 = *(_QWORD *)(v4 + 8);
  if ( v5 )
  {
    v8 = (void *)qalloc_or_throw();
    *(_QWORD *)(v2 + 16) = v8;
    *(_QWORD *)(v2 + 32) = v5;
    memcpy(v8, *(const void **)v4, v5);
    *(_QWORD *)(v2 + 24) = v5;
  }
  *(_DWORD *)(v2 + 40) = *(_DWORD *)(v4 + 24);
  *(_QWORD *)(v2 + 48) = *(_QWORD *)(v4 + 32);
  v6 = *(_QWORD *)(v4 + 40);
  *a1 = v2;
  *(_QWORD *)(v2 + 56) = v6;
  return a1;
}

