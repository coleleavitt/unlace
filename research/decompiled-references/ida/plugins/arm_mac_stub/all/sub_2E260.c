__int64 __fastcall sub_2E260(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        int a6,
        double a7,
        double a8,
        __int64 *a9)
{
  int v13; // eax
  unsigned int v14; // ebx
  __int64 (__fastcall *v16)(__int64 *, unsigned __int64, unsigned __int64, double, double); // rax
  __int64 *v17; // [rsp+8h] [rbp-40h]

  v13 = dword_48528;
  if ( dword_48528 == -1 )
  {
    v13 = (unsigned __int8)qgetenv();
    dword_48528 = (unsigned __int8)v13;
  }
  if ( !v13 && (sub_1E060(a1, (__int64)"dbg_bin_search %a..%a\n", a7, a8), a3 < a4) && a5[1] && *(_QWORD *)(a1 + 464) )
  {
    v17 = (__int64 *)operator new(0x1098u);
    sub_2E020((__int64)v17, a2, a1, a5, a6, (__int64)a9);
    if ( (a6 & 0x10) != 0 )
    {
      v16 = sub_2C860;
      v17[530] = 0;
      *v17 = (__int64)&off_45F30;
    }
    else
    {
      v16 = sub_2CCC0;
      v17[530] = 4096;
      *v17 = (__int64)&off_45F00;
    }
    v14 = v16(v17, a3, a4, a7, a8);
    if ( v14 == -7 && v17[522] != -1 )
    {
      sub_1E060(a1, (__int64)"dbg_bin_search failed to read memory at %a\n", a7);
      if ( a9 )
      {
        if ( (unsigned __int64)a9[1] <= 1 )
          sub_ED40(a9);
      }
    }
  }
  else
  {
    return 0;
  }
  return v14;
}

