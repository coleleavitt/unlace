_QWORD *__fastcall sub_C09E0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  bool v3; // zf
  _QWORD *v4; // rdx
  _QWORD *result; // rax

  v2 = sub_C07E0(a1, a2);
  v3 = a1 + 8 == (_QWORD)v2;
  v4 = v2 + 7;
  result = nullptr;
  if ( !v3 )
    return v4;
  return result;
}
