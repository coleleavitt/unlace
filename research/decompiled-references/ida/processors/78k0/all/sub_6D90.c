__int64 __fastcall sub_6D90(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 result; // rax

  v2 = *(unsigned __int16 *)(a2 + 16);
  v3 = map_code_ea();
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 120LL))(a1, a2, v3, v2);
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 160);
  return result;
}

