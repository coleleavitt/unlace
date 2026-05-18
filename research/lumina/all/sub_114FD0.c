__int64 __fastcall sub_114FD0(__int64 a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v4; // r14
  __int64 v5; // rdx
  unsigned int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int16 v9; // bp
  int v10; // eax
  __int64 v11; // rdx
  __int64 *v12; // rax
  _BOOL4 v13; // ecx
  __int64 *v14; // r15
  __int64 v15; // rdx
  __int64 *v16; // rdi
  char v17; // cl
  __int64 v18; // rax
  __int64 v19; // rbp
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  int v22; // eax
  _DWORD *v23; // rcx
  char *v24; // rsi
  unsigned int v25; // edx
  unsigned int v26; // eax
  _BYTE *v27; // rcx
  _BYTE *v28; // rsi
  __int16 v30; // ax
  __int64 v31; // rbp
  __int64 v32; // rax
  int v33; // eax
  _BYTE *v34; // rcx
  unsigned __int64 v35; // rdi
  _BYTE *v36; // r8
  unsigned __int64 v37; // rcx
  char v38; // di
  unsigned __int64 v39; // r9
  char v40; // dl
  __int64 v41; // rcx
  __int64 *v42; // [rsp+8h] [rbp-100h]
  int v43; // [rsp+8h] [rbp-100h]
  int v44; // [rsp+8h] [rbp-100h]
  unsigned __int16 v45; // [rsp+36h] [rbp-D2h] BYREF
  int v46; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v47; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v48; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v49; // [rsp+48h] [rbp-C0h] BYREF
  int v50; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+58h] [rbp-B0h]
  unsigned __int64 *v52; // [rsp+60h] [rbp-A8h]
  unsigned __int16 *v53; // [rsp+68h] [rbp-A0h]
  __int64 v54; // [rsp+70h] [rbp-98h]
  int v55; // [rsp+A0h] [rbp-68h]
  int v56; // [rsp+BBh] [rbp-4Dh] BYREF
  _BYTE v57[73]; // [rsp+BFh] [rbp-49h] BYREF

  v2 = nullptr;
  v4 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)&v57[9] = __readfsqword(0x28u);
LABEL_2:
  if ( *(int *)(v4 + 20) < 0 )
    goto LABEL_27;
  do
  {
    do
    {
      if ( !*(_BYTE *)(v4 + 12) )
      {
        v5 = (unsigned int)(3 * *(_DWORD *)(v4 + 20));
        if ( (int)v5 <= 2 * *(_DWORD *)(*(_QWORD *)(a1 + 32) + 56LL) )
          goto LABEL_28;
        v6 = *(char *)(a1 + 84);
        if ( !*(_BYTE *)(a1 + 84) )
          goto LABEL_43;
LABEL_6:
        v7 = (int)(v6 - 1);
        v8 = *(_QWORD *)(a1 + 8 * v7 + 144);
        v9 = *(_WORD *)(a1 + 2 * v7 + 88);
        v10 = sub_10D290(*(_QWORD *)(v8 + 112), a2);
        if ( v10 || *(int *)(v8 + 20) < 0 && (v10 = sub_E9270(v8)) != 0 )
        {
          *(_BYTE *)(v4 + 12) = 0;
          if ( !v4 )
          {
            v40 = *(_BYTE *)(a1 + 84) - 1;
            *(_BYTE *)(a1 + 84) = v40;
            v5 = *(_QWORD *)(a1 + 8LL * v40 + 144);
            *(_QWORD *)(a1 + 136) = v5;
LABEL_14:
            v6 = v10;
            goto LABEL_43;
          }
        }
        else
        {
          if ( *(_BYTE *)(v4 + 2)
            && *(_BYTE *)(v4 + 12) == 1
            && (v30 = *(_WORD *)(v4 + 28), v30 == *(_WORD *)(v4 + 24))
            && *(_DWORD *)(v8 + 4) != 1
            && v9 == *(_WORD *)(v8 + 24) )
          {
            if ( v30 )
            {
              v31 = *(_QWORD *)(v4 + 72);
              a2 = (__int64)&v48;
              v46 = sub_110FD0(v31, (__int64)&v48, &v47, 0, 0);
              if ( !v46 )
              {
                v49 = *(_QWORD *)(v4 + 40);
                v45 = (*(__int64 (__fastcall **)(__int64))(v4 + 120))(v4);
                sub_E8FB0(v48, 13);
                a2 = 0;
                v50 = 1;
                v51 = v4;
                v52 = &v49;
                v53 = &v45;
                v32 = *(_QWORD *)(v4 + 88);
                v55 = 2;
                v54 = v32;
                v33 = sub_E9EE0((__int64)&v50, 0, 1, v48);
                v46 = v33;
                if ( !v33 )
                {
                  *(_DWORD *)(v48 + 20) = *(_DWORD *)(v31 + 56) + -2 - v45 - *(unsigned __int16 *)(v48 + 18);
                  if ( *(_BYTE *)(v31 + 33) )
                  {
                    sub_111970(v31, v47, 5, *(_DWORD *)(v8 + 4), &v46);
                    if ( *(_WORD *)(v48 + 16) < v45 )
                      sub_111B10(v48, (unsigned __int64 *)(v48 + 88), v49, &v46);
                    v33 = v46;
                  }
                  v34 = (_BYTE *)(*(_QWORD *)(v4 + 80)
                                + (unsigned __int16)(*(_WORD *)(v4 + 26)
                                                   & __ROL2__(
                                                       *(_WORD *)(*(_QWORD *)(v4 + 96)
                                                                + 2 * *(unsigned __int16 *)(v4 + 24)
                                                                - 2),
                                                       8)));
                  v35 = (unsigned __int64)(v34 + 9);
                  while ( 1 )
                  {
                    v49 = (unsigned __int64)(v34 + 1);
                    if ( ((v35 > (unsigned __int64)(v34 + 1)) & (*v34 >> 7)) == 0 )
                      break;
                    ++v34;
                  }
                  v36 = v34 + 10;
                  v37 = (unsigned __int64)(v34 + 2);
                  a2 = (__int64)v57;
                  do
                  {
                    v49 = v37;
                    v38 = *(_BYTE *)(v37 - 1);
                    ++a2;
                    v39 = v37++;
                    *(_BYTE *)(a2 - 1) = v38;
                  }
                  while ( v38 < 0 && (unsigned __int64)v36 > v39 );
                  if ( !v33 )
                  {
                    v41 = a2;
                    a2 = *(unsigned __int16 *)(v8 + 24);
                    sub_112FD0(v8, a2, &v56, v41 - (_QWORD)&v56, nullptr, *(_DWORD *)(v4 + 4), &v46);
                  }
                  *(_DWORD *)(*(_QWORD *)(v8 + 80) + *(unsigned __int8 *)(v8 + 9) + 8LL) = _byteswap_ulong(v47);
                }
                if ( v48 )
                  sub_C36A0(*(_QWORD *)(v48 + 112));
              }
              v10 = v46;
            }
            else
            {
              a2 = (__int64)"%s at line %d of [%.10s]";
              sub_E8BB0(
                0xBu,
                "%s at line %d of [%.10s]",
                "database corruption",
                74338,
                "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
              v10 = 11;
            }
          }
          else
          {
            v12 = sub_D2D70(*(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL), a2, v11);
            v13 = v6 == 1;
            a2 = v9;
            v42 = v12;
            v14 = v12;
            v10 = sub_113350(v8, v9, (__int64)v12, v13, *(_BYTE *)(a1 + 3) & 1);
            if ( v2 )
            {
              v16 = v2;
              v43 = v10;
              v2 = v14;
              sub_CBC10(v16, v9, v15);
              v10 = v43;
            }
            else
            {
              v2 = v42;
            }
          }
          *(_BYTE *)(v4 + 12) = 0;
          if ( !v4 )
            goto LABEL_13;
        }
        v44 = v10;
        sub_C36A0(*(_QWORD *)(v4 + 112));
        v10 = v44;
LABEL_13:
        v17 = *(_BYTE *)(a1 + 84);
        *(_BYTE *)(a1 + 84) = v17 - 1;
        v5 = (char)(v17 - 1);
        v4 = *(_QWORD *)(a1 + 8 * v5 + 144);
        *(_QWORD *)(a1 + 136) = v4;
        if ( v10 )
          goto LABEL_14;
        goto LABEL_2;
      }
      v6 = *(char *)(a1 + 84);
      if ( *(_BYTE *)(a1 + 84) )
        goto LABEL_6;
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      if ( v18 )
      {
        while ( 1 )
        {
          if ( v18 != a1 && !*(_BYTE *)v18 )
          {
            a2 = *(_QWORD *)(a1 + 136);
            if ( *(_QWORD *)(v18 + 136) == a2 )
              break;
          }
          v18 = *(_QWORD *)(v18 + 40);
          if ( !v18 )
            goto LABEL_21;
        }
        a2 = (__int64)"%s at line %d of [%.10s]";
        sub_E8BB0(
          0xBu,
          "%s at line %d of [%.10s]",
          "database corruption",
          75427,
          "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
        v6 = 11;
        goto LABEL_43;
      }
LABEL_21:
      v49 = 0;
      LODWORD(v48) = 0;
      v19 = *(_QWORD *)(v4 + 72);
      v47 = sub_10D290(*(_QWORD *)(v4 + 112), a2);
      if ( v47 )
      {
        v20 = v49;
        goto LABEL_23;
      }
      a2 = (__int64)&v49;
      v47 = sub_110FD0(v19, (__int64)&v49, (unsigned __int32 *)&v48, *(_DWORD *)(v4 + 4), 0);
      v20 = v49;
      if ( v47 )
      {
        if ( !*(_BYTE *)(v19 + 33) )
          goto LABEL_23;
LABEL_31:
        sub_111970(v19, v48, 5, *(_DWORD *)(v4 + 4), (int *)&v47);
        goto LABEL_32;
      }
      sub_111D20(v4, v49, &v47);
      if ( *(_BYTE *)(v19 + 33) )
        goto LABEL_31;
LABEL_32:
      a2 = v47;
      v20 = v49;
      if ( !v47 )
      {
        v22 = *(unsigned __int8 *)(v4 + 12);
        v23 = (_DWORD *)(v49 + 28);
        v24 = (char *)(v4 + 28);
        v25 = 2 * v22;
        if ( (unsigned int)(2 * v22) >= 8 )
        {
          *(_QWORD *)(v49 + 28) = *(_QWORD *)(v4 + 28);
          *(_QWORD *)((char *)v23 + v25 - 8) = *(_QWORD *)&v24[v25 - 8];
          qmemcpy(
            (void *)((v20 + 36) & 0xFFFFFFFFFFFFFFF8LL),
            (const void *)(v24 - ((char *)v23 - ((v20 + 36) & 0xFFFFFFFFFFFFFFF8LL))),
            8LL * ((v25 + (_DWORD)v23 - (((_DWORD)v20 + 36) & 0xFFFFFFF8)) >> 3));
LABEL_37:
          v22 = *(unsigned __int8 *)(v4 + 12);
        }
        else if ( (v25 & 4) != 0 )
        {
          *v23 = *(_DWORD *)v24;
          *(_DWORD *)((char *)v23 + v25 - 4) = *(_DWORD *)&v24[v25 - 4];
          v22 = *(unsigned __int8 *)(v4 + 12);
        }
        else if ( v25 )
        {
          *(_BYTE *)v23 = *v24;
          if ( (v25 & 2) == 0 )
            goto LABEL_37;
          *(_WORD *)((char *)v23 + v25 - 2) = *(_WORD *)&v24[v25 - 2];
          v22 = *(unsigned __int8 *)(v4 + 12);
        }
        v26 = 8 * v22;
        v27 = (_BYTE *)(v20 + 40);
        v28 = (_BYTE *)(v4 + 40);
        if ( v26 >= 8 )
        {
          *(_QWORD *)(v20 + 40) = *(_QWORD *)(v4 + 40);
          *(_QWORD *)&v27[v26 - 8] = *(_QWORD *)&v28[v26 - 8];
          qmemcpy(
            (void *)((v20 + 48) & 0xFFFFFFFFFFFFFFF8LL),
            (const void *)(v28 - &v27[-((v20 + 48) & 0xFFFFFFFFFFFFFFF8LL)]),
            8LL * ((v26 + (_DWORD)v27 - (((_DWORD)v20 + 48) & 0xFFFFFFF8)) >> 3));
        }
        else if ( v26 )
        {
          *v27 = *v28;
        }
        *(_BYTE *)(v20 + 12) = *(_BYTE *)(v4 + 12);
        a2 = **(_BYTE **)(v20 + 80) & 0xF7;
        sub_E8FB0(v4, a2);
        *(_DWORD *)(*(_QWORD *)(v4 + 80) + *(unsigned __int8 *)(v4 + 9) + 8LL) = _byteswap_ulong(v48);
        v21 = v49;
        *(_QWORD *)(a1 + 152) = v49;
        goto LABEL_26;
      }
LABEL_23:
      *(_QWORD *)(a1 + 152) = 0;
      if ( !v20 )
      {
        v6 = v47;
        goto LABEL_43;
      }
      sub_C36A0(*(_QWORD *)(v20 + 112));
      v6 = v47;
      if ( v47 )
        goto LABEL_43;
      v21 = *(_QWORD *)(a1 + 152);
LABEL_26:
      *(_QWORD *)(a1 + 144) = v4;
      v4 = v21;
      *(_BYTE *)(a1 + 84) = 1;
      *(_DWORD *)(a1 + 86) = 0;
      *(_QWORD *)(a1 + 136) = v21;
    }
    while ( *(int *)(v21 + 20) >= 0 );
LABEL_27:
    ;
  }
  while ( !(unsigned int)sub_E9270(v4) );
LABEL_28:
  v6 = 0;
LABEL_43:
  if ( v2 )
    sub_CBC10(v2, a2, v5);
  return v6;
}
