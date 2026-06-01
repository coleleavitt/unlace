__int64 __fastcall sub_DA70(__int64 a1, _QWORD *a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  char v7; // bp
  __int64 result; // rax
  char v9; // [rsp+0h] [rbp-28h]
  unsigned __int8 v10; // [rsp+Fh] [rbp-19h]

  v6 = (unsigned int)(a3 - 1);
  if ( v6 >= *(_QWORD *)(a1 + 56) )
  {
    sub_BBD0(a1, (int)a2, v6, a4, a5, a6, v9);
    return sub_DAE0();
  }
  else
  {
    v7 = a6;
    result = sub_C8C0((__int64)a2, *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v6), a4, (unsigned __int8)a5 + 78);
    if ( (_BYTE)result )
    {
      if ( v7 )
      {
        v10 = result;
        sub_BB40(a2);
        return v10;
      }
    }
  }
  return result;
}

