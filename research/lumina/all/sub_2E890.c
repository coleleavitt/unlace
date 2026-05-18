__int64 __fastcall sub_2E890(__int64 a1)
{
  __int64 v1; // rdx
  bool v3; // zf
  __int64 v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  __int64 v9; // rdx
  void *v10; // rdi
  void *v11; // rdi

  v1 = *(_QWORD *)(a1 + 368);
  *(_QWORD *)a1 = &off_23D358;
  *(_QWORD *)(a1 + 192) = off_23D3A8;
  if ( v1 )
  {
    v3 = (*(_DWORD *)(v1 + 8))-- == 1;
    if ( v3 )
      (***(void (__fastcall ****)(_QWORD))(a1 + 368))(*(_QWORD *)(a1 + 368));
  }
  v4 = *(_QWORD *)(a1 + 312);
  *(_QWORD *)(a1 + 368) = 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_QWORD *)(a1 + 304) = 0;
  sub_19A260(*(void **)(a1 + 504));
  v5 = *(void **)(a1 + 448);
  *(_QWORD *)(a1 + 504) = 0;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 456) = 0;
    j__free(v5);
  }
  v6 = *(void **)(a1 + 424);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 432) = 0;
    j__free(v6);
  }
  v7 = *(void **)(a1 + 400);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 408) = 0;
    j__free(v7);
  }
  v8 = *(void **)(a1 + 376);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 384) = 0;
    j__free(v8);
  }
  v9 = *(_QWORD *)(a1 + 368);
  if ( v9 )
  {
    v3 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v3 )
      (***(void (__fastcall ****)(_QWORD))(a1 + 368))(*(_QWORD *)(a1 + 368));
  }
  v10 = *(void **)(a1 + 344);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 352) = 0;
    j__free(v10);
  }
  v11 = *(void **)(a1 + 320);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 328) = 0;
    j__free(v11);
  }
  *(_QWORD *)(a1 + 192) = &off_23D2F0;
  sub_167940(a1 + 192);
  return sub_165A10(a1);
}
