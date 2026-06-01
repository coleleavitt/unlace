void __fastcall sub_C3A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  _BYTE *v7; // rax
  int v8; // ecx
  char *v9; // rdx
  char v10; // cl
  char *v11; // rdx
  int j; // eax
  char v13; // di
  __int64 v14; // rcx
  _BYTE *v15; // rax
  unsigned __int64 v16; // r14
  _BYTE *v17; // rax
  char *v18; // rsi
  _BYTE *v19; // r13
  unsigned __int64 v20; // xmm2_8
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rbx
  _BYTE *v24; // rax
  int v25; // esi
  char *v26; // rdx
  int i; // eax
  char v28; // di
  __int64 v29; // rcx

  v3 = *(unsigned int *)(a1 + 12);
  v4 = v3 + 1;
  if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v3 + 1) )
  {
    v15 = (_BYTE *)operator new[](1u);
    *v15 = 0;
    if ( v15 )
      operator delete[](v15);
    v16 = *(int *)(a2 + 12);
    v17 = (_BYTE *)operator new[](v16);
    v18 = *(char **)a2;
    v19 = v17;
    v20 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v16), 224).m128i_u64[0];
    if ( (int)v16 > 0 )
      memcpy(v17, v18, (unsigned int)v16);
    sub_C160(a1, 2 * *(_DWORD *)(a1 + 12) + 1);
    v21 = *(unsigned int *)(a1 + 12);
    v22 = v21 + 1;
    v23 = *(_QWORD *)a1 + 16 * v21;
    *(_DWORD *)(a1 + 12) = v22;
    if ( *(_QWORD *)v23 )
      operator delete[](*(void **)v23);
    *(_QWORD *)(v23 + 8) = v20;
    v24 = (_BYTE *)operator new[](v16);
    v25 = *(_DWORD *)(v23 + 12);
    *(_QWORD *)v23 = v24;
    if ( v25 > 0 )
    {
      *v24 = *v19;
      v26 = v19 + 1;
      for ( i = 1; i < *(_DWORD *)(v23 + 12); *(_BYTE *)(*(_QWORD *)v23 + v29) = v28 )
      {
        v28 = *v26;
        v29 = i;
        ++v26;
        ++i;
      }
    }
    *(_BYTE *)(a1 + 17) = 0;
    if ( v19 )
      operator delete[](v19);
  }
  else
  {
    v5 = *(_QWORD *)a1 + 16 * v3;
    *(_DWORD *)(a1 + 12) = v4;
    if ( v5 != a2 )
    {
      if ( *(_QWORD *)v5 )
        operator delete[](*(void **)v5);
      v6 = *(int *)(a2 + 12);
      *(_QWORD *)(v5 + 8) = _mm_shuffle_epi32(_mm_cvtsi32_si128(v6), 224).m128i_u64[0];
      v7 = (_BYTE *)operator new[](v6);
      v8 = *(_DWORD *)(v5 + 12);
      *(_QWORD *)v5 = v7;
      v9 = *(char **)a2;
      if ( v8 > 0 )
      {
        v10 = *v9;
        v11 = v9 + 1;
        *v7 = v10;
        for ( j = 1; j < *(_DWORD *)(v5 + 12); *(_BYTE *)(*(_QWORD *)v5 + v14) = v13 )
        {
          v13 = *v11;
          v14 = j;
          ++v11;
          ++j;
        }
      }
    }
    *(_BYTE *)(a1 + 17) = 0;
  }
}

