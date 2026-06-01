void __fastcall sub_F7D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char *v4; // rbx
  _QWORD *v5; // rdi
  char *v6; // rbp
  __int64 v7; // rdx
  void (__fastcall *hexdsp)(__int64, char *); // rax
  __int64 v9; // rbx
  void *v10; // rdi
  __int64 v11; // rbx
  void *v12; // rdi
  __int64 v13; // rbx
  void *v14; // rdi
  __int64 v15; // rbx
  void *v16; // rdi

  v4 = (char *)a1[26];
  while ( v4 )
  {
    v5 = *((_QWORD **)v4 + 3);
    v6 = v4;
    sub_EBF0(v5, a2, a3);
    v4 = *((char **)v4 + 2);
    hexdsp = (void (__fastcall *)(__int64, char *))get_hexdsp(v5, a2, v7);
    hexdsp(276, v6 + 32);
    a2 = 64;
    operator delete(v6, 0x40u);
  }
  v9 = a1[20];
  while ( v9 )
  {
    sub_EEA0(*(_QWORD **)(v9 + 24));
    v10 = (void *)v9;
    v9 = *(_QWORD *)(v9 + 16);
    operator delete(v10, 0x30u);
  }
  v11 = a1[14];
  while ( v11 )
  {
    sub_EEA0(*(_QWORD **)(v11 + 24));
    v12 = (void *)v11;
    v11 = *(_QWORD *)(v11 + 16);
    operator delete(v12, 0x30u);
  }
  v13 = a1[8];
  while ( v13 )
  {
    sub_EEA0(*(_QWORD **)(v13 + 24));
    v14 = (void *)v13;
    v13 = *(_QWORD *)(v13 + 16);
    operator delete(v14, 0x30u);
  }
  v15 = a1[2];
  while ( v15 )
  {
    sub_EEA0(*(_QWORD **)(v15 + 24));
    v16 = (void *)v15;
    v15 = *(_QWORD *)(v15 + 16);
    operator delete(v16, 0x30u);
  }
}

