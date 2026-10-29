__int64 __fastcall sub_16FC0(__int64 a1)
{
  bool v1; // zf
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 8208) == 0;
  qword_21900 = 0;
  qword_21908 = 0;
  if ( v1 )
    result = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))zip_deflate)(a1, sub_16F60, sub_16F90);
  else
    result = zip_inflate(a1, sub_16F60, sub_16F90);
  if ( (_DWORD)result )
  {
    if ( (int)result <= 0 )
    {
      if ( (_DWORD)result == -2 )
        sub_5C90((__int64)"%s: can't write to disk!", (const char *)(a1 + 4096));
      if ( (_DWORD)result == -1 )
        sub_5C90((__int64)"%s: no memory!", (const char *)a1);
    }
    sub_5C90((__int64)"%s: compression error!", (const char *)a1);
  }
  return result;
}

