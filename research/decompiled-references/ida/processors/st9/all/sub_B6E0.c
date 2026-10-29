char *__fastcall sub_B6E0(__int64 a1, unsigned __int16 a2)
{
  char *result; // rax

  result = (char *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
                     a1,
                     *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 624) + 56LL) + 8LL * a2),
                     33);
  if ( (*(_BYTE *)(a1 + 721) & 8) == 0 )
  {
    result = sub_AFB0(a1, a2);
    if ( result )
      *(_QWORD *)(*(_QWORD *)(a1 + 616) + 4664LL) = result;
  }
  return result;
}

