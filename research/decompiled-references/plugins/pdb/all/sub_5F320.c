__int64 __fastcall sub_5F320(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( !(unsigned __int8)sub_73980(a1 + 112, a2) )
    return 0;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 56LL))(*a2, a1 + 24);
  if ( !(_BYTE)result )
    return 0;
  if ( (*(_BYTE *)(a1 + 89) & 2) != 0 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 56LL))(*a2, a1 + 120);
  return result;
}
