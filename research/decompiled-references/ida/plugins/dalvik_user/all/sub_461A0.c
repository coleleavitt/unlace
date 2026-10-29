__int64 __fastcall sub_461A0(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, __int64 a4)
{
  const void *v5; // r13
  signed int v6; // r10d
  size_t v7; // r12
  _DWORD *v8; // r15
  unsigned int v9; // eax
  unsigned __int64 v10; // r13
  __int64 v12; // rax
  bool v13; // zf
  _DWORD *v14; // rax
  const char *v15; // rcx
  const char *v16; // rdx
  __int64 v17; // [rsp+8h] [rbp-70h]
  unsigned int v19; // [rsp+14h] [rbp-64h]
  size_t n; // [rsp+18h] [rbp-60h]
  const char *v21; // [rsp+20h] [rbp-58h] BYREF
  __int128 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( !a4 )
  {
    v7 = 11;
    v14 = (_DWORD *)qalloc();
    v17 = 11;
    v14[1] = 0;
    v8 = v14;
    *(_DWORD *)((char *)v14 + 7) = 0;
    *v14 = 184549376;
    LODWORD(v14) = *(_DWORD *)(a1 + 48) + 1;
    *(_DWORD *)(a1 + 48) = (_DWORD)v14;
    v8[1] = _byteswap_ulong((unsigned int)v14);
    *((_BYTE *)v8 + 8) = 0;
    *((_BYTE *)v8 + 9) = a2;
    *((_BYTE *)v8 + 10) = a3;
    goto LABEL_6;
  }
  if ( *(_QWORD *)(a4 + 8) == *(_QWORD *)(a4 + 16) )
  {
    if ( !*(_BYTE *)(a4 + 56) )
      goto LABEL_4;
  }
  else
  {
    v12 = qrealloc();
    if ( !v12 )
      sub_43DF0((__int64)"JDWP encoder");
    v13 = *(_BYTE *)(a4 + 56) == 0;
    *(_QWORD *)a4 = v12;
    if ( v13 )
      goto LABEL_4;
  }
  sub_43C70((__int64 *)(a4 + 32), 44, 0);
LABEL_4:
  v5 = *(const void **)a4;
  v6 = *(_QWORD *)(a4 + 8) + 11;
  n = *(_QWORD *)(a4 + 8);
  v7 = v6;
  v19 = v6;
  v17 = v6;
  v8 = (_DWORD *)qalloc();
  memset(v8, 0, v7);
  *v8 = _byteswap_ulong(v19);
  v9 = *(_DWORD *)(a1 + 48) + 1;
  *(_DWORD *)(a1 + 48) = v9;
  v8[1] = _byteswap_ulong(v9);
  *((_BYTE *)v8 + 8) = 0;
  *((_BYTE *)v8 + 9) = a2;
  *((_BYTE *)v8 + 10) = a3;
  if ( v5 )
    memcpy((char *)v8 + 11, v5, n);
LABEL_6:
  v10 = sub_5D7A0(*(_QWORD *)(a1 + 40), v8, v7);
  if ( v10 < v7 )
    sub_44B20(a1);
  qfree();
  if ( v10 != v17 )
    return 0;
  if ( byte_7FBE9 )
  {
    v21 = nullptr;
    v22 = 0;
    sub_452D0((__int64 *)&v21, a2, a3);
    v15 = "";
    if ( a4 )
    {
      v15 = nptr;
      if ( *(_QWORD *)(a4 + 40) )
        v15 = *(const char **)(a4 + 32);
    }
    v16 = nptr;
    if ( (_QWORD)v22 )
      v16 = v21;
    sub_11340((__int64)"%d> %s(%s)\n", *(_DWORD *)(a1 + 48), v16, v15);
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree();
    }
  }
  return 1;
}

