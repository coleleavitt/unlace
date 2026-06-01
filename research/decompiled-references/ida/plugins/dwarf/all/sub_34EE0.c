__int64 __fastcall sub_34EE0(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 *i; // r12
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rbp

  v2 = (__int64 *)a1[13];
  result = a1[14];
  for ( i = &v2[result]; i != v2; result = sub_34EE0(v5) )
    v5 = *v2++;
  v6 = a1[18];
  v7 = *(_QWORD *)(v6 + 96);
  v8 = v6 + 80;
  if ( v7 != v8 )
  {
    do
    {
      sub_34D90(*(_QWORD *)(v7 + 48));
      result = std::_Rb_tree_increment(v7);
      v7 = result;
    }
    while ( v8 != result );
  }
  return result;
}

