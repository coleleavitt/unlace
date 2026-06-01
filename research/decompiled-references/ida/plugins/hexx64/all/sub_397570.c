__int64 __fastcall sub_397570(
        __int64 a1,
        __int64 a2,
        const char *a3,
        unsigned __int8 a4,
        char a5,
        double a6,
        double a7,
        __m128i a8,
        double a9)
{
  __int64 v13; // rbx
  _QWORD *v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rdx

  if ( !a2 )
    return 0;
  v13 = a2;
  if ( !sub_213140(*(_QWORD *)(a1 + 24), a3, -9) && (*(_BYTE *)(a2 + 26) & 2) == 0 )
  {
    v14 = *(_QWORD **)(a1 + 24);
    v15 = v14[54];
    if ( a4 )
    {
      sub_213D50(v14, a2, a3, 36);
      sub_2B9C00(*(_QWORD *)(a1 + 24));
      if ( a5 )
        goto LABEL_6;
    }
    else
    {
      sub_213D50(v14, a2, a3, 4);
      sub_2B9C00(*(_QWORD *)(a1 + 24));
      if ( a5 )
      {
LABEL_6:
        if ( (*(_BYTE *)(a2 + 25) & 1) != 0 )
          sub_397480(a1, a6, a7, a8, a9);
        sub_38F620(a1, 0);
        v16 = *(_QWORD *)(a1 + 24);
        v13 = 0;
        if ( (unsigned __int64)(0x4EC4EC4EC4EC4EC5LL * ((a2 - v15) >> 3)) < *(_QWORD *)(v16 + 440) )
          v13 = a2 - v15 + *(_QWORD *)(v16 + 432);
LABEL_10:
        sub_33E140(*(_QWORD *)(a1 + 128), 0x6Fu, a1, v13, a3, a4, a6);
        return 1;
      }
    }
    if ( v15 != *(_QWORD *)(*(_QWORD *)(a1 + 24) + 432LL) )
    {
      if ( !under_debugger )
        sub_383060(0xCF0Eu, a6);
      BUG();
    }
    goto LABEL_10;
  }
  return 0;
}

