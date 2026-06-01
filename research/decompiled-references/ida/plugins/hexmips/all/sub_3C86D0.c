__int64 __fastcall sub_3C86D0(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 result; // rax

  v2 = a1[21];
  *a1 = &off_4C94E8;
  while ( v2 )
  {
    sub_3C8500(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  *a1 = &off_4C1650;
  result = merge_handler_dtr();
  if ( a1[12] )
  {
    a1[13] = 0;
    result = qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}

