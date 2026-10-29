void *__fastcall sub_13940(__int64 a1)
{
  void *v1; // rbx
  void *result; // rax
  _QWORD *v3; // rbx

  v1 = *(void **)(a1 + 184);
  *(_QWORD *)a1 = off_647B8;
  if ( v1 )
  {
    delete_dirtree();
    operator delete(v1, 8u);
  }
  result = &unk_65AF8;
  *(_QWORD *)(a1 + 208) = 0;
  v3 = (_QWORD *)(a1 + 152);
  *(_QWORD *)a1 = &unk_65AF8;
  *(_OWORD *)(a1 + 192) = 0;
  do
  {
    if ( *v3 )
    {
      v3[1] = 0;
      result = (void *)qfree();
    }
    v3 -= 3;
  }
  while ( v3 != (_QWORD *)(a1 + 56) );
  return result;
}

