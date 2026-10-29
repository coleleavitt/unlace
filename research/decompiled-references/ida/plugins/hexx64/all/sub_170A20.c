__int64 __fastcall sub_170A20(_QWORD *a1, double a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // r15d
  __int64 v5; // r13
  _QWORD *i; // r14
  __int64 v7; // rcx
  __int64 v8; // r10
  int v9; // edi
  __int64 v10; // rdx
  _QWORD *v12; // rbp
  int v13; // r14d
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r12
  __int64 v19; // rax
  int v20; // r15d
  __int64 v21; // rbx
  __int64 v22; // rbp
  char v23; // r14
  __int64 v24; // r8
  _QWORD *v25; // r15
  __int64 v26; // r10
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // [rsp+8h] [rbp-70h]
  __int64 v30; // [rsp+8h] [rbp-70h]
  int v31; // [rsp+8h] [rbp-70h]
  __int64 v32; // [rsp+8h] [rbp-70h]
  _QWORD *v33; // [rsp+10h] [rbp-68h]
  unsigned __int8 v34; // [rsp+18h] [rbp-60h]
  __int64 v35; // [rsp+18h] [rbp-60h]
  __int64 v36; // [rsp+20h] [rbp-58h]
  __int64 v37; // [rsp+28h] [rbp-50h]
  int v38; // [rsp+34h] [rbp-44h]
  __int64 v39; // [rsp+38h] [rbp-40h]

  v2 = a1[8];
  if ( (*(_BYTE *)(v2 + 1) & 0x10) == 0 )
    return 0;
  v3 = a1[44];
  if ( (int)v3 <= 0 )
    return 0;
  v4 = 0;
  v5 = 0;
  for ( i = a1; ; v2 = i[8] )
  {
    v10 = *(unsigned int *)(i[43] + v5);
    if ( (unsigned int)v10 >= *(_DWORD *)(v2 + 64) )
    {
LABEL_42:
      if ( !under_debugger )
        sub_383060(0xCDEFu, a2);
      BUG();
    }
    ++v4;
    v8 = *(_QWORD *)(*(_QWORD *)(v2 + 528) + 8 * v10);
    v7 = *(_QWORD *)(v8 + 56);
    if ( v7 )
    {
      if ( *(_DWORD *)v7 != 55 && *(char *)(v7 + 4) >= 0 )
        goto LABEL_8;
      v29 = v8;
      v7 = sub_1229D0(*(_QWORD *)(v7 + 16));
      v3 = i[44];
      if ( v7 )
        break;
    }
    v5 += 4;
    if ( (int)v3 <= v4 )
      return 0;
LABEL_10:
    ;
  }
  v8 = v29;
LABEL_8:
  v9 = v3;
  if ( *(_DWORD *)(v8 + 376) != 1 )
  {
LABEL_9:
    v5 += 4;
    if ( v9 <= v4 )
      return 0;
    goto LABEL_10;
  }
  if ( (int)v3 <= v4 )
    return 0;
  v39 = v5;
  v12 = i;
  v13 = v4;
  v38 = v4;
  v37 = v7;
  v14 = 4LL * v4;
  v36 = v8;
  while ( 1 )
  {
    v15 = v12[8];
    v16 = *(unsigned int *)(v12[43] + v14);
    if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 64) )
      goto LABEL_42;
    v17 = *(_QWORD *)(*(_QWORD *)(v15 + 528) + 8 * v16);
    v18 = *(_QWORD *)(v17 + 56);
    if ( !v18 )
      goto LABEL_19;
    if ( *(_DWORD *)v18 != 55 && *(char *)(v18 + 4) >= 0
      || (v30 = *(_QWORD *)(*(_QWORD *)(v15 + 528) + 8 * v16),
          v19 = sub_1229D0(*(_QWORD *)(v18 + 16)),
          v17 = v30,
          (v18 = v19) != 0) )
    {
      if ( *(_DWORD *)(v17 + 376) == 1 )
      {
        v33 = v12;
        v20 = 0;
        v31 = v13;
        v21 = v37;
        v35 = v17;
        v22 = *(_QWORD *)(*(_QWORD *)(v36 + 480) + 112LL);
        do
        {
          if ( sub_1201A0((_BYTE *)v21, v22)
            || (v23 = sub_125B90((unsigned __int8 *)v21, v22, (unsigned int *)v18, 4u, a2)) == 0 )
          {
            v13 = v31;
            v12 = v33;
            goto LABEL_18;
          }
          ++v20;
          if ( sub_120380((_BYTE *)v21, 1) )
            v20 = 6;
          v21 = sub_1229D0(*(_QWORD *)(v21 + 16));
          if ( !v21 )
          {
            v24 = v35;
            v12 = v33;
            v34 = v23;
            v13 = v31;
            if ( v20 > 5 && *(_QWORD *)(v24 + 48) == v18 )
            {
              v25 = v33;
              sub_1688F0(v24, v18, v36, a2);
              v26 = v36;
              goto LABEL_38;
            }
            goto LABEL_18;
          }
          v18 = sub_1229D0(*(_QWORD *)(v18 + 16));
        }
        while ( v18 );
        v28 = v35;
        v12 = v33;
        v34 = v23;
        v13 = v31;
        if ( v20 > 5 && *(_QWORD *)(v21 + 8) == *(_QWORD *)(v36 + 48) )
          break;
      }
    }
LABEL_18:
    v3 = v12[44];
LABEL_19:
    ++v13;
    v9 = v3;
    v14 += 4;
    if ( v13 >= (int)v3 )
    {
      v4 = v38;
      v5 = v39;
      i = v12;
      goto LABEL_9;
    }
  }
  v25 = v33;
  sub_1688F0(v36, *(_QWORD *)(v21 + 8), v28, a2);
  v26 = v36;
LABEL_38:
  v32 = v26;
  sub_66FA0(v25[8], 1);
  sub_13FCB0((unsigned __int64 **)(v32 + 424));
  *(_BYTE *)(v32 + 440) = 1;
  sub_13FCB0((unsigned __int64 **)(v32 + 456));
  v27 = *(_QWORD *)(v32 + 64);
  *(_BYTE *)(v32 + 472) = 1;
  *(_DWORD *)(v27 + 4) &= ~8u;
  *(_DWORD *)v25[8] |= 0x400u;
  return v34;
}

