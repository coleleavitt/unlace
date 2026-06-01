_QWORD *__fastcall sub_329F0(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  const char *v3; // rsi
  const char *(__fastcall *v4)(__int64); // rax

  if ( (debug & 0x40000) != 0 )
  {
    v3 = "nullptr";
    if ( a3 )
    {
      v4 = *(const char *(__fastcall **)(__int64))(*a3 + 16LL);
      if ( v4 == sub_304B0 )
      {
        v3 = nptr;
        if ( a3[3] )
          v3 = (const char *)a3[2];
      }
      else
      {
        v3 = (const char *)((__int64 (__fastcall *)(_QWORD *, _QWORD))v4)(a3, 0);
      }
    }
    sub_111A0((__int64)"DEXSIP: create_item_iterator(sf=%s)\n", v3);
  }
  *a1 = 0;
  return a1;
}

