_QWORD *__fastcall sub_100230(unsigned __int64 *a1, __int64 a2)
{
  _QWORD *v2; // rax

  v2 = sub_FF5E0(a1, a2);
  if ( v2 == (_QWORD *)*a1 )
    return nullptr;
  else
    return v2 + 3;
}

