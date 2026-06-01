__int64 __fastcall sub_116C0(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 syseh; // rax
  __int64 v3; // r12
  __int64 **v4; // rdi
  char v5; // al
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 *v10; // rdi
  __int64 **v11; // rbx
  __int64 *v12; // rcx
  __int64 *v13; // rsi
  __int64 v14; // r13
  __int64 *i; // r15
  __int64 v16; // rdi
  int v17; // eax
  unsigned int v18; // ebp
  __int64 *v20; // rdi
  __int64 *v21; // rdi
  __int64 v22; // r13
  __int64 v23; // rbp
  __int64 *v24; // rdi
  __int64 **v25; // rbx
  char v26; // al
  __int64 *v27; // rdx
  __int64 *v28; // rcx
  __int64 v29; // r15
  __int64 *j; // r14
  __int64 v31; // rdi
  __int64 *v32; // rdi
  __int64 *v33; // rdi
  __int64 *v34; // [rsp+0h] [rbp-98h]
  __int64 **v35; // [rsp+10h] [rbp-88h] BYREF
  __int128 v36; // [rsp+18h] [rbp-80h]
  __int64 v37; // [rsp+30h] [rbp-68h] BYREF
  int v38; // [rsp+38h] [rbp-60h]
  __int128 v39; // [rsp+40h] [rbp-58h]
  unsigned __int64 v40; // [rsp+58h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  v37 = 0;
  v39 = 0;
  func_tail_iterator_set(&v37, a1, -1);
  v1 = (_QWORD *)v37;
  v38 = -1;
  if ( !v37 )
    return 1;
  while ( 1 )
  {
    syseh = find_syseh(*v1);
    if ( syseh == -1 || *v1 != syseh )
      goto LABEL_42;
    v35 = nullptr;
    v36 = 0;
    get_tryblks(&v35, v1);
    v3 = v36;
    v4 = v35;
    if ( !(_QWORD)v36 )
    {
      if ( !v35 )
        goto LABEL_42;
      goto LABEL_41;
    }
    v5 = *((_BYTE *)v35 + 97);
    if ( v5 != 1 )
      break;
    if ( v35[4] )
      break;
    if ( v35[1] != (__int64 *)((char *)&dword_0 + 1) )
      break;
    v6 = **v35;
    v7 = (*v35)[1];
    if ( v6 == v7 || v6 != *v1 || v7 != v1[1] )
      break;
    if ( v35 )
    {
      v8 = 0;
      v9 = 0;
      while ( 1 )
      {
        v11 = &v4[v8];
        if ( v5 == 2 )
        {
          v12 = v11[3];
          if ( v12 )
          {
            v13 = v11[4];
            if ( v13 )
            {
              v14 = 0;
              for ( i = nullptr; i != v13; i = (__int64 *)((char *)i + 1) )
              {
                v16 = v12[v14];
                if ( v16 )
                {
                  v12[v14 + 1] = 0;
                  qfree(v16);
                  v12 = v11[3];
                }
                v14 += 7;
              }
            }
            v11[4] = nullptr;
            qfree(v12);
          }
        }
        else if ( v5 == 1 )
        {
          v20 = v11[8];
          if ( v20 )
          {
            v11[9] = nullptr;
            qfree(v20);
          }
          v21 = v11[3];
          if ( v21 )
          {
            v11[4] = nullptr;
            qfree(v21);
          }
        }
        v10 = *v11;
        *((_BYTE *)v11 + 97) = 0;
        if ( v10 )
        {
          v11[1] = nullptr;
          qfree(v10);
        }
        ++v9;
        v4 = v35;
        v8 += 13;
        if ( v3 == v9 )
          break;
        v5 = BYTE1(v35[v8 + 12]);
      }
      *(_QWORD *)&v36 = 0;
      qfree(v35);
    }
    v1 = (_QWORD *)v37;
    if ( !v37 )
      return 1;
    v17 = v38 + 1;
    if ( v38 + 1 >= *(_DWORD *)(v37 + 128) )
    {
      v18 = 1;
LABEL_31:
      lock_func_range(v1, 0);
      return v18;
    }
    ++v38;
    if ( v17 >= 0 )
      v1 = (_QWORD *)(*(_QWORD *)(v37 + 136) + 16LL * v17);
  }
  v22 = 0;
  v23 = 0;
  if ( v35 )
  {
    do
    {
      v25 = &v4[v22];
      v26 = BYTE1(v4[v22 + 12]);
      if ( v26 == 2 )
      {
        v27 = v25[3];
        if ( v27 )
        {
          v28 = v25[4];
          if ( v28 )
          {
            v29 = 0;
            for ( j = nullptr; j != v28; j = (__int64 *)((char *)j + 1) )
            {
              v31 = v27[v29];
              if ( v31 )
              {
                v27[v29 + 1] = 0;
                v34 = v28;
                qfree(v31);
                v27 = v25[3];
                v28 = v34;
              }
              v29 += 7;
            }
          }
          v25[4] = nullptr;
          qfree(v27);
        }
      }
      else if ( v26 == 1 )
      {
        v32 = v25[8];
        if ( v32 )
        {
          v25[9] = nullptr;
          qfree(v32);
        }
        v33 = v25[3];
        if ( v33 )
        {
          v25[4] = nullptr;
          qfree(v33);
        }
      }
      v24 = *v25;
      *((_BYTE *)v25 + 97) = 0;
      if ( v24 )
      {
        v25[1] = nullptr;
        qfree(v24);
      }
      ++v23;
      v4 = v35;
      v22 += 13;
    }
    while ( v3 != v23 );
LABEL_41:
    *(_QWORD *)&v36 = 0;
    qfree(v4);
  }
LABEL_42:
  v1 = (_QWORD *)v37;
  v18 = 0;
  if ( v37 )
    goto LABEL_31;
  return v18;
}

