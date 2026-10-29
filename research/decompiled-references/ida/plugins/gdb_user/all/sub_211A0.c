__int64 __fastcall sub_211A0(__int64 a1, char a2, int a3, int a4, int a5, int a6)
{
  bool v6; // zf
  __int64 v7; // rax
  const char *v8; // rdx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  char *v13; // rbx
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  const char *v16; // rdx
  int v17; // edx
  int v19; // [rsp-8h] [rbp-40h]
  char v20[5]; // [rsp+3h] [rbp-35h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-30h]

  v6 = *(_BYTE *)(a1 + 1170) == 0;
  v21 = __readfsqword(0x28u);
  if ( v6 )
  {
    sub_48620(a1, (unsigned int)"GDB: Register layout (provided by the remote GDB stub):\n", a3, a4, a5, a6);
  }
  else
  {
    v7 = qword_6AC10 + 144LL * *(int *)(a1 + 1176);
    v8 = s;
    if ( *(_QWORD *)(v7 + 80) )
      v8 = *(const char **)(v7 + 72);
    sub_48620(a1, (unsigned int)"GDB: Register layout (loaded from %s):\n", (_DWORD)v8, a4, a5, a6);
  }
  if ( *(_QWORD *)(a1 + 1224) )
  {
    v13 = v20;
    if ( !a2 )
      v13 = (char *)&unk_54999;
    v14 = 0;
    do
    {
      strcpy(v20, " [ ]");
      v15 = *(_QWORD *)(a1 + 1216) + 48 * v14;
      if ( *(_BYTE *)(v15 + 40) )
        v20[2] = 103;
      v16 = s;
      if ( *(_QWORD *)(v15 + 24) )
        v16 = *(const char **)(v15 + 16);
      v19 = (int)v16;
      v17 = v14++;
      sub_48620(
        a1,
        (unsigned int)"Register %3zd (gdb %3d):%s offset 0x%03X, size %2d, name: %s\n",
        v17,
        *(_DWORD *)(v15 + 8),
        (_DWORD)v13,
        *(_DWORD *)v15);
      v9 = v19;
    }
    while ( v14 < *(_QWORD *)(a1 + 1224) );
  }
  return sub_48620(a1, (unsigned int)"GDB: Register layout end\n", v9, v10, v11, v12);
}

