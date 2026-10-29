void __fastcall sub_39E0(__int64 a1, unsigned int a2, unsigned __int64 a3, const char *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx

  v8 = a5;
  if ( a5 == -1 )
    v8 = qlseek(a1, 0, 1);
  if ( a6 == -1 )
    a6 = qlsize();
  v10 = a6 - v8;
  if ( ((v10 | v8) & 0x8000000000000000LL) != 0LL )
  {
    LODWORD(v11) = 0;
LABEL_12:
    sub_3930((__int64)"%s is incorrect, maximum possible value is %u%s", a4, v11, "");
  }
  if ( a2 && a3 && !is_mul_ok(a2, a3) || v10 < a3 * a2 )
  {
    v11 = v10 / a3;
    goto LABEL_12;
  }
}
