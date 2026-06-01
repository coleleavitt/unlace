__int64 file_printer_t::print(file_printer_t *this, unsigned int a2, const char *a3, ...)
{
  __int64 (__fastcall *hexdsp)(__int64, file_printer_t *, _QWORD, const char *, __va_list_tag *); // rax
  gcc_va_list va; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-D0h]

  va_start(va, a3);
  v7 = __readfsqword(0x28u);
  hexdsp = (__int64 (__fastcall *)(__int64, file_printer_t *, _QWORD, const char *, __va_list_tag *))get_hexdsp();
  return hexdsp(156, this, a2, a3, va);
}

