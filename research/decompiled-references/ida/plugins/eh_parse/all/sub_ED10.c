__int64 __fastcall sub_ED10(__int64 a1, const char *a2, __int64 a3, int a4, __int64 a5, _QWORD *a6)
{
  unsigned int v6; // eax
  const char *i; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 tinfo_property; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v19[9]; // [rsp+20h] [rbp-48h] BYREF

  v19[1] = __readfsqword(0x28u);
  v6 = 0;
  if ( !a2 )
    return 0;
  for ( i = a2; *i == 95; ++i )
    ;
  LOBYTE(v6) = a6 == nullptr || a3 == 0;
  v11 = v6;
  if ( (_BYTE)v6 )
  {
    return 0;
  }
  else if ( a4 > 0 && a5 != 0 && !strcmp(i, "Unwind_SjLj_Register") )
  {
    v12 = 0;
    do
    {
      tinfo_property = 0;
      v15 = 0;
      if ( (unsigned int)(v12 + 1) <= 0x100 )
      {
        tinfo_property = get_tinfo_property(*a6, (unsigned int)(v12 + 25));
        v15 = tinfo_property;
      }
      if ( (get_tinfo_property(v15, 2) & 0xF) == 0xA )
      {
        v19[0] = 0;
        v13 = get_tinfo_property(tinfo_property, 10);
        v14 = *(_QWORD *)(a5 + 8 * v12);
        v19[0] = v13;
        sub_13670(a1, v14, v19);
        clear_tinfo_t(v19);
      }
      ++v12;
      clear_tinfo_t(&tinfo_property);
    }
    while ( a4 > (int)v12 );
    return 1;
  }
  return v11;
}

