void __fastcall __noreturn sub_166210(__int64 a1, unsigned int a2)
{
  unsigned int v3; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  _QWORD *v8; // rbp
  _QWORD *v9; // rbx
  _QWORD *v10; // r14
  pthread_t v11; // rdi
  _QWORD *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rbx
  void *v15; // rdi

  v3 = (unsigned int)strsignal(a2);
  sub_16B870((unsigned int)"%s: terminating the server\n", v3, v4, v5, v6, v7);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  v8 = *(_QWORD **)(a1 + 88);
  v9 = (_QWORD *)v8[4];
  v10 = v8 + 2;
  if ( v9 != v8 + 2 )
  {
    do
    {
      v11 = v9[5];
      v12 = (_QWORD *)v9[4];
      if ( v11 )
        j__pthread_detach(v11);
      if ( v12 && v12[17] )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v12 + 24LL))(v12, a2);
        sub_165A50((__int64)v12);
      }
      v13 = std::_Rb_tree_increment(v9);
      v8 = *(_QWORD **)(a1 + 88);
      v9 = (_QWORD *)v13;
      v10 = v8 + 2;
    }
    while ( (_QWORD *)v13 != v8 + 2 );
  }
  v14 = v8[3];
  while ( v14 )
  {
    sub_165EF0(*(_QWORD **)(v14 + 24));
    v15 = (void *)v14;
    v14 = *(_QWORD *)(v14 + 16);
    operator delete(v15, 0x30u);
  }
  v8[3] = 0;
  v8[4] = v10;
  v8[5] = v10;
  v8[6] = 0;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(*(_QWORD *)(a1 + 88));
  sub_1672A0(a1 + 80, 0xFFFFFFFFLL);
  _exit(a2 != 15);
}
