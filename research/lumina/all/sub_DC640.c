__int64 __fastcall sub_DC640(__int64 a1, int a2, __int64 a3, __int64 (__fastcall *a4)(__int64))
{
  __int64 *v6; // r13
  __int64 v7; // rbx
  __int64 result; // rax
  int v9; // eax

  v6 = *(__int64 **)(a1 + 24);
  v7 = v6[37];
  if ( v7 )
  {
    while ( *(_DWORD *)(v7 + 4) != a2 || *(_DWORD *)v7 != *(_DWORD *)(a1 + 32) && a2 >= 0 )
    {
      v7 = *(_QWORD *)(v7 + 24);
      if ( !v7 )
        goto LABEL_11;
    }
    result = *(_QWORD *)(v7 + 16);
    if ( result )
      result = ((__int64 (__fastcall *)(_QWORD))result)(*(_QWORD *)(v7 + 8));
    goto LABEL_9;
  }
LABEL_11:
  result = (__int64)sub_DC1C0(*v6, 0x20u);
  v7 = result;
  if ( result )
  {
    v9 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(v7 + 4) = a2;
    *(_DWORD *)v7 = v9;
    *(_QWORD *)(v7 + 24) = v6[37];
    v6[37] = v7;
    result = *(unsigned int *)(a1 + 36);
    if ( !(_DWORD)result )
      *(_DWORD *)(a1 + 36) = -1;
LABEL_9:
    *(_QWORD *)(v7 + 8) = a3;
    *(_QWORD *)(v7 + 16) = a4;
    return result;
  }
  if ( a4 )
    return a4(a3);
  return result;
}
