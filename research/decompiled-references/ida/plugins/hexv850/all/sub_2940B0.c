_QWORD *__fastcall sub_2940B0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 tinfo_property; // [rsp+0h] [rbp+0h]
  __int64 vars0a; // [rsp+0h] [rbp+0h]
  unsigned __int64 vars8; // [rsp+8h] [rbp+8h]

  vars8 = __readfsqword(0x28u);
  while ( (get_tinfo_property() & 0xF) == 0xA )
  {
    tinfo_property = get_tinfo_property();
    if ( !(unsigned int)lexcompare_tinfo() )
    {
      clear_tinfo_t();
      break;
    }
    v2 = *a2;
    *a2 = tinfo_property;
    vars0a = v2;
    clear_tinfo_t();
  }
  *a1 = 0;
  copy_tinfo_t();
  return a1;
}

