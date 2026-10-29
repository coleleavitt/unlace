__int64 __fastcall sub_39EDB0(_DWORD *a1)
{
  if ( a1[8] == 2 )
  {
    if ( get_func() )
    {
      func_tail_iterator_set();
      return 1;
    }
  }
  else if ( (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 56LL))(a1) != -1 )
  {
    (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 64LL))(a1);
    rangeset_t_add();
    return 1;
  }
  return 0;
}

