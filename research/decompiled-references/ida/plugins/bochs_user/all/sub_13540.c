__int64 __fastcall sub_13540(__int64 a1, char *a2, int a3, int a4, char *a5)
{
  __int64 v5; // r13
  __int64 v7; // rax
  __int64 v8; // rdi
  char *v10; // r12
  __int64 i; // rdx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  int v17; // edx
  _DWORD *v18; // rcx
  __int64 v19; // rdx
  size_t v20; // rdx
  unsigned __int64 v22; // rax
  bool v23; // cc

  if ( !a5 )
    return 0;
  v5 = a4;
  v7 = *(_QWORD *)(a1 + 664);
  *(_DWORD *)(v7 + 100) = (_DWORD)a2;
  *(_DWORD *)(v7 + 96) = 0;
  v8 = *(_QWORD *)(a1 + 664);
  if ( a4 )
  {
    v10 = a5;
    for ( i = 0; i != a4; ++i )
    {
      v12 = a3 + (int)i;
      if ( v12 < *(_QWORD *)(v8 + 24) )
      {
        *(_DWORD *)(v8 + 96) |= *(unsigned __int8 *)(**(_QWORD **)(v8 + 8) + 32 * v12 + 12);
        v8 = *(_QWORD *)(a1 + 664);
      }
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8) )
    {
      v13 = *(_QWORD **)(a1 + 664);
      v14 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v15 = a3 + (int)v14;
            if ( v15 >= v13[3] )
            {
              if ( under_debugger )
                BUG();
              interr();
              return sub_13810(3258);
            }
            v16 = v13[2] + 40 * v15;
            v17 = *(_DWORD *)v16;
            if ( *(_DWORD *)v16 != 3 )
              break;
            ++v14;
            a2 = v10;
            v10 += 32;
            (*(void (__fastcall **)(_QWORD *, char *, _QWORD))(v16 + 24))(v13, a2, *(_QWORD *)(v16 + 32));
            v13 = *(_QWORD **)(a1 + 664);
            if ( v14 == v5 )
              return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64, _DWORD *))(*v13 + 32LL))(v13, a2, v19, v18);
          }
          v18 = (_DWORD *)((char *)v13 + *(_QWORD *)(v16 + 16));
          if ( !v17 )
            break;
          v19 = (unsigned int)(v17 - 1);
          if ( (unsigned int)v19 <= 1 )
          {
            v20 = *(_QWORD *)(v16 + 24);
            if ( *(int *)v10 < -1 )
            {
              if ( *(_DWORD *)v10 == -2 )
              {
                if ( v20 != 8 )
                  return 0;
              }
              else if ( v20 )
              {
                return 0;
              }
              a2 = v10 + 8;
            }
            else
            {
              if ( *((_DWORD *)v10 + 4) != v20 )
                return 0;
              a2 = *((char **)v10 + 1);
            }
            memcpy(v18, a2, v20);
            v13 = *(_QWORD **)(a1 + 664);
          }
LABEL_17:
          ++v14;
          v10 += 32;
          if ( v14 == v5 )
            return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64, _DWORD *))(*v13 + 32LL))(v13, a2, v19, v18);
        }
        a2 = *(char **)(v16 + 32);
        v19 = *((_QWORD *)v10 + 1);
        if ( a2 == (_BYTE *)&dword_0 + 2 )
          break;
        if ( a2 == &byte_4 )
        {
          v22 = *(_QWORD *)(v16 + 24);
          v19 = (unsigned int)v19;
          v23 = v22 <= 4;
          if ( v22 != 4 )
            goto LABEL_29;
LABEL_42:
          ++v14;
          *v18 = v19;
          v10 += 32;
          v13 = *(_QWORD **)(a1 + 664);
          if ( v14 == v5 )
            return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64, _DWORD *))(*v13 + 32LL))(v13, a2, v19, v18);
        }
        else
        {
          if ( a2 == (_BYTE *)&dword_0 + 1 )
            v19 = (unsigned __int8)v19;
LABEL_28:
          v22 = *(_QWORD *)(v16 + 24);
          v23 = v22 <= 4;
          if ( v22 == 4 )
            goto LABEL_42;
LABEL_29:
          if ( v23 )
          {
            if ( v22 == 1 )
            {
              ++v14;
              *(_BYTE *)v18 = v19;
              v10 += 32;
              v13 = *(_QWORD **)(a1 + 664);
              if ( v14 == v5 )
                return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64, _DWORD *))(*v13 + 32LL))(v13, a2, v19, v18);
            }
            else
            {
              if ( v22 != 2 )
                goto LABEL_17;
              ++v14;
              *(_WORD *)v18 = v19;
              v10 += 32;
              v13 = *(_QWORD **)(a1 + 664);
              if ( v14 == v5 )
                return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64, _DWORD *))(*v13 + 32LL))(v13, a2, v19, v18);
            }
          }
          else
          {
            if ( v22 != 8 )
              goto LABEL_17;
            ++v14;
            *(_QWORD *)v18 = v19;
            v10 += 32;
            v13 = *(_QWORD **)(a1 + 664);
            if ( v14 == v5 )
              return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64, _DWORD *))(*v13 + 32LL))(v13, a2, v19, v18);
          }
        }
      }
      v19 = (unsigned __int16)v19;
      goto LABEL_28;
    }
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8) )
    return 0;
  v13 = *(_QWORD **)(a1 + 664);
  return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64, _DWORD *))(*v13 + 32LL))(v13, a2, v19, v18);
}

