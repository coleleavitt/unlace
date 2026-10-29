__int64 __fastcall sub_1ED60(__int64 a1, int a2, char a3)
{
  __int64 v3; // r15
  __int64 v4; // rbx
  int v8; // edi
  char *v9; // rax
  int v10; // ecx
  signed int v11; // eax
  __int64 v12; // rcx
  signed int v13; // esi
  __int64 v14; // rax
  _BYTE *v15; // rdi
  _QWORD *v16; // rbx
  _DWORD *v17; // rax
  __int64 v18; // rdi
  int v19; // ebx
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  _QWORD *v24; // rsi
  __int64 v25; // rax
  int v26; // r12d
  __int64 v27; // rsi
  __int64 v28; // [rsp+10h] [rbp-80h] BYREF
  void *dest; // [rsp+18h] [rbp-78h]
  __int128 v30; // [rsp+20h] [rbp-70h]
  __int64 v31; // [rsp+38h] [rbp-58h]
  __int128 v32; // [rsp+40h] [rbp-50h]
  unsigned __int64 v33; // [rsp+50h] [rbp-40h]

  v3 = a1 + 1216;
  v4 = *(_QWORD *)(a1 + 1232);
  v33 = __readfsqword(0x28u);
  v30 = 0;
  dest = nullptr;
  v31 = 0;
  v32 = 0;
  if ( v4 == a1 + 1216 )
    goto LABEL_26;
  do
  {
    while ( 1 )
    {
      while ( (*(_DWORD *)(v4 + 32) == a2) == a3 )
      {
LABEL_9:
        v4 = std::_Rb_tree_increment();
        if ( v4 == v3 )
          goto LABEL_10;
      }
      if ( !*(_DWORD *)(v4 + 60) && !*(_BYTE *)(v4 + 64) && !*(_BYTE *)(v4 + 65) )
        break;
LABEL_32:
      ++*(_DWORD *)(v4 + 44);
      v4 = std::_Rb_tree_increment();
      if ( v4 == v3 )
        goto LABEL_10;
    }
    if ( !sub_100E0(*(_DWORD *)(v4 + 40), 0x13u) )
    {
      v22 = v30;
      v23 = v4 + 40;
      v28 = v4 + 40;
      v24 = dest;
      if ( *((_QWORD *)&v30 + 1) < (unsigned __int64)(v30 + 1) )
      {
        dest = (void *)qvector_reserve();
        v24 = dest;
        v23 = v4 + 40;
        v22 = v30;
      }
      v24[v22] = v23;
      *(_QWORD *)&v30 = v30 + 1;
      *(_BYTE *)(v4 + 64) = 1;
      goto LABEL_32;
    }
    v8 = *__errno_location();
    if ( v8 != 3 )
    {
      v9 = strerror(v8);
      sub_143D0(a1, (__int64)"failed to send SIGSTOP to thread %d: %s\n", *(_DWORD *)(v4 + 40), v9);
      goto LABEL_9;
    }
    v25 = v32;
    v26 = *(_DWORD *)(v4 + 40);
    v27 = v31;
    if ( *((_QWORD *)&v32 + 1) < (unsigned __int64)(v32 + 1) )
    {
      v31 = qvector_reserve();
      v27 = v31;
      v25 = v32;
    }
    *(_DWORD *)(v27 + 4 * v25) = v26;
    *(_QWORD *)&v32 = v32 + 1;
    v4 = std::_Rb_tree_increment();
  }
  while ( v4 != v3 );
LABEL_10:
  while ( (_QWORD)v30 )
  {
    while ( 1 )
    {
      v10 = *(unsigned __int8 *)(a1 + 1349);
      LODWORD(v28) = 0;
      v11 = sub_25CB0(a1, &v28, 0xFFFFFFFFLL, (unsigned int)-v10);
      v12 = v30;
      v13 = v11;
      v14 = v30;
      if ( v13 > 0 )
        break;
LABEL_12:
      if ( !v14 )
        goto LABEL_21;
    }
    v15 = dest;
    v16 = dest;
    if ( !(8LL * (_QWORD)v30) )
    {
LABEL_34:
      sub_15670((_QWORD *)a1, v13, v28);
      v14 = v30;
      goto LABEL_12;
    }
    while ( 1 )
    {
      v17 = (_DWORD *)*v16;
      if ( *(_DWORD *)*v16 == v13 )
        break;
      if ( ++v16 == (_QWORD *)((char *)dest + 8 * (_QWORD)v30) )
        goto LABEL_34;
    }
    if ( (_WORD)v28 == 4991 )
    {
      *((_BYTE *)v17 + 24) = 0;
      v17[5] = 1;
    }
    else
    {
      sub_15670((_QWORD *)a1, v13, v28);
      v15 = dest;
      v12 = v30;
    }
    memmove(v16, v16 + 1, &v15[8 * v12] - (_BYTE *)v16 - 8);
    *(_QWORD *)&v30 = v30 - 1;
  }
LABEL_21:
  v18 = v31;
  if ( (_QWORD)v32 )
  {
    v19 = 0;
    v20 = 0;
    do
    {
      sub_1EB80(a1, *(_DWORD *)(v18 + 4 * v20), 3);
      ++v19;
      v18 = v31;
      v20 = v19;
    }
    while ( v19 < (unsigned __int64)v32 );
  }
  if ( v18 )
  {
    *(_QWORD *)&v32 = 0;
    qfree();
  }
LABEL_26:
  if ( dest )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  return 1;
}

