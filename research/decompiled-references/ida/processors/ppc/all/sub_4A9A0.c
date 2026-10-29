unsigned __int64 __fastcall sub_4A9A0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // r12d
  int v4; // ebp
  unsigned __int64 result; // rax

  v3 = a3;
  v4 = sub_4A420(a1, a2, a3);
  result = sub_484A0(a2, v4);
  if ( v4 != 3 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 344LL))(a2, v3);
  return result;
}

