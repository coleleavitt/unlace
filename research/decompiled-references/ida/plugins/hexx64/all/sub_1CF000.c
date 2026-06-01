__int64 __fastcall sub_1CF000(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, double a5, __m128 a6)
{
  unsigned int v10; // edx
  _QWORD *v11; // r14
  __int64 v12; // rax
  int frame_retsize; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r15
  __m128i v23; // xmm1
  __int64 v24; // xmm0_8
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  _QWORD *func; // rax
  __int64 v29; // rdx
  __int64 v30; // [rsp+0h] [rbp-98h] BYREF
  __int128 v31; // [rsp+8h] [rbp-90h]
  _QWORD v32[4]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v33; // [rsp+40h] [rbp-58h]
  __int64 v34; // [rsp+48h] [rbp-50h]
  __int64 v35; // [rsp+50h] [rbp-48h]
  unsigned __int64 v36; // [rsp+58h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  sub_1CE950((unsigned __int64 *)(a1 + 1440));
  if ( (unsigned __int8)sub_1CE4F0(a1, a2, a3, 1, a5, a6) )
  {
    v10 = sub_33E140(*(_QWORD *)(a1 + 1496), 1u, a1, a1 + 1192);
    if ( v10 || *(int *)(a1 + 312) > 0 )
      return v10;
    if ( !*(_QWORD *)(a1 + 8) )
    {
      sub_1CD380(a1, &v30, v32);
      *(_QWORD *)(a1 + 136) = v32[0] - v30;
    }
    v11 = a4;
    if ( !a4 )
    {
      v11 = *(_QWORD **)(a1 + 8);
      if ( !v11 )
      {
        if ( (*(_BYTE *)(a1 + 5) & 0x40) != 0
          || (func = (_QWORD *)get_func()) == nullptr
          || *func != *(_QWORD *)(a1 + 40) )
        {
          v15 = *(_QWORD *)(a1 + 1192);
          v29 = 16LL * *(_QWORD *)(a1 + 1200);
          v16 = v15 + v29;
          if ( v29 )
            goto LABEL_9;
          goto LABEL_41;
        }
        v11 = func;
      }
    }
    v12 = v11[6];
    *(_DWORD *)(a1 + 68) = v12;
    if ( !(_DWORD)v12 && (*((_BYTE *)v11 + 17) & 0x40) == 0 )
      *(_DWORD *)(a1 + 68) = -1;
    *(_QWORD *)(a1 + 88) = v11[4];
    *(_QWORD *)(a1 + 96) = *((unsigned __int16 *)v11 + 20);
    *(_QWORD *)(a1 + 104) = v11[7];
    *(_DWORD *)(a1 + 112) = v11[2];
    frame_retsize = get_frame_retsize();
    v14 = *(_QWORD *)(a1 + 1200);
    *(_DWORD *)(a1 + 116) = frame_retsize;
    v15 = *(_QWORD *)(a1 + 1192);
    v14 *= 16;
    v16 = v15 + v14;
    if ( v14 )
    {
LABEL_9:
      v17 = nullptr;
      v18 = 0;
      v19 = 0;
      do
      {
        v20 = *(_QWORD *)(v15 + 8);
        if ( v20 > v19 )
        {
          v19 = *(_QWORD *)(v15 + 8);
          v17 = (unsigned __int64 *)v15;
        }
        if ( v18 > v20 )
          v18 = *(_QWORD *)(v15 + 8);
        v15 += 16;
      }
      while ( v16 != v15 );
      if ( a4 )
      {
        v21 = 0;
        if ( v19 <= 0 )
          v21 = v19;
        v22 = v21 - v18;
        if ( v21 - v18 >= v21 )
          goto LABEL_19;
      }
      else
      {
        v22 = v19 - v18;
        if ( v19 - v18 >= v19 )
        {
          if ( v19 > 0 )
          {
            sub_3311F0((_QWORD *)a1, *v17, 0x28u, v19);
            v32[1] = a1;
            v30 = 0;
            v32[2] = a2;
            v32[3] = &v30;
            v33 = 0;
            v34 = 0;
            v32[0] = off_4DE908;
            v35 = v19;
            v31 = 0;
            sub_1CD6C0((_QWORD *)a1, a2, v32);
            v32[0] = &unk_4EC028;
            qfree(v33);
            if ( v30 )
            {
              *(_QWORD *)&v31 = 0;
              qfree(v30);
            }
            nullsub_115();
            *(_QWORD *)(a1 + 176) = v19;
          }
LABEL_19:
          if ( *(_QWORD *)(a1 + 136) < v22 )
            *(_QWORD *)(a1 + 136) = v22;
          v23 = _mm_loadu_si128((const __m128i *)(a1 + 88));
          v24 = _mm_add_epi64(_mm_srli_si128(v23, 8), v23).m128i_u64[0];
          if ( v24 >= v23.m128i_i64[0] )
          {
            v25 = *(_QWORD *)(a1 + 136);
            if ( v25 < v24 )
            {
              *(_QWORD *)(a1 + 136) = v24;
              v25 = v24;
            }
            v26 = (v25 + *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) - 1) & -*(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
            *(_QWORD *)(a1 + 136) = v26;
            if ( v26 <= 0x100000 )
              return sub_1CEB10(a1, v11);
          }
        }
      }
      return (unsigned int)-9;
    }
    v22 = 0;
    if ( a4 )
      goto LABEL_19;
LABEL_41:
    v22 = 0;
    goto LABEL_19;
  }
  return (unsigned int)-13;
}

