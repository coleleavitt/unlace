unsigned __int64 __fastcall sub_659A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v9; // rdx
  __int64 v10; // rdx
  signed int v11; // r12d
  signed int v12; // ebx
  int v13; // r13d
  __m128i v14; // xmm1
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  __int64 v17; // rdi
  int v18; // edx
  __int64 v19; // rax
  signed int v20; // eax
  __int64 i; // rbx
  int v22; // edx
  __int64 v23; // rax
  __int64 v25; // rdx
  _QWORD v26[5]; // [rsp+0h] [rbp-88h] BYREF
  char v27; // [rsp+28h] [rbp-60h]
  __m128i v28; // [rsp+2Ch] [rbp-5Ch]
  int v29; // [rsp+3Ch] [rbp-4Ch]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v6 = a3;
  if ( a2 == a3 )
  {
    if ( !under_debugger )
      sub_37E160(51230);
    goto LABEL_37;
  }
  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 != a3 )
  {
    if ( a2 == *(_QWORD *)(a1 + 520) )
    {
      *(_QWORD *)(a1 + 520) = v7;
      if ( !v7 )
      {
LABEL_6:
        v9 = *(_QWORD *)(a2 + 16);
        if ( v9 )
          *(_QWORD *)(v9 + 8) = v7;
        if ( v6 )
        {
          v10 = *(_QWORD *)(v6 + 16);
          *(_QWORD *)(a2 + 16) = v10;
          if ( v10 )
            *(_QWORD *)(v10 + 8) = a2;
          *(_QWORD *)(v6 + 16) = a2;
          *(_QWORD *)(a2 + 8) = v6;
          if ( v6 != *(_QWORD *)(a1 + 520) )
            goto LABEL_12;
        }
        else
        {
          v25 = *(_QWORD *)(a1 + 520);
          a4 = 0;
          if ( v25 )
          {
            do
            {
              a4 = v25;
              v25 = *(_QWORD *)(v25 + 8);
            }
            while ( v25 );
            *(_QWORD *)(a4 + 8) = a2;
          }
          *(_QWORD *)(a2 + 16) = a4;
          *(_QWORD *)(a2 + 8) = 0;
          if ( *(_QWORD *)(a1 + 520) )
          {
LABEL_12:
            v11 = *(_DWORD *)(a2 + 72);
            v12 = *(_DWORD *)(v6 + 72);
            if ( v12 <= v11 )
            {
LABEL_13:
              a4 = *(unsigned int *)(v7 + 72);
              v6 = v7;
              v7 = a2;
              v13 = v12;
              v14 = _mm_cvtsi32_si128(1u);
              v15 = (unsigned int)(a4 - 1);
LABEL_14:
              v27 = 0;
              memset(&v26[1], 0, 32);
              v28 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(v15)),
                      _mm_unpacklo_epi32(v14, _mm_cvtsi32_si128(v11)));
              v26[0] = off_4BC2E8;
              v29 = v13;
              ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int64, __int64))sub_11B9B0)(
                a1,
                v26,
                v15,
                a4,
                a5,
                a6);
              sub_64310(a1 + 1448, v11, v13);
              v16 = *(_QWORD *)(a1 + 440);
              if ( v16 )
              {
                v17 = *(_QWORD *)(a1 + 432);
                v18 = 0;
                v19 = 0;
                while ( *(_DWORD *)(v17 + 104 * v19 + 92) < v12 )
                {
                  v19 = ++v18;
                  if ( v18 >= v16 )
                    goto LABEL_18;
                }
                if ( !under_debugger )
                  sub_37E160(51231);
LABEL_37:
                BUG();
              }
LABEL_18:
              while ( v6 != v7 )
              {
                *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v12) = v7;
                v20 = v12++;
                *(_DWORD *)(v7 + 72) = v20;
                v7 = *(_QWORD *)(v7 + 8);
              }
              for ( i = *(_QWORD *)(a1 + 520); i; i = *(_QWORD *)(i + 8) )
              {
                sub_60F20((int **)(i + 368), v11, v13);
                sub_60F20((int **)(i + 344), v11, v22);
              }
              v23 = *(_QWORD *)(a1 + 784);
              *(_DWORD *)a1 |= 0x400u;
              if ( v23 )
                *(_DWORD *)(v23 + 48) = 63;
              return v30 - __readfsqword(0x28u);
            }
LABEL_30:
            v15 = (unsigned int)(v12 - 1);
            v12 = v11;
            v13 = v15;
            v14 = _mm_cvtsi32_si128(0xFFFFFFFF);
            goto LABEL_14;
          }
        }
        *(_QWORD *)(a1 + 520) = a2;
        v11 = *(_DWORD *)(a2 + 72);
        v12 = *(_DWORD *)(v6 + 72);
        if ( v12 <= v11 )
          goto LABEL_13;
        goto LABEL_30;
      }
    }
    else if ( !v7 )
    {
      goto LABEL_6;
    }
    *(_QWORD *)(v7 + 16) = *(_QWORD *)(a2 + 16);
    goto LABEL_6;
  }
  return v30 - __readfsqword(0x28u);
}

