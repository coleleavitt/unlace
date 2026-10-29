unsigned __int64 __fastcall sub_69BA0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v4; // r15
  __int64 v5; // rbp
  __int64 v7; // rdx
  __int64 v8; // rdx
  signed int v9; // r12d
  signed int v10; // ebx
  int v11; // ecx
  int v12; // r13d
  __m128i v13; // xmm1
  unsigned int v14; // edx
  __m128i v15; // xmm0
  unsigned __int64 v16; // rsi
  __int64 v17; // rdi
  int v18; // edx
  __int64 v19; // rax
  signed int v20; // eax
  __int64 i; // rbx
  int v22; // edx
  __int64 v23; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD v27[5]; // [rsp+0h] [rbp-88h] BYREF
  char v28; // [rsp+28h] [rbp-60h]
  __m128i v29; // [rsp+2Ch] [rbp-5Ch]
  int v30; // [rsp+3Ch] [rbp-4Ch]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v4 = a3;
  if ( a2 == a3 )
  {
    if ( !under_debugger )
      sub_383060(0xC81Eu, a4);
    goto LABEL_37;
  }
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 != a3 )
  {
    if ( a2 == *(_QWORD *)(a1 + 520) )
    {
      *(_QWORD *)(a1 + 520) = v5;
      if ( !v5 )
      {
LABEL_6:
        v7 = *(_QWORD *)(a2 + 16);
        if ( v7 )
          *(_QWORD *)(v7 + 8) = v5;
        if ( v4 )
        {
          v8 = *(_QWORD *)(v4 + 16);
          *(_QWORD *)(a2 + 16) = v8;
          if ( v8 )
            *(_QWORD *)(v8 + 8) = a2;
          *(_QWORD *)(v4 + 16) = a2;
          *(_QWORD *)(a2 + 8) = v4;
          if ( v4 != *(_QWORD *)(a1 + 520) )
            goto LABEL_12;
        }
        else
        {
          v25 = *(_QWORD *)(a1 + 520);
          v26 = 0;
          if ( v25 )
          {
            do
            {
              v26 = v25;
              v25 = *(_QWORD *)(v25 + 8);
            }
            while ( v25 );
            *(_QWORD *)(v26 + 8) = a2;
          }
          *(_QWORD *)(a2 + 16) = v26;
          *(_QWORD *)(a2 + 8) = 0;
          if ( *(_QWORD *)(a1 + 520) )
          {
LABEL_12:
            v9 = *(_DWORD *)(a2 + 72);
            v10 = *(_DWORD *)(v4 + 72);
            if ( v10 <= v9 )
            {
LABEL_13:
              v11 = *(_DWORD *)(v5 + 72);
              v4 = v5;
              v5 = a2;
              v12 = v10;
              v13 = _mm_cvtsi32_si128(1u);
              v14 = v11 - 1;
LABEL_14:
              v28 = 0;
              v15 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), _mm_cvtsi32_si128(v14)),
                      _mm_unpacklo_epi32(v13, _mm_cvtsi32_si128(v9)));
              memset(&v27[1], 0, 32);
              v29 = v15;
              v27[0] = &off_4DBB68;
              v30 = v12;
              sub_11FBB0(a1, (__int64)v27);
              sub_68510(a1 + 1448, v9, v12);
              v16 = *(_QWORD *)(a1 + 440);
              if ( v16 )
              {
                v17 = *(_QWORD *)(a1 + 432);
                v18 = 0;
                v19 = 0;
                while ( *(_DWORD *)(v17 + 104 * v19 + 92) < v10 )
                {
                  v19 = ++v18;
                  if ( v18 >= v16 )
                    goto LABEL_18;
                }
                if ( !under_debugger )
                  sub_383060(0xC81Fu, *(double *)v15.m128i_i64);
LABEL_37:
                BUG();
              }
LABEL_18:
              while ( v4 != v5 )
              {
                *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v10) = v5;
                v20 = v10++;
                *(_DWORD *)(v5 + 72) = v20;
                v5 = *(_QWORD *)(v5 + 8);
              }
              for ( i = *(_QWORD *)(a1 + 520); i; i = *(_QWORD *)(i + 8) )
              {
                sub_65120((int **)(i + 368), v9, v12);
                sub_65120((int **)(i + 344), v9, v22);
              }
              v23 = *(_QWORD *)(a1 + 784);
              *(_DWORD *)a1 |= 0x400u;
              if ( v23 )
                *(_DWORD *)(v23 + 48) = 63;
              return v31 - __readfsqword(0x28u);
            }
LABEL_30:
            v14 = v10 - 1;
            v10 = v9;
            v12 = v14;
            v13 = _mm_cvtsi32_si128(0xFFFFFFFF);
            goto LABEL_14;
          }
        }
        *(_QWORD *)(a1 + 520) = a2;
        v9 = *(_DWORD *)(a2 + 72);
        v10 = *(_DWORD *)(v4 + 72);
        if ( v10 <= v9 )
          goto LABEL_13;
        goto LABEL_30;
      }
    }
    else if ( !v5 )
    {
      goto LABEL_6;
    }
    *(_QWORD *)(v5 + 16) = *(_QWORD *)(a2 + 16);
    goto LABEL_6;
  }
  return v31 - __readfsqword(0x28u);
}

