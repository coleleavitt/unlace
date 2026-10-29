unsigned __int64 sub_DBD10(__int64 a1, _BYTE *a2, ...)
{
  double v2; // xmm0_8
  __int64 v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v6; // rsi
  _QWORD *v7; // [rsp+8h] [rbp-F0h]
  gcc_va_list va; // [rsp+10h] [rbp-E8h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-D0h]
  __int128 v10; // [rsp+60h] [rbp-98h]

  va_start(va, a2);
  *(double *)&v10 = va_arg(va, double);
  v2 = *(double *)&v10;
  va_end(va);
  va_start(va, a2);
  v9 = __readfsqword(0x28u);
  v3 = *(_QWORD *)a1;
  *(_DWORD *)(v3 + 84) = -2;
  v4 = (_QWORD *)sub_DBC60(v3, a2, (__int64)va, v2);
  if ( *(int *)(v3 + 84) < -1 )
    *(_DWORD *)(v3 + 84) = -1;
  if ( *(_BYTE *)(v3 + 107) )
  {
    if ( v4 )
      sub_C9250(v3, v4);
    if ( *(_BYTE *)(v3 + 103) )
    {
      ++*(_DWORD *)(a1 + 48);
      *(_DWORD *)(a1 + 24) = 7;
    }
  }
  else
  {
    v6 = *(_QWORD **)(a1 + 8);
    ++*(_DWORD *)(a1 + 48);
    if ( v6 )
    {
      v7 = v4;
      sub_C9250(v3, v6);
      v4 = v7;
    }
    *(_QWORD *)(a1 + 8) = v4;
    *(_DWORD *)(a1 + 24) = 1;
    *(_QWORD *)(a1 + 392) = 0;
  }
  return __readfsqword(0x28u) ^ v9;
}
