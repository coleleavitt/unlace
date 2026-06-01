_QWORD *__fastcall sub_283C00(_QWORD *a1, _QWORD *a2, __int64 a3, double a4)
{
  _QWORD *result; // rax
  int v5; // ecx
  _QWORD *v6; // rcx

  result = a1;
  v5 = *(_DWORD *)(*(_QWORD *)(a2[2] + 8LL * a2[3] - 8) + 8LL);
  if ( v5 != 71 && v5 != 83 )
  {
    if ( !under_debugger )
      sub_383060(0xC5A8u, a4);
LABEL_9:
    BUG();
  }
  v6 = (_QWORD *)(a2[5] + 16LL * a2[6] - 16);
  if ( a3 != v6[1] + 16LL )
  {
    if ( !under_debugger )
      sub_383060(0xCDF5u, a4);
    goto LABEL_9;
  }
  *a1 = *v6;
  a1[1] = v6[1];
  return result;
}

