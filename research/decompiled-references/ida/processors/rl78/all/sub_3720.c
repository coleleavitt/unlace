int sub_3720()
{
  __int64 v0; // rax
  char *v1; // rbx
  __int64 v2; // r12
  __int64 v3; // rdx

  v0 = 0;
  v1 = (char *)qword_A6E0;
  qword_E3F8 = (__int64)&dword_E3E8;
  dword_E3E8 = 0;
  qword_E3F0 = 0;
  qword_E400 = (__int64)&dword_E3E8;
  for ( qword_E408 = 0; ; v0 = qword_E408 )
  {
    if ( !v0 || (v2 = qword_E400, *(_WORD *)(qword_E400 + 32) >= *(_WORD *)v1) )
    {
      sub_3940(&qword_E3E0, *(unsigned __int16 *)v1);
      v2 = v3;
    }
    if ( v2 )
    {
      *(_DWORD *)(operator new(0x28u) + 32) = *(_DWORD *)v1;
      std::_Rb_tree_insert_and_rebalance();
      ++qword_E408;
    }
    v1 += 4;
    if ( v1 == byte_A820 )
      break;
  }
  return __cxa_atexit(func, &qword_E3E0, &off_D320);
}

