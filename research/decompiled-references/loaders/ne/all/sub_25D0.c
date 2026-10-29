__int64 __fastcall sub_25D0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // r13
  const char *v9; // rbx
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rdx
  char *v12; // rsi
  unsigned int v13; // eax
  const char *v14; // rbx
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // [rsp+Ch] [rbp-9Ch] BYREF
  _WORD v21[16]; // [rsp+10h] [rbp-98h] BYREF
  _WORD v22[27]; // [rsp+30h] [rbp-78h] BYREF
  char v23; // [rsp+66h] [rbp-42h]
  unsigned __int64 v24; // [rsp+78h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( qlread(a3, v21, 28) != 28 )
    return 0;
  if ( v21[0] == 17742 )
  {
    v20 = 0;
    v6 = 0;
  }
  else
  {
    if ( v21[0] != 19802 && v21[0] != 23117 )
      return 0;
    if ( v21[12] <= 0x3Fu )
      return 0;
    qlseek(a3, 60, 0);
    if ( qlread(a3, &v20, 4) != 4 )
      return 0;
    v6 = v20;
  }
  qlseek(a3, v6, 0);
  if ( qlread(a3, v22, 64) != 64 || v22[0] != 17742 )
    return 0;
  dword_B294 = v23 == 1;
  if ( v23 == 1 )
  {
    v7 = 25;
    v8 = 24;
    v9 = "New Executable (NE) OS/2";
  }
  else
  {
    v7 = 28;
    v8 = 27;
    v9 = "New Executable (NE) Windows";
  }
  v10 = *(_QWORD **)a1;
  if ( *(_QWORD *)(a1 + 16) < v7 )
  {
    v19 = qvector_reserve(a1, v10, v7, 1);
    *(_QWORD *)a1 = v19;
    v10 = (_QWORD *)v19;
  }
  *(_QWORD *)(a1 + 8) = v7;
  v11 = (unsigned __int64)(v10 + 1) & 0xFFFFFFFFFFFFFFF8LL;
  *v10 = *(_QWORD *)v9;
  *(_QWORD *)((char *)v10 + v8 - 8) = *(_QWORD *)&v9[v8 - 8];
  v12 = (char *)v10 - v11;
  v13 = 0;
  v14 = (const char *)(v9 - v12);
  v15 = (v8 + (_DWORD)v12) & 0xFFFFFFF8;
  do
  {
    v16 = v13;
    v13 += 8;
    *(_QWORD *)(v11 + v16) = *(_QWORD *)&v14[v16];
  }
  while ( v13 < v15 );
  *(_BYTE *)(*(_QWORD *)a1 + v8) = 0;
  v17 = *a2;
  if ( (unsigned __int64)a2[2] <= 6 )
  {
    v18 = qvector_reserve(a2, v17, 7, 1);
    *a2 = v18;
    v17 = v18;
  }
  a2[1] = 7;
  *(_DWORD *)v17 = 1635018093;
  *(_WORD *)(v17 + 4) = 25456;
  *(_BYTE *)(*a2 + 6) = 0;
  return 32772;
}
