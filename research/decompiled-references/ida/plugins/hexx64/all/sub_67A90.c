__int64 __fastcall sub_67A90(_QWORD *a1, double a2)
{
  __int64 result; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdi
  _QWORD *v7; // r12
  __int64 (__fastcall *v8)(_QWORD); // rax
  __int64 v9; // rbx
  __int64 v10; // rdi

  result = qfree(a1[66]);
  v4 = (_QWORD *)a1[65];
  for ( a1[66] = 0; v4; v4 = (_QWORD *)v4[1] )
  {
    v5 = v4[46];
    if ( v5 )
    {
      v4[47] = 0;
      result = qfree(v5);
      v4[46] = 0;
      v4[48] = 0;
    }
    v6 = v4[43];
    if ( v6 )
    {
      v4[44] = 0;
      result = qfree(v6);
      v4[43] = 0;
      v4[45] = 0;
    }
  }
  v7 = (_QWORD *)a1[98];
  if ( v7 )
  {
    v8 = *(__int64 (__fastcall **)(_QWORD))(*v7 + 8LL);
    if ( (char *)v8 == (char *)sub_66F30 )
    {
      v9 = (__int64)(v7 + 31);
      *v7 = off_4EC750;
      do
      {
        v9 -= 32;
        sub_66C80(v9, a2);
      }
      while ( (_QWORD *)v9 != v7 + 7 );
      v10 = v7[1];
      *v7 = &unk_4EC808;
      if ( v10 )
      {
        v7[2] = 0;
        qfree(v10);
      }
      result = j__qfree((__int64)v7);
    }
    else
    {
      result = v8(a1[98]);
    }
  }
  a1[98] = 0;
  return result;
}

