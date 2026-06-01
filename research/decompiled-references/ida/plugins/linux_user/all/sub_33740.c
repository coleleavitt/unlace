__int64 __fastcall sub_33740(_QWORD *a1, double a2)
{
  _QWORD *v2; // r12
  __int64 v4; // rbx
  __int64 v5; // rbx
  void *v6; // rdi

  v2 = a1 + 65;
  v4 = a1[67];
  if ( (_QWORD *)v4 != a1 + 65 )
  {
    do
    {
      while ( (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, _QWORD, _QWORD))(*a1 + 296LL))(
                a1,
                *(_QWORD *)(v4 + 40),
                v4 + 48,
                *(unsigned __int8 *)(v4 + 56),
                0) )
      {
        v4 = std::_Rb_tree_increment();
        if ( (_QWORD *)v4 == v2 )
          goto LABEL_6;
      }
      sub_B0B0((__int64)"Failed to restore broken breakpoint at 0x%a\n", a2);
      v4 = std::_Rb_tree_increment();
    }
    while ( (_QWORD *)v4 != v2 );
  }
LABEL_6:
  v5 = a1[66];
  while ( v5 )
  {
    sub_30F80(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x40u);
  }
  a1[66] = 0;
  a1[67] = v2;
  a1[68] = v2;
  a1[69] = 0;
  return 1;
}

