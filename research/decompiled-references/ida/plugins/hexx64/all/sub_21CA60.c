__int64 __fastcall sub_21CA60(__int64 *a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // r13
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // r15
  __int64 *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rcx
  __m128i v28; // xmm0
  __int64 v29; // rdi
  bool v30; // cf
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // [rsp+0h] [rbp-48h]
  __int64 v40; // [rsp+0h] [rbp-48h]

  v6 = *a1;
  v7 = *a1 + 32 * a1[1];
  if ( v7 == *a1 )
  {
LABEL_6:
    v10 = a1[2];
    v11 = a1[1] + 1;
    if ( v10 < v11 )
    {
      v22 = qvector_reserve((__int64)a1, 0, v11, 32);
      v23 = a1[2];
      a1[2] = v10;
      v24 = *a1;
      v39 = v22;
      v25 = a1[1] - 1;
      if ( v25 >= 0 )
      {
        v26 = v22;
        do
        {
          v27 = *(_QWORD *)v24;
          v28 = _mm_loadu_si128((const __m128i *)(v24 + 8));
          *(_QWORD *)v24 = 0;
          *(_QWORD *)(v24 + 16) = 0;
          *(_QWORD *)v26 = v27;
          *(__m128i *)(v26 + 8) = v28;
          *(_DWORD *)(v26 + 24) = *(_DWORD *)(v24 + 24);
          v29 = *(_QWORD *)v24;
          if ( *(_QWORD *)v24 )
          {
            *(_QWORD *)(v24 + 8) = 0;
            qfree(v29);
          }
          v24 += 32;
          v26 += 32;
          v30 = v25-- == 0;
        }
        while ( !v30 );
        v24 = *a1;
      }
      qfree(v24);
      v31 = 32 * a1[1];
      *a1 = v39;
      a1[2] = v23;
      v7 = v39 + v31;
    }
    *(_QWORD *)v7 = 0;
    *(_DWORD *)(v7 + 24) = -1;
    *(_OWORD *)(v7 + 8) = 0;
    ++a1[1];
    v12 = *(_QWORD **)(a2 + 800);
    v13 = (_QWORD *)*v12;
    if ( *v12 )
    {
      if ( v12[1] )
      {
        v14 = (_QWORD *)v13[1];
        if ( v13 != v14 )
        {
          while ( 1 )
          {
LABEL_10:
            if ( *((_DWORD *)v14 + 12) == a3 )
            {
              v19 = *(_QWORD *)(v7 + 8);
              v20 = *(_QWORD *)(v7 + 16);
              if ( v20 < v19 + 1 )
              {
                v32 = qvector_reserve(v7, 0, v19 + 1, 8);
                v33 = *(_QWORD *)(v7 + 8);
                v34 = *(__int64 **)v7;
                v21 = (__int64 *)v32;
                v35 = *(_QWORD *)(v7 + 16);
                *(_QWORD *)(v7 + 16) = v20;
                v36 = v33 - 1;
                if ( v36 >= 0 )
                {
                  v37 = v21;
                  do
                  {
                    v38 = *v34;
                    ++v37;
                    ++v34;
                    *(v37 - 1) = v38;
                    v30 = v36-- == 0;
                  }
                  while ( !v30 );
                  v34 = *(__int64 **)v7;
                }
                v40 = v35;
                qfree((__int64)v34);
                v19 = *(_QWORD *)(v7 + 8);
                *(_QWORD *)v7 = v21;
                *(_QWORD *)(v7 + 16) = v40;
              }
              else
              {
                v21 = *(__int64 **)v7;
              }
              v21[v19] = (__int64)v14;
              ++*(_QWORD *)(v7 + 8);
              v12 = *(_QWORD **)(a2 + 800);
            }
            if ( (*v14 & 2) != 0 )
              goto LABEL_14;
            v15 = (_QWORD *)v14[2];
            if ( (*(_BYTE *)v15 & 2) != 0 )
            {
              v16 = (_QWORD *)(*v14 & 0xFFFFFFFFFFFFFFFCLL);
              v17 = *v16;
              if ( (*v16 & 2) == 0 )
              {
                while ( (_QWORD *)v16[2] == v14 )
                {
                  v14 = v16;
                  v18 = v17 & 0xFFFFFFFFFFFFFFFCLL;
                  v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v17 & 2) != 0 )
                  {
                    v14 = (_QWORD *)v18;
                    if ( *v12 != v18 )
                      goto LABEL_10;
                    return v7;
                  }
                  v16 = (_QWORD *)v18;
                }
              }
              v14 = v16;
              if ( (_QWORD *)*v12 == v16 )
                return v7;
            }
            else
            {
              do
              {
                v14 = v15;
                v15 = (_QWORD *)v15[1];
              }
              while ( (*(_BYTE *)v15 & 2) == 0 );
LABEL_14:
              if ( (_QWORD *)*v12 == v14 )
                return v7;
            }
          }
        }
      }
    }
    return v7;
  }
  else
  {
    while ( 1 )
    {
      v8 = v6;
      if ( *(_DWORD *)(v6 + 24) == a3 )
        break;
      v6 += 32;
      if ( v7 == v6 )
        goto LABEL_6;
    }
  }
  return v8;
}

