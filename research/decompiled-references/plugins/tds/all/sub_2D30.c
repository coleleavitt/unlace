void __fastcall __noreturn sub_2D30(__int64 a1)
{
  const char *errdesc; // rax

  errdesc = (const char *)get_errdesc(a1, 0xFFFFFFFFLL);
  sub_2C80((__int64)"%s", errdesc);
}
