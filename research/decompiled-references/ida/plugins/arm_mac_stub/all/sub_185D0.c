char __fastcall sub_185D0(__int64 a1, __int64 *a2, unsigned int a3, unsigned __int64 a4, const char *a5, char a6)
{
  _QWORD *v10; // rdi
  _QWORD *v12; // rbx
  char result; // al
  __int64 v14; // [rsp+8h] [rbp-50h]
  __int64 v15; // [rsp+10h] [rbp-48h]

  v10 = *(_QWORD **)(a1 + 512);
  if ( v10 )
  {
    v12 = sub_13ED0(v10, a3, (__int64 *)(a1 + 224));
    if ( !v12 )
      return 0;
    qlseek();
    if ( !(unsigned __int8)sub_18140(a2, (__int64)v12, -1, a4, v15, a5, a6) )
      return 0;
    return a2[1] != 0;
  }
  v14 = sub_13D00(a1, *(_DWORD *)(a1 + 128));
  sub_13D00(a1, a3);
  qlseek();
  result = sub_18140(a2, *(_QWORD *)(a1 + 48), -1, a4, v14, a5, a6);
  if ( result )
    return a2[1] != 0;
  return result;
}

