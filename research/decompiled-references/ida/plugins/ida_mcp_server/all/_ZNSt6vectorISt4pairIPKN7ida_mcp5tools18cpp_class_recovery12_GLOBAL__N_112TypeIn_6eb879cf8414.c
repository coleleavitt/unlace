// Alternative name is '_ZNSt6vectorISt4pairIPKN7ida_mcp5tools18cpp_class_recovery12_GLOBAL__N_112TypeInfoNodeENS4_10VTableInfoEESaIS9_EED1Ev'
void __fastcall std::vector<std::pair<ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::TypeInfoNode const*,ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::VTableInfo>>::~vector(
        __int64 a1)
{
  _QWORD *v2; // r12
  _QWORD *i; // rbx
  void *v4; // rdi

  v2 = *(_QWORD **)(a1 + 8);
  for ( i = *(_QWORD **)a1; v2 != i; i += 7 )
  {
    v4 = (void *)i[4];
    if ( v4 )
      operator delete(v4, i[6] - (_QWORD)v4);
  }
  if ( *(_QWORD *)a1 )
    operator delete(*(void **)a1, *(_QWORD *)(a1 + 16) - *(_QWORD *)a1);
}

