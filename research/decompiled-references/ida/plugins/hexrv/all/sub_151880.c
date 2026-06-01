__int64 __fastcall sub_151880(__int128 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  bool v8; // zf
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r8
  int v12; // r9d
  char v14; // al
  __int64 v15; // r13
  __int64 v16; // [rsp+0h] [rbp-B8h]
  __int64 v18; // [rsp+10h] [rbp-A8h]
  _QWORD v20[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v21; // [rsp+30h] [rbp-88h] BYREF
  __int128 v22; // [rsp+38h] [rbp-80h]
  char v23[16]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v24; // [rsp+60h] [rbp-58h] BYREF
  __int64 v25; // [rsp+68h] [rbp-50h]
  unsigned __int64 v26; // [rsp+78h] [rbp-40h]

  v5 = a1;
  v8 = *(_BYTE *)a2 == 4;
  v16 = *((_QWORD *)&a1 + 1);
  v26 = __readfsqword(0x28u);
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( v8 && (unsigned __int8)sub_11C0E0(*(_BYTE **)(a2 + 8), v18, 0, a3, a4, a5) )
    return sub_1515E0(v5, v16, a2, a5, v11, v12);
  *((_QWORD *)&a1 + 1) = v20;
  v20[0] = 0;
  v20[1] = 0;
  v21 = 0;
  v22 = 0;
  sub_11F9E0(a1, a2, 1u, 0xFFFF0000);
  if ( !sub_A55E0(a1, v20, a3, a4, 1u) )
    goto LABEL_29;
  v9 = *(_QWORD *)(v16 + 16);
  if ( !v9 )
  {
LABEL_12:
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree();
    }
    qfree();
    return sub_1515E0(v5, v16, a2, a5, v11, v12);
  }
  while ( *(_DWORD *)(a2 + 4) > *(_DWORD *)(v9 + 68)
       || !*(_BYTE *)(v9 + 64)
       || *(_BYTE *)a2 != 4
       || !sub_1216D0(*(unsigned __int8 **)(a2 + 8), v18, (unsigned int *)v9, 1u) )
  {
LABEL_7:
    sub_123560((__int64)v23, v5, v9, 1);
    if ( (unsigned __int8)sub_60400(v20, v23) )
    {
      v10 = v24;
LABEL_9:
      if ( v10 )
      {
        v25 = 0;
        qfree();
      }
      qfree();
      goto LABEL_12;
    }
    v14 = sub_313370(&v21, &v24);
    v10 = v24;
    if ( v14 )
      goto LABEL_9;
    if ( v24 )
    {
      v25 = 0;
      qfree();
    }
    qfree();
    v9 = *(_QWORD *)(v9 + 16);
    if ( !v9 )
      goto LABEL_12;
  }
  sub_11F580((__int64)v23, (unsigned __int8 *)(v9 + 64));
  sub_126690((unsigned __int64)v23, v18, *(_DWORD *)(a2 + 4), 0);
  if ( (unsigned __int8)sub_A57F0(v5, (__int64)v23, *(_QWORD *)(v9 + 8), a4) )
  {
    sub_1188E0((__int64)v23);
    goto LABEL_7;
  }
  if ( a5 )
  {
    sub_151340((unsigned int *)a5);
    *(_DWORD *)a5 = 1;
    v15 = j__qalloc_or_throw();
    sub_11F580(v15, (unsigned __int8 *)a2);
    *(_QWORD *)(a5 + 32) = v15;
    *(_QWORD *)(a5 + 8) = a2;
  }
  sub_118550((char *)a2, v23);
  sub_1188E0((__int64)v23);
LABEL_29:
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  qfree();
  return 1;
}

