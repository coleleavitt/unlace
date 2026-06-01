__int64 __fastcall PyW_ShowCbErr(const char *a1)
{
  unsigned int Error; // ebx
  const char *v2; // rdx

  if ( !(_BYTE)byte_24748 && __cxa_guard_acquire(&byte_24748) )
  {
    qword_24750 = 0;
    xmmword_24758 = 0;
    __cxa_atexit((void (*)(void *))sub_6880, &qword_24750, &lpdso_handle);
    __cxa_guard_release(&byte_24748);
  }
  Error = PyW_GetError(&qword_24750, 1);
  if ( (_BYTE)Error )
  {
    v2 = src;
    if ( (_QWORD)xmmword_24758 )
      v2 = (const char *)qword_24750;
    sub_7F30((__int64)"IDAPython: Error while calling Python callback <%s>:\n%s", a1, v2);
  }
  return Error;
}

