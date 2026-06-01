__int64 __fastcall sub_32B20(int *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  int *v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  void (__fastcall *hexdsp)(__int64, __int64, int *); // rax
  int v15; // eax
  __int64 v16; // rdi
  int v17; // eax
  int *v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rsi
  int *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  void (__fastcall *v30)(__int64, __int64, int *); // rax
  int v31; // eax
  __int64 v32; // rdi

  v4 = operator new(0x70u);
  v6 = *((int **)a1 + 7);
  v7 = v4;
  LODWORD(v4) = a1[8];
  *(_DWORD *)(v7 + 48) = 0;
  v8 = v7 + 48;
  *(_DWORD *)(v7 + 32) = v4;
  *(_QWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 64) = v7 + 48;
  *(_QWORD *)(v7 + 72) = v7 + 48;
  *(_QWORD *)(v7 + 80) = 0;
  if ( v6 )
  {
    v9 = sub_324E0(v6, v8);
    v10 = v9;
    do
    {
      v11 = v10;
      v10 = *(_QWORD *)(v10 + 16);
    }
    while ( v10 );
    *(_QWORD *)(v7 + 64) = v11;
    v12 = v9;
    do
    {
      v13 = v12;
      v12 = *(_QWORD *)(v12 + 24);
    }
    while ( v12 );
    v5 = *((_QWORD *)a1 + 10);
    *(_QWORD *)(v7 + 72) = v13;
    *(_QWORD *)(v7 + 56) = v9;
    *(_QWORD *)(v7 + 80) = v5;
  }
  hexdsp = (void (__fastcall *)(__int64, __int64, int *))get_hexdsp(v6, v8, v5);
  hexdsp(273, v7 + 88, a1 + 22);
  v15 = a1[26];
  v16 = *((_QWORD *)a1 + 3);
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 24) = 0;
  *(_DWORD *)(v7 + 104) = v15;
  v17 = *a1;
  *(_QWORD *)(v7 + 8) = a2;
  *(_DWORD *)v7 = v17;
  if ( v16 )
    *(_QWORD *)(v7 + 24) = sub_32B20(v16, v7);
  v18 = *((int **)a1 + 2);
  if ( v18 )
  {
    v19 = v7;
    do
    {
      v20 = v19;
      v19 = operator new(0x70u);
      v22 = v18[8];
      v23 = v19 + 48;
      *(_DWORD *)(v19 + 48) = 0;
      *(_DWORD *)(v19 + 32) = v22;
      *(_QWORD *)(v19 + 56) = 0;
      *(_QWORD *)(v19 + 64) = v19 + 48;
      *(_QWORD *)(v19 + 72) = v19 + 48;
      *(_QWORD *)(v19 + 80) = 0;
      v24 = *((int **)v18 + 7);
      if ( v24 )
      {
        v25 = sub_324E0(v24, v23);
        v26 = v25;
        do
        {
          v27 = v26;
          v26 = *(_QWORD *)(v26 + 16);
        }
        while ( v26 );
        *(_QWORD *)(v19 + 64) = v27;
        v28 = v25;
        do
        {
          v29 = v28;
          v28 = *(_QWORD *)(v28 + 24);
        }
        while ( v28 );
        *(_QWORD *)(v19 + 72) = v29;
        v21 = *((_QWORD *)v18 + 10);
        *(_QWORD *)(v19 + 56) = v25;
        *(_QWORD *)(v19 + 80) = v21;
      }
      v30 = (void (__fastcall *)(__int64, __int64, int *))get_hexdsp(v24, v23, v21);
      v30(273, v19 + 88, v18 + 22);
      *(_DWORD *)(v19 + 104) = v18[26];
      v31 = *v18;
      *(_QWORD *)(v19 + 16) = 0;
      *(_DWORD *)v19 = v31;
      *(_QWORD *)(v19 + 24) = 0;
      *(_QWORD *)(v20 + 16) = v19;
      *(_QWORD *)(v19 + 8) = v20;
      v32 = *((_QWORD *)v18 + 3);
      if ( v32 )
        *(_QWORD *)(v19 + 24) = sub_32B20(v32, v19);
      v18 = *((int **)v18 + 2);
    }
    while ( v18 );
  }
  return v7;
}
