__int64 __fastcall sub_2156E0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v9; // r14
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // r13
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // r15
  __int64 *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 *v22; // rbx
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rcx
  __m128i v26; // xmm0
  bool v27; // cf
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 *v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // [rsp+0h] [rbp-48h]
  __int64 v37; // [rsp+0h] [rbp-48h]

  v5 = *a1;
  v6 = *a1 + 32 * a1[1];
  if ( v6 == *a1 )
  {
LABEL_6:
    v9 = a1[2];
    if ( v9 < a1[1] + 1 )
    {
      v20 = qvector_reserve();
      v21 = a1[2];
      a1[2] = v9;
      v22 = (__int64 *)*a1;
      v36 = v20;
      v23 = a1[1] - 1;
      if ( v23 >= 0 )
      {
        v24 = v20;
        do
        {
          v25 = *v22;
          v26 = _mm_loadu_si128((const __m128i *)(v22 + 1));
          *v22 = 0;
          v22[2] = 0;
          *(_QWORD *)v24 = v25;
          *(__m128i *)(v24 + 8) = v26;
          *(_DWORD *)(v24 + 24) = *((_DWORD *)v22 + 6);
          if ( *v22 )
          {
            v22[1] = 0;
            qfree();
          }
          v22 += 4;
          v24 += 32;
          v27 = v23-- == 0;
        }
        while ( !v27 );
      }
      qfree();
      v28 = 32 * a1[1];
      *a1 = v36;
      a1[2] = v21;
      v6 = v36 + v28;
    }
    *(_QWORD *)v6 = 0;
    *(_DWORD *)(v6 + 24) = -1;
    *(_OWORD *)(v6 + 8) = 0;
    ++a1[1];
    v10 = *(_QWORD **)(a2 + 800);
    v11 = (_QWORD *)*v10;
    if ( *v10 )
    {
      if ( v10[1] )
      {
        v12 = (_QWORD *)v11[1];
        if ( v11 != v12 )
        {
          while ( 1 )
          {
LABEL_10:
            if ( *((_DWORD *)v12 + 12) == a3 )
            {
              v17 = *(_QWORD *)(v6 + 8);
              v18 = *(_QWORD *)(v6 + 16);
              if ( v18 < v17 + 1 )
              {
                v29 = qvector_reserve();
                v30 = *(_QWORD *)(v6 + 8);
                v31 = *(__int64 **)v6;
                v19 = (__int64 *)v29;
                v32 = *(_QWORD *)(v6 + 16);
                *(_QWORD *)(v6 + 16) = v18;
                v33 = v30 - 1;
                if ( v33 >= 0 )
                {
                  v34 = v19;
                  do
                  {
                    v35 = *v31;
                    ++v34;
                    ++v31;
                    *(v34 - 1) = v35;
                    v27 = v33-- == 0;
                  }
                  while ( !v27 );
                }
                v37 = v32;
                qfree();
                v17 = *(_QWORD *)(v6 + 8);
                *(_QWORD *)v6 = v19;
                *(_QWORD *)(v6 + 16) = v37;
              }
              else
              {
                v19 = *(__int64 **)v6;
              }
              v19[v17] = (__int64)v12;
              ++*(_QWORD *)(v6 + 8);
              v10 = *(_QWORD **)(a2 + 800);
            }
            if ( (*v12 & 2) != 0 )
              goto LABEL_14;
            v13 = (_QWORD *)v12[2];
            if ( (*(_BYTE *)v13 & 2) != 0 )
            {
              v14 = (_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFFCLL);
              v15 = *v14;
              if ( (*v14 & 2) == 0 )
              {
                while ( (_QWORD *)v14[2] == v12 )
                {
                  v12 = v14;
                  v16 = v15 & 0xFFFFFFFFFFFFFFFCLL;
                  v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v15 & 2) != 0 )
                  {
                    v12 = (_QWORD *)v16;
                    if ( *v10 != v16 )
                      goto LABEL_10;
                    return v6;
                  }
                  v14 = (_QWORD *)v16;
                }
              }
              v12 = v14;
              if ( (_QWORD *)*v10 == v14 )
                return v6;
            }
            else
            {
              do
              {
                v12 = v13;
                v13 = (_QWORD *)v13[1];
              }
              while ( (*(_BYTE *)v13 & 2) == 0 );
LABEL_14:
              if ( (_QWORD *)*v10 == v12 )
                return v6;
            }
          }
        }
      }
    }
    return v6;
  }
  else
  {
    while ( 1 )
    {
      v7 = v5;
      if ( *(_DWORD *)(v5 + 24) == a3 )
        break;
      v5 += 32;
      if ( v6 == v5 )
        goto LABEL_6;
    }
  }
  return v7;
}

