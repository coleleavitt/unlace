__int64 __fastcall sub_3FD1A0(__int64 a1, int a2, int a3, double a4)
{
  unsigned __int8 v5; // r14
  unsigned int v6; // ebp
  __int64 v7; // r12
  int dtype_size; // eax
  __int64 v9; // rax
  int v11; // [rsp+Ch] [rbp-3Ch]

  if ( (*(_DWORD *)(a1 + 52) & 0xC00) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 52) & 0xC00) != 0xC00 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC89Eu, a4);
      BUG();
    }
    v5 = 2;
  }
  else
  {
    v5 = *(_BYTE *)(a1 + 69);
  }
  v6 = sub_3FB520(a1, 2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL), a4);
  v7 = sub_3F9450(a1, v5, *(_BYTE *)(a1 + 69), v6, a2, a4);
  v11 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL);
  dtype_size = get_dtype_size();
  sub_3F68B0(a1, v6, dtype_size, v11);
  v9 = sub_3F9450(a1, v5, *(_BYTE *)(a1 + 69), v6, a3, a4);
  if ( v7 && v9 )
  {
    *(_DWORD *)(v7 + 4) |= 0x10000u;
    *(_DWORD *)(v9 + 4) |= 0x10000u;
  }
  return sub_3F9F40(a1, a1 + 144, v6, a4);
}

