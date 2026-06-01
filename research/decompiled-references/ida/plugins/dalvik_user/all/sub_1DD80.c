__int64 __fastcall sub_1DD80(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  const char *v7; // rax

  *(_BYTE *)(a1 + 1) = 0;
  if ( sub_5D6A0(*(_QWORD *)(a1 + 8), a2, a3, 10000) < a3 )
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
        v7 = (const char *)sub_5D5D0(*(_QWORD *)(a1 + 8));
        sub_11270((__int64)"ADB error: %s", v7);
      }
      return 0;
    }
  }
  else
  {
    if ( *(_BYTE *)(sub_135E0() + 792) )
    {
      v5 = dword_7F75C;
      v6 = dword_7F75C;
      if ( a3 <= dword_7F75C )
        v6 = a3;
      sub_19E80();
      if ( v5 < a3 )
        sub_11340((__int64)"...\n", v6);
    }
    return 1;
  }
}

