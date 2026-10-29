const char *__fastcall sub_18D70(__int64 *a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rbp
  _BYTE *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  size_t v12; // rax
  size_t v13; // rbp
  size_t v14; // rax
  size_t v15; // rbp
  __int64 v16; // rax
  void *v17; // rdi
  size_t v18; // r14
  __int64 v19; // rax
  void *v20; // rdi
  size_t v21; // r12
  __int64 v22; // rax
  int v23; // [rsp+4h] [rbp-444h] BYREF
  __int64 v24; // [rsp+8h] [rbp-440h] BYREF
  char s[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v26; // [rsp+418h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  s[1023] = 0;
  if ( (unsigned int)qsscanf(a3, "aux %1023s %lli%n", s, &v24, &v23) != 2 )
    return sub_18AD0(a1, a3);
  v5 = skip_spaces(&a3[v23]);
  v6 = (_QWORD *)a1[12];
  v7 = (_BYTE *)v5;
  v8 = v6[641];
  v9 = v6[640];
  if ( v6[642] < (unsigned __int64)(v8 + 1) )
  {
    v16 = qvector_reserve(v6 + 640, v9, v8 + 1, 88);
    v8 = v6[641];
    v6[640] = v16;
    v9 = v16;
  }
  v10 = v9 + 88 * v8;
  *(_QWORD *)v10 = 0;
  v11 = v24;
  *(_QWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 32) = 0;
  *(_QWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 80) = 0;
  *(_OWORD *)(v10 + 16) = 0;
  *(_OWORD *)(v10 + 40) = 0;
  *(_OWORD *)(v10 + 64) = 0;
  ++v6[641];
  *(_QWORD *)v10 = v11;
  v12 = strlen(s);
  v13 = v12;
  if ( v12 )
  {
    v17 = *(void **)(v10 + 8);
    v18 = v12 + 1;
    if ( *(_QWORD *)(v10 + 24) < v12 + 1 )
    {
      v19 = qvector_reserve(v10 + 8, *(_QWORD *)(v10 + 8), v18, 1);
      *(_QWORD *)(v10 + 8) = v19;
      v17 = (void *)v19;
    }
    *(_QWORD *)(v10 + 16) = v18;
    memmove(v17, s, v13);
    *(_BYTE *)(*(_QWORD *)(v10 + 8) + v13) = 0;
  }
  else
  {
    *(_QWORD *)(v10 + 16) = 0;
  }
  if ( !*v7 )
    return nullptr;
  if ( v7 && (v14 = strlen(v7), (v15 = v14) != 0) )
  {
    v20 = *(void **)(v10 + 32);
    v21 = v14 + 1;
    if ( *(_QWORD *)(v10 + 48) < v14 + 1 )
    {
      v22 = qvector_reserve(v10 + 32, *(_QWORD *)(v10 + 32), v21, 1);
      *(_QWORD *)(v10 + 32) = v22;
      v20 = (void *)v22;
    }
    *(_QWORD *)(v10 + 40) = v21;
    memmove(v20, v7, v15);
    *(_BYTE *)(*(_QWORD *)(v10 + 32) + v15) = 0;
    return nullptr;
  }
  else
  {
    *(_QWORD *)(v10 + 40) = 0;
    return nullptr;
  }
}
