__int64 __fastcall sub_1027A0(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  _BYTE *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // al
  __int64 v14; // rdx
  _QWORD *v15; // rsi
  __int64 v16; // r8
  __int64 result; // rax

  v7 = a1[2];
  if ( *(__int16 *)(v7 + 20) < 0 )
  {
    v8 = *(_BYTE **)(v7 + 8);
    if ( v8 )
      goto LABEL_3;
LABEL_12:
    sub_F48B0((__int64)a1, "{}", 2, 1u, nullptr, a6);
    goto LABEL_8;
  }
  v8 = sub_EF2D0(a1 + 1, v7, 0, a4, a5, a6);
  if ( !v8 )
    goto LABEL_12;
LABEL_3:
  sub_102750(v8, 125);
  v13 = v8[33];
  if ( v13 )
  {
    if ( v13 == 1 )
      sub_E1560((__int64)a1, 125, v9, v10, v11, v12);
  }
  else
  {
    v14 = *((_QWORD *)v8 + 3);
    v15 = *((_QWORD **)v8 + 1);
    if ( a2 )
    {
      v16 = (__int64)sub_C91C0;
      if ( v8[32] )
        v16 = -1;
      sub_F48B0((__int64)a1, v15, v14, 1u, (__int64 (__fastcall *)(__int64))v16, v12);
      v8[32] = 1;
    }
    else
    {
      sub_F48B0((__int64)a1, v15, v14, 1u, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v12);
      --*((_QWORD *)v8 + 3);
    }
  }
LABEL_8:
  result = *a1;
  *(_WORD *)(result + 20) |= 0x800u;
  *(_BYTE *)(result + 23) = 74;
  return result;
}
