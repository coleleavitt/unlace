bool __fastcall sub_16FA0(__int64 a1)
{
  __int64 v1; // rbx
  bool result; // al

  v1 = *(_QWORD *)(a1 + 1232);
  if ( v1 == a1 + 1216 )
    return 1;
  while ( 1 )
  {
    result = sub_16EA0(a1, *(unsigned int *)(v1 + 40));
    if ( !result )
      break;
    v1 = std::_Rb_tree_increment();
    if ( v1 == a1 + 1216 )
      return 1;
  }
  return result;
}

