__int64 __fastcall sub_4D820(__int64 a1, char a2, int a3, int a4, int a5)
{
  bool v5; // zf
  __int64 v6; // rax
  const char *v7; // rdx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  char *v11; // rbx
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  const char *v14; // rdx
  int v15; // edx
  int v17; // [rsp-8h] [rbp-40h]
  char v18[5]; // [rsp+3h] [rbp-35h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-30h]

  v5 = *(_BYTE *)(a1 + 1170) == 0;
  v19 = __readfsqword(0x28u);
  if ( v5 )
  {
    sub_70460(a1, (unsigned int)"GDB: Register layout (provided by the remote GDB stub):\n", a3, a4, a5);
  }
  else
  {
    v6 = qword_9AD30 + 144LL * *(int *)(a1 + 1176);
    v7 = src;
    if ( *(_QWORD *)(v6 + 80) )
      v7 = *(const char **)(v6 + 72);
    sub_70460(a1, (unsigned int)"GDB: Register layout (loaded from %s):\n", (_DWORD)v7, a4, a5);
  }
  if ( *(_QWORD *)(a1 + 1224) )
  {
    v11 = v18;
    if ( !a2 )
      v11 = (char *)&unk_7D386;
    v12 = 0;
    do
    {
      strcpy(v18, " [ ]");
      v13 = *(_QWORD *)(a1 + 1216) + 48 * v12;
      if ( *(_BYTE *)(v13 + 40) )
        v18[2] = 103;
      v14 = src;
      if ( *(_QWORD *)(v13 + 24) )
        v14 = *(const char **)(v13 + 16);
      v17 = (int)v14;
      v15 = v12++;
      sub_70460(
        a1,
        (unsigned int)"Register %3zd (gdb %3d):%s offset 0x%03X, size %2d, name: %s\n",
        v15,
        *(_DWORD *)(v13 + 8),
        (_DWORD)v11);
      v8 = v17;
    }
    while ( v12 < *(_QWORD *)(a1 + 1224) );
  }
  return sub_70460(a1, (unsigned int)"GDB: Register layout end\n", v8, v9, v10);
}

