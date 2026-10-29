__int64 __fastcall sub_63710(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  __int64 *v4; // r12
  __int64 (__fastcall *v5)(_QWORD *); // rax
  __int64 *v6; // rbx
  __int64 v7; // rdi

  result = qfree();
  v3 = (_QWORD *)a1[65];
  for ( a1[66] = 0; v3; v3 = (_QWORD *)v3[1] )
  {
    if ( v3[46] )
    {
      v3[47] = 0;
      result = qfree();
      v3[46] = 0;
      v3[48] = 0;
    }
    if ( v3[43] )
    {
      v3[44] = 0;
      result = qfree();
      v3[43] = 0;
      v3[45] = 0;
    }
  }
  v4 = (__int64 *)a1[98];
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(_QWORD *))(*v4 + 8);
    if ( v5 == sub_62BB0 )
    {
      v6 = v4 + 31;
      *v4 = (__int64)off_4BE5E8;
      do
      {
        v6 -= 4;
        sub_62900(v6);
      }
      while ( v6 != v4 + 7 );
      v7 = v4[1];
      *v4 = (__int64)&unk_4BE6A0;
      if ( v7 )
      {
        v4[2] = 0;
        qfree();
      }
      result = j__qfree();
    }
    else
    {
      result = v5((_QWORD *)a1[98]);
    }
  }
  a1[98] = 0;
  return result;
}

