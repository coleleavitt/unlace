__int64 __fastcall sub_10B10(__int64 a1, char *a2, int a3, int *a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  _QWORD *v10; // rdi
  __int64 v11; // rax
  int v12; // edx
  _DWORD *v13; // rcx
  __int64 v14; // rdx
  size_t v15; // rax
  size_t v16; // rdx
  unsigned __int64 v17; // rax

  if ( !a4 )
    return 0xFFFFFFFFLL;
  v6 = *(_QWORD *)(a1 + 664);
  v7 = a3;
  *(_DWORD *)(v6 + 100) = (_DWORD)a2;
  *(_DWORD *)(v6 + 96) = 0;
  v8 = *(_QWORD *)(a1 + 664);
  if ( (unsigned __int64)a3 < *(_QWORD *)(v8 + 24) )
  {
    *(_DWORD *)(v8 + 96) |= *(unsigned __int8 *)(**(_QWORD **)(v8 + 8) + 32LL * a3 + 12);
    v8 = *(_QWORD *)(a1 + 664);
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8) )
    return 0xFFFFFFFFLL;
  v10 = *(_QWORD **)(a1 + 664);
  if ( v7 < v10[3] )
  {
    v11 = v10[2] + 40 * v7;
    v12 = *(_DWORD *)v11;
    if ( *(_DWORD *)v11 == 3 )
    {
      a2 = (char *)a4;
      (*(void (__fastcall **)(_QWORD *, int *, _QWORD))(v11 + 24))(v10, a4, *(_QWORD *)(v11 + 32));
      v10 = *(_QWORD **)(a1 + 664);
    }
    else
    {
      v13 = (_DWORD *)((char *)v10 + *(_QWORD *)(v11 + 16));
      if ( v12 )
      {
        v14 = (unsigned int)(v12 - 1);
        if ( (unsigned int)v14 <= 1 )
        {
          v15 = *(_QWORD *)(v11 + 24);
          if ( *a4 < -1 )
          {
            if ( *a4 == -2 )
            {
              if ( v15 != 8 )
                return 0xFFFFFFFFLL;
            }
            else if ( v15 )
            {
              return 0xFFFFFFFFLL;
            }
            a2 = (char *)(a4 + 2);
            v16 = v15;
          }
          else
          {
            v16 = a4[4];
            if ( v15 != v16 )
              return 0xFFFFFFFFLL;
            a2 = *((char **)a4 + 1);
          }
          memcpy(v13, a2, v16);
          v10 = *(_QWORD **)(a1 + 664);
        }
      }
      else
      {
        a2 = *(char **)(v11 + 32);
        v14 = *((_QWORD *)a4 + 1);
        if ( a2 == (_BYTE *)&dword_0 + 2 )
        {
          v14 = (unsigned __int16)v14;
        }
        else if ( a2 == &byte_4 )
        {
          v14 = (unsigned int)v14;
        }
        else if ( a2 == (_BYTE *)&dword_0 + 1 )
        {
          v14 = (unsigned __int8)v14;
        }
        v17 = *(_QWORD *)(v11 + 24);
        if ( v17 == 4 )
        {
          *v13 = v14;
          v10 = *(_QWORD **)(a1 + 664);
        }
        else if ( v17 > 4 )
        {
          if ( v17 == 8 )
          {
            *(_QWORD *)v13 = v14;
            v10 = *(_QWORD **)(a1 + 664);
          }
        }
        else if ( v17 == 1 )
        {
          *(_BYTE *)v13 = v14;
          v10 = *(_QWORD **)(a1 + 664);
        }
        else if ( v17 == 2 )
        {
          *(_WORD *)v13 = v14;
          v10 = *(_QWORD **)(a1 + 664);
        }
      }
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, char *, __int64, _DWORD *))(*v10 + 32LL))(v10, a2, v14, v13) )
      return 1;
    return 0xFFFFFFFFLL;
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_10D30(3258);
}

