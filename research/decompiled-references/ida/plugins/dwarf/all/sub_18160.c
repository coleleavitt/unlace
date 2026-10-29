bool (__fastcall *__fastcall sub_18160(__int64 a1, bool (__fastcall *a2)(__int64 a1, int a2)))(__int64 a1, int a2)
{
  bool (__fastcall *result)(__int64, int); // rax

  result = sub_12FB0;
  if ( !a2 )
    a2 = sub_12FB0;
  *(_QWORD *)(a1 + 496) = a2;
  return result;
}

