__int64 __fastcall sub_1DFC0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rsi
  const char *v9; // rax

  if ( *(_BYTE *)(sub_135E0() + 792) )
  {
    v7 = dword_7F75C;
    v8 = dword_7F75C;
    if ( a3 <= dword_7F75C )
      v8 = a3;
    sub_19E80();
    if ( v7 < a3 )
      sub_11340((__int64)"...\n", v8);
  }
  v5 = sub_5D7A0(*(_QWORD *)(a1 + 8), a2, a3);
  result = 1;
  if ( v5 < a3 )
  {
    if ( (unsigned int)sub_5D5C0(*(_QWORD *)(a1 + 8)) == 62 )
    {
      *(_BYTE *)(a1 + 1) = 1;
      return 0;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 1) )
      {
        v9 = (const char *)sub_5D5D0(*(_QWORD *)(a1 + 8));
        sub_11270((__int64)"ADB error: %s", v9);
      }
      return 0;
    }
  }
  return result;
}

