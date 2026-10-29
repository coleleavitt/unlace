__int64 __fastcall sub_173BD0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int128 v5; // rdi
  _QWORD *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // rdi
  unsigned int v16; // r12d
  __int64 v18; // rax
  __int64 *v19; // r15
  char v20; // dl
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // dl
  char v25; // r15
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // rdi
  char v29; // al
  __int64 v30; // rdi
  char v31; // al
  __int64 v32[2]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v34; // [rsp+18h] [rbp-B0h]
  __int64 v35[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v36; // [rsp+40h] [rbp-88h] BYREF
  __int128 v37; // [rsp+48h] [rbp-80h]
  _QWORD v38[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v39; // [rsp+70h] [rbp-58h] BYREF
  __int64 v40; // [rsp+78h] [rbp-50h]
  unsigned __int64 v41; // [rsp+88h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 8 || a4 )
    return 0;
  *(_QWORD *)&v5 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v5 + 1) = v32;
  v32[0] = 0;
  v32[1] = 0;
  v33 = 0;
  v34 = 0;
  sub_1238E0(v5, a2, 0, 0xFFFF0000);
  v8 = *(_QWORD **)(a1 + 56);
  if ( !(unsigned __int8)sub_64180(v32, v8) && !(unsigned __int8)sub_318830(&v33, v8 + 2) )
  {
    *(_BYTE *)(a1 + 40) = 1;
LABEL_16:
    v16 = 0;
    goto LABEL_9;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL);
  v14 = *(_QWORD *)(v13 + 112);
  if ( !*(_BYTE *)(a1 + 68) || !(unsigned __int8)sub_11DD00(*(int ***)(a1 + 32), nullptr, nullptr, 0) )
  {
    v15 = *(_QWORD *)(a1 + 48);
    if ( *(_BYTE *)a2 == 4 )
    {
      if ( !sub_1255D0((unsigned __int8 *)v15, v14, *(unsigned int **)(a2 + 8), 0) )
        goto LABEL_16;
      *(_BYTE *)(a1 + 40) = 1;
      v18 = *(_QWORD *)(a1 + 48);
LABEL_21:
      if ( *(_DWORD *)(v18 + 68) >= *(_DWORD *)(a2 + 4) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2);
        ++*(_DWORD *)(a1 + 64);
        goto LABEL_16;
      }
      goto LABEL_8;
    }
    if ( *(_DWORD *)v15 == 4 )
    {
      if ( (*(_BYTE *)(a2 + 1) & 4) == 0 && (*(_BYTE *)(v15 + 33) & 4) == 0 )
        goto LABEL_25;
    }
    else if ( *(_DWORD *)v15 != 67 || *(_DWORD *)(v15 + 68) != *(_DWORD *)(v15 + 36) )
    {
      goto LABEL_8;
    }
    if ( !sub_1255A0((unsigned __int8 *)(v15 + 32), a2, 0) )
      goto LABEL_8;
LABEL_25:
    v19 = *(__int64 **)(a1 + 56);
    sub_64040(v32, v19, v9, v10, v11, v12);
    sub_318020(&v33, v19 + 2);
    if ( (unsigned __int8)sub_64280(v32) && !(_QWORD)v34 )
    {
      v18 = *(_QWORD *)(a1 + 48);
      if ( *(_DWORD *)v18 == 4 )
      {
        v20 = sub_125010((unsigned __int8 *)a2, v14, v18 + 32, 1u);
        v18 = *(_QWORD *)(a1 + 48);
        if ( !v20 )
        {
          v24 = *(_BYTE *)(v18 + 32);
          if ( v24 == 14 )
            goto LABEL_8;
          if ( v24 == 4 )
            goto LABEL_8;
          if ( (*(_BYTE *)(v18 + 4) & 0x10) != 0 )
            goto LABEL_8;
          if ( !(unsigned __int8)sub_1215F0(v18 + 32, (char *)a2, v35, v21, v22, v23) )
            goto LABEL_8;
          v25 = sub_11C690((unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 32LL), v13);
          v26 = sub_11C690((unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 64LL), v13);
          v27 = *(_QWORD *)(a1 + 48);
          if ( v25 != v26 )
          {
            LODWORD(v35[0]) = *(_DWORD *)(v27 + 68) - LODWORD(v35[0]) - *(_DWORD *)(a2 + 4);
            if ( SLODWORD(v35[0]) < 0 )
              goto LABEL_8;
          }
          sub_123480((__int64)v38, (unsigned __int8 *)(v27 + 64));
          if ( !(unsigned __int8)sub_126950((unsigned __int64)v38, v14, v35[0]) )
          {
            sub_11C7E0((__int64)v38);
            goto LABEL_8;
          }
          sub_11C7E0((__int64)v38);
          v18 = *(_QWORD *)(a1 + 48);
        }
      }
      goto LABEL_21;
    }
    v16 = 1;
    if ( *(_BYTE *)a2 != 14 )
      goto LABEL_9;
    v28 = *(_QWORD *)(a1 + 16);
    v35[0] = 0;
    v35[1] = 0;
    v36 = 0;
    v37 = 0;
    sub_128920(v28, v35, (unsigned __int8 *)a2, 0x4001u);
    if ( !(unsigned __int8)sub_64280(v35) || (_QWORD)v37 )
    {
      sub_127460((__int64)v38, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 48), 0);
      v29 = sub_64180(v35, v38);
      v30 = v39;
      if ( v29 || (v31 = sub_318830(&v36, &v39), v30 = v39, v31) )
      {
        if ( v30 )
        {
          v40 = 0;
          qfree();
        }
        v16 = 1;
        qfree();
        goto LABEL_44;
      }
      if ( v39 )
      {
        v40 = 0;
        qfree();
      }
      qfree();
    }
    v16 = 0;
LABEL_44:
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree();
    }
    qfree();
    goto LABEL_9;
  }
LABEL_8:
  v16 = 1;
LABEL_9:
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree();
  }
  qfree();
  return v16;
}

