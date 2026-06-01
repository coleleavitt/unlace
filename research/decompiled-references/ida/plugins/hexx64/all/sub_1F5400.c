void __fastcall sub_1F5400(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rax

  if ( a2 + 8 != *(_QWORD *)(a2 + 24) )
  {
    do
    {
      v4 = std::_Rb_tree_decrement();
      sub_1F5300(a1, *(_DWORD *)(v4 + 32), a3, a4);
    }
    while ( std::_Rb_tree_decrement() != *(_QWORD *)(a2 + 24) );
  }
}

