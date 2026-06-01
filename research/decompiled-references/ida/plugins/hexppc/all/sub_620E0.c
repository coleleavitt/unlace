__int64 __fastcall sub_620E0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r12
  int v5; // ebx
  __int64 v6; // rax
  _DWORD *v7; // r13
  int v8; // eax
  unsigned __int64 v9; // rdx
  _DWORD *v10; // rsi
  _DWORD *v11; // rdx
  _DWORD *v12; // r13
  _DWORD *v13; // rax
  __int64 v14; // rbx
  __int64 *v15; // r8
  __int64 *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rax
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // r15
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // eax
  __int64 *v34; // [rsp+0h] [rbp-48h]
  __int64 *v35; // [rsp+0h] [rbp-48h]
  int v36; // [rsp+Ch] [rbp-3Ch]

  if ( (***(unsigned int (__fastcall ****)(_QWORD, _QWORD, _QWORD))(a1 + 48))(
         *(_QWORD *)(a1 + 48),
         *(unsigned int *)(*(_QWORD *)(a1 + 16) + 72LL),
         0) != -1 )
  {
    if ( *(_BYTE *)a2 == 7 )
    {
      v33 = (***(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))(a1 + 48))(
              *(_QWORD *)(a1 + 48),
              *(unsigned int *)(a2 + 8),
              1);
      if ( v33 == -1 )
      {
LABEL_43:
        if ( !under_debugger )
          sub_37EEE0(51769);
        BUG();
      }
      *(_DWORD *)(a2 + 8) = v33;
    }
    else if ( *(_BYTE *)a2 == 12 )
    {
      v4 = *(_QWORD **)(a2 + 8);
      if ( v4[4] )
      {
        v5 = 0;
        v6 = 0;
        do
        {
          v7 = (_DWORD *)(v4[3] + 4 * v6);
          v8 = (***(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))(a1 + 48))(
                 *(_QWORD *)(a1 + 48),
                 (unsigned int)*v7,
                 1);
          if ( v8 == -1 )
            goto LABEL_43;
          *v7 = v8;
          ++v5;
          v9 = v4[4];
          v6 = v5;
        }
        while ( v5 < v9 );
        v10 = (_DWORD *)v4[3];
        v11 = &v10[v9];
        v12 = v10;
        if ( v11 != v10 )
        {
LABEL_10:
          v13 = v10;
          do
          {
            if ( *v12 == *v13 )
              break;
            ++v13;
          }
          while ( v11 != v13 );
          while ( 1 )
          {
            if ( v13 == v12 )
            {
              v21 = v4[4];
            }
            else
            {
              v14 = (int)(v12 - v10);
              v15 = (__int64 *)(*v4 + 24 * (v13 - v10));
              v16 = (__int64 *)(*v4 + 24 * v14);
              if ( v16[1] && (v17 = v15[1]) != 0 )
              {
                v18 = *v16;
                v26 = 0;
                v27 = 0;
                while ( 1 )
                {
                  v28 = *(_QWORD *)(v18 + 8 * v27);
                  v29 = (_QWORD *)(*v15 + 8 * v17);
                  if ( (_QWORD *)*v15 == v29 )
                    goto LABEL_38;
                  v30 = (_QWORD *)*v15;
                  while ( v28 != *v30 )
                  {
                    if ( v29 == ++v30 )
                      goto LABEL_38;
                  }
                  if ( v29 == v30 )
                  {
LABEL_38:
                    if ( v15[2] < (unsigned __int64)(v17 + 1) )
                    {
                      v36 = v26;
                      v35 = v15;
                      v31 = qvector_reserve();
                      v15 = v35;
                      v26 = v36;
                      v32 = v35[1];
                      *v35 = v31;
                      v29 = (_QWORD *)(v31 + 8 * v32);
                    }
                    *v29 = v28;
                    ++v15[1];
                    v18 = *v16;
                  }
                  v27 = ++v26;
                  if ( v26 >= (unsigned __int64)v16[1] )
                    break;
                  v17 = v15[1];
                }
              }
              else
              {
                if ( *v15 )
                {
                  v15[1] = 0;
                  v34 = v15;
                  qfree();
                  *v34 = 0;
                  v34[2] = 0;
                }
                v18 = *v16;
              }
              if ( v18 )
              {
                v16[1] = 0;
                qfree();
              }
              memmove(v16, v16 + 3, *v4 + 24LL * v4[1] - (_QWORD)v16 - 24);
              v19 = v4[4];
              v20 = v4[3];
              --v4[1];
              memmove(v12, v12 + 1, v20 + 4 * v19 - (_QWORD)v12 - 4);
              v10 = (_DWORD *)v4[3];
              v21 = v4[4] - 1LL;
              v13 = &v10[v14 - 1];
              v4[4] = v21;
            }
            v12 = v13 + 1;
            v11 = &v10[v21];
            if ( v11 == v13 + 1 )
              break;
            if ( v11 != v10 )
              goto LABEL_10;
            v13 = v10;
          }
        }
      }
      v22 = *(_QWORD *)(a1 + 64);
      v23 = *(_QWORD *)(a1 + 16);
      v24 = *(_QWORD *)(a1 + 56);
      if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v22 + 1) )
      {
        v25 = qvector_reserve();
        *(_QWORD *)(a1 + 56) = v25;
        v24 = v25;
        v22 = *(_QWORD *)(a1 + 64);
      }
      *(_QWORD *)(v24 + 8 * v22) = v23;
      ++*(_QWORD *)(a1 + 64);
    }
  }
  return 0;
}

