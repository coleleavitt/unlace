__int64 __fastcall sub_8780(unsigned __int64 a1)
{
  int *v1; // rax
  int *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 result; // rax

  v1 = (int *)qword_14550;
  if ( qword_14550 )
  {
    v3 = &dword_14548;
    do
    {
      while ( 1 )
      {
        v4 = *((_QWORD *)v1 + 2);
        v5 = *((_QWORD *)v1 + 3);
        if ( *((_QWORD *)v1 + 4) >= a1 )
          break;
        v1 = *((int **)v1 + 3);
        if ( !v5 )
          goto LABEL_6;
      }
      v3 = v1;
      v1 = *((int **)v1 + 2);
    }
    while ( v4 );
LABEL_6:
    v6 = -1;
    if ( v3 != &dword_14548 && a1 >= *((_QWORD *)v3 + 4) )
      v6 = *((_QWORD *)v3 + 5);
  }
  else
  {
    v6 = -1;
  }
  result = getseg(v6);
  if ( !result )
    sub_86C0(a1);
  return result;
}

