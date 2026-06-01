__int64 __fastcall sub_3A880(__int64 a1, __int64 *a2, int a3, int a4)
{
  __int64 v4; // r13
  char *v7; // rax
  int v8; // edx
  char *v9; // rbp
  unsigned __int64 v10; // r15
  unsigned int v11; // edx
  __int64 v12; // rdi
  unsigned __int64 v13; // xmm0_8
  char *v14; // rax
  int v15; // edx
  _BYTE *v16; // rax
  int v17; // ecx
  char *v18; // rdx
  int v19; // eax
  char v20; // di
  __int64 v21; // rcx
  _BYTE *v23; // rax
  _BYTE *v24; // rax
  _BYTE *v25; // [rsp+8h] [rbp-40h]

  v4 = a4;
  if ( a4 <= 0 )
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0x100000001LL;
    v24 = (_BYTE *)operator new[](1u);
    *(_QWORD *)a1 = v24;
    *v24 = 0;
  }
  else
  {
    v7 = (char *)operator new[](1u);
    v8 = v4 + 1;
    *v7 = 0;
    v9 = v7;
    if ( (int)v4 + 1 > 0 )
    {
      v10 = v8;
      v23 = (_BYTE *)operator new[](v8);
      *v23 = 0;
      v11 = v4 + 1;
      if ( v9 )
      {
        v25 = v23;
        operator delete[](v9);
        v11 = v4 + 1;
        v23 = v25;
      }
      v9 = v23;
    }
    else
    {
      v10 = 1;
      v11 = 1;
    }
    v12 = *a2;
    v13 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v11), 224).m128i_u64[0];
    v14 = v9;
    do
    {
      v15 = a3 - (_DWORD)v9 + (_DWORD)v14++;
      *(v14 - 1) = *(_BYTE *)(v12 + v15);
    }
    while ( &v9[v4] != v14 );
    v9[v4] = 0;
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = v13;
    v16 = (_BYTE *)operator new[](v10);
    v17 = *(_DWORD *)(a1 + 12);
    *(_QWORD *)a1 = v16;
    if ( v17 > 0 )
    {
      *v16 = *v9;
      v18 = v9 + 1;
      v19 = 1;
      if ( v17 != 1 )
      {
        do
        {
          v20 = *v18;
          v21 = v19;
          ++v18;
          ++v19;
          *(_BYTE *)(*(_QWORD *)a1 + v21) = v20;
        }
        while ( v19 < *(_DWORD *)(a1 + 12) );
      }
    }
    if ( v9 )
      operator delete[](v9);
  }
  return a1;
}

