void __fastcall sub_3B2A0(__int64 a1, unsigned int a2)
{
  void **v3; // r15
  _QWORD *v4; // rax
  void **v5; // r12
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  _BYTE *v8; // rax
  _BYTE *v9; // rax
  int v11; // eax
  void **v12; // r13
  void **v13; // rbx
  unsigned __int64 v14; // rdi
  _BYTE *v15; // rax
  int v16; // esi
  char *v17; // rdx
  char v18; // si
  char *v19; // rdx
  int i; // eax
  char v21; // r8
  __int64 v22; // rsi
  void *v23; // rdi
  unsigned __int64 v24; // rdi
  _BYTE *v25; // rax
  int v26; // ecx
  char *v27; // rdx
  char v28; // si
  char *v29; // rdx
  int j; // eax
  char v31; // r8
  __int64 v32; // rsi
  void **v33; // rbx
  void *v34; // rdi
  __int64 v35; // rsi
  unsigned int v36; // [rsp+0h] [rbp-58h]
  __int64 v37; // [rsp+0h] [rbp-58h]

  v3 = *(void ***)a1;
  v36 = a2;
  v4 = (_QWORD *)operator new[](32LL * a2 + 8);
  v5 = (void **)(v4 + 1);
  *v4 = a2;
  if ( a2 )
  {
    v6 = a2 - 1LL;
    v7 = v4 + 1;
    do
    {
      *v7 = 0;
      v7[1] = 0x100000001LL;
      v8 = (_BYTE *)operator new[](1u);
      *v7 = v8;
      *v8 = 0;
      v7[2] = 0;
      v7[3] = 0x100000001LL;
      v9 = (_BYTE *)operator new[](1u);
      v7[2] = v9;
      v7 += 4;
      *v9 = 0;
    }
    while ( v6-- != 0 );
    v11 = *(_DWORD *)(a1 + 12);
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = a2;
    if ( a2 <= v11 )
      v11 = a2;
    if ( v11 > 0 )
    {
      v12 = v3 + 2;
      v37 = (__int64)&v3[4 * (unsigned int)(v11 - 1) + 6];
      while ( 1 )
      {
        v13 = (void **)((char *)v12 + (_QWORD)v5 - (_QWORD)v3 - 16);
        if ( v13 != v12 - 2 )
        {
          if ( *v13 )
            operator delete[](*v13);
          v14 = *((int *)v12 - 1);
          v13[1] = (void *)_mm_shuffle_epi32(_mm_cvtsi32_si128(v14), 224).m128i_u64[0];
          v15 = (_BYTE *)operator new[](v14);
          v16 = *((_DWORD *)v13 + 3);
          *v13 = v15;
          v17 = (char *)*(v12 - 2);
          if ( v16 > 0 )
          {
            v18 = *v17;
            v19 = v17 + 1;
            *v15 = v18;
            for ( i = 1; i < *((_DWORD *)v13 + 3); *((_BYTE *)*v13 + v22) = v21 )
            {
              v21 = *v19;
              v22 = i;
              ++v19;
              ++i;
            }
          }
        }
        if ( v12 != (void **)((char *)v5 + (char *)v12 - (char *)v3) )
        {
          v23 = *(void **)((char *)v5 + (char *)v12 - (char *)v3);
          if ( v23 )
            operator delete[](v23);
          v24 = *((int *)v12 + 3);
          v13[3] = (void *)_mm_shuffle_epi32(_mm_cvtsi32_si128(v24), 224).m128i_u64[0];
          v25 = (_BYTE *)operator new[](v24);
          v26 = *((_DWORD *)v13 + 7);
          *(void **)((char *)v5 + (char *)v12 - (char *)v3) = v25;
          v27 = (char *)*v12;
          if ( v26 > 0 )
          {
            v28 = *v27;
            v29 = v27 + 1;
            *v25 = v28;
            for ( j = 1; j < *((_DWORD *)v13 + 7); (*(_BYTE **)((char *)v5 + (char *)v12 - (char *)v3))[v32] = v31 )
            {
              v31 = *v29;
              v32 = j;
              ++v29;
              ++j;
            }
          }
        }
        v12 += 4;
        if ( (void **)v37 == v12 )
          break;
        v5 = *(void ***)a1;
      }
      v36 = *(_DWORD *)(a1 + 8);
    }
  }
  else
  {
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = 0;
    v36 = 0;
  }
  if ( v36 < *(_DWORD *)(a1 + 12) )
    *(_DWORD *)(a1 + 12) = v36;
  if ( v3 )
  {
    v33 = &v3[4 * (_QWORD)*(v3 - 1)];
    if ( v3 == v33 )
    {
      v35 = 0;
    }
    else
    {
      do
      {
        v34 = *(v33 - 2);
        v33 -= 4;
        if ( v34 )
          operator delete[](v34);
        if ( *v33 )
          operator delete[](*v33);
      }
      while ( v3 != v33 );
      v35 = 32LL * (_QWORD)*(v3 - 1);
    }
    operator delete[](v3 - 1, v35 + 8);
  }
}

