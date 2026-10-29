// Alternative name is '_ZNSt6vectorIN7ida_mcp5tools18cpp_class_recovery12_GLOBAL__N_112TypeInfoNodeESaIS4_EED1Ev'
void __fastcall std::vector<ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::TypeInfoNode>::~vector(
        __int64 a1)
{
  _QWORD *v2; // r12
  _QWORD *i; // rbx
  void *v4; // rdi

  v2 = *(_QWORD **)(a1 + 8);
  for ( i = *(_QWORD **)a1; v2 != i; i += 11 )
  {
    v4 = (void *)i[8];
    if ( v4 )
      operator delete(v4, i[10] - (_QWORD)v4);
    if ( i[5] )
    {
      i[6] = 0;
      qfree();
    }
    if ( i[2] )
    {
      i[3] = 0;
      qfree();
    }
  }
  if ( *(_QWORD *)a1 )
    operator delete(*(void **)a1, *(_QWORD *)(a1 + 16) - *(_QWORD *)a1);
}

