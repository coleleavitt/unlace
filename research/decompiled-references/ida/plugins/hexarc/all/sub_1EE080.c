void __fastcall sub_1EE080(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( a2 + 8 != *(_QWORD *)(a2 + 24) )
  {
    do
    {
      v2 = std::_Rb_tree_decrement();
      sub_1EDF80(a1, *(_DWORD *)(v2 + 32));
    }
    while ( std::_Rb_tree_decrement() != *(_QWORD *)(a2 + 24) );
  }
}

