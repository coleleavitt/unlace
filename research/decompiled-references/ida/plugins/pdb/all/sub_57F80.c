void __fastcall sub_57F80(__int64 a1, __int64 *a2)
{
  char *v2; // rbx
  char *v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rax
  bool v6; // cf
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rax
  char *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // [rsp+8h] [rbp-40h]

  v2 = *(char **)(a1 + 8);
  v3 = *(char **)a1;
  v4 = (__int64)&v2[-*(_QWORD *)a1] >> 3;
  if ( v4 == 0xFFFFFFFFFFFFFFFLL )
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
  v16 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v9 = operator new(v8);
  v10 = *a2;
  *a2 = 0;
  *(_QWORD *)(v9 + v16) = v10;
  if ( v3 == v2 )
  {
    v14 = v9;
  }
  else
  {
    v11 = v3;
    v12 = v9;
    do
    {
      v13 = *(_QWORD *)v11;
      v11 += 8;
      v12 += 8;
      *(_QWORD *)(v12 - 8) = v13;
    }
    while ( v11 != v2 );
    v14 = v9 + v11 - v3;
  }
  v15 = v14 + 8;
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v15;
  *(_QWORD *)(a1 + 16) = v8 + v9;
}

