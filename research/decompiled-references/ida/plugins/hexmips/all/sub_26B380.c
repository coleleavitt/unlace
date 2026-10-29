_BYTE *__fastcall sub_26B380(_BYTE *a1, _QWORD *a2, __int64 a3)
{
  sub_327340(a1, *(_QWORD *)(*a2 + 112LL), a3);
  if ( !*a1 && *(int *)(a2[3] + 8LL) <= 69 && a3 == get_tinfo_size() )
    copy_tinfo_t();
  return a1;
}

