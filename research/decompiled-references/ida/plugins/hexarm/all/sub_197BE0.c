__int64 __fastcall sub_197BE0(_QWORD *a1, __int64 *a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // r14d
  int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // r10d
  _BYTE *v18; // rdi
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  __int64 *v21; // rax
  int v22; // eax
  _BYTE *v24; // rax
  int v25; // [rsp+4h] [rbp-7Ch]
  __int64 v26; // [rsp+8h] [rbp-78h]
  __int64 v27[2]; // [rsp+10h] [rbp-70h] BYREF
  __int64 v28[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v29; // [rsp+30h] [rbp-50h]
  __int128 v30; // [rsp+38h] [rbp-48h]
  unsigned __int64 v31; // [rsp+48h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  v26 = *a2;
  if ( !*a2 )
    sub_194BA0();
  v4 = a1[1];
  v5 = a3;
  v28[0] = 0;
  v7 = *(_QWORD *)(v4 + 1504);
  v8 = *(_QWORD *)(v4 + 1440) + v5;
  v30 = 0;
  v9 = a2[9] + v8;
  v28[1] = 0;
  v10 = *(int *)(v7 + 80);
  v29 = 0;
  sub_122560(v28, v9, v10);
  v11 = sub_66AE0((_QWORD *)a1[1]);
  v12 = a1[2];
  v27[0] = 0;
  v27[1] = 0;
  v13 = sub_6F670(v11, v27, *(_DWORD *)(v26 + 72), *(_DWORD *)(v12 + 72));
  qfree();
  if ( !(_BYTE)v13 )
    goto LABEL_19;
  v14 = *(_DWORD *)(a1[2] + 72LL);
  if ( v14 == *(_DWORD *)(v26 + 72) )
    v15 = *(_QWORD *)(a1[3] + 16LL);
  else
    v15 = *(_QWORD *)(v26 + 56);
  v25 = *(_DWORD *)(v26 + 72);
  v16 = sub_128B90(v26, v28, v15, 0, nullptr, 0, 0x101u);
  v17 = v25;
  v18 = (_BYTE *)v16;
  if ( !v16 )
    goto LABEL_11;
  v19 = (_QWORD *)a2[12];
  v20 = &v19[a2[13]];
  if ( v19 != v20 )
  {
    while ( v18 != (_BYTE *)*v19 )
    {
      if ( v20 == ++v19 )
        goto LABEL_17;
    }
    if ( v20 != v19 )
      goto LABEL_11;
  }
LABEL_17:
  v24 = sub_11FDC0(v18, 1);
  if ( !v24 || (v17 = v25, v24[64] != 8) || (unsigned int)(*(_DWORD *)(*((_QWORD *)v24 + 9) + 284LL) - 23) > 2 )
  {
LABEL_19:
    v13 = 0;
    goto LABEL_13;
  }
LABEL_11:
  if ( v14 != v17 )
  {
    v21 = (__int64 *)sub_66AE0((_QWORD *)a1[1]);
    LOBYTE(v22) = sub_17BF20(v21, (__int64)v28, *(_DWORD *)(v26 + 72), *(_DWORD *)(a1[2] + 72LL), 0, a1[3], 1u, 0);
    v13 = v22 ^ 1;
  }
LABEL_13:
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  qfree();
  return v13;
}

