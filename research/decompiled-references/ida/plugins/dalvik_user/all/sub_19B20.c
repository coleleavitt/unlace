__int64 __fastcall sub_19B20(__int64 a1, __int64 *a2, char *a3)
{
  char *v3; // r13
  unsigned int v4; // ebx
  char v6; // cl
  __int64 v8; // rbx
  unsigned __int8 v9; // cl
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r14
  unsigned __int64 v16; // r13
  __int64 v17; // rsi
  __m128i si128; // xmm0
  __int64 v19; // rbp
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  size_t v24; // r12
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // r14
  unsigned __int64 v28; // r13
  __int64 v29; // rsi
  __m128i v30; // xmm0
  void *v31; // rax
  void *v32; // rsi
  __int64 v33; // rax
  void *src; // [rsp+0h] [rbp-68h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-60h]
  __m128i v36; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v37; // [rsp+38h] [rbp-30h]

  v37 = __readfsqword(0x28u);
  v3 = a3;
  LOBYTE(a3) = a1 == 0;
  v4 = (unsigned int)a3;
  LOBYTE(v4) = a2 == nullptr || a1 == 0;
  if ( (_BYTE)v4 )
    return 0;
  v6 = *v3;
  if ( *v3 <= 83 )
  {
    if ( v6 > 65 )
    {
      switch ( v6 )
      {
        case 'B':
          v12 = v3[8];
          *(_BYTE *)a1 = 2;
          *(_QWORD *)(a1 + 8) = v12;
          return 1;
        case 'C':
          v13 = *((unsigned __int16 *)v3 + 4);
          *(_BYTE *)a1 = 2;
          *(_QWORD *)(a1 + 8) = v13;
          return 1;
        case 'D':
          if ( (unsigned int)cpu2ieee() != 1 )
            goto LABEL_17;
          goto LABEL_23;
        case 'F':
          if ( (unsigned int)cpu2ieee() == 1 )
          {
LABEL_23:
            free_idcv();
            v20 = _mm_load_si128(&v36);
            *(_BYTE *)a1 = 3;
            *(__m128i *)(a1 + 8) = v20;
            return 1;
          }
LABEL_17:
          v14 = a2[1];
          if ( v14 )
          {
            v15 = v14 + 30;
            v16 = v14 + 31;
            --v14;
          }
          else
          {
            v16 = 32;
            v15 = 31;
          }
          v17 = *a2;
          if ( a2[2] < v16 )
          {
            v25 = qvector_reserve();
            *a2 = v25;
            v17 = v25;
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_6A3B0);
          a2[1] = v16;
          *(_BYTE *)(v17 + v15) = 0;
          v19 = *a2 + v14;
          *(__m128i *)v19 = si128;
          *(__m128i *)(v19 + 15) = _mm_load_si128((const __m128i *)&xmmword_6A3C0);
          break;
        case 'I':
          v21 = *((int *)v3 + 2);
          *(_BYTE *)a1 = 2;
          *(_QWORD *)(a1 + 8) = v21;
          return 1;
        case 'J':
        case 'L':
          goto LABEL_7;
        case 'S':
          v22 = *((__int16 *)v3 + 4);
          *(_BYTE *)a1 = 2;
          *(_QWORD *)(a1 + 8) = v22;
          return 1;
        default:
          return v4;
      }
    }
    return v4;
  }
  v9 = v6 - 90;
  if ( v9 > 0x1Au )
    return v4;
  v10 = 1LL << v9;
  if ( ((1LL << v9) & 0x4042202) != 0 )
  {
LABEL_7:
    v8 = *((_QWORD *)v3 + 1);
    free_idcv();
    *(_BYTE *)a1 = 9;
    *(_QWORD *)(a1 + 8) = v8;
    return 1;
  }
  if ( v9 != 25 )
  {
    v4 = v10 & 1;
    if ( (v10 & 1) == 0 )
      return v4;
    v11 = (unsigned __int8)v3[8];
    *(_BYTE *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v11;
    return 1;
  }
  if ( !*((_QWORD *)v3 + 1) )
  {
    *(_BYTE *)a1 = 7;
    *(_QWORD *)(a1 + 8) = 0;
    *(_OWORD *)(a1 + 16) = 0;
    return 1;
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  v23 = sub_135E0();
  v4 = sub_4F290(v23 + 864, &src, *((_QWORD *)v3 + 1));
  if ( (_BYTE)v4 )
  {
    v24 = n[0];
    *(_BYTE *)a1 = 7;
    *(_QWORD *)(a1 + 8) = 0;
    *(_OWORD *)(a1 + 16) = 0;
    if ( v24 )
    {
      v31 = (void *)qalloc_or_throw();
      *(_QWORD *)(a1 + 8) = v31;
      v32 = src;
      *(_QWORD *)(a1 + 24) = v24;
      memcpy(v31, v32, v24);
      *(_QWORD *)(a1 + 16) = v24;
    }
  }
  else
  {
    v26 = a2[1];
    if ( v26 )
    {
      v27 = v26 + 15;
      v28 = v26 + 16;
      --v26;
    }
    else
    {
      v28 = 17;
      v27 = 16;
    }
    v29 = *a2;
    if ( a2[2] < v28 )
    {
      v33 = qvector_reserve();
      *a2 = v33;
      v29 = v33;
    }
    v30 = _mm_load_si128((const __m128i *)&xmmword_6A3D0);
    a2[1] = v28;
    *(_BYTE *)(v29 + v27) = 0;
    *(__m128i *)(*a2 + v26) = v30;
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  return v4;
}

