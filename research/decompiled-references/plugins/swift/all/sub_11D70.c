__int64 __fastcall sub_11D70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5, double a6)
{
  __int64 ea_name; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r8
  _BYTE *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 name_ea; // rax
  __int64 v19; // rdi
  const char *v20; // rbx
  unsigned int qword; // eax
  const char *v23; // rdx
  __int64 v24; // rax
  const char *v25; // r14
  __int64 v26; // r15
  unsigned int v27; // r9d
  unsigned int v28; // eax
  char data; // al
  __int64 v30; // r12
  const char *v31; // rsi
  int dword; // eax
  __int64 v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // rbx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rax
  unsigned int v42; // [rsp+0h] [rbp-68h]
  unsigned int v43; // [rsp+0h] [rbp-68h]
  int v44; // [rsp+0h] [rbp-68h]
  unsigned __int64 v45; // [rsp+0h] [rbp-68h]
  unsigned __int64 v46; // [rsp+0h] [rbp-68h]
  unsigned __int64 v47; // [rsp+0h] [rbp-68h]
  __int64 v48; // [rsp+8h] [rbp-60h]
  __int64 v49; // [rsp+8h] [rbp-60h]
  __int64 v50; // [rsp+8h] [rbp-60h]
  __int64 v51; // [rsp+10h] [rbp-58h] BYREF
  __int128 v52; // [rsp+18h] [rbp-50h]
  unsigned __int64 v53; // [rsp+28h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v52 = 0;
  v51 = 0;
  ea_name = get_ea_name(&v51, a3, 0, 0);
  v11 = v51;
  if ( ea_name <= 0 )
    goto LABEL_20;
  v12 = v52;
  if ( !(_QWORD)v52 )
    goto LABEL_20;
  v13 = v52 - 1;
  if ( (unsigned __int64)(v52 - 1) <= 1 )
    goto LABEL_20;
  v14 = (_BYTE *)(v51 + v52 - 3);
  if ( *v14 != 77 || v14[1] != 110 )
    goto LABEL_20;
  v15 = v52 - 2;
  if ( (__int64)v52 - 2 > 1 )
  {
    if ( *((_QWORD *)&v52 + 1) < v15 )
    {
      v51 = qvector_reserve(&v51, v51, v15, 1);
      v15 = v12 - 2;
      v11 = v51;
    }
    *(_QWORD *)&v52 = v15;
    v16 = 2;
    *(_BYTE *)(v11 + v12 - 3) = 0;
    v13 = v52;
    v12 = 1;
    v17 = *((_QWORD *)&v52 + 1);
    v11 = v51;
    if ( !(_QWORD)v52 )
    {
LABEL_10:
      if ( v17 >= v16 )
        goto LABEL_11;
      goto LABEL_80;
    }
    v12 = v52;
    v13 = v52 - 1;
LABEL_82:
    v16 = v13 + 2;
    goto LABEL_10;
  }
  if ( !v51 )
  {
    v17 = *((_QWORD *)&v52 + 1);
    goto LABEL_82;
  }
  *(_QWORD *)&v52 = 0;
  qfree(v51);
  v51 = 0;
  v13 = v52;
  *((_QWORD *)&v52 + 1) = 0;
  if ( (_QWORD)v52 )
  {
    v12 = v52;
    v11 = 0;
    v13 = v52 - 1;
    v17 = 0;
    goto LABEL_82;
  }
  v11 = 0;
  v16 = 2;
  v12 = 1;
LABEL_80:
  v45 = v16;
  v49 = v13;
  v51 = qvector_reserve(&v51, v11, v16, 1);
  v13 = v49;
  v11 = v51;
  v16 = v45;
LABEL_11:
  *(_QWORD *)&v52 = v16;
  *(_BYTE *)(v11 + v12) = 0;
  *(_BYTE *)(v51 + v13) = 78;
  name_ea = get_name_ea(-1, v51);
  v19 = v51;
  v20 = (const char *)name_ea;
  if ( name_ea != -1 )
  {
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree(v51);
    }
    goto LABEL_14;
  }
  v36 = v52;
  v37 = v52 - 1;
  if ( (__int64)v52 - 1 > 1 )
  {
    if ( *((_QWORD *)&v52 + 1) < v37 )
    {
      v47 = v52 - 1;
      v51 = qvector_reserve(&v51, v51, v37, 1);
      v37 = v47;
      v19 = v51;
    }
    *(_QWORD *)&v52 = v37;
    *(_BYTE *)(v19 + v36 - 2) = 0;
    v36 = v52;
    v19 = v51;
LABEL_69:
    v38 = *((_QWORD *)&v52 + 1);
    if ( !v36 )
    {
      v39 = 3;
      v40 = 2;
      goto LABEL_71;
    }
LABEL_83:
    v40 = v36 + 1;
    v39 = v36 + 2;
    --v36;
LABEL_71:
    if ( v38 >= v39 )
      goto LABEL_72;
    goto LABEL_88;
  }
  if ( !v51 )
    goto LABEL_69;
  *(_QWORD *)&v52 = 0;
  qfree(v51);
  v36 = v52;
  v19 = 0;
  v38 = 0;
  v51 = 0;
  *((_QWORD *)&v52 + 1) = 0;
  if ( (_QWORD)v52 )
    goto LABEL_83;
  v39 = 3;
  v40 = 2;
LABEL_88:
  v46 = v39;
  v50 = v40;
  v51 = qvector_reserve(&v51, v19, v39, 1);
  v40 = v50;
  v19 = v51;
  v39 = v46;
LABEL_72:
  *(_QWORD *)&v52 = v39;
  *(_BYTE *)(v19 + v40) = 0;
  *(_WORD *)(v51 + v36) = 26189;
  v41 = get_name_ea(-1, v51);
  v11 = v51;
  if ( v41 != -1 )
  {
    v20 = (const char *)(v41 + 8);
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree(v51);
    }
    if ( v20 != (const char *)-1LL )
      goto LABEL_14;
    goto LABEL_22;
  }
LABEL_20:
  if ( v11 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v11);
  }
LABEL_22:
  if ( *(_DWORD *)(get_ph() + 4) )
  {
    if ( *(_DWORD *)(get_ph() + 4) != 13 )
      return 0;
    dword = get_dword(a4);
    if ( (dword & 0x1F000000) != 0x10000000 )
      return 0;
    v33 = ((unsigned int)dword >> 29) & 3 | ((unsigned int)dword >> 3) & 0x1FFFFC;
    v20 = (const char *)(a4 + v33);
    if ( dword < 0 )
      v20 = (const char *)((v33 << 12) + (a4 & 0xFFFFFFFFFFFFF000LL));
    v44 = dword & 0x1F;
    v34 = get_dword(a4 + 4);
    if ( v34 != -721215457 )
    {
      if ( (v34 & 0xFF000000) != 0x91000000
        || v44 != (v34 & 0x1F)
        || v44 != ((v34 >> 5) & 0x1F)
        || (v34 & 0xC00000) != 0 )
      {
        return 0;
      }
      v20 += (v34 >> 10) & 0xFFF;
    }
    if ( v44 == 8 )
    {
      if ( (unsigned int)get_dword(a4 + 8) != -1862262520
        || (unsigned int)get_dword(a4 + 12) != -1442315296
        || (unsigned int)get_dword(a4 + 16) != -763363320
        || (unsigned int)get_dword(a4 + 20) != -1442315295 )
      {
        return 0;
      }
      v20 += 8;
      v35 = a4 + 24;
    }
    else
    {
      if ( v44 || (unsigned int)get_dword(a4 + 8) != -763363327 )
        return 0;
      v35 = a4 + 12;
    }
    if ( (unsigned int)get_dword(v35) != -698416192 )
      return 0;
  }
  else
  {
    if ( !(unsigned __int8)equal_bytes(a4, &unk_216D8, 255, 12, 1)
      && !(unsigned __int8)equal_bytes(a4, &unk_216C8, 255, 10, 1) )
    {
      return 0;
    }
    v20 = (const char *)(a4 + (int)get_dword(a4 + 3) + 7);
  }
  if ( v20 == (const char *)-1LL )
    return 0;
LABEL_14:
  qword = get_qword(v20);
  if ( *(_DWORD *)a2 == 1 )
  {
    if ( qword == 512 )
      goto LABEL_17;
LABEL_29:
    sub_11480((__int64)&v51, qword);
    v23 = s1;
    if ( (_QWORD)v52 )
      v23 = (const char *)v51;
    sub_CB10((__int64)"bad metadata kind at %a: kind %s (must be %s)\n", 0.0, v20, v23);
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree(v51);
    }
    return 0;
  }
  if ( *(_DWORD *)a2 == 2 && qword != 513 )
    goto LABEL_29;
LABEL_17:
  if ( a3 != get_qword(v20 + 8) )
  {
    sub_CB10((__int64)"bad description address in the metadata at %a\n", 0.0);
    return 0;
  }
  *(_QWORD *)(a2 + 96) = v20;
  sub_FA00(a1, 8, (__int64)v20, 0, 0.0, a6);
  if ( (*(_BYTE *)(a1 + 240) & 4) != 0 )
    sub_100A0((__int64)v20, (int *)a2, "N", 0.0);
  if ( *(_DWORD *)a2 == 1 )
  {
    v24 = *(_QWORD *)(a2 + 64);
    if ( v24 )
    {
      v25 = &v20[8 * v24];
      v48 = *(_QWORD *)(a2 + 80);
      if ( v48 )
      {
        v26 = 0;
        v27 = get_dword(v25);
        if ( v27 )
        {
LABEL_90:
          sub_CB10((__int64)"bad offset at %a for the '%s' field\n", 0.0, v25);
          return 0;
        }
        while ( 1 )
        {
          *(_DWORD *)(*(_QWORD *)(a2 + 72) + 56 * v26 + 48) = v27;
          if ( (*(_BYTE *)(a1 + 240) & 4) != 0 )
          {
            v43 = v27;
            data = create_data(v25, 0x20000000, 4, -1);
            v27 = v43;
            if ( data )
            {
              v30 = *(_QWORD *)(a2 + 72) + 56 * v26;
              v31 = s1;
              if ( *(_QWORD *)(v30 + 8) )
                v31 = *(const char **)v30;
              set_cmt(v25, v31, 0);
              v27 = v43;
            }
          }
          ++v26;
          v42 = v27;
          v25 += 4;
          if ( v26 == v48 )
            break;
          v28 = get_dword(v25);
          if ( v28 - 1 < v42 )
            goto LABEL_90;
          v27 = v28;
        }
      }
    }
  }
  sub_10190(a1, a2, (unsigned __int64)v20, 0.0, a6);
  return 1;
}
