__int64 __fastcall sub_13300(
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
  int v17; // r9d
  _QWORD *v18; // [rsp+8h] [rbp-40h]

  v11 = dword_23500;
  if ( dword_23500 == -1 )
  {
    v11 = (unsigned __int8)qgetenv();
    dword_23500 = (unsigned __int8)v11;
  }
  if ( !v11
    && (sub_153A0(a1, (unsigned int)"dbg_bin_search %a..%a\n", a3, a4, (_DWORD)a5, a6), a3 < a4)
    && a5[1]
    && *(_QWORD *)(a1 + 464) )
  {
    v18 = (_QWORD *)operator new(0x1098u);
    sub_130C0((__int64)v18, a2, a1, a5, a6, (__int64)a7);
    if ( (a6 & 0x10) != 0 )
    {
      v14 = sub_11840;
      v18[530] = 0;
      *v18 = &off_202F0;
    }
    else
    {
      v14 = sub_11CA0;
      v18[530] = 4096;
      *v18 = &off_202C0;
    }
    v12 = v14(v18, a3, a4);
    if ( v12 == -7 && v18[522] != -1 )
    {
      sub_153A0(a1, (unsigned int)"dbg_bin_search failed to read memory at %a\n", v18[522], v15, v16, v17);
      if ( a7 )
      {
        if ( (unsigned __int64)a7[1] <= 1 )
          sub_AFF0(a7);
      }
    }
  }
  else
  {
    return 0;
  }
  return v12;
}

