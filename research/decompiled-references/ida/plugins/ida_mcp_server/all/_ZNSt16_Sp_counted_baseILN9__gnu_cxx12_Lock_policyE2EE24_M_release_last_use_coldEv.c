__int64 __fastcall std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(
        volatile signed __int32 *a1)
{
  __int64 result; // rax

  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
  if ( _libc_single_threaded )
  {
    result = *((unsigned int *)a1 + 3);
    *((_DWORD *)a1 + 3) = result - 1;
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd(a1 + 3, 0xFFFFFFFF);
  }
  if ( (_DWORD)result == 1 )
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 24LL))(a1);
  return result;
}

