__int64 __fastcall sub_4FA0(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 120LL))(
             a1,
             a2,
             *(_QWORD *)(a2 + 16) + 16LL * a1[28]);
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 193);
  return result;
}

