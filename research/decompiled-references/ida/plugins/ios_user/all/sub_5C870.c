__int64 __fastcall sub_5C870(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  _QWORD *v6; // rax
  int v7; // eax
  __int64 v8; // rax
  _BYTE *v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  _BYTE *v15; // rdx
  int v16; // r13d
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // ebx
  __int64 v23; // rax
  char *endptr; // [rsp+18h] [rbp-60h] BYREF
  char *v25; // [rsp+20h] [rbp-58h] BYREF
  __int128 v26; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  if ( *(_DWORD *)(a1 + 184) == 2 )
  {
    return 0;
  }
  else
  {
    v26 = 0;
    v25 = (char *)qvector_reserve();
    v4 = 0;
    *(_QWORD *)&v26 = 13;
    strcpy(v25, "qfThreadInfo");
    v5 = a2[1];
    if ( v5 )
    {
      do
      {
        v6 = (_QWORD *)(*a2 + 32 * v4);
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
        }
        ++v4;
      }
      while ( v5 != v4 );
    }
    a2[1] = 0;
    while ( 1 )
    {
LABEL_8:
      if ( (unsigned int)sub_5ABF0(a1, &v25) != 1 )
        goto LABEL_33;
      v7 = sub_5AB40(a1);
      *(_BYTE *)(a1 + 16) = 0;
      if ( v7 != 1 )
        goto LABEL_33;
      v8 = *(_QWORD *)(a1 + 32);
      if ( !v8 )
      {
        *(_DWORD *)(a1 + 184) = 2;
LABEL_33:
        v21 = 0;
        goto LABEL_34;
      }
      v9 = *(_BYTE **)(a1 + 24);
      if ( *v9 == 108 )
        break;
      if ( *v9 != 109 )
        goto LABEL_33;
      if ( !a2[1] )
      {
        v25[1] = 115;
        v9 = *(_BYTE **)(a1 + 24);
        v8 = *(_QWORD *)(a1 + 32);
      }
      v10 = *(_QWORD *)(a1 + 40);
      LOBYTE(endptr) = 44;
      if ( v10 < v8 + 1 )
      {
        v23 = qvector_reserve();
        *(_QWORD *)(a1 + 24) = v23;
        v9 = (_BYTE *)v23;
        v8 = *(_QWORD *)(a1 + 32);
      }
      v9[v8] = 44;
      v11 = 1;
      v12 = *(_QWORD *)(a1 + 32) + 1LL;
      *(_QWORD *)(a1 + 32) = v12;
      if ( v12 > 1 )
      {
        while ( 1 )
        {
          v13 = *(_QWORD *)(a1 + 24);
          v14 = v11 + 1;
          v15 = (_BYTE *)(v13 + v11 + 1);
          if ( *v15 != 44 )
          {
            do
              ++v14;
            while ( *(_BYTE *)(v13 + v14) != 44 );
            v15 = (_BYTE *)(v13 + v14);
          }
          *v15 = 0;
          v16 = strtol((const char *)(*(_QWORD *)(a1 + 24) + v11), &endptr, 16);
          if ( endptr != (char *)(v14 + *(_QWORD *)(a1 + 24)) )
            goto LABEL_33;
          v17 = *a2 + 32 * a2[1];
          if ( *a2 == v17 )
            goto LABEL_29;
          v18 = *a2;
          while ( v16 != *(_DWORD *)(v18 + 24) )
          {
            v18 += 32;
            if ( v17 == v18 )
              goto LABEL_29;
          }
          if ( v17 == v18 )
          {
LABEL_29:
            if ( a2[2] < (unsigned __int64)(a2[1] + 1) )
            {
              v19 = qvector_reserve();
              v20 = a2[1];
              *a2 = v19;
              v17 = v19 + 32 * v20;
            }
            *(_QWORD *)v17 = 0;
            *(_DWORD *)(v17 + 24) = v16;
            *(_DWORD *)(v17 + 28) = -1;
            *(_OWORD *)(v17 + 8) = 0;
            ++a2[1];
          }
          v11 = v14 + 1;
          if ( (unsigned __int64)(v14 + 1) >= *(_QWORD *)(a1 + 32) )
            goto LABEL_8;
        }
      }
    }
    v21 = 1;
LABEL_34:
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree();
    }
  }
  return v21;
}

