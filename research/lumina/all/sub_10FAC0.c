__int64 __fastcall sub_10FAC0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r12
  __int64 result; // rax
  bool v5; // zf
  __int64 v6; // r13
  __int64 v7; // rbp
  unsigned int v8; // [rsp+Ch] [rbp-2Ch]
  unsigned int v9; // [rsp+Ch] [rbp-2Ch]

  v3 = a2;
  if ( *(_BYTE *)(a1 + 17) )
    sub_CC740(a1);
  if ( *(_BYTE *)(a1 + 16) != 2 )
  {
LABEL_4:
    sub_10F980(a1, a2);
    if ( !*(_BYTE *)(a1 + 17) )
      return 0;
    LODWORD(result) = *(_DWORD *)(a1 + 20) - 1;
    v5 = *(_DWORD *)(a1 + 20) == 1;
    *(_DWORD *)(a1 + 20) = result;
    if ( !v5 )
      return 0;
LABEL_21:
    v9 = result;
    sub_CC7D0(a1, a2, a3);
    return v9;
  }
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)v6;
  result = *(unsigned int *)(*(_QWORD *)v6 + 48LL);
  if ( !(_DWORD)result )
  {
    ++*(_DWORD *)(v7 + 132);
    if ( *(_BYTE *)(v7 + 21) == 2 && *(_BYTE *)(v7 + 8) && *(_BYTE *)(v7 + 9) == 1 )
    {
      *(_BYTE *)(v7 + 21) = 1;
LABEL_13:
      --*(_DWORD *)(a1 + 28);
      *(_BYTE *)(v6 + 36) = 1;
      sub_C9E70(*(_QWORD *)(v6 + 96), a2);
      *(_QWORD *)(v6 + 96) = 0;
      goto LABEL_4;
    }
    a2 = *(unsigned __int8 *)(v7 + 24);
    result = sub_D66C0(v7, a2, 1u);
    a3 = (unsigned __int8)result;
    if ( (unsigned __int8)result == 13 || (unsigned __int8)result == 10 )
    {
      a2 = (unsigned int)result;
      v8 = result;
      sub_CC130(v7, result);
      result = v8;
    }
  }
  if ( !(_DWORD)result || (v3 & 1) != 0 )
    goto LABEL_13;
  if ( *(_BYTE *)(a1 + 17) )
  {
    v5 = (*(_DWORD *)(a1 + 20))-- == 1;
    if ( v5 )
      goto LABEL_21;
  }
  return result;
}
