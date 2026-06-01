void __fastcall sub_41280(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  char **v4; // r13
  _QWORD *v5; // rsi
  __int64 v6; // rax
  char **v7; // rbx
  __int64 v8; // rbp
  _QWORD *v9; // r15
  _BYTE *v10; // rax
  int v12; // eax
  char **v13; // r14
  unsigned __int64 v14; // r15
  __int64 v15; // rbp
  char **v16; // rbx
  unsigned __int64 v17; // rdi
  char *v18; // rax
  int v19; // ecx
  char *v20; // rdx
  char v21; // cl
  char *v22; // rdx
  int i; // eax
  char v24; // di
  __int64 v25; // rcx
  char **v26; // rbx
  void *v27; // rdi
  __int64 v28; // rsi
  unsigned int v29; // [rsp+4h] [rbp-54h]

  v3 = a2;
  v4 = *(char ***)a1;
  v29 = a2;
  v5 = (_QWORD *)operator new[](16LL * a2 + 8);
  v6 = v3;
  *v5 = v3;
  v7 = (char **)(v5 + 1);
  if ( v6 )
  {
    v8 = v6 - 1;
    v9 = v5 + 1;
    do
    {
      *v9 = 0;
      v9[1] = 0x100000001LL;
      v10 = (_BYTE *)operator new[](1u);
      *v9 = v10;
      v9 += 2;
      *v10 = 0;
    }
    while ( v8-- != 0 );
    v12 = *(_DWORD *)(a1 + 12);
    *(_QWORD *)a1 = v7;
    *(_DWORD *)(a1 + 8) = v29;
    if ( v29 <= v12 )
      v12 = v29;
    if ( v12 > 0 )
    {
      v13 = v4;
      v14 = 0;
      v15 = 16LL * (unsigned int)(v12 - 1);
      while ( 1 )
      {
        v16 = &v7[v14 / 8];
        if ( v16 != v13 )
        {
          if ( *v16 )
            operator delete[](*v16);
          v17 = *((int *)v13 + 3);
          v16[1] = (char *)_mm_shuffle_epi32(_mm_cvtsi32_si128(v17), 224).m128i_u64[0];
          v18 = (char *)operator new[](v17);
          v19 = *((_DWORD *)v16 + 3);
          *v16 = v18;
          v20 = *v13;
          if ( v19 > 0 )
          {
            v21 = *v20;
            v22 = v20 + 1;
            *v18 = v21;
            for ( i = 1; i < *((_DWORD *)v16 + 3); (*v16)[v25] = v24 )
            {
              v24 = *v22;
              v25 = i;
              ++v22;
              ++i;
            }
          }
        }
        v13 += 2;
        if ( v15 == v14 )
          break;
        v7 = *(char ***)a1;
        v14 += 16LL;
      }
      v29 = *(_DWORD *)(a1 + 8);
    }
  }
  else
  {
    *(_QWORD *)a1 = v7;
    *(_DWORD *)(a1 + 8) = 0;
    v29 = 0;
  }
  if ( v29 < *(_DWORD *)(a1 + 12) )
    *(_DWORD *)(a1 + 12) = v29;
  if ( v4 )
  {
    v26 = &v4[2 * (_QWORD)*(v4 - 1)];
    if ( v4 == v26 )
    {
      v28 = 0;
    }
    else
    {
      do
      {
        v27 = *(v26 - 2);
        v26 -= 2;
        if ( v27 )
          operator delete[](v27);
      }
      while ( v4 != v26 );
      v28 = 16LL * (_QWORD)*(v4 - 1);
    }
    operator delete[](v4 - 1, v28 + 8);
  }
}

