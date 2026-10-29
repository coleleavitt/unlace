__int64 __fastcall sub_1FF60(__int64 a1, __int64 *a2)
{
  unsigned int v4; // ebp
  _DWORD *v5; // rsi
  unsigned __int64 v6; // rbp
  size_t v7; // r13
  __int64 v8; // r12
  size_t v9; // r14
  __int64 v10; // rsi
  const char *v11; // rsi
  char *v13; // rsi
  _BYTE *v14; // rax
  char *v15; // rsi
  _BYTE *v16; // rax
  __int64 v17; // rax
  _BYTE *v18; // rdi
  __int64 v19; // rax
  char *v20; // rcx
  unsigned __int64 v21; // rbp
  void *v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // r13
  char *v25; // rsi
  _BYTE *v26; // rax
  __int64 v27; // rax
  void *src; // [rsp+0h] [rbp-58h] BYREF
  __int128 v29; // [rsp+8h] [rbp-50h]
  char nptr[4]; // [rsp+23h] [rbp-35h] BYREF
  char v31; // [rsp+27h] [rbp-31h]
  unsigned __int64 v32; // [rsp+28h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  src = nullptr;
  v29 = 0;
  v4 = sub_1DD80(a1, (__int64)nptr, 4u);
  if ( (_BYTE)v4 )
  {
    if ( *(_DWORD *)nptr == 1497451343 )
      goto LABEL_18;
    if ( *(_DWORD *)nptr == 1279869254 )
    {
      if ( (unsigned __int8)sub_1DD80(a1, (__int64)nptr, 4u) )
      {
        v31 = 0;
        v18 = src;
        v19 = (unsigned int)strtoul(nptr, nullptr, 16);
        v20 = (char *)src;
        v21 = (unsigned int)v19;
        if ( (_DWORD)v19 )
        {
          v23 = v29;
          v24 = (unsigned int)v19 + 1LL;
          if ( (unsigned __int64)v29 < v24 )
          {
            if ( *((_QWORD *)&v29 + 1) < v24 )
            {
              src = (void *)qvector_reserve();
              v23 = v29;
              v20 = (char *)src;
            }
            memset(&v20[v23], 0, v24 - v23);
            *(_QWORD *)&v29 = v24;
            v18 = src;
          }
          else if ( v24 != (_QWORD)v29 )
          {
            *(_QWORD *)&v29 = v19 + 1;
          }
          v18[v21] = 0;
          v22 = src;
        }
        else
        {
          v22 = nullptr;
        }
        if ( !(unsigned __int8)sub_1DD80(a1, (__int64)v22, v21) )
        {
          v25 = (char *)src;
          if ( *((_QWORD *)&v29 + 1) <= 0x1Cu )
          {
            src = (void *)qvector_reserve();
            v25 = (char *)src;
          }
          *(_QWORD *)&v29 = 29;
          *(__m128i *)v25 = _mm_load_si128((const __m128i *)&xmmword_6A400);
          v26 = src;
          *(__m128i *)(v25 + 12) = _mm_load_si128((const __m128i *)&xmmword_6A430);
          v26[28] = 0;
        }
      }
      else
      {
        v15 = (char *)src;
        if ( *((_QWORD *)&v29 + 1) <= 0x1Bu )
        {
          src = (void *)qvector_reserve();
          v15 = (char *)src;
        }
        *(_QWORD *)&v29 = 28;
        *(__m128i *)v15 = _mm_load_si128((const __m128i *)&xmmword_6A400);
        v16 = src;
        *(__m128i *)(v15 + 11) = _mm_load_si128((const __m128i *)&xmmword_6A420);
        v16[27] = 0;
      }
    }
    else
    {
      sub_13B20((__int64 *)&src);
    }
  }
  else
  {
    v13 = (char *)src;
    if ( *((_QWORD *)&v29 + 1) <= 0x1Au )
    {
      src = (void *)qvector_reserve();
      v13 = (char *)src;
    }
    *(_QWORD *)&v29 = 27;
    *(__m128i *)v13 = _mm_load_si128((const __m128i *)&xmmword_6A400);
    v14 = src;
    *(__m128i *)(v13 + 10) = _mm_load_si128((const __m128i *)&xmmword_6A410);
    v14[26] = 0;
  }
  if ( !a2 )
  {
LABEL_15:
    if ( (_QWORD)v29 )
      goto LABEL_16;
LABEL_21:
    v11 = ::nptr;
    goto LABEL_17;
  }
  v5 = (_DWORD *)*a2;
  if ( (unsigned __int64)a2[2] <= 7 )
  {
    v17 = qvector_reserve();
    *a2 = v17;
    v5 = (_DWORD *)v17;
  }
  a2[1] = 8;
  *v5 = 1869771365;
  *(_DWORD *)((char *)v5 + 3) = 540701295;
  *(_BYTE *)(*a2 + 7) = 0;
  v6 = v29;
  if ( !(_QWORD)v29 )
    goto LABEL_21;
  v7 = v29 - 1;
  if ( (_QWORD)v29 != 1 )
  {
    v8 = a2[1];
    v9 = v29 - 1;
    if ( v8 )
    {
      --v8;
      v9 = v7 + v8;
      v6 = v29 + v8;
    }
    v10 = *a2;
    if ( a2[2] < v6 )
    {
      v27 = qvector_reserve();
      *a2 = v27;
      v10 = v27;
    }
    a2[1] = v6;
    *(_BYTE *)(v10 + v9) = 0;
    memcpy((void *)(v8 + *a2), src, v7);
    goto LABEL_15;
  }
LABEL_16:
  v11 = (const char *)src;
LABEL_17:
  sub_11340((__int64)"ADB error: %s\n", v11);
  v4 = 0;
LABEL_18:
  if ( src )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  return v4;
}

