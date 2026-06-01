__int64 __fastcall sub_3EE3C0(_DWORD *a1, __int64 *a2, int a3, int a4, double a5)
{
  char *v7; // rbx
  size_t v8; // rax
  size_t v9; // rbp
  unsigned int v10; // r14d
  int *v12; // rdx
  const char *v13; // rax
  __int64 v14; // rsi
  int *v15; // r8
  int v16; // edx
  int v17; // r9d
  const void *v18; // rbx
  int v19; // r13d
  size_t v20; // rax
  size_t v21; // r15
  int v22; // edx
  void *v23; // rdi
  size_t v24; // rdx
  void *v25; // rdi
  size_t v26; // r13
  _WORD *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  size_t v31; // [rsp+8h] [rbp-40h]

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCED6u, a5);
LABEL_41:
    BUG();
  }
  if ( a3 > 7 )
  {
    v12 = a1 + 88;
    v13 = (const char *)&unk_40DB40;
    while ( 1 )
    {
      v14 = *((_QWORD *)v13 + 2);
      v15 = v12;
      v12 = (_DWORD *)((char *)a1 + v14);
      if ( a3 < *(_DWORD *)((char *)a1 + v14) )
        break;
      v13 += 16;
      if ( v14 == 504 )
      {
        if ( !under_debugger )
          sub_37CFE0(0xCED7u, a5);
        goto LABEL_41;
      }
    }
    v16 = *((unsigned __int8 *)v13 + 14);
    if ( a3 >= a1[88] && (v17 = a1[119], a3 <= v17 + a1[20] - 1) )
    {
      if ( 2 * v16 <= a4 )
        a4 = 2 * v16;
      v22 = v17 + v16;
      v10 = a4;
      if ( a4 + a3 > v22 )
        v10 = v22 - a3;
    }
    else
    {
      if ( a4 <= v16 )
        v16 = a4;
      v10 = v16;
    }
    if ( a2 )
    {
      v18 = v13 + 8;
      v19 = *v15;
      v20 = strlen(v13 + 8);
      v21 = v20;
      if ( v20 )
      {
        v23 = (void *)*a2;
        v24 = v20 + 1;
        if ( a2[2] < v20 + 1 )
        {
          v31 = v20 + 1;
          v28 = qvector_reserve();
          v24 = v31;
          *a2 = v28;
          v23 = (void *)v28;
        }
        a2[1] = v24;
        memmove(v23, v18, v21);
        *(_BYTE *)(*a2 + v21) = 0;
      }
      else
      {
        a2[1] = 0;
      }
      if ( a3 != v19 )
        sub_F5F10(a2);
    }
  }
  else
  {
    if ( a2 )
    {
      v7 = off_4BD380[a3];
      if ( v7 )
      {
        v8 = strlen(off_4BD380[a3]);
        v9 = v8;
        if ( v8 )
        {
          v25 = (void *)*a2;
          v26 = v8 + 1;
          if ( a2[2] < v8 + 1 )
          {
            v29 = qvector_reserve();
            *a2 = v29;
            v25 = (void *)v29;
          }
          a2[1] = v26;
          memmove(v25, v7, v9);
          *(_BYTE *)(*a2 + v9) = 0;
        }
        else
        {
          a2[1] = 0;
        }
      }
      else
      {
        v27 = (_WORD *)*a2;
        if ( (unsigned __int64)a2[2] <= 2 )
        {
          v30 = qvector_reserve();
          *a2 = v30;
          v27 = (_WORD *)v30;
        }
        a2[1] = 3;
        *v27 = 26211;
        *(_BYTE *)(*a2 + 2) = 0;
        if ( a3 )
          sub_F5F10(a2);
      }
    }
    return 1;
  }
  return v10;
}

