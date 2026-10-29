_QWORD *__fastcall sub_B9850(__int64 a1, char *a2, __int64 a3, __int64 a4, double a5)
{
  _QWORD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rdi

  if ( a3 )
  {
    sub_122290((__int64)a2, *(_QWORD *)(a3 + 24));
    result = (_QWORD *)sub_11D890((__int64)a2, a3);
    if ( a2 )
    {
LABEL_3:
      sub_11CDA0((__int64)(a2 + 64));
      sub_11CDA0((__int64)(a2 + 48));
      sub_11CDA0((__int64)(a2 + 32));
      return (_QWORD *)j__qfree((__int64)a2);
    }
  }
  else
  {
    sub_122290((__int64)a2, a4);
    v12 = *(_QWORD *)(a1 + 56);
    if ( *(_DWORD *)v12 == 55 )
    {
      if ( *(_DWORD *)a2 == 55 )
      {
        result = (_QWORD *)sub_11CA10((char *)(v12 + 32), a2 + 32);
        if ( a2 )
          goto LABEL_3;
      }
      else
      {
        return sub_A3160(a1, a2, *(_QWORD *)(v12 + 16), a5);
      }
    }
    else
    {
      return (_QWORD *)sub_338690(a1, (__int64)a2, v8, v9, v10, v11);
    }
  }
  return result;
}

