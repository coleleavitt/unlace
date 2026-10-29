__int64 __fastcall sub_B7A0(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  __int64 result; // rax

  v4 = sub_9D60(a1 + 28, a2);
  if ( !a3 )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 161);
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 120LL))(a1, a2, v4, -1);
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 161);
  return result;
}

