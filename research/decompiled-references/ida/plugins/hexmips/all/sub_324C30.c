_QWORD *__fastcall sub_324C30(_QWORD *a1, __int64 a2, int a3)
{
  if ( sub_118880(a3) )
  {
    *a1 = (unsigned __int8)sub_324B90(*(_QWORD *)(a2 + 96), a3);
  }
  else
  {
    *a1 = 0;
    copy_tinfo_t();
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  return a1;
}

