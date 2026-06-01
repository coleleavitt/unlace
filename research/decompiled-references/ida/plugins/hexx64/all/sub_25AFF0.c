__int64 __fastcall sub_25AFF0(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rsi
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbp
  _QWORD *v37; // r12
  __int64 v38; // rax
  size_t v39; // r13
  __m128i *v40; // rax
  const __m128i *v41; // roff
  void *v42; // rax
  __int64 v43; // r15
  __int64 v44; // rax
  __int64 v45; // rbp
  __int64 v46; // r15
  __int64 v47; // rbp
  __int64 v48; // rsi
  char v49; // al
  __int64 v50; // [rsp+8h] [rbp-40h]

  sub_255630(a1, a3);
  v4 = a2 + 48;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  copy_tinfo_t();
  v6 = *(unsigned int *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = v6;
  v7 = *(_QWORD *)a2;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  switch ( v6 )
  {
    case 0LL:
    case 69LL:
      return a1;
    case 1LL:
    case 2LL:
    case 3LL:
    case 4LL:
    case 5LL:
    case 6LL:
    case 7LL:
    case 8LL:
    case 9LL:
    case 10LL:
    case 11LL:
    case 12LL:
    case 13LL:
    case 14LL:
    case 15LL:
    case 17LL:
    case 18LL:
    case 19LL:
    case 20LL:
    case 21LL:
    case 22LL:
    case 23LL:
    case 24LL:
    case 25LL:
    case 26LL:
    case 27LL:
    case 28LL:
    case 29LL:
    case 30LL:
    case 31LL:
    case 32LL:
    case 33LL:
    case 34LL:
    case 35LL:
    case 36LL:
    case 37LL:
    case 38LL:
    case 39LL:
    case 40LL:
    case 41LL:
    case 42LL:
    case 43LL:
    case 44LL:
    case 45LL:
    case 58LL:
      goto LABEL_3;
    case 16LL:
      v8 = j__qalloc_or_throw(64, v4, v7, v5);
      v4 = *(_QWORD *)(a2 + 40);
      v9 = v8;
      sub_25B480(v8, v4);
      *(_QWORD *)(a1 + 40) = v9;
LABEL_3:
      v10 = j__qalloc_or_throw(64, v4, v7, v5);
      v4 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)v10 = -1;
      v11 = v10;
      *(_DWORD *)(v10 + 8) = 0;
      *(_QWORD *)(v10 + 12) = -1;
      *(_QWORD *)(v10 + 48) = 0;
      *(_DWORD *)(v10 + 56) = 0;
      sub_25AFF0(v10, v4);
      *(_QWORD *)(a1 + 32) = v11;
      goto LABEL_4;
    case 46LL:
    case 47LL:
    case 48LL:
    case 49LL:
    case 50LL:
    case 52LL:
    case 53LL:
    case 54LL:
    case 55LL:
    case 56LL:
    case 67LL:
LABEL_4:
      v12 = j__qalloc_or_throw(64, v4, v7, v5);
      v13 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)v12 = -1;
      v14 = v12;
      *(_DWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 12) = -1;
      *(_QWORD *)(v12 + 48) = 0;
      *(_DWORD *)(v12 + 56) = 0;
      sub_25AFF0(v12, v13);
      goto LABEL_5;
    case 51LL:
      v19 = j__qalloc_or_throw(64, v4, v7, v5);
      sub_25B480(v19, *(_QWORD *)(a2 + 24));
      *(_QWORD *)(a1 + 24) = v19;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
      return a1;
    case 57LL:
      v20 = j__qalloc_or_throw(64, v4, v7, v5);
      v21 = *(_QWORD *)(a2 + 24);
      v22 = v20;
      sub_25B480(v20, v21);
      *(_QWORD *)(a1 + 24) = v22;
      v25 = qalloc_or_throw(40, v21, v23, v24);
      v28 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)v25 = 0;
      v29 = v25;
      *(_OWORD *)(v25 + 8) = 0;
      v30 = *(_QWORD *)(v28 + 8);
      v50 = v30;
      if ( v30 )
      {
        v43 = *(_QWORD *)(v28 + 8);
        v44 = qalloc_or_throw(72 * v30, v21, v26, v27);
        *(_QWORD *)(v29 + 16) = v43;
        v45 = v44;
        v46 = 0;
        for ( *(_QWORD *)v29 = v44; ; v45 = *(_QWORD *)v29 )
        {
          v47 = 72 * v46 + v45;
          v48 = *(_QWORD *)v28 + 72 * v46;
          *(_QWORD *)v47 = -1;
          *(_DWORD *)(v47 + 8) = 0;
          *(_QWORD *)(v47 + 12) = -1;
          *(_QWORD *)(v47 + 48) = 0;
          *(_DWORD *)(v47 + 56) = 0;
          sub_25AFF0(v47, v48);
          v49 = *(_BYTE *)(v48 + 60);
          *(_QWORD *)(v47 + 64) = 0;
          *(_BYTE *)(v47 + 60) = v49;
          copy_tinfo_t();
          if ( v50 == ++v46 )
            break;
        }
        *(_QWORD *)(v29 + 8) = v50;
      }
      *(_QWORD *)(v29 + 24) = 0;
      copy_tinfo_t();
      *(_DWORD *)(v29 + 32) = *(_DWORD *)(v28 + 32);
      *(_QWORD *)(a1 + 32) = v29;
      return a1;
    case 59LL:
      goto LABEL_9;
    case 60LL:
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
LABEL_9:
      v16 = j__qalloc_or_throw(64, v4, v7, v5);
      v17 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)v16 = -1;
      v18 = v16;
      *(_DWORD *)(v16 + 8) = 0;
      *(_QWORD *)(v16 + 12) = -1;
      *(_QWORD *)(v16 + 48) = 0;
      *(_DWORD *)(v16 + 56) = 0;
      sub_25AFF0(v16, v17);
      *(_QWORD *)(a1 + 24) = v18;
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
      break;
    case 61LL:
      v33 = (_QWORD *)j__qalloc_or_throw(48, v4, v7, v5);
      v36 = *(_QWORD *)(a2 + 24);
      v37 = v33;
      *v33 = *(_QWORD *)v36;
      v38 = *(_QWORD *)(v36 + 8);
      v37[2] = 0;
      v37[1] = v38;
      *(_OWORD *)(v37 + 3) = 0;
      v39 = *(_QWORD *)(v36 + 24);
      if ( v39 )
      {
        v42 = (void *)qalloc_or_throw(*(_QWORD *)(v36 + 24), v4, v34, v35);
        v37[2] = v42;
        v37[4] = v39;
        memcpy(v42, *(const void **)(v36 + 16), v39);
        v37[3] = v39;
      }
      v37[5] = *(_QWORD *)(v36 + 40);
      *(_QWORD *)(a1 + 24) = v37;
      break;
    case 62LL:
      v40 = (__m128i *)j__qalloc_or_throw(20, v4, v7, v5);
      v41 = *(const __m128i **)(a2 + 24);
      *v40 = _mm_loadu_si128(v41);
      v40[1].m128i_i32[0] = v41[1].m128i_i32[0];
      *(_QWORD *)(a1 + 24) = v40;
      break;
    case 63LL:
    case 68LL:
      *(_QWORD *)(a1 + 24) = qstrdup();
      break;
    case 64LL:
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
      break;
    case 65LL:
      *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(a2 + 24));
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
      break;
    case 66LL:
      v31 = j__qalloc_or_throw(32, v4, v7, v5);
      v32 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)v31 = -1;
      v14 = v31;
      *(_DWORD *)(v31 + 8) = 70;
      *(_QWORD *)(v31 + 12) = -1;
      sub_25AA70(v31, v32, a3);
LABEL_5:
      *(_QWORD *)(a1 + 24) = v14;
      break;
    default:
      if ( !under_debugger )
        sub_383060(0xC38Eu, a3);
      BUG();
  }
  return a1;
}

