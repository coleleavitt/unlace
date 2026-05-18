__int64 *__fastcall sub_DC520(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4, __int64 a5, _QWORD *a6)
{
  __int64 *v10; // rax
  __int64 *v11; // rbx

  v10 = sub_DC1C0(a1, 0x58u);
  v11 = v10;
  if ( v10 )
  {
    *v10 = (__int64)a2;
    v10[1] = a3;
    v10[2] = (__int64)a4;
    v10[3] = a5;
    *((_BYTE *)v10 + 40) = a4 != nullptr;
    v10[4] = (__int64)a6;
  }
  else
  {
    if ( a2 )
      sub_D7810(a1, a2);
    if ( a3 )
      sub_D7720(a1, a3);
    if ( a4 )
      sub_D7810(a1, a4);
    if ( a5 )
      sub_D7720(a1, a5);
    if ( a6 )
      sub_D7BC0(a1, a6);
    else
      return nullptr;
  }
  return v11;
}
