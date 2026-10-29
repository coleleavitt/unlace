__int64 __fastcall sub_59650(__int64 a1, __int64 a2)
{
  char v2; // al
  bool v3; // zf
  __int64 result; // rax
  int v5; // edx
  unsigned int v6; // eax
  char v8; // al
  __int64 v9; // r12
  __int64 v10; // rdi
  char v11; // al
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx

  v2 = *(_BYTE *)(a2 + 1);
  if ( v2 == 1 )
  {
    v5 = *(unsigned __int16 *)(a2 + 6);
    v6 = v5 - 280;
    LOBYTE(v6) = (unsigned __int16)(v5 - 280) <= 1u;
    LOBYTE(v5) = (unsigned __int16)v5 <= 0x1Fu;
    return v5 | v6;
  }
  v3 = v2 == 4;
  result = 0;
  if ( v3 && *(_WORD *)(a2 + 6) == 1 )
  {
    v8 = *(_BYTE *)(a2 + 5);
    if ( v8 != 2 && v8 != 7 )
      return 1;
    v9 = *(_QWORD *)(a2 + 16);
    v10 = *(_QWORD *)(a1 + 8);
    if ( v9 )
    {
      v12 = *(unsigned int *)(v10 + 288);
      if ( (unsigned int)v12 > 9 )
        return 1;
      v13 = 790;
      if ( !_bittest64(&v13, v12) || v9 != (int)sub_349B0() )
        return 1;
      v14 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(a2 + 1) = 1;
      *(_WORD *)(a2 + 6) = -1;
      v15 = *(_QWORD *)(v14 + 32);
      v11 = 7;
      if ( *(_DWORD *)(v15 + 24) != 4 )
      {
LABEL_12:
        *(_BYTE *)(a2 + 5) = v11;
        return 1;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 1) = 1;
      v11 = 7;
      *(_WORD *)(a2 + 6) = -2;
      if ( *(_DWORD *)(*(_QWORD *)(v10 + 32) + 24LL) != 4 )
        goto LABEL_12;
    }
    v11 = 2;
    goto LABEL_12;
  }
  return result;
}
