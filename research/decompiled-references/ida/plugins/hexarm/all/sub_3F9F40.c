__int64 __fastcall sub_3F9F40(__int64 a1, __int64 a2, int a3, double a4)
{
  __int64 v5; // rbp
  __int64 v7; // rdx
  _DWORD *v8; // rdi
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, int); // rax
  int v11; // eax
  unsigned __int8 v12; // dl
  __int16 v14; // ax
  __int64 dtype_size; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, int); // rax
  int v19; // eax
  __int64 v20; // [rsp-14h] [rbp-40h]

  if ( (*(_BYTE *)(a1 + 52) & 0xA0) == 0 )
    return 0;
  v5 = a3;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8
    || *(_BYTE *)(a1 + 105) != 4
    || (v14 = *(_WORD *)(a1 + 48), (unsigned __int16)(v14 - 339) > 3u) && (unsigned __int16)(v14 - 412) > 3u )
  {
    sub_3F9D00(a1, (unsigned __int8 *)a2, a3, 1, 1, a4);
  }
  else
  {
    sub_3EE110(a1, a1 + 64, a4);
    dtype_size = get_dtype_size();
    sub_3F8AD0(
      a1,
      (unsigned __int8 *)(a1 + 104),
      2u,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL) & (*(_QWORD *)(a1 + 72) * dtype_size),
      a3);
    v16 = *(_QWORD *)(a1 + 832);
    v17 = *(unsigned __int16 *)(a1 + 110);
    v18 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v16 + 168LL);
    if ( v18 == sub_3EA010 )
      v19 = sub_3EA010(v16, v17);
    else
      v19 = v18(v16, v17);
    sub_3F6E70(a1, 0xCu, 2u, v19, v5, v5, a4, 0, 1);
    v7 = v20;
  }
  v8 = *(_DWORD **)(a1 + 832);
  v9 = *(unsigned __int16 *)(a2 + 6);
  v10 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v8 + 168LL);
  if ( v10 == sub_3EA010 )
  {
    v11 = sub_3EA010((__int64)v8, v9);
  }
  else
  {
    v11 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64))v10)(v8, v9, v7);
    v8 = *(_DWORD **)(a1 + 832);
  }
  v12 = 2;
  if ( v8[21] == 8 )
    v12 = 7;
  return sub_3F6E70(a1, 4u, v12, v5, 0x3BEA45E214ADDC55LL, v11, a4, 0, 1);
}

