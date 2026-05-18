void __fastcall sub_7A790(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  int v5; // eax
  size_t v6; // r15
  int v7; // eax
  size_t v8; // r15
  __int64 v9; // rbx
  size_t v10; // r15
  void *v11; // rax
  void *v12; // rax
  void *v13; // rax

  if ( a1[2] < a2 )
    *a1 = sub_1987B0(a1, *a1, a2, 96);
  v4 = a1[1];
  if ( v4 < a2 )
  {
    do
    {
      while ( 1 )
      {
        v9 = *a1 + 96 * v4;
        *(_QWORD *)v9 = 0;
        *(_OWORD *)(v9 + 8) = 0;
        v10 = *(_QWORD *)(a3 + 8);
        if ( v10 )
        {
          v11 = (void *)sub_198760(*(_QWORD *)(a3 + 8));
          *(_QWORD *)(v9 + 16) = v10;
          *(_QWORD *)v9 = v11;
          memcpy(v11, *(const void **)a3, v10);
          *(_QWORD *)(v9 + 8) = v10;
        }
        v5 = *(_DWORD *)(a3 + 24);
        *(_QWORD *)(v9 + 32) = 0;
        *(_OWORD *)(v9 + 40) = 0;
        *(_DWORD *)(v9 + 24) = v5;
        v6 = *(_QWORD *)(a3 + 40);
        if ( v6 )
        {
          v13 = (void *)sub_198760(*(_QWORD *)(a3 + 40));
          *(_QWORD *)(v9 + 32) = v13;
          *(_QWORD *)(v9 + 48) = v6;
          memcpy(v13, *(const void **)(a3 + 32), v6);
          *(_QWORD *)(v9 + 40) = v6;
        }
        v7 = *(_DWORD *)(a3 + 56);
        *(_QWORD *)(v9 + 64) = 0;
        *(_OWORD *)(v9 + 72) = 0;
        *(_DWORD *)(v9 + 56) = v7;
        v8 = *(_QWORD *)(a3 + 72);
        if ( v8 )
          break;
        ++v4;
        *(_DWORD *)(v9 + 88) = *(_DWORD *)(a3 + 88);
        if ( a2 == v4 )
          goto LABEL_12;
      }
      v12 = (void *)sub_198760(*(_QWORD *)(a3 + 72));
      *(_QWORD *)(v9 + 64) = v12;
      ++v4;
      *(_QWORD *)(v9 + 80) = v8;
      memcpy(v12, *(const void **)(a3 + 64), v8);
      *(_QWORD *)(v9 + 72) = v8;
      *(_DWORD *)(v9 + 88) = *(_DWORD *)(a3 + 88);
    }
    while ( a2 != v4 );
  }
LABEL_12:
  a1[1] = a2;
}
