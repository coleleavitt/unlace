__int64 __fastcall sub_257370(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // r12
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rsi
  _QWORD *v22; // rax
  __int64 v23; // rbp
  _QWORD *v24; // r12
  __int64 v25; // rax
  size_t v26; // r13
  __m128i *v27; // rax
  const __m128i *v28; // roff
  void *v29; // rax
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // r15
  __int64 v34; // rbp
  __int64 v35; // rsi
  char v36; // al
  __int64 v37; // [rsp+8h] [rbp-40h]

  sub_2519B0(a1);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  copy_tinfo_t();
  v3 = *(unsigned int *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = v3;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  switch ( v3 )
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
      v4 = j__qalloc_or_throw();
      sub_257800(v4, *(_QWORD *)(a2 + 40));
      *(_QWORD *)(a1 + 40) = v4;
LABEL_3:
      v5 = j__qalloc_or_throw();
      v6 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)v5 = -1;
      v7 = v5;
      *(_DWORD *)(v5 + 8) = 0;
      *(_QWORD *)(v5 + 12) = -1;
      *(_QWORD *)(v5 + 48) = 0;
      *(_DWORD *)(v5 + 56) = 0;
      sub_257370(v5, v6);
      *(_QWORD *)(a1 + 32) = v7;
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
      v8 = j__qalloc_or_throw();
      v9 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)v8 = -1;
      v10 = v8;
      *(_DWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 12) = -1;
      *(_QWORD *)(v8 + 48) = 0;
      *(_DWORD *)(v8 + 56) = 0;
      sub_257370(v8, v9);
      goto LABEL_5;
    case 51LL:
      v15 = j__qalloc_or_throw();
      sub_257800(v15, *(_QWORD *)(a2 + 24));
      *(_QWORD *)(a1 + 24) = v15;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
      return a1;
    case 57LL:
      v16 = j__qalloc_or_throw();
      sub_257800(v16, *(_QWORD *)(a2 + 24));
      *(_QWORD *)(a1 + 24) = v16;
      v17 = qalloc_or_throw();
      v18 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)v17 = 0;
      v19 = v17;
      *(_OWORD *)(v17 + 8) = 0;
      v37 = *(_QWORD *)(v18 + 8);
      if ( v37 )
      {
        v30 = *(_QWORD *)(v18 + 8);
        v31 = qalloc_or_throw();
        *(_QWORD *)(v19 + 16) = v30;
        v32 = v31;
        v33 = 0;
        for ( *(_QWORD *)v19 = v31; ; v32 = *(_QWORD *)v19 )
        {
          v34 = 72 * v33 + v32;
          v35 = *(_QWORD *)v18 + 72 * v33;
          *(_QWORD *)v34 = -1;
          *(_DWORD *)(v34 + 8) = 0;
          *(_QWORD *)(v34 + 12) = -1;
          *(_QWORD *)(v34 + 48) = 0;
          *(_DWORD *)(v34 + 56) = 0;
          sub_257370(v34, v35);
          v36 = *(_BYTE *)(v35 + 60);
          *(_QWORD *)(v34 + 64) = 0;
          *(_BYTE *)(v34 + 60) = v36;
          copy_tinfo_t();
          if ( v37 == ++v33 )
            break;
        }
        *(_QWORD *)(v19 + 8) = v37;
      }
      *(_QWORD *)(v19 + 24) = 0;
      copy_tinfo_t();
      *(_DWORD *)(v19 + 32) = *(_DWORD *)(v18 + 32);
      *(_QWORD *)(a1 + 32) = v19;
      return a1;
    case 59LL:
      goto LABEL_9;
    case 60LL:
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
LABEL_9:
      v12 = j__qalloc_or_throw();
      v13 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)v12 = -1;
      v14 = v12;
      *(_DWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 12) = -1;
      *(_QWORD *)(v12 + 48) = 0;
      *(_DWORD *)(v12 + 56) = 0;
      sub_257370(v12, v13);
      *(_QWORD *)(a1 + 24) = v14;
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
      break;
    case 61LL:
      v22 = (_QWORD *)j__qalloc_or_throw();
      v23 = *(_QWORD *)(a2 + 24);
      v24 = v22;
      *v22 = *(_QWORD *)v23;
      v25 = *(_QWORD *)(v23 + 8);
      v24[2] = 0;
      v24[1] = v25;
      *(_OWORD *)(v24 + 3) = 0;
      v26 = *(_QWORD *)(v23 + 24);
      if ( v26 )
      {
        v29 = (void *)qalloc_or_throw();
        v24[2] = v29;
        v24[4] = v26;
        memcpy(v29, *(const void **)(v23 + 16), v26);
        v24[3] = v26;
      }
      v24[5] = *(_QWORD *)(v23 + 40);
      *(_QWORD *)(a1 + 24) = v24;
      break;
    case 62LL:
      v27 = (__m128i *)j__qalloc_or_throw();
      v28 = *(const __m128i **)(a2 + 24);
      *v27 = _mm_loadu_si128(v28);
      v27[1].m128i_i32[0] = v28[1].m128i_i32[0];
      *(_QWORD *)(a1 + 24) = v27;
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
      v20 = j__qalloc_or_throw();
      v21 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)v20 = -1;
      v10 = v20;
      *(_DWORD *)(v20 + 8) = 70;
      *(_QWORD *)(v20 + 12) = -1;
      sub_256DF0(v20, v21);
LABEL_5:
      *(_QWORD *)(a1 + 24) = v10;
      break;
    default:
      if ( !under_debugger )
        sub_37EEE0(50062);
      BUG();
  }
  return a1;
}

