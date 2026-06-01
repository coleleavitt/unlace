__int64 __fastcall sub_22BF80(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rcx
  _BYTE *v6; // rax
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 *v11; // rdx
  __int64 v12; // r15
  __int64 *v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  _DWORD *v18; // rcx
  _DWORD *v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r10
  __int64 v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdi
  unsigned __int64 v29; // r10
  __int64 v30; // r11
  int v31; // edx
  int v32; // r14d
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _DWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rax
  __int64 v44; // rdi
  char v45; // al
  char v46; // al
  __int64 v47; // [rsp+8h] [rbp-70h]
  __int64 v48; // [rsp+8h] [rbp-70h]
  __int64 v49; // [rsp+8h] [rbp-70h]
  __int64 v50; // [rsp+10h] [rbp-68h]
  __int64 v51; // [rsp+10h] [rbp-68h]
  _DWORD *v52; // [rsp+10h] [rbp-68h]
  __int64 v53; // [rsp+10h] [rbp-68h]
  __int64 v54; // [rsp+10h] [rbp-68h]
  __int64 v55; // [rsp+10h] [rbp-68h]
  __int64 v56; // [rsp+18h] [rbp-60h]
  __int64 v57; // [rsp+18h] [rbp-60h]
  __int64 v58; // [rsp+18h] [rbp-60h]
  __int64 v59; // [rsp+18h] [rbp-60h]
  __int64 v60; // [rsp+18h] [rbp-60h]
  __int64 v61; // [rsp+18h] [rbp-60h]
  __int64 v62; // [rsp+20h] [rbp-58h]
  __int64 v63; // [rsp+20h] [rbp-58h]
  __int64 v64; // [rsp+20h] [rbp-58h]
  __int64 v65; // [rsp+20h] [rbp-58h]
  unsigned int v66; // [rsp+2Ch] [rbp-4Ch]
  _QWORD v67[9]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 280);
  v67[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 272);
  v3 = v2 + 40 * v1;
  if ( v3 != v2 )
  {
    v66 = 0;
    v4 = a1;
    while ( 1 )
    {
      v5 = *(_QWORD *)(v2 + 16);
      if ( (unsigned int)(*(_DWORD *)v5 - 12) > 1
        || *(_BYTE *)(v5 + 32) != 10
        || (v6 = *(_BYTE **)(v5 + 40), *v6 != 5)
        || v6 != *(_BYTE **)(v2 + 24) )
      {
LABEL_5:
        if ( !under_debugger )
          sub_37EEE0(52361);
        goto LABEL_81;
      }
      v62 = v4;
      v56 = v3;
      v50 = *(_QWORD *)(v2 + 16);
      v7 = sub_11C340((char *)(v5 + 48), v67, 0);
      v9 = v50;
      v3 = v56;
      v4 = v62;
      if ( !v7 )
      {
        v14 = *(_QWORD *)(v2 + 8);
        v57 = v62;
        v51 = v3;
        if ( v9 == v14 )
          goto LABEL_5;
        v15 = v9;
        v63 = v9;
        v16 = sub_AC9E0(v14, v9, v8, v9, v4, v3);
        v18 = (_DWORD *)v63;
        v19 = (_DWORD *)v16;
        if ( !v16 )
          sub_2231E0(v14, v15, v17, v63, v57, v51);
        if ( *(_BYTE *)(v16 + 32) != 4 )
          goto LABEL_5;
        if ( v63 != *(_QWORD *)(v16 + 40) )
          goto LABEL_5;
        if ( (unsigned int)(*(_DWORD *)v16 - 12) > 1 )
          goto LABEL_5;
        v64 = v57;
        v58 = v51;
        v52 = v18;
        if ( !(unsigned __int8)sub_11C340((char *)(v16 + 48), v67, 0) )
          goto LABEL_5;
        v3 = v58;
        v4 = v64;
        if ( *v52 == 13 )
        {
          if ( *v19 == 12 )
            goto LABEL_5;
          v9 = (__int64)v19;
LABEL_11:
          v10 = -v67[0];
          goto LABEL_12;
        }
        v9 = (__int64)v19;
      }
      v10 = v67[0];
      if ( *(_DWORD *)v9 != 12 )
        goto LABEL_11;
LABEL_12:
      v11 = **(__int64 ***)(v4 + 64);
      if ( !v11 )
        goto LABEL_15;
      v12 = 24;
      v13 = (__int64 *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v13 )
      {
        if ( (*(_BYTE *)(*v11 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_15;
        v42 = *(_QWORD *)(v2 + 24);
        v43 = v13[3];
        v12 = (__int64)(v13 + 3);
        if ( v42 < v43 )
        {
LABEL_59:
          v13 = (__int64 *)v13[1];
          goto LABEL_60;
        }
        while ( v43 < v42 )
        {
          v13 = (__int64 *)v13[2];
LABEL_60:
          if ( (*(_BYTE *)v13 & 2) != 0 )
            goto LABEL_15;
          v43 = v13[3];
          v12 = (__int64)(v13 + 3);
          if ( v42 < v43 )
            goto LABEL_59;
        }
        if ( v13 == v11 )
        {
LABEL_15:
          if ( !under_debugger )
            sub_37EEE0(52362);
          goto LABEL_81;
        }
      }
      v20 = *(_QWORD *)(v12 + 8);
      v21 = *(int *)(v12 + 24);
      if ( *(_QWORD *)(v20 + 440) < v21 )
      {
        if ( !under_debugger )
          sub_37EEE0(51258);
        goto LABEL_81;
      }
      v22 = *(_QWORD *)(v12 + 16) + v10;
      v23 = *(_QWORD *)(v20 + 432) + 104 * v21;
      if ( *(_DWORD *)v23 == 1 )
        v24 = *(_QWORD *)(v23 + 8);
      else
        v24 = -1;
      v25 = v22 + v24;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 24LL) + 24LL) != 8 )
        v25 = (int)v25;
      if ( v25 < 0 )
        goto LABEL_56;
      if ( v22 < 0 )
        v24 = 0;
      v26 = *(_QWORD *)(v2 + 16);
      if ( *(_BYTE *)(v26 + 48) == 4
        && (v44 = *(_QWORD *)(v26 + 56), *(_DWORD *)v44 == 14)
        && (v65 = v4,
            v59 = v3,
            v53 = v23,
            v47 = v9,
            v45 = sub_11C340((char *)(v44 + 32), v67, 1u),
            v9 = v47,
            v23 = v53,
            v3 = v59,
            v4 = v65,
            v45) )
      {
        v27 = v67[0];
      }
      else
      {
        v27 = 1;
      }
      if ( v22 <= *(int *)(v23 + 88) && v22 >= -v27 )
        goto LABEL_56;
      v28 = *(_QWORD *)(v4 + 8);
      if ( v25 < *(_QWORD *)(v28 + 128) )
      {
        v54 = v4;
        v48 = v3;
        v60 = v9;
        v46 = sub_312EC0(
                v28 + 848,
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 1496) + 24LL) + 16LL) & (v25 + *(_QWORD *)(v28 + 1440)));
        v3 = v48;
        v4 = v54;
        if ( !v46 )
          goto LABEL_56;
        v28 = *(_QWORD *)(v54 + 8);
        v9 = v60;
      }
      v29 = *(_QWORD *)(v28 + 440);
      if ( !v29 )
        goto LABEL_56;
      v30 = *(_QWORD *)(v28 + 432);
      v31 = 0;
      v32 = -1;
      v33 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v34 = v30 + 104 * v33;
          if ( *(_DWORD *)v34 == 1 )
          {
            v35 = *(_QWORD *)(v34 + 8);
            LOBYTE(v28) = v35 != -1;
            if ( ((v25 >= v35) & (unsigned __int8)v28) != 0 && v35 >= v24 )
              break;
          }
          v33 = ++v31;
          if ( v31 >= v29 )
            goto LABEL_47;
        }
        v32 = v31;
        if ( v25 == v35 )
          break;
        ++v31;
        v24 = v35;
        v33 = v31;
        if ( v31 >= v29 )
        {
LABEL_47:
          if ( v32 != -1 )
            goto LABEL_48;
          goto LABEL_56;
        }
      }
      v24 = v25;
LABEL_48:
      if ( *(_DWORD *)(v12 + 24) != v32 )
      {
        v36 = (_DWORD *)(v30 + 104LL * v32);
        if ( *v36 == 1 )
        {
          v37 = (int)v36[22];
          if ( v37 && v25 >= (unsigned __int64)v24 && v37 + v24 - 1 >= (unsigned __int64)v25 )
          {
            *(_DWORD *)(v12 + 24) = v32;
            *(_QWORD *)(v12 + 16) = v25 - v24;
          }
          else
          {
            v28 = *(_QWORD *)(v4 + 64);
            v61 = v3;
            v55 = v9;
            v49 = v4;
            sub_1FA710((unsigned __int64 **)v28, v13);
            v4 = v49;
            v9 = v55;
            v3 = v61;
          }
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 8LL) = v25;
          *(_OWORD *)(*(_QWORD *)(v9 + 56) + 16LL) = 0;
          **(_DWORD **)(v4 + 8) &= ~0x10000u;
          v38 = *(_QWORD *)(v4 + 8);
          v39 = *(unsigned int *)(v2 + 32);
          if ( (unsigned int)v39 >= *(_DWORD *)(v38 + 64) )
            sub_2231C0(v28);
          ++v66;
          v40 = *(_QWORD *)(*(_QWORD *)(v38 + 528) + 8 * v39);
          *(_DWORD *)(v40 + 24) |= 0x80u;
          goto LABEL_56;
        }
        if ( !under_debugger )
          sub_37EEE0(52587);
LABEL_81:
        BUG();
      }
LABEL_56:
      v2 += 40;
      if ( v3 == v2 )
        return v66;
    }
  }
  return 0;
}

