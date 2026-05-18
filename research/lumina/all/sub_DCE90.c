__int64 __fastcall sub_DCE90(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rax
  __int64 result; // rax
  _QWORD *v4; // r11
  unsigned int v5; // [rsp+Ch] [rbp-Ch]

  v2 = (unsigned __int8 *)sub_DCE50(a1, a2);
  result = sub_CA320(a1, v2);
  if ( v4 )
  {
    v5 = result;
    sub_C9250(a1, v4);
    return v5;
  }
  return result;
}
