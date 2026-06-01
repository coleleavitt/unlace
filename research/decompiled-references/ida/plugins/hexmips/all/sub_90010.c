__int64 __fastcall sub_90010(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = sub_60580(a1, a2);
  if ( !(_BYTE)result )
    return sub_3136F0(a1 + 2, a2 + 2);
  return result;
}

