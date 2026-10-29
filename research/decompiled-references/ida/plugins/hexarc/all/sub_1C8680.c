__int64 __fastcall sub_1C8680(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // edx
  int v13; // r8d
  int v14; // r9d
  _QWORD *v15; // r14
  __int64 v16; // rax
  int frame_retsize; // eax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  _QWORD *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r15
  __m128i v27; // xmm1
  __int64 v28; // xmm0_8
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  _QWORD *func; // rax
  __int64 v33; // rdx
  __int64 v34; // [rsp+0h] [rbp-98h] BYREF
  __int128 v35; // [rsp+8h] [rbp-90h]
  _QWORD v36[15]; // [rsp+20h] [rbp-78h] BYREF

  v36[7] = __readfsqword(0x28u);
  sub_1C7FD0((unsigned __int64 *)(a1 + 1440));
  if ( (unsigned __int8)sub_1C7B70(a1, a2, a3, 1, v8, v9) )
  {
    v12 = sub_3368C0(*(_QWORD *)(a1 + 1496), 1, a1, (int)a1 + 1192, v10, v11, v34);
    if ( v12 || *(int *)(a1 + 312) > 0 )
      return v12;
    if ( !*(_QWORD *)(a1 + 8) )
    {
      sub_1C6A00(a1, &v34, v36);
      *(_QWORD *)(a1 + 136) = v36[0] - v34;
    }
    v15 = a4;
    if ( !a4 )
    {
      v15 = *(_QWORD **)(a1 + 8);
      if ( !v15 )
      {
        if ( (*(_BYTE *)(a1 + 5) & 0x40) != 0
          || (func = (_QWORD *)get_func()) == nullptr
          || *func != *(_QWORD *)(a1 + 40) )
        {
          v19 = *(_QWORD **)(a1 + 1192);
          v33 = 2LL * *(_QWORD *)(a1 + 1200);
          v20 = &v19[v33];
          if ( v33 * 8 )
            goto LABEL_9;
          goto LABEL_41;
        }
        v15 = func;
      }
    }
    v16 = v15[6];
    *(_DWORD *)(a1 + 68) = v16;
    if ( !(_DWORD)v16 && (*((_BYTE *)v15 + 17) & 0x40) == 0 )
      *(_DWORD *)(a1 + 68) = -1;
    *(_QWORD *)(a1 + 88) = v15[4];
    *(_QWORD *)(a1 + 96) = *((unsigned __int16 *)v15 + 20);
    *(_QWORD *)(a1 + 104) = v15[7];
    *(_DWORD *)(a1 + 112) = v15[2];
    frame_retsize = get_frame_retsize();
    v18 = *(_QWORD *)(a1 + 1200);
    *(_DWORD *)(a1 + 116) = frame_retsize;
    v19 = *(_QWORD **)(a1 + 1192);
    v18 *= 16;
    v20 = (_QWORD *)((char *)v19 + v18);
    if ( v18 )
    {
LABEL_9:
      v21 = nullptr;
      v22 = 0;
      v23 = 0;
      do
      {
        v24 = v19[1];
        if ( v24 > v23 )
        {
          v23 = v19[1];
          v21 = v19;
        }
        if ( v22 > v24 )
          v22 = v19[1];
        v19 += 2;
      }
      while ( v20 != v19 );
      if ( a4 )
      {
        v25 = 0;
        if ( v23 <= 0 )
          v25 = v23;
        v26 = v25 - v22;
        if ( v25 - v22 >= v25 )
          goto LABEL_19;
      }
      else
      {
        v26 = v23 - v22;
        if ( v23 - v22 >= v23 )
        {
          if ( v23 > 0 )
          {
            sub_329B90(a1, *v21, 40, v23, v13, v14);
            v36[1] = a1;
            v34 = 0;
            v36[2] = a2;
            v36[3] = &v34;
            v36[4] = 0;
            v36[5] = 0;
            v36[0] = off_4AB148;
            v36[6] = v23;
            v35 = 0;
            sub_1C6D40(a1, a2, v36);
            v36[0] = &unk_4B7E68;
            qfree();
            if ( v34 )
            {
              *(_QWORD *)&v35 = 0;
              qfree();
            }
            nullsub_115();
            *(_QWORD *)(a1 + 176) = v23;
          }
LABEL_19:
          if ( *(_QWORD *)(a1 + 136) < v26 )
            *(_QWORD *)(a1 + 136) = v26;
          v27 = _mm_loadu_si128((const __m128i *)(a1 + 88));
          v28 = _mm_add_epi64(_mm_srli_si128(v27, 8), v27).m128i_u64[0];
          if ( v28 >= v27.m128i_i64[0] )
          {
            v29 = *(_QWORD *)(a1 + 136);
            if ( v29 < v28 )
            {
              *(_QWORD *)(a1 + 136) = v28;
              v29 = v28;
            }
            v30 = (v29 + *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) - 1) & -*(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
            *(_QWORD *)(a1 + 136) = v30;
            if ( v30 <= (unsigned __int64)&loc_100000 )
              return sub_1C8190(a1, v15);
          }
        }
      }
      return (unsigned int)-9;
    }
    v26 = 0;
    if ( a4 )
      goto LABEL_19;
LABEL_41:
    v26 = 0;
    goto LABEL_19;
  }
  return (unsigned int)-13;
}

