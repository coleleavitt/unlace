__int64 __fastcall sub_175960(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 result; // rax
  int v6; // edx
  char v7; // bp
  unsigned int v8; // eax
  char v10; // al
  bool v11; // zf
  char v12; // dl
  char v13; // al
  char v14; // dl
  _DWORD *v15; // rdi
  __int64 v16; // rdx

  result = 0;
  v6 = *(_DWORD *)(a2 + 68);
  if ( *(_DWORD *)(a3 + 4) != v6 || (*(_BYTE *)a3 == 14) != (*(_BYTE *)(a2 + 64) == 14) )
    return result;
  v7 = *(_BYTE *)(a3 + 1);
  v8 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 <= 4u )
  {
    if ( v8 <= 2 )
    {
LABEL_7:
      sub_1262E0(a3, (unsigned __int8 *)a2, a4);
      v10 = *(_BYTE *)(a3 + 1) | v7 & 6;
      v11 = *(_BYTE *)a3 == 4;
      *(_BYTE *)(a3 + 1) = v10;
      if ( !v11 )
        goto LABEL_8;
      v16 = *(_QWORD *)(a3 + 8);
      if ( *(_BYTE *)(v16 + 64) != 8 )
        goto LABEL_8;
      sub_F2BF0(*(_QWORD *)(v16 + 72), a4);
      goto LABEL_17;
    }
  }
  else if ( v8 != 67 || v6 != *(_DWORD *)(a2 + 36) )
  {
    goto LABEL_7;
  }
  sub_125180((unsigned __int8 *)a3, (unsigned __int8 *)(a2 + 32));
  v15 = *(_DWORD **)(a1 + 32);
  if ( (unsigned int)(*v15 - 22) > 2 || (_DWORD *)a3 != v15 + 12 )
  {
LABEL_17:
    v10 = *(_BYTE *)(a3 + 1);
    goto LABEL_8;
  }
  sub_159F60((__int64)v15, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL));
  v10 = *(_BYTE *)(a3 + 1);
LABEL_8:
  if ( *(_DWORD *)a2 == 4 && (*(_BYTE *)(a2 + 65) & 0x20) != 0 )
    v10 |= 0x20u;
  v12 = v10;
  v13 = v10 | 0x40;
  v14 = v12 & 0xBF;
  if ( (v7 & 0x40) == 0 )
    v13 = v14;
  *(_BYTE *)(a3 + 1) = v13;
  return 1;
}

