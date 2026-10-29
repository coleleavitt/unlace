void __fastcall __noreturn sub_6938(__int64 a1, __int64 a2, int a3)
{
  void *exception; // rbx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d

  exception = __cxa_allocate_exception(0x18u);
  sub_281C0((_DWORD)exception, (unsigned int)"Failed reading %d bytes from signature", a3, v4, v5, v6);
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'signature_read_exception_t, sub_22560);
}

