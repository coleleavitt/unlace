__int64 __fastcall sub_3BABF0(double a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rsi
  __int64 result; // rax

  v4 = (_QWORD *)sub_38E200(*(_QWORD *)(a3 + 32), a3 + 80, a1);
  result = 0;
  if ( v4 )
    return (unsigned __int8)sub_3962F0(a3, v4, a1);
  return result;
}

