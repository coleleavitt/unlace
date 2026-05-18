__int64 __fastcall sub_E31C0(__int64 a1, unsigned __int8 a2, unsigned __int8 *a3)
{
  __int64 v5; // rbx
  int v6; // r11d
  unsigned int v7; // eax
  size_t v8; // r15
  size_t v9; // rsi
  __int64 *v10; // rax
  unsigned __int8 *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v14; // [rsp+8h] [rbp-40h]

  v5 = sub_C2AB0(a1 + 608, a3, nullptr)[2];
  if ( v5 || !v6 )
  {
    if ( v5 )
      return v5 + 40LL * a2 - 40;
    return 0;
  }
  if ( a3 )
  {
    v7 = strlen((const char *)a3) & 0x3FFFFFFF;
    v8 = v7 + 1LL;
    v9 = v7 + 121LL;
  }
  else
  {
    v9 = 121;
    v8 = 1;
  }
  v10 = sub_DC1C0(a1, v9);
  v5 = (__int64)v10;
  if ( !v10 )
    return 0;
  *((_BYTE *)v10 + 8) = 1;
  *((_BYTE *)v10 + 48) = 2;
  *v10 = (__int64)(v10 + 15);
  v10[5] = (__int64)(v10 + 15);
  v10[10] = (__int64)(v10 + 15);
  *((_BYTE *)v10 + 88) = 3;
  v11 = (unsigned __int8 *)memcpy(v10 + 15, a3, v8);
  v12 = (_QWORD *)sub_D1F90(a1 + 608, v11, v5);
  if ( !v12 )
    return v5 + 40LL * a2 - 40;
  if ( !*(_BYTE *)(a1 + 103) && !*(_BYTE *)(a1 + 104) )
  {
    v14 = v12;
    sub_DBE60(a1);
    v12 = v14;
  }
  sub_C9250(a1, v12);
  return 0;
}
