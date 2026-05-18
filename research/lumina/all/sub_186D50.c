void *__fastcall sub_186D50(_QWORD *a1, __int64 a2, void *a3, signed __int64 a4)
{
  if ( a1[3] - a2 < a4 )
    sub_185670(a3);
  return memcpy(a3, (const void *)(*a1 + a2), a4);
}
