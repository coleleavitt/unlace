__int64 __fastcall sub_1753A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // edx
  char v6; // bp
  unsigned int v7; // eax
  char v9; // al
  bool v10; // zf
  char v11; // dl
  char v12; // al
  char v13; // dl
  _DWORD *v14; // rdi
  __int64 v15; // rdx

  result = 0;
  v5 = *(_DWORD *)(a2 + 68);
  if ( *(_DWORD *)(a3 + 4) != v5 || (*(_BYTE *)a3 == 14) != (*(_BYTE *)(a2 + 64) == 14) )
    return result;
  v6 = *(_BYTE *)(a3 + 1);
  v7 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 <= 4u )
  {
    if ( v7 <= 2 )
    {
LABEL_7:
      sub_125D20(a3, (unsigned __int8 *)a2);
      v9 = *(_BYTE *)(a3 + 1) | v6 & 6;
      v10 = *(_BYTE *)a3 == 4;
      *(_BYTE *)(a3 + 1) = v9;
      if ( !v10 )
        goto LABEL_8;
      v15 = *(_QWORD *)(a3 + 8);
      if ( *(_BYTE *)(v15 + 64) != 8 )
        goto LABEL_8;
      sub_F2630(*(_QWORD *)(v15 + 72));
      goto LABEL_17;
    }
  }
  else if ( v7 != 67 || v5 != *(_DWORD *)(a2 + 36) )
  {
    goto LABEL_7;
  }
  sub_124BC0(a3, (unsigned __int8 *)(a2 + 32));
  v14 = *(_DWORD **)(a1 + 32);
  if ( (unsigned int)(*v14 - 22) > 2 || (_DWORD *)a3 != v14 + 12 )
  {
LABEL_17:
    v9 = *(_BYTE *)(a3 + 1);
    goto LABEL_8;
  }
  sub_1599A0((__int64)v14, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL));
  v9 = *(_BYTE *)(a3 + 1);
LABEL_8:
  if ( *(_DWORD *)a2 == 4 && (*(_BYTE *)(a2 + 65) & 0x20) != 0 )
    v9 |= 0x20u;
  v11 = v9;
  v12 = v9 | 0x40;
  v13 = v11 & 0xBF;
  if ( (v6 & 0x40) == 0 )
    v12 = v13;
  *(_BYTE *)(a3 + 1) = v12;
  return 1;
}

