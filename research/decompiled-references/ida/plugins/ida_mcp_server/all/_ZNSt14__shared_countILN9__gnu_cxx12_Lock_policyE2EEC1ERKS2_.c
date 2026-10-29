// Alternative name is '_ZNSt14__shared_countILN9__gnu_cxx12_Lock_policyE2EEC2ERKS2_'
__int64 __fastcall std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax

  result = *a2;
  *a1 = *a2;
  if ( result )
  {
    if ( _libc_single_threaded )
      ++*(_DWORD *)(result + 8);
    else
      _InterlockedAdd((volatile signed __int32 *)(result + 8), 1u);
  }
  return result;
}

