unsigned __int64 __fastcall sub_4FDF0(__int64 a1)
{
  _QWORD *i; // rbx
  unsigned __int64 result; // rax

  for ( i = *(_QWORD **)(a1 + 16); i; i = (_QWORD *)*i )
    result = sub_4F9D0(i[1], (__int64)(i + 2));
  return result;
}

