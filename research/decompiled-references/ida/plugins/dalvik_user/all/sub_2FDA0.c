_BOOL8 __fastcall sub_2FDA0(_QWORD *a1, __int64 *a2, const char *a3)
{
  size_t v5; // rax
  size_t v6; // r13
  size_t v7; // rbp
  void *v8; // rbx
  __int64 v9; // r15
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  _QWORD *v20; // r13
  int v21; // ebx
  __int64 v22; // r12
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rax
  _QWORD *v30; // [rsp+10h] [rbp-78h]
  _QWORD *v31; // [rsp+18h] [rbp-70h]
  void *v32; // [rsp+30h] [rbp-58h] BYREF
  __int128 v33; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  qmutex_lock();
  v32 = nullptr;
  v33 = 0;
  if ( a3 )
  {
    v5 = strlen(a3);
    v6 = v5 + 1;
    v7 = v5;
    v32 = (void *)qvector_reserve();
    *(_QWORD *)&v33 = v6;
    memmove(v32, a3, v7);
    *((_BYTE *)v32 + v7) = 0;
    v8 = v32;
    v31 = sub_245C0((__int64)(a1 + 41), (__int64)&v32);
    if ( v8 )
    {
      *(_QWORD *)&v33 = 0;
      qfree();
    }
  }
  else
  {
    v31 = sub_245C0((__int64)(a1 + 41), (__int64)&v32);
  }
  if ( a1 + 42 != v31 )
  {
    v9 = v31[7];
    if ( 16LL * v31[8] )
    {
      v30 = a1 + 36;
      do
      {
        v10 = *(_QWORD *)(v9 + 8);
        v11 = (_QWORD *)a1[37];
        if ( v11 )
        {
          v12 = a1 + 36;
          do
          {
            while ( 1 )
            {
              v13 = v11[2];
              v14 = v11[3];
              if ( v11[4] >= v10 )
                break;
              v11 = (_QWORD *)v11[3];
              if ( !v14 )
                goto LABEL_12;
            }
            v12 = v11;
            v11 = (_QWORD *)v11[2];
          }
          while ( v13 );
LABEL_12:
          if ( v12 != v30 && v10 >= v12[4] )
            goto LABEL_22;
        }
        if ( (unsigned __int8)sub_2B140(a1, v10) )
        {
          v15 = *(_QWORD *)(v9 + 8);
          v16 = (_QWORD *)a1[37];
          if ( v16 )
          {
            v12 = a1 + 36;
            do
            {
              while ( 1 )
              {
                v17 = v16[2];
                v18 = v16[3];
                if ( v16[4] >= v15 )
                  break;
                v16 = (_QWORD *)v16[3];
                if ( !v18 )
                  goto LABEL_20;
              }
              v12 = v16;
              v16 = (_QWORD *)v16[2];
            }
            while ( v17 );
LABEL_20:
            if ( v12 != v30 && v15 >= v12[4] )
            {
LABEL_22:
              v19 = *((_DWORD *)v12 + 10);
              if ( v19 != -1 )
              {
                v20 = (_QWORD *)(a1[20] + 392LL * v19);
                if ( *((int *)v12 + 11) > 0 )
                {
                  v21 = 0;
                  do
                  {
                    v22 = v20[14];
                    if ( 16LL * v20[15] )
                    {
                      do
                      {
                        v25 = a2[1];
                        v26 = *a2;
                        v27 = v25 + 1;
                        if ( a2[2] < (unsigned __int64)(v25 + 1) )
                        {
                          v28 = qvector_reserve();
                          *a2 = v28;
                          v26 = v28;
                          v25 = a2[1];
                          v27 = v25 + 1;
                        }
                        a2[1] = v27;
                        v23 = *(_DWORD *)(v22 + 8);
                        v22 += 16;
                        v24 = v26 + 40 * v25;
                        *(_DWORD *)v24 = v23;
                        *(_BYTE *)(v24 + 8) = *(_BYTE *)v9;
                        *(_QWORD *)(v24 + 16) = *(_QWORD *)(v9 + 8);
                        *(_QWORD *)(v24 + 24) = v20[1];
                        *(_QWORD *)(v24 + 32) = *(_QWORD *)(v22 - 16);
                      }
                      while ( v22 != v20[14] + 16LL * v20[15] );
                    }
                    ++v21;
                    v20 += 49;
                  }
                  while ( *((_DWORD *)v12 + 11) > v21 );
                }
              }
            }
          }
        }
        v9 += 16;
      }
      while ( v9 != v31[7] + 16LL * v31[8] );
    }
  }
  qmutex_unlock();
  return a1 + 42 != v31;
}

