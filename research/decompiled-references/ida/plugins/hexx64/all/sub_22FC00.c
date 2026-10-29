__int64 __fastcall sub_22FC00(__int64 a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rcx
  _BYTE *v7; // rax
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 *v11; // rdx
  __int64 v12; // r15
  __int64 *v13; // rbp
  _BYTE *v14; // rdi
  __int64 v15; // rax
  _DWORD *v16; // rcx
  _DWORD *v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r10
  __int64 v22; // r13
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdi
  unsigned __int64 v27; // r10
  __int64 v28; // r11
  int v29; // edx
  int v30; // r14d
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _DWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rax
  __int64 v42; // rdi
  char v43; // al
  bool v44; // al
  __int64 v45; // [rsp+8h] [rbp-70h]
  __int64 v46; // [rsp+8h] [rbp-70h]
  __int64 v47; // [rsp+8h] [rbp-70h]
  __int64 v48; // [rsp+10h] [rbp-68h]
  __int64 v49; // [rsp+10h] [rbp-68h]
  _DWORD *v50; // [rsp+10h] [rbp-68h]
  __int64 v51; // [rsp+10h] [rbp-68h]
  __int64 v52; // [rsp+10h] [rbp-68h]
  __int64 v53; // [rsp+10h] [rbp-68h]
  __int64 v54; // [rsp+18h] [rbp-60h]
  __int64 v55; // [rsp+18h] [rbp-60h]
  __int64 v56; // [rsp+18h] [rbp-60h]
  __int64 v57; // [rsp+18h] [rbp-60h]
  __int64 v58; // [rsp+18h] [rbp-60h]
  __int64 v59; // [rsp+18h] [rbp-60h]
  __int64 v60; // [rsp+20h] [rbp-58h]
  __int64 v61; // [rsp+20h] [rbp-58h]
  __int64 v62; // [rsp+20h] [rbp-58h]
  __int64 v63; // [rsp+20h] [rbp-58h]
  unsigned int v64; // [rsp+2Ch] [rbp-4Ch]
  __int64 v65[9]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 280);
  v65[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 272);
  v4 = v3 + 40 * v2;
  if ( v4 != v3 )
  {
    v64 = 0;
    v5 = a1;
    while ( 1 )
    {
      v6 = *(_QWORD *)(v3 + 16);
      if ( (unsigned int)(*(_DWORD *)v6 - 12) > 1
        || *(_BYTE *)(v6 + 32) != 10
        || (v7 = *(_BYTE **)(v6 + 40), *v7 != 5)
        || v7 != *(_BYTE **)(v3 + 24) )
      {
LABEL_5:
        if ( !under_debugger )
          sub_383060(0xCC89u, a2);
        goto LABEL_81;
      }
      v60 = v5;
      v54 = v4;
      v48 = *(_QWORD *)(v3 + 16);
      v8 = sub_11FD80((char *)(v6 + 48), v65, 0);
      v9 = v48;
      v4 = v54;
      v5 = v60;
      if ( !v8 )
      {
        v14 = *(_BYTE **)(v3 + 8);
        v55 = v60;
        v49 = v4;
        if ( (_BYTE *)v9 == v14 )
          goto LABEL_5;
        v61 = v9;
        v15 = sub_B0420(v14, v9);
        v16 = (_DWORD *)v61;
        v17 = (_DWORD *)v15;
        if ( !v15 )
          sub_226E60(a2);
        if ( *(_BYTE *)(v15 + 32) != 4 )
          goto LABEL_5;
        if ( v61 != *(_QWORD *)(v15 + 40) )
          goto LABEL_5;
        if ( (unsigned int)(*(_DWORD *)v15 - 12) > 1 )
          goto LABEL_5;
        v62 = v55;
        v56 = v49;
        v50 = v16;
        if ( !(unsigned __int8)sub_11FD80((char *)(v15 + 48), v65, 0) )
          goto LABEL_5;
        v4 = v56;
        v5 = v62;
        if ( *v50 == 13 )
        {
          if ( *v17 == 12 )
            goto LABEL_5;
          v9 = (__int64)v17;
LABEL_11:
          v10 = -v65[0];
          goto LABEL_12;
        }
        v9 = (__int64)v17;
      }
      v10 = v65[0];
      if ( *(_DWORD *)v9 != 12 )
        goto LABEL_11;
LABEL_12:
      v11 = **(__int64 ***)(v5 + 64);
      if ( !v11 )
        goto LABEL_15;
      v12 = 24;
      v13 = (__int64 *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v13 )
      {
        if ( (*(_BYTE *)(*v11 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_15;
        v40 = *(_QWORD *)(v3 + 24);
        v41 = v13[3];
        v12 = (__int64)(v13 + 3);
        if ( v40 < v41 )
        {
LABEL_59:
          v13 = (__int64 *)v13[1];
          goto LABEL_60;
        }
        while ( v41 < v40 )
        {
          v13 = (__int64 *)v13[2];
LABEL_60:
          if ( (*(_BYTE *)v13 & 2) != 0 )
            goto LABEL_15;
          v41 = v13[3];
          v12 = (__int64)(v13 + 3);
          if ( v40 < v41 )
            goto LABEL_59;
        }
        if ( v13 == v11 )
        {
LABEL_15:
          if ( !under_debugger )
            sub_383060(0xCC8Au, a2);
          goto LABEL_81;
        }
      }
      v18 = *(_QWORD *)(v12 + 8);
      v19 = *(int *)(v12 + 24);
      if ( *(_QWORD *)(v18 + 440) < v19 )
      {
        if ( !under_debugger )
          sub_383060(0xC83Au, a2);
        goto LABEL_81;
      }
      v20 = *(_QWORD *)(v12 + 16) + v10;
      v21 = *(_QWORD *)(v18 + 432) + 104 * v19;
      if ( *(_DWORD *)v21 == 1 )
        v22 = *(_QWORD *)(v21 + 8);
      else
        v22 = -1;
      v23 = v20 + v22;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL) + 24LL) != 8 )
        v23 = (int)v23;
      if ( v23 < 0 )
        goto LABEL_56;
      if ( v20 < 0 )
        v22 = 0;
      v24 = *(_QWORD *)(v3 + 16);
      if ( *(_BYTE *)(v24 + 48) == 4
        && (v42 = *(_QWORD *)(v24 + 56), *(_DWORD *)v42 == 14)
        && (v63 = v5,
            v57 = v4,
            v51 = v21,
            v45 = v9,
            v43 = sub_11FD80((char *)(v42 + 32), v65, 1),
            v9 = v45,
            v21 = v51,
            v4 = v57,
            v5 = v63,
            v43) )
      {
        v25 = v65[0];
      }
      else
      {
        v25 = 1;
      }
      if ( v20 <= *(int *)(v21 + 88) && v20 >= -v25 )
        goto LABEL_56;
      v26 = *(_QWORD *)(v5 + 8);
      if ( v23 < *(_QWORD *)(v26 + 128) )
      {
        v52 = v5;
        v46 = v4;
        v58 = v9;
        v44 = sub_317040(
                (unsigned __int64 **)(v26 + 848),
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 1496) + 24LL) + 16LL) & (v23 + *(_QWORD *)(v26 + 1440)));
        v4 = v46;
        v5 = v52;
        if ( !v44 )
          goto LABEL_56;
        v26 = *(_QWORD *)(v52 + 8);
        v9 = v58;
      }
      v27 = *(_QWORD *)(v26 + 440);
      if ( !v27 )
        goto LABEL_56;
      v28 = *(_QWORD *)(v26 + 432);
      v29 = 0;
      v30 = -1;
      v31 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v32 = v28 + 104 * v31;
          if ( *(_DWORD *)v32 == 1 )
          {
            v33 = *(_QWORD *)(v32 + 8);
            if ( v23 >= v33 && v33 != -1 && v33 >= v22 )
              break;
          }
          v31 = ++v29;
          if ( v29 >= v27 )
            goto LABEL_47;
        }
        v30 = v29;
        if ( v23 == v33 )
          break;
        ++v29;
        v22 = v33;
        v31 = v29;
        if ( v29 >= v27 )
        {
LABEL_47:
          if ( v30 != -1 )
            goto LABEL_48;
          goto LABEL_56;
        }
      }
      v22 = v23;
LABEL_48:
      if ( *(_DWORD *)(v12 + 24) != v30 )
      {
        v34 = (_DWORD *)(v28 + 104LL * v30);
        if ( *v34 == 1 )
        {
          v35 = (int)v34[22];
          if ( v35 && v23 >= (unsigned __int64)v22 && v35 + v22 - 1 >= (unsigned __int64)v23 )
          {
            *(_DWORD *)(v12 + 24) = v30;
            *(_QWORD *)(v12 + 16) = v23 - v22;
          }
          else
          {
            v59 = v4;
            v53 = v9;
            v47 = v5;
            sub_1FE390(*(unsigned __int64 ***)(v5 + 64), v13);
            v5 = v47;
            v9 = v53;
            v4 = v59;
          }
          a2 = 0.0;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 8LL) = v23;
          *(_OWORD *)(*(_QWORD *)(v9 + 56) + 16LL) = 0;
          **(_DWORD **)(v5 + 8) &= ~0x10000u;
          v36 = *(_QWORD *)(v5 + 8);
          v37 = *(unsigned int *)(v3 + 32);
          if ( (unsigned int)v37 >= *(_DWORD *)(v36 + 64) )
            sub_226E40(0.0);
          ++v64;
          v38 = *(_QWORD *)(*(_QWORD *)(v36 + 528) + 8 * v37);
          *(_DWORD *)(v38 + 24) |= 0x80u;
          goto LABEL_56;
        }
        if ( !under_debugger )
          sub_383060(0xCD6Bu, a2);
LABEL_81:
        BUG();
      }
LABEL_56:
      v3 += 40;
      if ( v4 == v3 )
        return v64;
    }
  }
  return 0;
}

