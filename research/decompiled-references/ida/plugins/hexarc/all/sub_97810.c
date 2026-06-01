__int64 __fastcall sub_97810(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  int *v5; // rax
  __int64 v6; // r13
  unsigned int v7; // r15d
  int v9; // eax
  _DWORD *v10; // r8
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  char v17; // al
  __int64 v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // rcx
  _DWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // eax
  int v29; // eax
  __int64 v30; // r13
  __int64 v31; // rsi
  int v32; // eax
  unsigned int v33; // r15d
  __int64 v34; // rax
  __int64 v35; // [rsp+8h] [rbp-118h]
  __int64 v36; // [rsp+10h] [rbp-110h]
  __int64 v37; // [rsp+18h] [rbp-108h]
  char v38; // [rsp+28h] [rbp-F8h]
  __int64 v39; // [rsp+30h] [rbp-F0h]
  __int64 v40; // [rsp+38h] [rbp-E8h]
  __int64 v41; // [rsp+38h] [rbp-E8h]
  __int64 v42; // [rsp+40h] [rbp-E0h]
  __int64 v43; // [rsp+58h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+68h] [rbp-B8h] BYREF
  _QWORD v46[2]; // [rsp+70h] [rbp-B0h] BYREF
  _BYTE v47[16]; // [rsp+80h] [rbp-A0h] BYREF
  _QWORD v48[4]; // [rsp+90h] [rbp-90h] BYREF
  _QWORD v49[2]; // [rsp+B0h] [rbp-70h] BYREF
  _QWORD v50[2]; // [rsp+C0h] [rbp-60h] BYREF
  _QWORD v51[10]; // [rsp+D0h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v51[3] = __readfsqword(0x28u);
  v40 = v2;
  v4 = sub_116220(a2, &v43, 14);
  if ( v4 )
  {
    v44 = a2;
    v5 = (int *)sub_122D80(a1, v43, &v44, 0);
    v6 = (__int64)v5;
    if ( !v5 )
      return 0;
    v9 = *v5;
    if ( v9 != 13 )
    {
      v38 = 0;
      v42 = 0;
      LODWORD(v39) = 0;
      if ( v9 != 11 )
        goto LABEL_31;
LABEL_7:
      if ( *(_BYTE *)(v6 + 32) == 4 )
      {
        v10 = *(_DWORD **)(v6 + 40);
        if ( v10 )
        {
LABEL_9:
          if ( *v10 != 14 )
            return 0;
          v46[1] = 0;
          v46[0] = 0xFFFFFFFF00000000LL;
          if ( v4 || !v42 )
          {
            v12 = sub_12C220(a1, a2, v4, v44, (_DWORD)v10, (unsigned int)v48, (__int64)&v45, v38 == 0 ? 2 : 6);
            if ( !v12 )
              goto LABEL_17;
            if ( *(_BYTE *)v45 != 4 )
              goto LABEL_17;
            v21 = *(_DWORD **)(v45 + 8);
            if ( *v21 != 9 )
              goto LABEL_17;
            v45 = (__int64)(v21 + 8);
            sub_11EAC0(v46);
            if ( (unsigned __int8)sub_12A500(a1, v44, v45, a2, v48[0], 0) )
            {
              sub_150B30(a1, v44, v46, a2, v48[0], 4);
            }
            else
            {
              if ( *(_BYTE *)v48[0] != 4
                || !(unsigned __int8)sub_306570(v40, a1, a2, *(_QWORD *)(v48[0] + 8LL), v44, v45) )
              {
                goto LABEL_17;
              }
              sub_11A120(v46, v40, 8, *(_QWORD *)(a2 + 24), (unsigned int)(2 * *(_DWORD *)(v43 + 4)));
            }
          }
          else
          {
            v11 = sub_1161E0(v10, &v45);
            v12 = v11;
            if ( !v11
              || sub_323690(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL), *(unsigned int *)(a2 + 68), 1) >= 0
              || *(_BYTE *)v45 != 4
              || **(_DWORD **)(v45 + 8) != 9
              || (sub_11EAC0(v46),
                  v45 = *(_QWORD *)(v45 + 8) + 32LL,
                  !(unsigned __int8)sub_1283C0(v40, a1, v39, v42, v44, v45, 0)) )
            {
LABEL_17:
              v7 = 0;
LABEL_18:
              sub_1166E0(v46);
              return v7;
            }
          }
          v36 = v45;
          v35 = v44;
          v22 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
          v49[1] = 0;
          v50[1] = 0;
          v41 = v22;
          v49[0] = 0xFFFFFFFF00000000LL;
          v50[0] = 0xFFFFFFFF00000000LL;
          v51[0] = 0xFFFFFFFF00000000LL;
          v51[1] = 0;
          sub_329320(v48, -1);
          v37 = a2 + 64;
          sub_11EAC0(v51);
          v7 = sub_120850(v51, v41, (unsigned int)-*(_DWORD *)(a2 + 36));
          if ( (_BYTE)v7 )
          {
            v24 = *(_QWORD *)(a2 + 24);
            LODWORD(v48[0]) = 14;
            v48[3] = v24;
            sub_11EAC0(v49);
            v25 = HIDWORD(v46[0]);
            if ( v42 )
            {
              if ( *(_BYTE *)v12 == 2 && (v33 = *(_DWORD *)(v12 + 4), HIDWORD(v46[0]) == v33) )
              {
                v34 = sub_323690(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL), (unsigned int)((int)v33 / 2), 1);
                sub_11A350(v49, v41, v34, v33, -1, 0);
                v25 = HIDWORD(v46[0]);
                v26 = *(_QWORD *)(a2 + 24);
                v27 = 8;
              }
              else
              {
                v26 = *(_QWORD *)(a2 + 24);
                v27 = 8;
              }
            }
            else
            {
              v26 = *(_QWORD *)(a2 + 24);
              v27 = 9;
            }
            sub_11A120(v49, v41, v27, v26, v25);
            sub_11EAC0(v50);
            sub_11D380(v47, v37);
            LOBYTE(v28) = sub_8F340(a1, a2, (__int64)v48, v35, v12, v36, 1);
            v7 = v28;
            if ( (_BYTE)v28 )
            {
              sub_124490(v46, v41, HIDWORD(v46[0]), 2);
              if ( *(_QWORD *)(v6 + 8) )
              {
                sub_116EE0(v6);
                v29 = *(_DWORD *)(a1 + 24);
                BYTE1(v29) &= ~2u;
                LOBYTE(v29) = v29 | 0x80;
                *(_DWORD *)(a1 + 24) = v29;
              }
              sub_172A80(a1, a2);
              sub_8D550(a1, a2, (__int64)v48);
              if ( !(unsigned __int8)sub_11F4A0(v47, v37, 0) )
              {
                v30 = j__qalloc_or_throw();
                v31 = *(_QWORD *)(a2 + 24);
                *(_QWORD *)(v30 + 32) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v30 + 40) = 0;
                *(_QWORD *)(v30 + 48) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v30 + 56) = 0;
                *(_QWORD *)(v30 + 64) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v30 + 72) = 0;
                sub_329320(v30, v31);
                *(_DWORD *)v30 = 4;
                sub_116350(v30 + 32, v47);
                sub_116350(v30 + 64, v37);
                sub_9CAA0(a1, v30, a2);
              }
              sub_11ECE0(a2, v48);
              v32 = *(_DWORD *)(a1 + 24);
              BYTE1(v32) &= ~2u;
              LOBYTE(v32) = v32 | 0x80;
              *(_DWORD *)(a1 + 24) = v32;
              sub_116F10(a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
              sub_92C10(a1, a2);
            }
            sub_1166E0(v47);
          }
          sub_1166E0(v51);
          sub_1166E0(v50);
          sub_1166E0(v49);
          goto LABEL_18;
        }
      }
LABEL_31:
      v7 = sub_129B30(a1, a2, v43, v44, v6 + 64);
      if ( (_BYTE)v7 )
      {
        v10 = (_DWORD *)v6;
        goto LABEL_9;
      }
      if ( !v42 && *(_DWORD *)v6 == 12 )
      {
        v18 = sub_116220(v6, v48, 11);
        if ( v18 )
        {
          if ( *(_BYTE *)v48[0] == 4 )
            return (unsigned int)sub_97330(a1, a2, a2, (_DWORD *)v4, v44, *(_QWORD *)(v48[0] + 8LL), v44, v18, 0);
        }
      }
      return v7;
    }
    v38 = 0;
    v42 = v6 + 48;
    v39 = v44;
    v17 = sub_12A500(a1, v44, v6 + 48, a2, v4 + 32, 0);
    goto LABEL_28;
  }
  v13 = sub_116220(a2, &v43, 13);
  if ( v13 )
  {
    if ( *(_BYTE *)(v13 + 32) != 4 )
      goto LABEL_21;
    v4 = *(_QWORD *)(v13 + 40);
    if ( *(_DWORD *)v4 == 14 )
    {
      if ( v4 )
      {
        v38 = 0;
        v42 = v13 + 48;
        goto LABEL_44;
      }
    }
    else if ( *(_DWORD *)v4 == 5 && *(_BYTE *)(v13 + 48) == 4 )
    {
      v19 = *(_DWORD **)(v13 + 56);
      if ( *v19 == 14 )
      {
        if ( v19 )
        {
          v20 = v4 + 32;
          v38 = 1;
          v4 = (__int64)v19;
          v42 = v20;
LABEL_44:
          v44 = a2;
          v6 = sub_122D80(a1, v43, &v44, 0);
          if ( !v6 )
            return 0;
          v39 = a2;
          v17 = sub_12A500(a1, a2, v42, a2, v4 + 32, 0);
LABEL_28:
          if ( !v17
            && !(unsigned __int8)sub_12A500(a1, v39, v42, a2, v4 + 48, 0)
            && (*(_BYTE *)(v4 + 32) != 4 || !(unsigned __int8)sub_306570(v40, a1, a2, *(_QWORD *)(v4 + 40), v39, v42))
            && (*(_BYTE *)(v4 + 48) != 4 || !(unsigned __int8)sub_306570(v40, a1, a2, *(_QWORD *)(v4 + 56), v39, v42)) )
          {
            return 0;
          }
          goto LABEL_29;
        }
      }
    }
  }
  else
  {
    v23 = sub_116220(a2, &v43, 5);
    if ( v23 )
    {
      v42 = v23 + 32;
      if ( (unsigned __int8)sub_123310(a1, a2, v23 + 32, 0) )
      {
        v44 = a2;
        v6 = sub_122D80(a1, v43, &v44, 0);
        if ( !v6 )
          return 0;
        LODWORD(v39) = a2;
        v38 = 0;
LABEL_29:
        if ( v42 == v6 + 48 )
        {
          v6 = sub_122D80(a1, v6 + 32, &v44, 0);
          if ( !v6 )
            return 0;
        }
        if ( *(_DWORD *)v6 != 11 )
          goto LABEL_31;
        goto LABEL_7;
      }
    }
  }
LABEL_21:
  v14 = sub_116220(a2, v48, 11);
  if ( !v14 )
    return 0;
  v7 = 0;
  if ( *(_BYTE *)v48[0] == 4 )
  {
    v15 = *(_QWORD *)(v48[0] + 8LL);
    if ( *(_DWORD *)v15 == 12 && *(_BYTE *)(v15 + 32) == 4 && *(_BYTE *)(v15 + 48) == 4 )
      return (unsigned int)sub_97330(a1, a2, a2, *(_DWORD **)(v15 + 40), a2, *(_QWORD *)(v15 + 56), a2, v14, 0);
  }
  return v7;
}

