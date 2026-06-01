__int64 __fastcall sub_461F0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  unsigned int v6; // ebx
  const char *v7; // r15
  __int64 v8; // rax
  unsigned int v9; // r14d
  __int64 v10; // rdi
  int v11; // r9d
  const void *v13; // [rsp+0h] [rbp-78h] BYREF
  __int128 v14; // [rsp+8h] [rbp-70h]
  __int64 v15; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+28h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 864);
  v17 = __readfsqword(0x28u);
  v6 = sub_593B0(v4);
  if ( (_BYTE)v6 )
  {
    v7 = s;
    v8 = *(_QWORD *)(a1 + 1216) + 48LL * a3;
    if ( *(_QWORD *)(v8 + 24) )
      v7 = *(const char **)(v8 + 16);
    v9 = *(_DWORD *)(v8 + 8);
    v10 = *(_QWORD *)(a1 + 864);
    v13 = nullptr;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v6 = sub_5D2C0(v10, v9, &v13, &v15);
    if ( (_BYTE)v6 )
    {
      sub_65BB0(
        a1,
        (unsigned int)"GDB: Received value for register %d (gdb: %d) (%s) from remote\n",
        a3,
        v9,
        (_DWORD)v7,
        v11);
      sub_42940(a2 + 48, a3, v13, v15, v14);
    }
    else
    {
      sub_65BB0(
        a1,
        (unsigned int)"GDB: Could not fetch register %d (gdb: %d) (%s) from remote\n",
        a3,
        v9,
        (_DWORD)v7,
        v11);
    }
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree();
    }
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree();
    }
  }
  return v6;
}

