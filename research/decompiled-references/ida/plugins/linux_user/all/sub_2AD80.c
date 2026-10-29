__int64 __fastcall sub_2AD80(__int64 a1, __int64 *a2)
{
  int v3; // edx
  _BYTE *v4; // rax
  int v5; // ebx
  __int64 v6; // r15
  size_t v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r15
  unsigned __int64 v15; // rbp
  __int64 v16; // rsi
  __m128i si128; // xmm0
  size_t v18; // r13
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-C0h]
  size_t v21; // [rsp+10h] [rbp-B8h]
  _BYTE src[104]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v23; // [rsp+88h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  qlseek();
  if ( qlseek() == -1 )
  {
    sub_BF00(a2);
    v10 = 0;
    goto LABEL_16;
  }
  if ( *a2 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  while ( 1 )
  {
    v3 = qlread();
    if ( v3 < 0 )
      break;
    v4 = src;
    v5 = 0;
    if ( v3 )
    {
      do
      {
        if ( !*v4 )
          break;
        ++v5;
        ++v4;
      }
      while ( v3 != v5 );
      v18 = v5;
    }
    else
    {
      v18 = 0;
    }
    v6 = a2[1];
    v7 = v18;
    if ( v6 )
    {
      --v6;
      v7 = v18 + v6;
    }
    v8 = *a2;
    v9 = v7 + 1;
    if ( a2[2] < v7 + 1 )
    {
      v21 = v7;
      v20 = v7 + 1;
      v12 = qvector_reserve();
      v7 = v21;
      v9 = v20;
      *a2 = v12;
      v8 = v12;
    }
    a2[1] = v9;
    *(_BYTE *)(v8 + v7) = 0;
    memmove((void *)(v6 + *a2), src, v18);
    if ( v5 != 100 )
    {
      v10 = 1;
      goto LABEL_16;
    }
  }
  v13 = a2[1];
  if ( !v13 )
  {
    v16 = *a2;
    v15 = 17;
    v14 = 16;
    if ( (unsigned __int64)a2[2] >= 0x11 )
      goto LABEL_19;
LABEL_22:
    v19 = qvector_reserve();
    *a2 = v19;
    v16 = v19;
    goto LABEL_19;
  }
  v14 = v13 + 15;
  v15 = v13 + 16;
  v16 = *a2;
  --v13;
  if ( a2[2] < v15 )
    goto LABEL_22;
LABEL_19:
  si128 = _mm_load_si128((const __m128i *)&xmmword_3AD50);
  a2[1] = v15;
  *(_BYTE *)(v16 + v14) = 0;
  *(__m128i *)(*a2 + v13) = si128;
  v10 = 0;
LABEL_16:
  qlseek();
  return v10;
}

