void __fastcall sub_2FAC0(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  char v12; // [rsp+0h] [rbp-38h]

  v8 = a5;
  v9 = a6;
  if ( a5 == -1 )
    v8 = qlseek();
  if ( v9 == -1 )
    v9 = qlsize();
  v10 = v9 - v8;
  if ( ((v10 | v8) & 0x8000000000000000LL) != 0LL )
  {
    LODWORD(v11) = 0;
LABEL_12:
    sub_27E60(
      (__int64)"%s is incorrect, maximum possible value is %u%s",
      a4,
      (unsigned int)v11,
      (__int64)&unk_71F21,
      a5,
      a6,
      v12);
  }
  if ( a2 && a3 && !is_mul_ok(a2, a3) || v10 < a3 * a2 )
  {
    v11 = v10 / a3;
    goto LABEL_12;
  }
}

