__int64 __fastcall sub_C7F20(__int64 a1, unsigned int a2, unsigned int a3, char *a4, __int64 a5)
{
  __int64 result; // rax
  _BOOL4 v8; // r14d
  _DWORD *v9; // r8

  *(_DWORD *)a5 = _byteswap_ulong(a2);
  *(_DWORD *)(a5 + 4) = _byteswap_ulong(a3);
  result = *(unsigned int *)(a1 + 124);
  if ( (_DWORD)result )
  {
    *(_OWORD *)(a5 + 8) = 0;
  }
  else
  {
    *(_QWORD *)(a5 + 8) = *(_QWORD *)(a1 + 104);
    v8 = *(_BYTE *)(a1 + 85) == 0;
    sub_C3700(v8, (char *)a5, 8, (int *)(a1 + 96), (_DWORD *)(a1 + 96));
    sub_C3700(v8, a4, *(_DWORD *)(a1 + 56), (int *)(a1 + 96), v9);
    *(_DWORD *)(a5 + 16) = _byteswap_ulong(*(_DWORD *)(a1 + 96));
    result = _byteswap_ulong(*(_DWORD *)(a1 + 100));
    *(_DWORD *)(a5 + 20) = result;
  }
  return result;
}
