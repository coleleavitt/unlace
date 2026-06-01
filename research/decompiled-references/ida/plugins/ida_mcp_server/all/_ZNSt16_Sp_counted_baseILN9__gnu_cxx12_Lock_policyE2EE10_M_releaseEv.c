__int64 __fastcall std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(volatile signed __int32 *a1)
{
  __int64 result; // rax
  __int64 v2; // rax

  if ( *((_QWORD *)a1 + 1) == 0x100000001LL )
  {
    v2 = *(_QWORD *)a1;
    *((_QWORD *)a1 + 1) = 0;
    (*(void (**)(void))(v2 + 16))();
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 24LL))(a1);
  }
  else
  {
    if ( _libc_single_threaded )
    {
      result = *((unsigned int *)a1 + 2);
      *((_DWORD *)a1 + 2) = result - 1;
    }
    else
    {
      result = (unsigned int)_InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF);
    }
    if ( (_DWORD)result == 1 )
      return std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold();
  }
  return result;
}

