__int64 __fastcall sub_6E000(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        int a6,
        __int64 *a7)
{
  int v11; // eax
  unsigned int v12; // ebx
  __int64 (__fastcall *v14)(_QWORD *, unsigned __int64, unsigned __int64); // rax
  int v15; // ecx
  int v16; // r8d
  _QWORD *v17; // [rsp+8h] [rbp-40h]

  v11 = dword_9A890;
  if ( dword_9A890 == -1 )
  {
    v11 = (unsigned __int8)qgetenv();
    dword_9A890 = (unsigned __int8)v11;
  }
  if ( !v11
    && (sub_70460(a1, (unsigned int)"dbg_bin_search %a..%a\n", a3, a4, (_DWORD)a5), a3 < a4)
    && a5[1]
    && *(_QWORD *)(a1 + 464) )
  {
    v17 = (_QWORD *)operator new(0x1098u);
    sub_6DDC0((__int64)v17, a2, a1, a5, a6, (__int64)a7);
    if ( (a6 & 0x10) != 0 )
    {
      v14 = sub_6C600;
      v17[530] = 0;
      *v17 = &off_98AD0;
    }
    else
    {
      v14 = sub_6CA60;
      v17[530] = 4096;
      *v17 = &off_98AA0;
    }
    v12 = v14(v17, a3, a4);
    if ( v12 == -7 && v17[522] != -1 )
    {
      sub_70460(a1, (unsigned int)"dbg_bin_search failed to read memory at %a\n", v17[522], v15, v16);
      if ( a7 )
      {
        if ( (unsigned __int64)a7[1] <= 1 )
          sub_15ED0(a7);
      }
    }
  }
  else
  {
    return 0;
  }
  return v12;
}

