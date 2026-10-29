unsigned __int64 sub_E8800(__int64 a1, char a2, _BYTE *a3, ...)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r14
  unsigned int v9; // r13d
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  gcc_va_list va; // [rsp+0h] [rbp-F8h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-E0h]
  __int128 v15; // [rsp+50h] [rbp-A8h]

  va_start(va, a3);
  *(double *)&v15 = va_arg(va, double);
  va_end(va);
  v14 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 291) == 2 )
  {
    v5 = *(_QWORD *)a1;
    va_start(va, a3);
    v6 = sub_DBC60(v5, a3, (__int64)va, *(double *)&v15);
    v7 = *(_QWORD *)(a1 + 16);
    v8 = v6;
    v9 = *(_DWORD *)(v7 + 144);
    v10 = sub_E1710(v7, 184, v9, *(_DWORD *)(a1 + 304), 0);
    sub_DCC50(v7, v10, v8, 4294967290LL, v11, v12);
    if ( a2 )
      *(_DWORD *)(a1 + 304) = v9;
  }
  return __readfsqword(0x28u) ^ v14;
}
