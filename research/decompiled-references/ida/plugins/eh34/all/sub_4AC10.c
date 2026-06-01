__int64 __fastcall sub_4AC10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rax
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rax
  int v13; // ecx
  __int64 v14; // rsi
  const char *v15; // rdx
  __m128i v16; // xmm0
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  __m128i v18; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-10h]

  v7 = *(_QWORD *)(a2 + 240);
  v19 = __readfsqword(0x28u);
  if ( *(_DWORD *)(v7 + 32) )
  {
    v13 = *(_DWORD *)(a2 + 256);
    v14 = *(_QWORD *)(a2 + 16);
    v15 = "implicit flow block %d has no internal successor";
    goto LABEL_7;
  }
  v9 = *(int *)(v7 + 24);
  v10 = (_QWORD *)(*(_QWORD *)(a2 + 104) + 8 * (v9 / 64));
  v11 = v9 % 64;
  if ( v11 < 0 )
  {
    if ( (*(v10 - 1) & (1LL << ((unsigned __int8)v11 + 64))) == 0 )
      goto LABEL_4;
    goto LABEL_6;
  }
  if ( (*v10 & (1LL << v11)) != 0 )
  {
LABEL_6:
    v13 = *(_DWORD *)(a2 + 256);
    v14 = *(_QWORD *)(a2 + 16);
    v15 = "implicit flow block %d successor already marked";
LABEL_7:
    sub_64B50((unsigned int)&v17, v14, (_DWORD)v15, v13, a5, a6);
    *(_QWORD *)a1 = v17;
    v16 = _mm_loadu_si128(&v18);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v16;
    return a1;
  }
LABEL_4:
  sub_4A930(a2, 0);
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}

