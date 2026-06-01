__int64 __fastcall sub_5740(__int64 a1, __int64 a2, double a3)
{
  char v3; // dl
  __int64 result; // rax
  __int16 v5; // si
  int v6; // ecx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 sreg; // rax

  v3 = *(_BYTE *)(a2 + 1);
  result = *(_QWORD *)(a2 + 16);
  if ( v3 == 7 )
  {
    result += 16LL * *(_QWORD *)a1;
    return result;
  }
  v5 = *(_WORD *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 28);
  if ( v5 == 1 )
  {
    if ( v3 != 5 )
      goto LABEL_5;
    if ( (v6 & 0x200) == 0 )
      goto LABEL_12;
LABEL_17:
    v7 = (unsigned __int16)result;
    goto LABEL_8;
  }
  if ( v5 == 24 && v3 == 5 )
  {
    if ( (v6 & 2) == 0 )
      goto LABEL_12;
    goto LABEL_17;
  }
LABEL_5:
  if ( (v6 & 0x10) != 0 )
    return result;
  if ( (v6 & 8) != 0 )
  {
    v7 = (unsigned __int16)result;
    if ( v3 != 2 )
    {
LABEL_8:
      v8 = *(_QWORD *)(a1 + 16);
      LOWORD(v8) = 0;
      return v7 | v8;
    }
    sreg = get_sreg();
    if ( sreg != -1 )
      return v7 | (sreg << 16);
    return -1;
  }
LABEL_12:
  if ( (v6 & 0x20) != 0 )
  {
    v9 = (unsigned __int8)result;
    v10 = get_sreg();
    result = v9 | (v10 << 8);
    if ( v10 == -1 )
      return -1;
  }
  return result;
}

