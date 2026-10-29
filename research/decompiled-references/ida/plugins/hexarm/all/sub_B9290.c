_QWORD *__fastcall sub_B9290(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax
  __int64 v7; // rdi

  if ( a3 )
  {
    sub_121CD0(a2, *(_QWORD *)(a3 + 24));
    result = (_QWORD *)sub_11D2D0(a2, a3);
    if ( a2 )
    {
LABEL_3:
      sub_11C7E0(a2 + 8);
      sub_11C7E0(a2 + 6);
      sub_11C7E0(a2 + 4);
      return (_QWORD *)j__qfree();
    }
  }
  else
  {
    sub_121CD0(a2, a4);
    v7 = *(_QWORD *)(a1 + 56);
    if ( *(_DWORD *)v7 == 55 )
    {
      if ( *(_DWORD *)a2 == 55 )
      {
        result = (_QWORD *)sub_11C450(v7 + 32, a2 + 4);
        if ( a2 )
          goto LABEL_3;
      }
      else
      {
        return sub_A2BA0(a1, a2, *(_QWORD *)(v7 + 16));
      }
    }
    else
    {
      return (_QWORD *)sub_3387D0(a1, a2);
    }
  }
  return result;
}

