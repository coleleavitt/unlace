unsigned __int64 sub_6FE0(__int64 a1, __int64 a2, ...)
{
  gcc_va_list va; // [rsp+8h] [rbp-130h] BYREF
  _BYTE v4[72]; // [rsp+20h] [rbp-118h] BYREF
  unsigned __int64 v5; // [rsp+68h] [rbp-D0h]

  v5 = __readfsqword(0x28u);
  if ( (get_flags_ex(a1, 4) & 0x800) == 0 )
  {
    va_start(va, a2);
    qvsnprintf(v4, 64, a2, va);
    append_cmt(a1, v4, 0);
  }
  return v5 - __readfsqword(0x28u);
}

