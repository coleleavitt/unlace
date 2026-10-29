void __fastcall std::vector<std::pair<char,char>>::_M_realloc_append<std::pair<char,char>>(__int64 a1, _WORD *a2)
{
  __int16 *v2; // r14
  __int16 *v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rax
  __int16 *v11; // rdx
  __int16 v12; // cx
  __int64 v13; // rbp
  __int64 v14; // [rsp+8h] [rbp-40h]

  v2 = *(__int16 **)(a1 + 8);
  v3 = *(__int16 **)a1;
  v4 = (__int64)v2 - *(_QWORD *)a1;
  v5 = v4 >> 1;
  if ( v4 >> 1 == 0x3FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v6 = 1;
  if ( v5 )
    v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 1;
  v7 = v5 + v6;
  if ( v7 > 0x3FFFFFFFFFFFFFFFLL )
    v7 = 0x3FFFFFFFFFFFFFFFLL;
  v8 = 2 * v7;
  v9 = operator new(v8);
  *(_WORD *)(v9 + v4) = *a2;
  if ( v2 == v3 )
  {
    v10 = v9;
  }
  else
  {
    v10 = v9;
    v11 = v3;
    do
    {
      v12 = *v11;
      v10 += 2;
      ++v11;
      *(_WORD *)(v10 - 2) = v12;
    }
    while ( v10 != v9 + v4 );
  }
  v13 = v10 + 2;
  if ( v3 )
  {
    v14 = v9;
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
    v9 = v14;
  }
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v13;
  *(_QWORD *)(a1 + 16) = v8 + v9;
}

