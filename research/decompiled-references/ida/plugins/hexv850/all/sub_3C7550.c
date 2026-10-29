__int64 __fastcall sub_3C7550(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 result; // rax

  v2 = a1[21];
  *a1 = &off_4BC748;
  while ( v2 )
  {
    sub_3C7380(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  *a1 = &off_4B48B0;
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

