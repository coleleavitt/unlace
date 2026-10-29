int sub_2EE0()
{
  __int64 v0; // rax
  char *v1; // rbx
  __int64 v2; // rax
  unsigned int v3; // r15d
  int *v4; // r12
  __int64 v5; // rax
  int *v6; // rdx
  bool v7; // bp

  v0 = 0;
  v1 = (char *)&unk_10F80;
  qword_151D8 = (__int64)&dword_151C8;
  dword_151C8 = 0;
  qword_151D0 = 0;
  qword_151E0 = (__int64)&dword_151C8;
  for ( qword_151E8 = 0; ; v0 = qword_151E8 )
  {
    v3 = *(_DWORD *)v1;
    if ( !v0 || (v4 = (int *)qword_151E0, v5 = 0, *(_DWORD *)(qword_151E0 + 32) >= v3) )
    {
      v5 = sub_E180(&unk_151C0, v3);
      v4 = v6;
    }
    if ( v4 )
    {
      v7 = v4 == &dword_151C8 || v5 != 0;
      if ( !v7 )
        v7 = v3 < v4[8];
      v2 = operator new(0x28u);
      *(_QWORD *)(v2 + 32) = *(_QWORD *)v1;
      std::_Rb_tree_insert_and_rebalance(v7, v2, v4, &dword_151C8);
      ++qword_151E8;
    }
    v1 += 8;
    if ( v1 == (char *)&unk_10F80 + 4320 )
      break;
  }
  return __cxa_atexit(func, &unk_151C0, &off_14CC0);
}

