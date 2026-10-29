__int64 __fastcall sub_4C8B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, _DWORD *a6, _QWORD *a7)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v12; // rcx
  __int64 v14; // [rsp+8h] [rbp-40h]

  v7 = a1 + 96;
  v8 = *(_QWORD *)(a1 + 112);
  if ( v7 == v8 )
    return 28;
  while ( 1 )
  {
    v12 = *(_QWORD *)(v8 + 56);
    if ( a2 == *(_QWORD *)(v12 + 820) )
      break;
    v8 = std::_Rb_tree_increment();
    if ( v7 == v8 )
      return 28;
  }
  if ( v7 == v8 )
    return 28;
  if ( a3 )
  {
    v14 = *(_QWORD *)(v8 + 56);
    qstrncpy();
    v12 = v14;
  }
  if ( a5 )
  {
    *a5 = *(_DWORD *)(v12 + 812);
    *a6 = *(_DWORD *)(v12 + 816);
  }
  if ( a7 )
    *a7 = v12;
  return 0;
}

