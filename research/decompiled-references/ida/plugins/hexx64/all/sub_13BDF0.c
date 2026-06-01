__int64 __fastcall sub_13BDF0(__int64 a1, __int64 **a2, double a3, __m128 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  _QWORD *v11; // rax
  _QWORD *v12; // r12
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  int v21; // ebx
  __int64 v22; // r13
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v30; // [rsp-8h] [rbp-C8h]
  __int64 v31; // [rsp+0h] [rbp-C0h]
  __int64 v32; // [rsp+8h] [rbp-B8h]
  __int64 v33; // [rsp+10h] [rbp-B0h]
  int v34; // [rsp+18h] [rbp-A8h]
  unsigned int v35; // [rsp+1Ch] [rbp-A4h]
  _QWORD *v36; // [rsp+20h] [rbp-A0h]
  __int64 v37; // [rsp+28h] [rbp-98h]
  __int64 v39; // [rsp+48h] [rbp-78h] BYREF
  _QWORD v40[2]; // [rsp+50h] [rbp-70h] BYREF
  __int64 v41[2]; // [rsp+60h] [rbp-60h] BYREF
  __int64 v42; // [rsp+70h] [rbp-50h]
  __int128 v43; // [rsp+78h] [rbp-48h]
  unsigned __int64 v44; // [rsp+88h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  sub_1EBDA0(a1, a2);
  v6 = sub_670E0((_QWORD *)a1, (__int64)a2, v4, v5);
  v32 = sub_110340(v6, 0, v7, v8, v9, v10, a3, a4);
  if ( !v32 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, a3);
LABEL_57:
    BUG();
  }
  v33 = 8;
  v35 = 1;
  ++*(_DWORD *)(v32 + 24);
  v34 = 0;
  if ( *(int *)(a1 + 64) <= 1 )
    goto LABEL_49;
  while ( 2 )
  {
    v31 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + v33);
    if ( *(_DWORD *)(v31 + 76) == 6 )
      goto LABEL_20;
    v36 = (_QWORD *)(*(_QWORD *)v32 + 3 * v33);
    v11 = (_QWORD *)*v36;
    if ( !*v36 )
      goto LABEL_18;
    if ( !v36[1] )
      goto LABEL_18;
    v12 = (_QWORD *)v11[1];
    if ( v11 == v12 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        if ( v12[4] <= 1u || !*(_DWORD *)v12[3] )
          goto LABEL_12;
        a3 = 0.0;
        v41[0] = 0;
        v41[1] = 0;
        v42 = 0;
        v43 = 0;
        sub_103D60((__int64)(v12 + 3), a1, v41);
        if ( !v12[4] )
        {
          v37 = 0;
LABEL_44:
          v34 += (unsigned __int8)sub_13B3C0(v31, v37 + 32, v37 + 64, v18, v19, v20, 0.0, a4);
          goto LABEL_38;
        }
        v37 = 0;
        v21 = 0;
        v22 = 0;
        while ( 1 )
        {
          v25 = *(unsigned int *)(v12[3] + 4 * v22);
          if ( (unsigned int)v25 >= *(_DWORD *)(a1 + 64) )
          {
            if ( !under_debugger )
              sub_383060(0xCDEFu, 0.0);
            goto LABEL_57;
          }
          v26 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v25);
          v27 = sub_129150(v26, v41, *(_QWORD *)(v26 + 56), 0, 0, 0, 0.0, a4, 0x101u);
          v28 = v27;
          v18 = v30;
          if ( !v27 || *(_DWORD *)v27 != 4 )
            goto LABEL_36;
          if ( !v21 )
            break;
          if ( !sub_125B60((unsigned __int8 *)(v27 + 32), v37 + 32, 0, 0.0)
            || !sub_125B60((unsigned __int8 *)(v28 + 64), v37 + 64, 0, 0.0) )
          {
            goto LABEL_36;
          }
LABEL_29:
          ++v21;
          v24 = v12[4];
          v22 = v21;
          if ( v21 >= v24 )
            goto LABEL_37;
        }
        if ( !(unsigned __int8)sub_11FD80((char *)(v27 + 32), &v39, 0) )
          goto LABEL_46;
        v40[0] = 0xFFFFFFFF00000000LL;
        v23 = *(_QWORD *)(a1 + 128);
        v40[1] = 0;
        if ( !(unsigned __int8)sub_11D020((__int64)v40, (_QWORD *)a1, v41, v23) )
        {
          if ( !under_debugger )
            sub_383060(0xC737u, 0.0);
          goto LABEL_57;
        }
        if ( sub_125B60((unsigned __int8 *)v40, v28 + 64, 0, 0.0) )
        {
          sub_11CDA0((__int64)v40);
          v37 = v28;
          goto LABEL_29;
        }
        sub_11CDA0((__int64)v40);
LABEL_46:
        v22 = 0;
LABEL_36:
        v24 = v12[4];
LABEL_37:
        if ( v24 == v22 )
          goto LABEL_44;
LABEL_38:
        if ( v42 )
        {
          *(_QWORD *)&v43 = 0;
          qfree(v42);
        }
        qfree(v41[0]);
LABEL_12:
        if ( (*v12 & 2) == 0 )
          break;
LABEL_9:
        if ( (_QWORD *)*v36 == v12 )
          goto LABEL_18;
      }
      v13 = (_QWORD *)v12[2];
      if ( (*(_BYTE *)v13 & 2) == 0 )
      {
        do
        {
          v12 = v13;
          v13 = (_QWORD *)v13[1];
        }
        while ( (*(_BYTE *)v13 & 2) == 0 );
        goto LABEL_9;
      }
      v14 = (_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFFCLL);
      v15 = *v14;
      if ( (*v14 & 2) != 0 )
      {
LABEL_41:
        v12 = v14;
        goto LABEL_9;
      }
      while ( 1 )
      {
        if ( (_QWORD *)v14[2] != v12 )
          goto LABEL_41;
        v12 = v14;
        v16 = v15 & 0xFFFFFFFFFFFFFFFCLL;
        v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v15 & 2) != 0 )
          break;
        v14 = (_QWORD *)v16;
      }
      v12 = (_QWORD *)v16;
    }
    while ( *v36 != v16 );
LABEL_18:
    if ( v35 >= *(_DWORD *)(a1 + 64) )
      sub_1346B0(a3);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + v33) + 24LL) |= 0x20u;
LABEL_20:
    ++v35;
    v17 = *(_DWORD *)(a1 + 64);
    if ( (int)v17 > (int)v35 )
    {
      v33 += 8;
      if ( v35 >= v17 )
        sub_1346B0(a3);
      continue;
    }
    break;
  }
  if ( v34 > 0 )
    sub_66FA0(a1, 1);
LABEL_49:
  sub_104E10(v32, a3);
  return (unsigned int)v34;
}

