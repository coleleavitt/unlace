void __fastcall sub_13DE0(__int64 a1)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  void *v4; // rdi

  v2 = *(_QWORD **)(a1 + 56);
  *(_QWORD *)a1 = &unk_722F8;
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    operator delete(v3, 0x18u);
  }
  memset(*(void **)(a1 + 40), 0, 8LL * *(_QWORD *)(a1 + 48));
  v4 = *(void **)(a1 + 40);
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  if ( v4 != (void *)(a1 + 88) )
    operator delete(v4, 8LL * *(_QWORD *)(a1 + 48));
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree();
  }
}

