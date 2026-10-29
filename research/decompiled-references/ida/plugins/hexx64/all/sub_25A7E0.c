__int64 __fastcall sub_25A7E0(_QWORD *a1, double a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rbp
  __int64 result; // rax

  v2 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    do
    {
      v3 = (__int64)v2;
      v2 = (_QWORD *)*v2;
      **(_QWORD **)(v3 + 8) = v2;
      v2[1] = *(_QWORD *)(v3 + 8);
      sub_255050(v3 + 16, a2);
      result = qfree(v3);
      --a1[2];
    }
    while ( a1 != v2 );
  }
  return result;
}

