__int64 __fastcall sub_50EB0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  unsigned int v6; // ebx
  const char *v7; // r15
  __int64 v8; // rax
  unsigned int v9; // r14d
  __int64 v10; // rdi
  const void *v12; // [rsp+0h] [rbp-78h] BYREF
  __int128 v13; // [rsp+8h] [rbp-70h]
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  __int128 v15; // [rsp+28h] [rbp-50h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 864);
  v16 = __readfsqword(0x28u);
  v6 = sub_63F00(v4);
  if ( (_BYTE)v6 )
  {
    v7 = src;
    v8 = *(_QWORD *)(a1 + 1216) + 48LL * a3;
    if ( *(_QWORD *)(v8 + 24) )
      v7 = *(const char **)(v8 + 16);
    v9 = *(_DWORD *)(v8 + 8);
    v10 = *(_QWORD *)(a1 + 864);
    v12 = nullptr;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v6 = sub_67A90(v10, v9, &v12, &v14);
    if ( (_BYTE)v6 )
    {
      sub_70460(
        a1,
        (unsigned int)"GDB: Received value for register %d (gdb: %d) (%s) from remote\n",
        a3,
        v9,
        (_DWORD)v7);
      sub_4D680(a2 + 48, a3, v12, v14, v13);
    }
    else
    {
      sub_70460(a1, (unsigned int)"GDB: Could not fetch register %d (gdb: %d) (%s) from remote\n", a3, v9, (_DWORD)v7);
    }
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree();
    }
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree();
    }
  }
  return v6;
}

