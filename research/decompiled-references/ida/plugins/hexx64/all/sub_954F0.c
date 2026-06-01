__int64 __fastcall sub_954F0(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 *v8; // rbx
  unsigned __int8 *v9; // rax
  bool v10; // zf
  char v11; // al
  __int16 *v12; // r12
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r8
  int v18; // r9d
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rbx
  unsigned __int8 *v29; // rax
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // r9d
  int v36; // [rsp+0h] [rbp-70h]
  unsigned __int64 *v37; // [rsp+0h] [rbp-70h]
  int v38; // [rsp+8h] [rbp-68h]
  int v39; // [rsp+8h] [rbp-68h]
  char v40; // [rsp+Ch] [rbp-64h]
  char v41; // [rsp+Ch] [rbp-64h]
  char v42; // [rsp+Ch] [rbp-64h]
  __int64 v43; // [rsp+10h] [rbp-60h] BYREF
  __int64 v44; // [rsp+18h] [rbp-58h]
  __int64 v45; // [rsp+20h] [rbp-50h]
  __int128 v46; // [rsp+28h] [rbp-48h]
  unsigned __int64 v47; // [rsp+38h] [rbp-38h]

  v4 = a1 + 32;
  v5 = a1 + 48;
  v6 = *(_QWORD *)(a1 + 8);
  v47 = __readfsqword(0x28u);
  v8 = *(unsigned __int64 **)(*(_QWORD *)(v6 + 480) + 112LL);
  *(_QWORD *)(a1 + 16) = a2;
  v36 = (int)v8;
  v9 = (unsigned __int8 *)sub_125180(a1 + 32, (unsigned __int8 *)(a2 + 64));
  sub_125180(a1 + 48, v9);
  v10 = a3 == 0;
  v11 = a3;
  v12 = (__int16 *)(a1 + 48);
  if ( v10 )
    v12 = (__int16 *)(a1 + 32);
  if ( !(unsigned __int8)sub_12CD10(v12, v8, v11) )
  {
LABEL_15:
    if ( (*(_BYTE *)(a1 + 76) & 4) != 0 )
    {
      v24 = *(_QWORD *)(a1 + 16);
      v25 = *(_QWORD *)(a1 + 8);
      v46 = 0;
      sub_127FE0(v25, (__int64)&v43, v24 + 64, 0, v13, v14, v36, v38, 0, 0, 0);
      v26 = sub_A9D90(*(_QWORD *)(a1 + 8), &v43, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), 0, 1u);
      *(_QWORD *)(a1 + 64) = v26;
      if ( !v26
        || *(_DWORD *)v26 != 4
        || !sub_125B60((unsigned __int8 *)(v26 + 32), *(_QWORD *)(a1 + 16) + 64LL, 0)
        || (v29 = (unsigned __int8 *)sub_125180(v4, (unsigned __int8 *)(*(_QWORD *)(a1 + 64) + 64LL)),
            sub_125180(v5, v29),
            !(unsigned __int8)sub_12CD10(v12, v37, v41)) )
      {
        v27 = 0;
        goto LABEL_19;
      }
      v44 = 0;
      if ( v45 )
      {
        *(_QWORD *)&v46 = 0;
        qfree(v45);
        v45 = 0;
        *((_QWORD *)&v46 + 1) = 0;
      }
      sub_127FE0(*(_QWORD *)(a1 + 8), (__int64)&v43, (__int64)v12, 1u, v30, v31, (int)v37, v39, v43, v44, v45);
      v32 = sub_A9AA0(*(_QWORD *)(a1 + 8), &v43, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), 0, 1u);
      *(_QWORD *)(a1 + 24) = v32;
      if ( v32 )
      {
        *(_DWORD *)(a1 + 72) = 1;
        if ( (unsigned __int8)sub_952E0(a1, v32, v42, v33, v34, v35) )
        {
          v27 = *(_QWORD *)(a1 + 24);
LABEL_19:
          if ( v45 )
          {
            *(_QWORD *)&v46 = 0;
            qfree(v45);
          }
          goto LABEL_21;
        }
      }
      if ( v45 )
      {
        *(_QWORD *)&v46 = 0;
        qfree(v45);
      }
      qfree(v43);
    }
    return 0;
  }
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)(a1 + 8);
      v46 = 0;
      sub_127FE0(v20, (__int64)&v43, (__int64)v12, 1u, v13, v14, v36, v38, 0, 0, 0);
      v21 = *(_QWORD *)(a1 + 8);
      v22 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(a1 + 72) )
        break;
      v16 = sub_129150(v21, &v43, *(_QWORD *)(v22 + 16), 0, 0, 0, 0x101u);
      *(_QWORD *)(a1 + 24) = v16;
      if ( v16 )
        goto LABEL_6;
LABEL_12:
      if ( v45 )
      {
        *(_QWORD *)&v46 = 0;
        qfree(v45);
      }
      qfree(v43);
      v23 = *(_DWORD *)(a1 + 72) + 1;
      *(_DWORD *)(a1 + 72) = v23;
      if ( v23 > 1 )
        goto LABEL_15;
    }
    v16 = sub_A9AA0(v21, &v43, *(_QWORD *)(v22 + 8), 0, 1u);
    *(_QWORD *)(a1 + 24) = v16;
    if ( !v16 )
      goto LABEL_12;
LABEL_6:
    if ( (unsigned __int8)sub_952E0(a1, v16, v40, v15, v17, v18) )
      break;
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(v45);
    }
    qfree(v43);
    v19 = *(_DWORD *)(a1 + 72) + 1;
    *(_DWORD *)(a1 + 72) = v19;
    if ( v19 > 1 )
      goto LABEL_15;
  }
  v27 = *(_QWORD *)(a1 + 24);
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45);
  }
LABEL_21:
  qfree(v43);
  return v27;
}

