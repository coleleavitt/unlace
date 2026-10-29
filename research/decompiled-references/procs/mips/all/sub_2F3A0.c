_BYTE *__fastcall sub_2F3A0(__int64 a1, int a2)
{
  _BYTE *result; // rax
  _BYTE *v3; // rax

  result = nullptr;
  if ( a2 <= 64 )
  {
    v3 = *(_BYTE **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * a2);
    return &v3[*v3 == 36];
  }
  return result;
}
