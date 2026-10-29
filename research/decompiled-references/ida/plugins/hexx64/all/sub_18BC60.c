__int64 __fastcall sub_18BC60(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax

  *a1 = &unk_4EBEA0;
  qfree(a1[7]);
  result = qfree(a1[4]);
  v3 = a1[1];
  if ( v3 )
  {
    v4 = a1[2];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = 3 * i;
        qfree(*(_QWORD *)(v3 + 8 * v6));
        v3 = a1[1];
      }
    }
    a1[2] = 0;
    return qfree(v3);
  }
  return result;
}

