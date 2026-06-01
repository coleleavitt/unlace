__int64 __fastcall sub_1A0F0(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // edx
  _DWORD *v13; // rcx
  int v14; // edi
  size_t v15; // rdx
  const void *v16; // rsi
  __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned __int64 v20; // rax

  if ( a4 )
  {
    v7 = a3;
    v8 = *(_QWORD *)(a1 + 664);
    *(_DWORD *)(v8 + 100) = a2;
    *(_DWORD *)(v8 + 96) = 0;
    v9 = *(_QWORD *)(a1 + 664);
    if ( (unsigned __int64)a3 < *(_QWORD *)(v9 + 24) )
    {
      *(_DWORD *)(v9 + 96) |= *(unsigned __int8 *)(**(_QWORD **)(v9 + 8) + 32LL * a3 + 12);
      v10 = *(_QWORD *)(a1 + 664);
      if ( (unsigned __int64)a3 < *(_QWORD *)(v10 + 24) )
      {
        v11 = *(_QWORD *)(v10 + 16) + 40LL * a3;
        v12 = *(_DWORD *)v11;
        if ( *(_DWORD *)v11 == 3 )
        {
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(v11 + 24))(v10, a4, *(_QWORD *)(v11 + 32));
          v10 = *(_QWORD *)(a1 + 664);
        }
        else
        {
          v13 = (_DWORD *)(v10 + *(_QWORD *)(v11 + 16));
          if ( v12 )
          {
            if ( (unsigned int)(v12 - 1) > 1 )
              goto LABEL_11;
            v14 = *(_DWORD *)a4;
            v15 = *(_QWORD *)(v11 + 24);
            if ( *(int *)a4 >= -1 )
            {
              if ( *(_DWORD *)(a4 + 16) == v15 )
              {
                v16 = *(const void **)(a4 + 8);
LABEL_10:
                memcpy(v13, v16, v15);
                v10 = *(_QWORD *)(a1 + 664);
                goto LABEL_11;
              }
              return 0xFFFFFFFFLL;
            }
LABEL_15:
            if ( v14 == -2 )
            {
              if ( v15 != 8 )
                return 0xFFFFFFFFLL;
            }
            else if ( v15 )
            {
              return 0xFFFFFFFFLL;
            }
            v16 = (const void *)(a4 + 8);
            goto LABEL_10;
          }
          v18 = *(_QWORD *)(a4 + 8);
          v19 = *(_QWORD *)(v11 + 32);
          switch ( v19 )
          {
            case 2LL:
              v18 = (unsigned __int16)v18;
              break;
            case 4LL:
              v18 = (unsigned int)v18;
              break;
            case 1LL:
              v18 = (unsigned __int8)v18;
              break;
          }
          v20 = *(_QWORD *)(v11 + 24);
          if ( v20 == 4 )
          {
            *v13 = v18;
            v10 = *(_QWORD *)(a1 + 664);
          }
          else if ( v20 > 4 )
          {
            if ( v20 == 8 )
            {
              *(_QWORD *)v13 = v18;
              v10 = *(_QWORD *)(a1 + 664);
            }
          }
          else if ( v20 == 1 )
          {
            *(_BYTE *)v13 = v18;
            v10 = *(_QWORD *)(a1 + 664);
          }
          else if ( v20 == 2 )
          {
            *(_WORD *)v13 = v18;
            v10 = *(_QWORD *)(a1 + 664);
          }
        }
LABEL_11:
        if ( (unsigned __int8)sub_19D60(v10, v7) )
          return 1;
        return 0xFFFFFFFFLL;
      }
    }
    if ( under_debugger )
      BUG();
    v14 = 3258;
    interr();
    goto LABEL_15;
  }
  return 0xFFFFFFFFLL;
}

