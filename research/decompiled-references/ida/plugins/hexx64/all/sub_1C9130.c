__int64 __fastcall sub_1C9130(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 result; // rax

  if ( *(_DWORD *)a1 == 2 || (int)a2 <= 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCEACu, a5);
    BUG();
  }
  v5 = qalloc_or_throw(24, a2, a3, a4);
  *(_OWORD *)(v5 + 8) = 0;
  *(_QWORD *)v5 = 0;
  v6 = qvector_reserve(v5, 0, 1, 24);
  v7 = *(_QWORD *)(v5 + 8);
  *(_QWORD *)v5 = v6;
  v8 = v6 + 24 * v7;
  *(_QWORD *)v8 = 0;
  *(_QWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 16) = 0xFFFF;
  ++*(_QWORD *)(v5 + 8);
  copy_argloc();
  *(_WORD *)(v8 + 18) = a2;
  *(_WORD *)(v8 + 16) = 0;
  result = cleanup_argloc();
  if ( v5 )
  {
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v5;
  }
  return result;
}

