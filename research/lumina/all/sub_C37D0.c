__int64 __fastcall sub_C37D0(
        __int64 a1,
        unsigned int (__fastcall *a2)(__int64),
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 result; // rax

  do
  {
    if ( *(_BYTE *)(a1 + 63) )
      return 0;
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 8) + 112LL))(
               *(_QWORD *)(a1 + 8),
               a4,
               a5,
               10);
    if ( !a2 || (_DWORD)result != 5 )
      return result;
  }
  while ( a2(a3) );
  return 5;
}
