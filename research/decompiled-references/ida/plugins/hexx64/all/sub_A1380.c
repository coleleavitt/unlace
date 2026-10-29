__int64 __fastcall sub_A1380(__int64 a1, double a2)
{
  __int64 v2; // rsi
  __int64 *v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  _DWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // r12
  _DWORD *v15; // rdi
  _DWORD *v16; // rsi
  _DWORD *v17; // rax
  __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 v20; // rax
  __int64 *v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r10
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // r15d
  _DWORD *v29; // rax
  _DWORD *v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  int v33; // eax
  unsigned __int64 v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 *v39; // rbp
  __int64 *v40; // r12
  __int64 *v41; // rbx
  __int64 v42; // r14
  _QWORD *v43; // rdx
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  void *v47; // r14
  __int64 v48; // rdi
  int v50; // [rsp+10h] [rbp-58h]
  int v51; // [rsp+14h] [rbp-54h]
  __int64 v52; // [rsp+18h] [rbp-50h]
  _QWORD *v53; // [rsp+18h] [rbp-50h]
  __int64 *v54; // [rsp+20h] [rbp-48h]
  __int64 v55; // [rsp+20h] [rbp-48h]
  __int64 v56; // [rsp+28h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 56);
  if ( *(_DWORD *)v2 != 53 || *(_BYTE *)(v2 + 48) != 12 )
  {
    if ( !under_debugger )
      sub_383060(0xC36Eu, a2);
    goto LABEL_68;
  }
  v3 = *(__int64 **)(v2 + 56);
  v51 = 0;
  v4 = a1;
  if ( v3[4] )
  {
    v50 = 0;
    v5 = 0;
    do
    {
      v6 = 4 * v5;
      v7 = *(_DWORD *)(v3[3] + 4 * v5);
      v8 = *(_QWORD *)(a1 + 64);
      if ( v7 >= *(_DWORD *)(v8 + 64) )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, a2);
        goto LABEL_68;
      }
      v9 = 0;
      v10 = *(_QWORD *)(*(_QWORD *)(v8 + 528) + 8LL * v7);
      v11 = sub_1120C0(v10, 0);
      v13 = *(unsigned int *)(v11 + 72);
      v14 = (_QWORD *)v11;
      if ( v7 == (_DWORD)v13 )
      {
        ++v50;
      }
      else
      {
        v15 = (_DWORD *)v3[3];
        v16 = &v15[v3[4]];
        if ( v15 == v16 )
          goto LABEL_41;
        v17 = (_DWORD *)v3[3];
        while ( (_DWORD)v13 != *v17 )
        {
          if ( v16 == ++v17 )
            goto LABEL_41;
        }
        if ( v16 == v17 )
        {
LABEL_41:
          ++v50;
          v15[v5] = v13;
        }
        else
        {
          v18 = *v3;
          v19 = (__int64 *)(*v3 + 24LL * (int)(v17 - v15));
          v20 = 24 * v5;
          v21 = (__int64 *)(*v3 + 24 * v5);
          v22 = v21[1];
          if ( v22 )
          {
            v23 = v19[1];
            v24 = *v21;
            if ( v23 && 8 * v22 )
            {
              v56 = v20;
              v39 = v21;
              v53 = v14;
              v40 = (__int64 *)*v21;
              v55 = v10;
              v41 = v19;
              while ( 1 )
              {
                v42 = *v40;
                v43 = (_QWORD *)(*v41 + 8 * v23);
                if ( (_QWORD *)*v41 != v43 )
                {
                  v44 = (_QWORD *)*v41;
                  while ( v42 != *v44 )
                  {
                    if ( v43 == ++v44 )
                      goto LABEL_54;
                  }
                  if ( v43 != v44 )
                    break;
                }
LABEL_54:
                if ( v41[2] < (unsigned __int64)(v23 + 1) )
                {
                  v45 = qvector_reserve((__int64)v41, *v41, v23 + 1, 8);
                  v46 = v41[1];
                  *v41 = v45;
                  v43 = (_QWORD *)(v45 + 8 * v46);
                }
                *v43 = v42;
                ++v40;
                v23 = v41[1] + 1;
                v41[1] = v23;
                if ( v40 == (__int64 *)(*v39 + 8 * v39[1]) )
                {
                  v18 = *v3;
                  v14 = v53;
                  v10 = v55;
                  v21 = (__int64 *)(*v3 + v56);
                  v24 = *v21;
                  goto LABEL_14;
                }
              }
              if ( !under_debugger )
                sub_383060(0xC36Fu, a2);
LABEL_68:
              BUG();
            }
          }
          else
          {
            v36 = *v19;
            v52 = v20;
            if ( *v19 )
            {
              v19[1] = 0;
              v54 = v19;
              qfree(v36);
              *v54 = 0;
              v54[2] = 0;
              v18 = *v3;
              v21 = (__int64 *)(*v3 + v52);
            }
            v24 = *v21;
          }
LABEL_14:
          if ( v24 )
          {
            v21[1] = 0;
            qfree(v24);
            v18 = *v3;
          }
          memmove(v21, v21 + 3, v18 + 24 * v3[1] - (_QWORD)v21 - 24);
          v25 = v3[3];
          v26 = v3[4];
          --v3[1];
          memmove((void *)(v6 + v25), (const void *)(v6 + v25 + 4), 4 * v26 - 4 - v6);
          --v3[4];
        }
        v9 = v14[43];
        v27 = v14[44];
        v12 = (_DWORD *)(v9 + 4 * v27);
        v28 = *(_DWORD *)(a1 + 72);
        if ( (_DWORD *)v9 == v12 )
          goto LABEL_38;
        v29 = (_DWORD *)v14[43];
        while ( v28 != *v29 )
        {
          if ( v12 == ++v29 )
            goto LABEL_38;
        }
        if ( v12 == v29 )
        {
LABEL_38:
          v35 = v27 + 1;
          if ( v14[45] < v35 )
          {
            v37 = qvector_reserve((__int64)(v14 + 43), v9, v35, 4);
            v38 = v14[44];
            v14[43] = v37;
            v12 = (_DWORD *)(v37 + 4 * v38);
          }
          *v12 = v28;
          ++v14[44];
          v28 = *(_DWORD *)(a1 + 72);
        }
        v30 = *(_DWORD **)(v10 + 344);
        v31 = *(_QWORD *)(v10 + 352);
        v13 = (__int64)&v30[v31];
        if ( v30 != (_DWORD *)v13 )
        {
          while ( v28 != *v30 )
          {
            if ( (_DWORD *)v13 == ++v30 )
              goto LABEL_28;
          }
          if ( v30 != (_DWORD *)v13 )
          {
            v9 = (__int64)(v30 + 1);
            memmove(v30, v30 + 1, v13 - (_QWORD)v30 - 4);
            v31 = *(_QWORD *)(v10 + 352) - 1LL;
            *(_QWORD *)(v10 + 352) = v31;
          }
        }
LABEL_28:
        if ( !v31 )
          **(_DWORD **)(v10 + 64) |= 0x400u;
        ++v51;
      }
      v5 = v50;
      v32 = v3[4];
    }
    while ( v50 < v32 );
    v4 = a1;
    if ( v51 > 0 )
    {
      v47 = nullptr;
      if ( v32 )
      {
        v47 = (void *)qalloc_or_throw(4 * v32, v9, v13, (__int64)v12);
        memcpy(v47, (const void *)v3[3], 4 * v32);
      }
      v48 = *(_QWORD *)(a1 + 368);
      if ( v48 )
      {
        *(_QWORD *)(a1 + 376) = 0;
        qfree(v48);
      }
      *(_QWORD *)(a1 + 368) = v47;
      *(__m128i *)(a1 + 376) = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v32);
    }
    v2 = *(_QWORD *)(a1 + 56);
  }
  if ( (unsigned int)sub_167810(v4, v2, 6) )
  {
    v33 = *(_DWORD *)(v4 + 24);
    BYTE1(v33) &= ~2u;
    LOBYTE(v33) = v33 | 0x80;
    *(_DWORD *)(v4 + 24) = v33;
  }
  return (unsigned int)v51;
}

