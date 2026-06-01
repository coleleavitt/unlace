__int64 __fastcall sub_3ECC80(_DWORD *a1, __int64 *a2, int a3, unsigned int a4, double a5)
{
  _WORD *v8; // rsi
  int *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int *v13; // rsi
  char v14; // dl
  signed int v15; // edx
  const void *v16; // rbx
  int v17; // r13d
  size_t v18; // rax
  size_t v19; // r15
  __int64 v20; // rax
  void *v21; // rdi
  size_t v22; // rdx
  __int64 v23; // rax
  size_t v24; // [rsp+8h] [rbp-40h]

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      sub_37DDE0(0xCE14u, a5);
LABEL_33:
    BUG();
  }
  if ( a3 <= 7 )
  {
    if ( !a2 )
      return a4;
    v8 = (_WORD *)*a2;
    if ( (unsigned __int64)a2[2] <= 2 )
    {
      v20 = qvector_reserve();
      *a2 = v20;
      v8 = (_WORD *)v20;
    }
    a2[1] = 3;
    *v8 = 26211;
    *(_BYTE *)(*a2 + 2) = 0;
    if ( !a3 )
      return a4;
LABEL_19:
    sub_F6610(a2);
    return a4;
  }
  v10 = a1 + 88;
  v11 = &unk_40C240;
  while ( 1 )
  {
    v12 = v11[2];
    v13 = v10;
    v10 = (_DWORD *)((char *)a1 + v12);
    if ( a3 < *(_DWORD *)((char *)a1 + v12) )
      break;
    v11 += 2;
    if ( v12 == 624 )
    {
      if ( !under_debugger )
        sub_37DDE0(0xCE15u, a5);
      goto LABEL_33;
    }
  }
  v14 = *((_BYTE *)v11 + 14);
  if ( v14 == -1 )
  {
    if ( (int)a4 > (unsigned __int8)(2 * a1[20]) )
      a4 = (unsigned __int8)(2 * a1[20]);
  }
  else if ( v14 == -2 )
  {
    if ( (int)a4 > (unsigned __int8)(2 * a1[173]) )
      a4 = (unsigned __int8)(2 * a1[173]);
  }
  else
  {
    v15 = (unsigned __int8)(2 * v14);
    if ( (int)a4 > v15 )
      a4 = v15;
  }
  if ( a2 )
  {
    v16 = v11 + 1;
    v17 = *v13;
    v18 = strlen((const char *)v11 + 8);
    v19 = v18;
    if ( v18 )
    {
      v21 = (void *)*a2;
      v22 = v18 + 1;
      if ( a2[2] < v18 + 1 )
      {
        v24 = v18 + 1;
        v23 = qvector_reserve();
        v22 = v24;
        *a2 = v23;
        v21 = (void *)v23;
      }
      a2[1] = v22;
      memmove(v21, v16, v19);
      *(_BYTE *)(*a2 + v19) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    if ( a3 != v17 )
      goto LABEL_19;
  }
  return a4;
}

