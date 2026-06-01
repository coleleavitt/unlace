__int64 __fastcall sub_59780(unsigned int *a1)
{
  char v2; // al
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rsi
  int v7; // r13d
  int *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rsi
  int v17; // r13d
  int *v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rsi
  __int64 v22; // rdi

  v2 = getinf_flag();
  v3 = *((_QWORD *)a1 + 1);
  if ( v2 )
  {
    *a1 = 2;
    if ( v3 )
    {
      *((_QWORD *)a1 + 2) = 0;
      qfree();
      *((_QWORD *)a1 + 1) = 0;
      v4 = 0;
      *((_QWORD *)a1 + 3) = 0;
    }
    else
    {
      v4 = *((_QWORD *)a1 + 3);
    }
    v5 = *((_QWORD *)a1 + 2);
    v6 = 0;
    v7 = 0;
    v8 = (int *)&unk_961C0;
    while ( 1 )
    {
      ++v8;
      if ( v4 < v5 + 1 )
      {
        v9 = qvector_reserve();
        v5 = *((_QWORD *)a1 + 2);
        *((_QWORD *)a1 + 1) = v9;
        v6 = v9;
      }
      *(_DWORD *)(v6 + 4 * v5) = v7;
      v5 = *((_QWORD *)a1 + 2) + 1LL;
      *((_QWORD *)a1 + 2) = v5;
      v7 = *v8;
      if ( *v8 == -1 )
        break;
      v4 = *((_QWORD *)a1 + 3);
      v6 = *((_QWORD *)a1 + 1);
    }
    if ( *((_QWORD *)a1 + 4) )
    {
      *((_QWORD *)a1 + 5) = 0;
      qfree();
      *((_QWORD *)a1 + 4) = 0;
      v14 = 0;
      *((_QWORD *)a1 + 6) = 0;
    }
    else
    {
      v14 = *((_QWORD *)a1 + 6);
    }
    v15 = *((_QWORD *)a1 + 5);
    v16 = 0;
    v17 = 64;
    v18 = (int *)&unk_96180;
    while ( 1 )
    {
      ++v18;
      if ( v14 < v15 + 1 )
      {
        v19 = qvector_reserve();
        v15 = *((_QWORD *)a1 + 5);
        *((_QWORD *)a1 + 4) = v19;
        v16 = v19;
      }
      *(_DWORD *)(v16 + 4 * v15) = v17;
      v15 = *((_QWORD *)a1 + 5) + 1LL;
      *((_QWORD *)a1 + 5) = v15;
      v17 = *v18;
      if ( *v18 == -1 )
        break;
      v14 = *((_QWORD *)a1 + 6);
      v16 = *((_QWORD *)a1 + 4);
    }
    v20 = *((_QWORD *)a1 + 2);
    v21 = *a1;
    a1[1] = v20;
    result = (unsigned int)v20;
    if ( (unsigned int)v21 <= 6 )
    {
      v22 = 84;
      if ( _bittest64(&v22, v21) )
      {
        result = (unsigned int)(v20 + v15);
        a1[1] = result;
      }
    }
  }
  else
  {
    *a1 = 0;
    if ( v3 )
    {
      *((_QWORD *)a1 + 2) = 0;
      qfree();
      *((_QWORD *)a1 + 1) = 0;
      *((_QWORD *)a1 + 3) = 0;
    }
    if ( *((_QWORD *)a1 + 4) )
    {
      *((_QWORD *)a1 + 5) = 0;
      qfree();
      *((_QWORD *)a1 + 4) = 0;
      *((_QWORD *)a1 + 6) = 0;
    }
    v10 = *((_QWORD *)a1 + 2);
    v11 = *a1;
    a1[1] = v10;
    result = (unsigned int)v10;
    if ( (unsigned int)v11 <= 6 )
    {
      v13 = 84;
      if ( _bittest64(&v13, v11) )
      {
        result = a1[10] + (unsigned int)v10;
        a1[1] = result;
      }
    }
  }
  return result;
}
