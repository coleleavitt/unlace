__int64 __fastcall sub_190B20(__int64 a1, int *a2)
{
  __int64 v2; // r9
  int v3; // ebp
  int v4; // eax
  int *v5; // r10
  __m128i v6; // xmm0
  unsigned int v7; // ebx
  __int16 v8; // dx
  __int16 v9; // cx
  char v10; // al
  int v11; // r12d
  __int64 v12; // r11
  unsigned __int16 *v13; // rcx
  unsigned int v14; // esi
  unsigned __int16 *v15; // rdx
  int v16; // eax
  int v17; // edi
  unsigned int v18; // eax
  unsigned __int16 *v19; // rdx
  unsigned __int16 *v20; // rdi
  unsigned __int16 v21; // ax
  __int16 v22; // si
  __int64 v23; // rax
  _DWORD v25[6]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-20h]

  v2 = a1;
  v3 = 112;
  v4 = *a2;
  v26 = __readfsqword(0x28u);
  v5 = a2;
  v25[0] = v4;
  memset(&v25[1], 0, 18);
  while ( !*(_WORD *)(a1 + 18) )
  {
    v6 = _mm_loadu_si128((const __m128i *)(a1 + 4));
    *(_WORD *)(a1 + 4) = 0;
    *(__m128i *)(a1 + 6) = v6;
    v3 -= 16;
    if ( !v3 )
    {
      if ( a2 )
      {
        *(_OWORD *)a2 = 0;
        *(_QWORD *)((char *)a2 + 14) = 0;
      }
      return 0;
    }
  }
  v8 = *(_WORD *)(a1 + 18);
  v9 = (unsigned __int8)v8;
  if ( (_BYTE)v8 )
  {
    v10 = 0;
  }
  else
  {
    v19 = (unsigned __int16 *)(a1 + 4);
    v20 = (unsigned __int16 *)(a1 + 22);
    do
    {
      v21 = *v19;
      v22 = v9;
      ++v19;
      v9 = v21 << 8;
      *(v19 - 1) = v22 | HIBYTE(v21);
    }
    while ( v20 != v19 );
    v8 = *(_WORD *)(v2 + 18);
    v10 = v25[5];
    v3 -= 8;
  }
  v11 = 0;
  v7 = 0;
  while ( 1 )
  {
    if ( (v8 & 1) != 0 )
    {
      v13 = (unsigned __int16 *)(v5 + 5);
      v14 = 0;
      v15 = (unsigned __int16 *)&v25[5];
      do
      {
        v16 = *v13;
        v17 = *v15--;
        --v13;
        v18 = v14 + v17 + v16;
        v15[1] = v18;
        v14 = HIWORD(v18);
      }
      while ( v15 != (unsigned __int16 *)((char *)v25 + 2) );
      v10 = v25[5];
    }
    ++v11;
    v7 |= v10 & 1;
    sub_190880(v2);
    sub_190880(v12);
    if ( v3 == v11 )
      break;
    v8 = *(_WORD *)(v2 + 18);
    v10 = v25[5];
  }
  v23 = *(_QWORD *)((char *)&v25[3] + 2);
  *(__m128i *)v5 = _mm_load_si128((const __m128i *)v25);
  *(_QWORD *)((char *)v5 + 14) = v23;
  return v7;
}
