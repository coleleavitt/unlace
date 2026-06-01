void __fastcall sub_4D350(__int64 a1, _QWORD *a2)
{
  void *v2; // r14
  signed __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  bool v6; // cf
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  char *v9; // rbp
  __int64 v10; // r13

  v2 = *(void **)a1;
  v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v4 = v3 >> 3;
  if ( v3 >> 3 == 0xFFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v5 = 1;
  if ( v4 )
    v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v6 = __CFADD__(v5, v4);
  v7 = v5 + v4;
  if ( v6 )
  {
    v8 = 0x7FFFFFFFFFFFFFF8LL;
  }
  else
  {
    if ( v7 > 0xFFFFFFFFFFFFFFFLL )
      v7 = 0xFFFFFFFFFFFFFFFLL;
    v8 = 8 * v7;
  }
  v9 = (char *)operator new(v8);
  *(_QWORD *)&v9[v3] = *a2;
  if ( v3 > 0 )
    memcpy(v9, v2, v3);
  v10 = (__int64)&v9[v3 + 8];
  if ( v2 )
    operator delete(v2, *(_QWORD *)(a1 + 16) - (_QWORD)v2);
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v10;
  *(_QWORD *)(a1 + 16) = &v9[v8];
}
