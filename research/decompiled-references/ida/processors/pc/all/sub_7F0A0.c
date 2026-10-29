void *__fastcall sub_7F0A0(__int64 a1, __int64 a2)
{
  void *v2; // rbp

  v2 = 0;
  if ( sub_7EF60(a1, a2) )
  {
    v2 = sub_7DD90(a1, *(unsigned __int8 *)(a2 + 5), 0);
    if ( v2 )
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, v2, 0);
  }
  return v2;
}
