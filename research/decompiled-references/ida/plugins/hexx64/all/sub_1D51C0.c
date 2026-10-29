void __fastcall sub_1D51C0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rbp
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbp
  int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // ebp
  int v18; // eax
  int v19; // ebp
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // r13
  void *v25; // r12
  __int64 v26; // rdx
  __m128i si128; // xmm0
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rsi
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  size_t v33; // rbp
  __int64 v34; // rax
  __m128i v35[4]; // [rsp+0h] [rbp-48h] BYREF

  v5 = a2;
  if ( !a2 )
    v5 = sub_1D5170(*(_QWORD *)(a1 + 64), 0, a3, a4, a5);
  v7 = *(_QWORD *)(a1 + 368);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 376) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 368) = 0;
    *(_QWORD *)(a1 + 384) = 0;
  }
  if ( (*(_BYTE *)(a1 + 25) & 0x20) != 0 )
  {
LABEL_9:
    *(_DWORD *)(a1 + 76) = 2;
    return;
  }
  if ( *(_QWORD *)(a1 + 48) )
  {
    while ( 2 )
    {
      v8 = *(_QWORD *)(a1 + 56);
      switch ( *(_DWORD *)v8 )
      {
        case '*':
        case '+':
        case ',':
        case '-':
        case '.':
        case '/':
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
          v9 = sub_1D36F0(*(_QWORD *)(a1 + 64), *(_QWORD *)(v8 + 24), v8 + 64, 2, a5);
          v10 = *(_QWORD *)(a1 + 368);
          v11 = v9;
          v12 = *(_DWORD *)(a1 + 72) + 1;
          v13 = *(_QWORD *)(a1 + 376);
          if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v13 + 1) )
          {
            v32 = qvector_reserve(a1 + 368, v10, v13 + 1, 4);
            *(_QWORD *)(a1 + 368) = v32;
            v10 = v32;
            v13 = *(_QWORD *)(a1 + 376);
          }
          *(_DWORD *)(v10 + 4 * v13) = v12;
          v14 = *(_QWORD *)(a1 + 376);
          v15 = *(_DWORD *)(a1 + 72);
          v16 = v14 + 1;
          *(_QWORD *)(a1 + 376) = v14 + 1;
          v17 = *(_DWORD *)(v11 + 72);
          if ( v15 + 1 == v17 )
          {
            *(_DWORD *)(a1 + 76) = 3;
          }
          else
          {
            v30 = *(_QWORD *)(a1 + 368);
            v31 = v14 + 2;
            if ( *(_QWORD *)(a1 + 384) < v31 )
            {
              v34 = qvector_reserve(a1 + 368, v30, v31, 4);
              v16 = *(_QWORD *)(a1 + 376);
              *(_QWORD *)(a1 + 368) = v34;
              v30 = v34;
            }
            *(_DWORD *)(v30 + 4 * v16) = v17;
            *(_DWORD *)(a1 + 76) = 4;
            ++*(_QWORD *)(a1 + 376);
          }
          return;
        case '5':
          v24 = *(_QWORD *)(v8 + 56);
          v25 = nullptr;
          v26 = *(_QWORD *)(v24 + 32);
          si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
          if ( v26 )
          {
            v33 = 4 * v26;
            v35[0] = si128;
            v25 = (void *)qalloc_or_throw(4 * v26, a2, v26, a4);
            memcpy(v25, *(const void **)(v24 + 24), v33);
            si128 = _mm_load_si128(v35);
          }
          v28 = *(_QWORD *)(a1 + 368);
          if ( v28 )
          {
            *(_QWORD *)(a1 + 376) = 0;
            v35[0] = si128;
            qfree(v28);
            si128 = _mm_load_si128(v35);
          }
          *(_QWORD *)(a1 + 368) = v25;
          *(_DWORD *)(a1 + 76) = 5;
          *(__m128i *)(a1 + 376) = si128;
          return;
        case '6':
          if ( (unsigned __int8)sub_100140(a1, a5) || (unsigned __int8)sub_6B620(a1, a5) )
            continue;
          goto LABEL_9;
        case '7':
          a2 = *(_QWORD *)(v8 + 24);
          v22 = sub_1D36F0(*(_QWORD *)(a1 + 64), a2, v8 + 32, 0, a5);
          if ( v22 )
            goto LABEL_27;
          if ( *(_DWORD *)(a1 + 76) == 2 )
            return;
          if ( (unsigned __int8)sub_100140(a1, a5) )
            continue;
          v22 = sub_1D36F0(*(_QWORD *)(a1 + 64), *(_QWORD *)(v8 + 24), v8 + 32, 1, a5);
          if ( !v22 )
            return;
LABEL_27:
          *(_DWORD *)(a1 + 76) = 3;
          v19 = *(_DWORD *)(v22 + 72);
          break;
        case '8':
        case '9':
          if ( (unsigned __int8)sub_11C750(*(int **)(a1 + 56), *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
            goto LABEL_9;
          goto LABEL_17;
        case ':':
          *(_DWORD *)v8 = 55;
          v23 = *(_DWORD *)(v5 + 72);
          *(_BYTE *)(v8 + 32) = 7;
          *(_DWORD *)(v8 + 40) = v23;
          *(_DWORD *)(v8 + 36) = -1;
          *(_DWORD *)(a1 + 76) = 3;
          v19 = *(_DWORD *)(v8 + 40);
          goto LABEL_18;
        case '>':
          *(_DWORD *)(a1 + 76) = sub_1D4E20(a1, (__int64 *)(a1 + 368), a5);
          return;
        default:
          if ( *(_QWORD *)(a1 + 8) )
            goto LABEL_17;
          return;
      }
      break;
    }
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 8) || *(_DWORD *)(a1 + 76) == 6 )
      return;
LABEL_17:
    v18 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 76) = 3;
    v19 = v18 + 1;
  }
LABEL_18:
  v20 = *(_QWORD *)(a1 + 376);
  v21 = *(_QWORD *)(a1 + 368);
  if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v20 + 1) )
  {
    v29 = qvector_reserve(a1 + 368, v21, v20 + 1, 4);
    *(_QWORD *)(a1 + 368) = v29;
    v21 = v29;
    v20 = *(_QWORD *)(a1 + 376);
  }
  *(_DWORD *)(v21 + 4 * v20) = v19;
  ++*(_QWORD *)(a1 + 376);
}

