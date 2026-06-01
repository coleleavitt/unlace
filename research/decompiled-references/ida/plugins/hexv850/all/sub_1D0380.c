void __fastcall sub_1D0380(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp
  int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // ebp
  int v13; // eax
  int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r13
  void *v20; // r12
  unsigned __int64 v21; // rdx
  __m128i si128; // xmm0
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  size_t v26; // rbp
  __int64 v27; // rax
  __m128i v28[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a2;
  if ( !a2 )
    v2 = sub_1D0330(*(_QWORD *)(a1 + 64));
  if ( *(_QWORD *)(a1 + 368) )
  {
    *(_QWORD *)(a1 + 376) = 0;
    qfree();
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
      v3 = *(_QWORD *)(a1 + 56);
      switch ( *(_DWORD *)v3 )
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
          v4 = sub_1CE8B0(*(_QWORD *)(a1 + 64), *(_QWORD *)(v3 + 24), v3 + 64, 2);
          v5 = *(_QWORD *)(a1 + 368);
          v6 = v4;
          v7 = *(_DWORD *)(a1 + 72) + 1;
          v8 = *(_QWORD *)(a1 + 376);
          if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v8 + 1) )
          {
            v25 = qvector_reserve();
            *(_QWORD *)(a1 + 368) = v25;
            v5 = v25;
            v8 = *(_QWORD *)(a1 + 376);
          }
          *(_DWORD *)(v5 + 4 * v8) = v7;
          v9 = *(_QWORD *)(a1 + 376);
          v10 = *(_DWORD *)(a1 + 72);
          v11 = v9 + 1;
          *(_QWORD *)(a1 + 376) = v9 + 1;
          v12 = *(_DWORD *)(v6 + 72);
          if ( v10 + 1 == v12 )
          {
            *(_DWORD *)(a1 + 76) = 3;
          }
          else
          {
            v24 = *(_QWORD *)(a1 + 368);
            if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v9 + 2) )
            {
              v27 = qvector_reserve();
              v11 = *(_QWORD *)(a1 + 376);
              *(_QWORD *)(a1 + 368) = v27;
              v24 = v27;
            }
            *(_DWORD *)(v24 + 4 * v11) = v12;
            *(_DWORD *)(a1 + 76) = 4;
            ++*(_QWORD *)(a1 + 376);
          }
          return;
        case '5':
          v19 = *(_QWORD *)(v3 + 56);
          v20 = nullptr;
          v21 = *(_QWORD *)(v19 + 32);
          si128 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
          if ( v21 )
          {
            v26 = 4 * v21;
            v28[0] = si128;
            v20 = (void *)qalloc_or_throw();
            memcpy(v20, *(const void **)(v19 + 24), v26);
            si128 = _mm_load_si128(v28);
          }
          if ( *(_QWORD *)(a1 + 368) )
          {
            *(_QWORD *)(a1 + 376) = 0;
            v28[0] = si128;
            qfree();
            si128 = _mm_load_si128(v28);
          }
          *(_QWORD *)(a1 + 368) = v20;
          *(_DWORD *)(a1 + 76) = 5;
          *(__m128i *)(a1 + 376) = si128;
          return;
        case '6':
          if ( (unsigned __int8)sub_FB580(a1) || (unsigned __int8)sub_66BA0(a1) )
            continue;
          goto LABEL_9;
        case '7':
          v17 = sub_1CE8B0(*(_QWORD *)(a1 + 64), *(_QWORD *)(v3 + 24), v3 + 32, 0);
          if ( v17 )
            goto LABEL_27;
          if ( *(_DWORD *)(a1 + 76) == 2 )
            return;
          if ( (unsigned __int8)sub_FB580(a1) )
            continue;
          v17 = sub_1CE8B0(*(_QWORD *)(a1 + 64), *(_QWORD *)(v3 + 24), v3 + 32, 1);
          if ( !v17 )
            return;
LABEL_27:
          *(_DWORD *)(a1 + 76) = 3;
          v14 = *(_DWORD *)(v17 + 72);
          break;
        case '8':
        case '9':
          if ( (unsigned __int8)sub_117B90(*(int **)(a1 + 56), *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
            goto LABEL_9;
          goto LABEL_17;
        case ':':
          *(_DWORD *)v3 = 55;
          v18 = *(_DWORD *)(v2 + 72);
          *(_BYTE *)(v3 + 32) = 7;
          *(_DWORD *)(v3 + 40) = v18;
          *(_DWORD *)(v3 + 36) = -1;
          *(_DWORD *)(a1 + 76) = 3;
          v14 = *(_DWORD *)(v3 + 40);
          goto LABEL_18;
        case '>':
          *(_DWORD *)(a1 + 76) = sub_1CFFE0(a1, (__int64 *)(a1 + 368));
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
    v13 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 76) = 3;
    v14 = v13 + 1;
  }
LABEL_18:
  v15 = *(_QWORD *)(a1 + 376);
  v16 = *(_QWORD *)(a1 + 368);
  if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v15 + 1) )
  {
    v23 = qvector_reserve();
    *(_QWORD *)(a1 + 368) = v23;
    v16 = v23;
    v15 = *(_QWORD *)(a1 + 376);
  }
  *(_DWORD *)(v16 + 4 * v15) = v14;
  ++*(_QWORD *)(a1 + 376);
}

