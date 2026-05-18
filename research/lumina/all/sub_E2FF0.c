__int64 *__fastcall sub_E2FF0(__int64 a1, int a2, int a3, unsigned __int8 a4, __int64 a5)
{
  __int64 v5; // rbp
  int v7; // r10d
  _QWORD *v8; // rsi
  __int64 *result; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi

  v5 = *(_QWORD *)(a1 + 160);
  if ( !v5 )
    v5 = a1;
  v7 = *(_DWORD *)(v5 + 136);
  v8 = *(_QWORD **)(v5 + 144);
  if ( v7 <= 0 )
  {
LABEL_9:
    result = sub_DFFD0(*(_QWORD *)v5, v8, 8 * (3 * v7 + 3));
    *(_QWORD *)(v5 + 144) = result;
    if ( result )
    {
      v13 = *(int *)(v5 + 136);
      result += 3 * v13;
      *(_DWORD *)(v5 + 136) = v13 + 1;
      *(_DWORD *)result = a2;
      *((_DWORD *)result + 1) = a3;
      *((_BYTE *)result + 8) = a4;
      result[2] = a5;
    }
    else
    {
      v14 = *(_QWORD *)v5;
      *(_DWORD *)(v5 + 136) = 0;
      if ( !*(_BYTE *)(v14 + 103) && !*(_BYTE *)(v14 + 104) )
        return (__int64 *)sub_DBE60(v14);
    }
  }
  else
  {
    result = *(__int64 **)(v5 + 144);
    while ( *(_DWORD *)result != a2 || *((_DWORD *)result + 1) != a3 )
    {
      result += 3;
      if ( result == &v8[3 * (unsigned int)(v7 - 1) + 3] )
        goto LABEL_9;
    }
    *((_BYTE *)result + 8) = (*((_BYTE *)result + 8) | a4) != 0;
  }
  return result;
}
