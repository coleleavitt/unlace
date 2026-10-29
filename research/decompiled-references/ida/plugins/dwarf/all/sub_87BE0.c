const char *__fastcall sub_87BE0(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdx
  const char *result; // rax

  v2 = sub_878F0(a1);
  if ( (unsigned __int64)a2 >= v2[1] )
    return nullptr;
  v3 = (_QWORD *)(*v2 + 24LL * a2);
  result = src;
  if ( v3[1] )
    return (const char *)*v3;
  return result;
}

