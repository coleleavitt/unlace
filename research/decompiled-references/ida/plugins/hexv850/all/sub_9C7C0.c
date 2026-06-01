__int64 __fastcall sub_9C7C0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v2; // r13
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // edx
  _QWORD *v11; // r12
  _DWORD *v12; // rdi
  _DWORD *v13; // rsi
  _DWORD *v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 v17; // rax
  _QWORD *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v22; // rdi
  __int64 v23; // rax
  _DWORD *v24; // rsi
  __int64 v25; // rdx
  _DWORD *v26; // rcx
  int v27; // r15d
  _DWORD *v28; // rax
  char *v29; // rdi
  __int64 v30; // rax
  char *v31; // rdx
  unsigned __int64 v32; // rbx
  int v33; // eax
  __int64 v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rbp
  __int64 *v38; // r12
  __int64 *v39; // rbx
  __int64 v40; // r14
  _QWORD *v41; // rdx
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  void *v45; // r14
  int v47; // [rsp+10h] [rbp-58h]
  int v48; // [rsp+14h] [rbp-54h]
  __int64 v49; // [rsp+18h] [rbp-50h]
  _QWORD *v50; // [rsp+18h] [rbp-50h]
  __int64 *v51; // [rsp+20h] [rbp-48h]
  __int64 v52; // [rsp+20h] [rbp-48h]
  __int64 v53; // [rsp+28h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 56);
  if ( *(_DWORD *)v1 != 53 || *(_BYTE *)(v1 + 48) != 12 )
  {
    if ( !under_debugger )
      sub_37CFE0(50030);
    goto LABEL_68;
  }
  v2 = *(__int64 **)(v1 + 56);
  v48 = 0;
  v3 = a1;
  if ( v2[4] )
  {
    v47 = 0;
    v4 = 0;
    do
    {
      v5 = 4 * v4;
      v6 = *(_DWORD *)(v2[3] + 4 * v4);
      v7 = *(_QWORD *)(a1 + 64);
      if ( v6 >= *(_DWORD *)(v7 + 64) )
      {
        if ( !under_debugger )
          sub_37CFE0(52719);
        goto LABEL_68;
      }
      v8 = *(_QWORD *)(*(_QWORD *)(v7 + 528) + 8LL * v6);
      v9 = sub_10D500(v8, 0);
      v10 = *(_DWORD *)(v9 + 72);
      v11 = (_QWORD *)v9;
      if ( v6 == v10 )
      {
        ++v47;
      }
      else
      {
        v12 = (_DWORD *)v2[3];
        v13 = &v12[v2[4]];
        if ( v12 == v13 )
          goto LABEL_41;
        v14 = (_DWORD *)v2[3];
        while ( v10 != *v14 )
        {
          if ( v13 == ++v14 )
            goto LABEL_41;
        }
        if ( v13 == v14 )
        {
LABEL_41:
          ++v47;
          v12[v4] = v10;
        }
        else
        {
          v15 = *v2;
          v16 = (__int64 *)(*v2 + 24LL * (int)(v14 - v12));
          v17 = 24 * v4;
          v18 = (_QWORD *)(*v2 + 24 * v4);
          v19 = v18[1];
          if ( v19 )
          {
            v20 = v16[1];
            v21 = *v18;
            if ( v20 && 8 * v19 )
            {
              v53 = v17;
              v37 = v18;
              v50 = v11;
              v38 = (__int64 *)*v18;
              v52 = v8;
              v39 = v16;
              while ( 1 )
              {
                v40 = *v38;
                v41 = (_QWORD *)(*v39 + 8 * v20);
                if ( (_QWORD *)*v39 != v41 )
                {
                  v42 = (_QWORD *)*v39;
                  while ( v40 != *v42 )
                  {
                    if ( v41 == ++v42 )
                      goto LABEL_54;
                  }
                  if ( v41 != v42 )
                    break;
                }
LABEL_54:
                if ( v39[2] < (unsigned __int64)(v20 + 1) )
                {
                  v43 = qvector_reserve();
                  v44 = v39[1];
                  *v39 = v43;
                  v41 = (_QWORD *)(v43 + 8 * v44);
                }
                *v41 = v40;
                ++v38;
                v20 = v39[1] + 1;
                v39[1] = v20;
                if ( v38 == (__int64 *)(*v37 + 8LL * v37[1]) )
                {
                  v15 = *v2;
                  v11 = v50;
                  v8 = v52;
                  v18 = (_QWORD *)(*v2 + v53);
                  v21 = *v18;
                  goto LABEL_14;
                }
              }
              if ( !under_debugger )
                sub_37CFE0(50031);
LABEL_68:
              BUG();
            }
          }
          else
          {
            v49 = v17;
            if ( *v16 )
            {
              v16[1] = 0;
              v51 = v16;
              qfree();
              *v51 = 0;
              v51[2] = 0;
              v15 = *v2;
              v18 = (_QWORD *)(*v2 + v49);
            }
            v21 = *v18;
          }
LABEL_14:
          if ( v21 )
          {
            v18[1] = 0;
            qfree();
            v15 = *v2;
          }
          memmove(v18, v18 + 3, v15 + 24 * v2[1] - (_QWORD)v18 - 24);
          v22 = v2[3];
          v23 = v2[4];
          --v2[1];
          memmove((void *)(v5 + v22), (const void *)(v5 + v22 + 4), 4 * v23 - 4 - v5);
          --v2[4];
        }
        v24 = (_DWORD *)v11[43];
        v25 = v11[44];
        v26 = &v24[v25];
        v27 = *(_DWORD *)(a1 + 72);
        if ( v24 == v26 )
          goto LABEL_38;
        v28 = (_DWORD *)v11[43];
        while ( v27 != *v28 )
        {
          if ( v26 == ++v28 )
            goto LABEL_38;
        }
        if ( v26 == v28 )
        {
LABEL_38:
          if ( v11[45] < (unsigned __int64)(v25 + 1) )
          {
            v35 = qvector_reserve();
            v36 = v11[44];
            v11[43] = v35;
            v26 = (_DWORD *)(v35 + 4 * v36);
          }
          *v26 = v27;
          ++v11[44];
          v27 = *(_DWORD *)(a1 + 72);
        }
        v29 = *(char **)(v8 + 344);
        v30 = *(_QWORD *)(v8 + 352);
        v31 = &v29[4 * v30];
        if ( v29 != v31 )
        {
          while ( v27 != *(_DWORD *)v29 )
          {
            v29 += 4;
            if ( v31 == v29 )
              goto LABEL_28;
          }
          if ( v29 != v31 )
          {
            memmove(v29, v29 + 4, v31 - v29 - 4);
            v30 = *(_QWORD *)(v8 + 352) - 1LL;
            *(_QWORD *)(v8 + 352) = v30;
          }
        }
LABEL_28:
        if ( !v30 )
          **(_DWORD **)(v8 + 64) |= 0x400u;
        ++v48;
      }
      v4 = v47;
      v32 = v2[4];
    }
    while ( v47 < v32 );
    v3 = a1;
    if ( v48 > 0 )
    {
      v45 = nullptr;
      if ( v32 )
      {
        v45 = (void *)qalloc_or_throw();
        memcpy(v45, (const void *)v2[3], 4 * v32);
      }
      if ( *(_QWORD *)(a1 + 368) )
      {
        *(_QWORD *)(a1 + 376) = 0;
        qfree();
      }
      *(_QWORD *)(a1 + 368) = v45;
      *(__m128i *)(a1 + 376) = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v32);
    }
    v1 = *(_QWORD *)(a1 + 56);
  }
  if ( (unsigned int)sub_162C50(v3, v1, 6) )
  {
    v33 = *(_DWORD *)(v3 + 24);
    BYTE1(v33) &= ~2u;
    LOBYTE(v33) = v33 | 0x80;
    *(_DWORD *)(v3 + 24) = v33;
  }
  return (unsigned int)v48;
}

