__int64 __fastcall sub_1981A0(_QWORD *a1, __int64 *a2, int a3, double a4, __m128 a5)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // r14d
  int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  int v24; // r10d
  _BYTE *v25; // rdi
  _QWORD *v26; // rax
  __int64 *v27; // rax
  int v28; // eax
  _BYTE *v30; // rax
  __int64 v31; // [rsp-10h] [rbp-90h]
  int v32; // [rsp+4h] [rbp-7Ch]
  __int64 v33; // [rsp+8h] [rbp-78h]
  __int64 v34[2]; // [rsp+10h] [rbp-70h] BYREF
  __int64 v35[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v36; // [rsp+30h] [rbp-50h]
  __int128 v37; // [rsp+38h] [rbp-48h]
  unsigned __int64 v38; // [rsp+48h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  v33 = *a2;
  if ( !*a2 )
    sub_195160(a4);
  v6 = a1[1];
  v7 = a3;
  v35[0] = 0;
  v9 = *(_QWORD *)(v6 + 1504);
  v10 = *(_QWORD *)(v6 + 1440) + v7;
  v37 = 0;
  v11 = a2[9] + v10;
  v35[1] = 0;
  v12 = *(int *)(v9 + 80);
  v36 = 0;
  sub_122B20(v35, v11, v12);
  v15 = sub_670E0((_QWORD *)a1[1], v11, v13, v14);
  v16 = a1[2];
  v34[0] = 0;
  v34[1] = 0;
  v17 = sub_6FC30(v15, v34, *(_DWORD *)(v33 + 72), *(_DWORD *)(v16 + 72), 0.0);
  qfree(v34[0]);
  if ( !(_BYTE)v17 )
    goto LABEL_19;
  v18 = *(_DWORD *)(a1[2] + 72LL);
  if ( v18 == *(_DWORD *)(v33 + 72) )
    v19 = *(_QWORD *)(a1[3] + 16LL);
  else
    v19 = *(_QWORD *)(v33 + 56);
  v32 = *(_DWORD *)(v33 + 72);
  v20 = sub_129150(v33, v35, v19, 0, 0, 0, 0.0, a5, 0x101u);
  v23 = v31;
  v24 = v32;
  v25 = (_BYTE *)v20;
  if ( !v20 )
    goto LABEL_11;
  v21 = (_QWORD *)a2[12];
  v26 = &v21[a2[13]];
  if ( v21 != v26 )
  {
    while ( v25 != (_BYTE *)*v21 )
    {
      if ( v26 == ++v21 )
        goto LABEL_17;
    }
    if ( v26 != v21 )
      goto LABEL_11;
  }
LABEL_17:
  v23 = 1;
  v30 = sub_120380(v25, 1);
  if ( !v30 || (v24 = v32, v30[64] != 8) || (unsigned int)(*(_DWORD *)(*((_QWORD *)v30 + 9) + 284LL) - 23) > 2 )
  {
LABEL_19:
    v17 = 0;
    goto LABEL_13;
  }
LABEL_11:
  if ( v18 != v24 )
  {
    v27 = (__int64 *)sub_670E0((_QWORD *)a1[1], v23, (__int64)v21, v22);
    LOBYTE(v28) = sub_17C4E0(v27, (__int64)v35, *(_DWORD *)(v33 + 72), *(_DWORD *)(a1[2] + 72LL), 0, a1[3], 0.0, 1u, 0);
    v17 = v28 ^ 1;
  }
LABEL_13:
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  qfree(v35[0]);
  return v17;
}

