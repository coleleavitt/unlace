void __fastcall __noreturn sub_1C8A0(__int64 a1, double a2)
{
  __int64 v2; // rax
  const char *v3; // rdx

  v2 = *(unsigned __int16 *)(a1 + 24);
  v3 = (const char *)&unk_50790;
  if ( (unsigned __int16)v2 <= 0x6E5u )
    v3 = (const char *)*(&off_6A120 + 2 * v2);
  sub_1B460((__int64)"%a(%s): internal error in %s", a2, *(const char **)(a1 + 16), v3);
}
