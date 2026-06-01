unsigned __int64 __fastcall sub_81450(__int64 *a1)
{
  _DWORD *exception; // rbx
  __int64 v2; // rbp
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v2 = a1[5];
  if ( !(unsigned __int8)append_argloc() )
  {
    exception = __cxa_allocate_exception(0x30u);
    *(_QWORD *)exception = off_4D6390;
    exception[2] = -22;
    *((_QWORD *)exception + 2) = v2;
    sub_813C0((__int64)(exception + 6), "argloc too complex to serialize");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_79F00);
  }
  sub_7F1A0(a1, 0, 0);
  return v4 - __readfsqword(0x28u);
}

