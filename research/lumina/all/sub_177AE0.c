void __fastcall sub_177AE0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  void (*v11)(void); // rax

  if ( *(_BYTE *)(a1 + 145) )
  {
    v8 = qword_242890;
    sub_19A520(qword_242890);
    v9 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(v9 + 120))-- == 1 )
    {
      v11 = (void (*)(void))qword_241EE0[3];
      if ( v11 )
        v11();
    }
    sub_19A570(v8);
  }
  v2 = *(void **)(a1 + 72);
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 128) = 0;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    j__free(v2);
  }
  v3 = *(void **)(a1 + 48);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    j__free(v3);
  }
  v4 = *(void **)(a1 + 24);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = i;
        sub_176520((__int64)v4 + 32 * v7);
        v4 = *(void **)(a1 + 24);
      }
    }
    *(_QWORD *)(a1 + 32) = 0;
    j__free(v4);
  }
}
