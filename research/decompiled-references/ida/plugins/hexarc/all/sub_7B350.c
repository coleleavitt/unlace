unsigned __int64 __fastcall sub_7B350(__int64 *a1)
{
  _DWORD *exception; // rbx
  __int64 v2; // rbp
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v2 = a1[5];
  if ( !(unsigned __int8)append_argloc() )
  {
    exception = __cxa_allocate_exception(0x30u);
    *(_QWORD *)exception = off_4A8510;
    exception[2] = -22;
    *((_QWORD *)exception + 2) = v2;
    sub_7B2C0((__int64)(exception + 6), "argloc too complex to serialize");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_73F40);
  }
  sub_79160(a1, 0, 0);
  return v4 - __readfsqword(0x28u);
}

