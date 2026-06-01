__int64 __fastcall sub_1B6C0(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v7; // r12
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // edx
  unsigned __int8 *v12; // r14
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  size_t v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  size_t v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdx

  if ( a4 )
  {
    v5 = *(_QWORD *)(a1 + 664);
    *(_DWORD *)(v5 + 100) = a2;
    *(_DWORD *)(v5 + 96) = a3;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 664) + 24LL))(*(_QWORD *)(a1 + 664)) )
      return 0xFFFFFFFFLL;
    v7 = *(_QWORD *)(a1 + 664);
    v8 = a4 + 8;
    v9 = 0;
    if ( !*(_QWORD *)(v7 + 24) )
      return 1;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v7 + 96) & *(unsigned __int8 *)(**(_QWORD **)(v7 + 8) + 32 * v9 + 12)) != 0 )
      {
        v10 = *(_QWORD *)(v7 + 16) + 40 * v9;
        v11 = *(_DWORD *)v10;
        if ( *(_DWORD *)v10 == 3 )
        {
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(v10 + 16))(v7, v8 - 8, *(_QWORD *)(v10 + 32));
        }
        else
        {
          v12 = (unsigned __int8 *)(v7 + *(_QWORD *)(v10 + 16));
          switch ( v11 )
          {
            case 1:
              v16 = *(_QWORD *)(v10 + 24);
              if ( *(int *)(v8 - 8) >= -1 )
              {
                if ( *(_QWORD *)v8 )
                {
                  *(_QWORD *)(v8 + 8) = 0;
                  qfree();
                }
                *(_DWORD *)(v8 - 8) = -2;
              }
              *(_QWORD *)v8 = 0;
              *(_OWORD *)(v8 + 8) = 0;
              if ( v16 )
              {
                v17 = qvector_reserve();
                v18 = *(_QWORD *)(v8 + 8);
                *(_QWORD *)v8 = v17;
                memset((void *)(v17 + v18), 0, v16 - v18);
                *(_QWORD *)(v8 + 8) = v16;
                memcpy(*(void **)v8, v12, v16);
              }
              *(_DWORD *)(v8 - 8) = -1;
              break;
            case 2:
              v19 = *(_QWORD *)(v10 + 24);
              if ( *(int *)(v8 - 8) >= -1 )
              {
                if ( *(_QWORD *)v8 )
                {
                  *(_QWORD *)(v8 + 8) = 0;
                  qfree();
                }
                *(_DWORD *)(v8 - 8) = -2;
              }
              *(_QWORD *)v8 = 0;
              *(_OWORD *)(v8 + 8) = 0;
              if ( v19 )
              {
                v20 = qvector_reserve();
                v21 = *(_QWORD *)(v8 + 8);
                *(_QWORD *)v8 = v20;
                memset((void *)(v20 + v21), 0, v19 - v21);
                *(_QWORD *)(v8 + 8) = v19;
                memcpy(*(void **)v8, v12, v19);
              }
              *(_DWORD *)(v8 - 8) = 0;
              break;
            case 0:
              v13 = *(_QWORD *)(v10 + 24);
              if ( v13 != 4 )
              {
                if ( v13 > 4 )
                {
                  if ( v13 == 8 )
                  {
                    v14 = *(_QWORD *)v12;
                    goto LABEL_17;
                  }
                }
                else
                {
                  if ( v13 == 1 )
                  {
                    v14 = *v12;
                    goto LABEL_17;
                  }
                  if ( v13 == 2 )
                  {
                    v14 = *(unsigned __int16 *)v12;
LABEL_17:
                    v15 = *(_QWORD *)(v10 + 32);
                    switch ( v15 )
                    {
                      case 2LL:
                        v14 = (unsigned __int16)v14;
                        break;
                      case 4LL:
                        v14 = (unsigned int)v14;
                        break;
                      case 1LL:
                        v14 = (unsigned __int8)v14;
                        break;
                    }
                    *(_QWORD *)v8 = v14;
                    break;
                  }
                }
                v14 = 0;
                goto LABEL_17;
              }
              v14 = *(unsigned int *)v12;
              goto LABEL_17;
          }
        }
      }
      ++v9;
      v8 += 32;
      if ( v9 >= *(_QWORD *)(v7 + 24) )
        return 1;
    }
  }
  return 0xFFFFFFFFLL;
}

