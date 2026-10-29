int __fastcall sub_11340(__int64 a1)
{
  void *v2; // rdi
  _QWORD **v3; // rax
  _QWORD *v4; // rdx

  if ( *(_QWORD *)(a1 + 16) )
    (*(void (**)(void))(a1 + 72))();
  (*(void (__fastcall **)(_QWORD))(a1 + 56))(*(_QWORD *)(a1 + 88));
  **(_QWORD **)(a1 + 184) = 0;
  **(_QWORD **)(a1 + 200) = 0;
  **(_QWORD **)(a1 + 216) = 0;
  v2 = *(void **)(a1 + 8);
  if ( v2 )
    dlclose(v2);
  *(_QWORD *)(a1 + 8) = 0;
  v3 = (_QWORD **)(a1 + 104);
  do
  {
    v4 = *v3;
    v3 += 2;
    *v4 = 0;
  }
  while ( (_QWORD **)(a1 + 184) != v3 );
  if ( *(_QWORD *)a1 )
    LODWORD(v3) = dlclose(*(void **)a1);
  return (int)v3;
}

