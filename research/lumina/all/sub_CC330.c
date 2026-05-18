__int64 __fastcall sub_CC330(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 72);
  if ( !*(_QWORD *)v3
    || (result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 80LL))(v3, 21, a2),
        (_DWORD)result == 12)
    || !(_DWORD)result )
  {
    result = 0;
    if ( !*(_BYTE *)(a1 + 11) )
    {
      result = *(unsigned __int8 *)(a1 + 14);
      if ( *(_BYTE *)(a1 + 14) )
        return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 40LL))(
                 *(_QWORD *)(a1 + 72),
                 *(unsigned __int8 *)(a1 + 14));
    }
  }
  return result;
}
