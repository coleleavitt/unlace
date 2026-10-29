char *__fastcall sub_E9840(__int64 a1, int a2, unsigned __int64 a3)
{
  _DWORD *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r11
  __int64 v6; // r9
  int v7; // r10d
  _WORD *v8; // rdi
  int v9; // eax
  int v10; // ebp
  int v11; // ecx
  int v12; // eax
  _BYTE *v14; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // ecx

  v3 = (_DWORD *)a3;
  v4 = *(_QWORD *)(a1 + 80);
  v5 = *(unsigned __int8 *)(a1 + 9);
  LOWORD(a3) = __ROL2__(*(_WORD *)(v4 + (int)v5 + 1), 8);
  v6 = (unsigned __int16)a3;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL) - a2;
  if ( (unsigned __int16)a3 > v7 )
  {
    v11 = (unsigned __int16)a3;
    goto LABEL_9;
  }
  a3 = (unsigned __int16)a3;
  v8 = (_WORD *)(v4 + (unsigned __int16)a3 + 2);
  v9 = (unsigned __int16)__ROL2__(*v8, 8);
  v10 = (unsigned __int16)v9 - a2;
  if ( v10 < 0 )
  {
    v11 = (unsigned __int16)__ROL2__(*(_WORD *)(v4 + (unsigned __int16)a3), 8);
    if ( (unsigned __int16)v11 <= (unsigned __int16)a3 + v9 )
    {
      v15 = v11;
LABEL_15:
      v16 = 68377;
      if ( v15 )
        goto LABEL_16;
      return nullptr;
    }
    while ( v7 >= v11 )
    {
      a3 = v11;
      v8 = (_WORD *)(v4 + v11 + 2);
      v12 = (unsigned __int16)__ROL2__(*v8, 8);
      v10 = (unsigned __int16)v12 - a2;
      if ( v10 >= 0 )
        goto LABEL_12;
      v6 = v11;
      v15 = (unsigned __int16)__ROL2__(*(_WORD *)(v4 + v11), 8);
      if ( v11 + v12 >= (unsigned __int16)v15 )
        goto LABEL_15;
      v11 = v15;
    }
LABEL_9:
    if ( v7 + a2 - 4 < v11 )
    {
      v16 = 68384;
LABEL_16:
      sub_E8BB0(
        0xBu,
        "%s at line %d of [%.10s]",
        "database corruption",
        v16,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      *v3 = 11;
      return nullptr;
    }
    return nullptr;
  }
  v11 = (unsigned __int16)a3;
  v6 = (int)v5 + 1;
LABEL_12:
  if ( v10 <= 3 )
  {
    v14 = (_BYTE *)(v4 + v5 + 7);
    if ( *v14 <= 0x39u )
    {
      *(_WORD *)(v4 + v6) = *(_WORD *)(v4 + a3);
      *v14 += v10;
      return (char *)(v4 + a3);
    }
    return nullptr;
  }
  v17 = v10 + v11;
  if ( v17 > v7 )
  {
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      68362,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    *v3 = 11;
    return nullptr;
  }
  *(_BYTE *)v8 = BYTE1(v10);
  *(_BYTE *)(v4 + a3 + 3) = v10;
  return (char *)(v4 + v17);
}
