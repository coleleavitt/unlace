__int64 __fastcall sub_8DB50(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = sub_5E200(a1, a2);
  if ( !(_BYTE)result )
    return sub_3110F0(a1 + 2, a2 + 2);
  return result;
}

