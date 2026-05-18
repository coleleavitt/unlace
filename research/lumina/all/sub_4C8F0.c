void __fastcall sub_4C8F0(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 i; // r12
  void *v5; // rdi
  void (*v6)(void); // rax
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi

  *(_QWORD *)a1 = &off_236720;
  sub_4C740(a1);
  sub_4C840(a1);
  sub_19A260(*(void **)(a1 + 424));
  v2 = *(_QWORD *)(a1 + 392);
  v3 = *(_QWORD *)(a1 + 384);
  *(_QWORD *)(a1 + 424) = 0;
  for ( i = v3 + 16 * v2; i != v3; v3 += 16 )
  {
    if ( *(_BYTE *)(v3 + 8) )
    {
      v5 = *(void **)v3;
      if ( *(_QWORD *)v3 )
      {
        v6 = *(void (**)(void))(*(_QWORD *)v5 + 8LL);
        if ( (char *)v6 == (char *)sub_4B1E0 )
          operator delete(v5, 8u);
        else
          v6();
      }
    }
  }
  if ( (unsigned int)(*(_DWORD *)(a1 + 208) - 1) <= 1 )
    *(_DWORD *)(a1 + 208) = 0;
  v7 = *(void **)(a1 + 512);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 520) = 0;
    j__free(v7);
  }
  v8 = *(void **)(a1 + 464);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 472) = 0;
    j__free(v8);
  }
  v9 = *(void **)(a1 + 440);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 448) = 0;
    j__free(v9);
  }
  v10 = *(void **)(a1 + 384);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 392) = 0;
    j__free(v10);
  }
  sub_4BF30(a1);
}
