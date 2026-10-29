__int64 __fastcall sub_65B20(__int64 a1, __int64 a2, double a3)
{
  _QWORD *v5; // r12
  int v6; // ebx
  __int64 v7; // rax
  _DWORD *v8; // r13
  int v9; // eax
  unsigned __int64 v10; // rdx
  _DWORD *v11; // rsi
  _DWORD *v12; // rdx
  _DWORD *v13; // r13
  _DWORD *v14; // rax
  __int64 v15; // rbx
  __int64 *v16; // r8
  __int64 *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rax
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // r15
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // eax
  __int64 *v37; // [rsp+0h] [rbp-48h]
  __int64 *v38; // [rsp+0h] [rbp-48h]
  int v39; // [rsp+Ch] [rbp-3Ch]

  if ( (***(unsigned int (__fastcall ****)(_QWORD, _QWORD, _QWORD))(a1 + 48))(
         *(_QWORD *)(a1 + 48),
         *(unsigned int *)(*(_QWORD *)(a1 + 16) + 72LL),
         0) != -1 )
  {
    if ( *(_BYTE *)a2 == 7 )
    {
      v36 = (***(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))(a1 + 48))(
              *(_QWORD *)(a1 + 48),
              *(unsigned int *)(a2 + 8),
              1);
      if ( v36 == -1 )
      {
LABEL_43:
        if ( !under_debugger )
          sub_383060(0xCA39u, a3);
        BUG();
      }
      *(_DWORD *)(a2 + 8) = v36;
    }
    else if ( *(_BYTE *)a2 == 12 )
    {
      v5 = *(_QWORD **)(a2 + 8);
      if ( v5[4] )
      {
        v6 = 0;
        v7 = 0;
        do
        {
          v8 = (_DWORD *)(v5[3] + 4 * v7);
          v9 = (***(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))(a1 + 48))(
                 *(_QWORD *)(a1 + 48),
                 (unsigned int)*v8,
                 1);
          if ( v9 == -1 )
            goto LABEL_43;
          *v8 = v9;
          ++v6;
          v10 = v5[4];
          v7 = v6;
        }
        while ( v6 < v10 );
        v11 = (_DWORD *)v5[3];
        v12 = &v11[v10];
        v13 = v11;
        if ( v12 != v11 )
        {
LABEL_10:
          v14 = v11;
          do
          {
            if ( *v13 == *v14 )
              break;
            ++v14;
          }
          while ( v12 != v14 );
          while ( 1 )
          {
            if ( v14 == v13 )
            {
              v23 = v5[4];
            }
            else
            {
              v15 = (int)(v13 - v11);
              v16 = (__int64 *)(*v5 + 24 * (v14 - v11));
              v17 = (__int64 *)(*v5 + 24 * v15);
              if ( v17[1] && (v18 = v16[1]) != 0 )
              {
                v20 = *v17;
                v28 = 0;
                v29 = 0;
                while ( 1 )
                {
                  v30 = *(_QWORD *)(v20 + 8 * v29);
                  v31 = (_QWORD *)(*v16 + 8 * v18);
                  if ( (_QWORD *)*v16 == v31 )
                    goto LABEL_38;
                  v32 = (_QWORD *)*v16;
                  while ( v30 != *v32 )
                  {
                    if ( v31 == ++v32 )
                      goto LABEL_38;
                  }
                  if ( v31 == v32 )
                  {
LABEL_38:
                    v33 = v18 + 1;
                    if ( v16[2] < v33 )
                    {
                      v39 = v28;
                      v38 = v16;
                      v34 = qvector_reserve((__int64)v16, *v16, v33, 8);
                      v16 = v38;
                      v28 = v39;
                      v35 = v38[1];
                      *v38 = v34;
                      v31 = (_QWORD *)(v34 + 8 * v35);
                    }
                    *v31 = v30;
                    ++v16[1];
                    v20 = *v17;
                  }
                  v29 = ++v28;
                  if ( v28 >= (unsigned __int64)v17[1] )
                    break;
                  v18 = v16[1];
                }
              }
              else
              {
                v19 = *v16;
                if ( *v16 )
                {
                  v16[1] = 0;
                  v37 = v16;
                  qfree(v19);
                  *v37 = 0;
                  v37[2] = 0;
                }
                v20 = *v17;
              }
              if ( v20 )
              {
                v17[1] = 0;
                qfree(v20);
              }
              memmove(v17, v17 + 3, *v5 + 24LL * v5[1] - (_QWORD)v17 - 24);
              v21 = v5[4];
              v22 = v5[3];
              --v5[1];
              memmove(v13, v13 + 1, v22 + 4 * v21 - (_QWORD)v13 - 4);
              v11 = (_DWORD *)v5[3];
              v23 = v5[4] - 1LL;
              v14 = &v11[v15 - 1];
              v5[4] = v23;
            }
            v13 = v14 + 1;
            v12 = &v11[v23];
            if ( v12 == v14 + 1 )
              break;
            if ( v12 != v11 )
              goto LABEL_10;
            v14 = v11;
          }
        }
      }
      v24 = *(_QWORD *)(a1 + 64);
      v25 = *(_QWORD *)(a1 + 16);
      v26 = *(_QWORD *)(a1 + 56);
      if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v24 + 1) )
      {
        v27 = qvector_reserve(a1 + 56, v26, v24 + 1, 8);
        *(_QWORD *)(a1 + 56) = v27;
        v26 = v27;
        v24 = *(_QWORD *)(a1 + 64);
      }
      *(_QWORD *)(v26 + 8 * v24) = v25;
      ++*(_QWORD *)(a1 + 64);
    }
  }
  return 0;
}

