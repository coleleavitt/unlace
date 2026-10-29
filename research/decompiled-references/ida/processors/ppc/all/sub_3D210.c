__int64 __fastcall sub_3D210(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rbp
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx

  *(_WORD *)(a1[47] + 4LL) = *(_QWORD *)(a2 + 8);
  result = a1[108];
  if ( (*(_BYTE *)(result + 72) & 1) != 0 )
    ++*(_WORD *)(a1[47] + 4LL);
  v3 = *(_QWORD *)(result + 64);
  *(_QWORD *)(a1[47] + 24LL) = v3;
  if ( *(_QWORD *)(*(_QWORD *)(a1[111] + 32LL) + 16LL) == v3 || v3 == -1 )
    *(_DWORD *)a1[47] |= 0x100000u;
  v4 = (_QWORD *)a1[105];
  v5 = a1[106];
  v6 = *(_QWORD *)(result + 56);
  v7 = &v4[v5];
  if ( v4 == v7 )
    goto LABEL_10;
  result = a1[105];
  while ( v6 != *(_QWORD *)result )
  {
    result += 8;
    if ( v7 == (_QWORD *)result )
      goto LABEL_10;
  }
  if ( (_QWORD *)result == v7 )
  {
LABEL_10:
    v8 = v5 + 1;
    if ( a1[107] < v8 )
    {
      result = qvector_reserve(a1 + 105, v4, v8, 8);
      v9 = a1[106];
      a1[105] = result;
      v7 = (_QWORD *)(result + 8 * v9);
    }
    *v7 = v6;
    ++a1[106];
  }
  return result;
}

