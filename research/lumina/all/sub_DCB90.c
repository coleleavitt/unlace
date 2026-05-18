_BYTE *__fastcall sub_DCB90(__int64 *a1, __int64 a2, const char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  bool v9; // zf
  size_t v10; // rdx
  _BYTE *result; // rax
  int v12; // [rsp+Ch] [rbp-1Ch]

  v8 = (unsigned int)*(char *)(a2 + 1);
  if ( (_BYTE)v8 )
  {
    v12 = a4;
    sub_D0130(*a1, v8, *(_QWORD *)(a2 + 16), a4, a5, a6);
    a4 = (unsigned int)v12;
    *(_BYTE *)(a2 + 1) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    v9 = v12 == 0;
    if ( v12 >= 0 )
      goto LABEL_3;
    return (_BYTE *)sub_DCC50(a1, 0xAAAAAAAAAAAAAAABLL * ((a2 - a1[17]) >> 3), a3, a4);
  }
  v9 = (_DWORD)a4 == 0;
  if ( (int)a4 < 0 )
    return (_BYTE *)sub_DCC50(a1, 0xAAAAAAAAAAAAAAABLL * ((a2 - a1[17]) >> 3), a3, a4);
LABEL_3:
  v10 = (int)a4;
  if ( v9 )
  {
    v10 = 0;
    if ( a3 )
      v10 = strlen(a3) & 0x3FFFFFFF;
  }
  result = sub_DCB40(*a1, a3, v10);
  *(_BYTE *)(a2 + 1) = -6;
  *(_QWORD *)(a2 + 16) = result;
  return result;
}
