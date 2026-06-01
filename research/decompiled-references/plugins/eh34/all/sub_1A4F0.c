__int64 (__fastcall **__fastcall sub_1A4F0(__int64 a1))()
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  void *v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rbp
  __int64 v7; // rdi
  void *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v13; // rdi

  v2 = *(_QWORD **)(a1 + 160);
  *(_QWORD *)a1 = off_8BED0;
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    operator delete(v3, 0x10u);
  }
  memset(*(void **)(a1 + 144), 0, 8LL * *(_QWORD *)(a1 + 152));
  v4 = *(void **)(a1 + 144);
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  if ( v4 != (void *)(a1 + 192) )
    operator delete(v4, 8LL * *(_QWORD *)(a1 + 152));
  v5 = *(_QWORD **)(a1 + 104);
  while ( v5 )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    v7 = v6[2];
    if ( v7 )
    {
      v6[3] = 0;
      qfree(v7);
    }
    operator delete(v6, 0x28u);
  }
  memset(*(void **)(a1 + 88), 0, 8LL * *(_QWORD *)(a1 + 96));
  v8 = *(void **)(a1 + 88);
  v9 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  if ( v8 != (void *)(a1 + 136) )
    operator delete(v8, 8 * v9);
  v10 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)a1 = &off_8BE50;
  if ( v10 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v10);
  }
  v11 = *(_QWORD *)(a1 + 40);
  result = off_8BD90;
  *(_QWORD *)a1 = off_8BD90;
  if ( v11 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    result = (__int64 (__fastcall **)())qfree(v11);
  }
  v13 = *(_QWORD *)(a1 + 16);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    return (__int64 (__fastcall **)())qfree(v13);
  }
  return result;
}
