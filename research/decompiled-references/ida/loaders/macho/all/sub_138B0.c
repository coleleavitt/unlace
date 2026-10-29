__int64 __fastcall sub_138B0(__int64 a1)
{
  void *v1; // rbx
  _QWORD *v2; // rbx

  v1 = *(void **)(a1 + 184);
  *(_QWORD *)a1 = off_647B8;
  if ( v1 )
  {
    delete_dirtree();
    operator delete(v1, 8u);
  }
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)a1 = &unk_65AF8;
  v2 = (_QWORD *)(a1 + 152);
  *(_OWORD *)(a1 + 192) = 0;
  do
  {
    if ( *v2 )
    {
      v2[1] = 0;
      qfree();
    }
    v2 -= 3;
  }
  while ( v2 != (_QWORD *)(a1 + 56) );
  return qfree();
}

