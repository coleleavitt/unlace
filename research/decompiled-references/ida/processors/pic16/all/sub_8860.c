__int64 __fastcall sub_8860(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 result; // rax

  result = sub_86A0(a1, a2);
  if ( !(_DWORD)result )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 344LL))(a2, a3);
  return result;
}

