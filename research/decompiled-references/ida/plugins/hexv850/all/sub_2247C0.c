unsigned __int64 __fastcall sub_2247C0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r13
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // edx
  signed __int64 v18; // rdi
  int v19; // r8d
  bool v20; // al
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rdi
  int v24; // ecx
  int v25; // edx
  int v26; // ecx
  int v27; // ecx
  int v28; // edx
  int v29; // ecx
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // edx
  int v34; // eax
  __int64 v35; // rax
  int v36; // eax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v40; // r13
  int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rdi
  _QWORD *v48; // rcx
  _QWORD *v49; // r8
  _QWORD *i; // rcx
  signed __int64 v51; // rdx
  unsigned __int64 v52; // r13
  const void *v53; // r12
  void *v54; // rax
  unsigned __int64 v55; // rax
  signed __int64 v56; // rax
  _QWORD *v57; // rsi
  __int64 v58; // r8
  unsigned __int64 v59; // r10
  __int64 v60; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v61; // [rsp+8h] [rbp-30h]

  v2 = (_QWORD *)a2;
  v3 = a2 + 24;
  v61 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 80) & 4) != 0 && !(unsigned int)lexcompare_tinfo() )
    *(_DWORD *)(a1 + 136) |= 1u;
  v6 = *(_QWORD *)(a2 + 56);
  v7 = *(int *)(a2 + 76);
  if ( (_DWORD)v7 != -1 )
    v6 += v7;
  if ( (*(_BYTE *)(a1 + 203) & 0x20) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 128);
    if ( v8 < v6 )
      v8 = v6;
    *(_QWORD *)(a1 + 128) = v8;
  }
  if ( (*(_QWORD *)a2 & 2) != 0 )
  {
LABEL_14:
    *(_QWORD *)(a1 + 120) = v2;
    v13 = *(_DWORD *)(a2 + 80);
    if ( (v13 & 0x10) != 0 )
      goto LABEL_21;
    goto LABEL_15;
  }
  v9 = *(_QWORD *)(a2 + 16);
  if ( (*(_BYTE *)v9 & 2) == 0 )
  {
    do
    {
      v40 = v9;
      v9 = *(_QWORD *)(v9 + 8);
    }
    while ( (*(_BYTE *)v9 & 2) == 0 );
    *(_QWORD *)(a1 + 120) = v40;
    v13 = *(_DWORD *)(a2 + 80);
    if ( (v13 & 0x10) != 0 )
      goto LABEL_21;
LABEL_15:
    if ( (v13 & 1) == 0 )
      goto LABEL_22;
LABEL_16:
    v14 = *(_QWORD *)(a2 + 56);
    goto LABEL_17;
  }
  v10 = (_QWORD *)(*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFCLL);
  v11 = *v10;
  if ( (*v10 & 2) == 0 )
  {
    while ( (_QWORD *)v10[2] == v2 )
    {
      v2 = v10;
      v12 = v11 & 0xFFFFFFFFFFFFFFFCLL;
      v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v11 & 2) != 0 )
      {
        v2 = (_QWORD *)v12;
        goto LABEL_14;
      }
      v10 = (_QWORD *)v12;
    }
  }
  *(_QWORD *)(a1 + 120) = v10;
  v13 = *(_DWORD *)(a2 + 80);
  if ( (v13 & 0x10) == 0 )
    goto LABEL_15;
LABEL_21:
  *(_DWORD *)(a1 + 300) = 2;
  v13 = *(_DWORD *)(a2 + 80);
  if ( (v13 & 1) != 0 )
    goto LABEL_16;
LABEL_22:
  if ( (v13 & 2) == 0 || *(_QWORD *)(a2 + 64) == -1 )
  {
LABEL_23:
    if ( (v13 & 0x20000000) != 0 )
    {
LABEL_28:
      v15 = *(_QWORD *)(a1 + 176);
      if ( v15 != -1 )
      {
        v17 = *(_DWORD *)(v3 + 52);
        v18 = *(_QWORD *)(v3 + 32);
        v24 = *(_QWORD *)(a1 + 176);
        v19 = *(_DWORD *)(a1 + 196);
        if ( v17 == -1 )
        {
LABEL_30:
          v21 = v18 - v24;
          goto LABEL_31;
        }
        goto LABEL_72;
      }
      v14 = *(_QWORD *)(v3 + 32);
      goto LABEL_70;
    }
LABEL_24:
    if ( (v13 & 4) == 0 )
      goto LABEL_37;
    v22 = *(_QWORD *)(a1 + 112);
    v23 = v22 == *(_QWORD *)(a1 + 120) ? -1LL : *(_QWORD *)(v22 + 56);
    if ( *(int *)(v3 + 52) < *(_QWORD *)(a1 + 128) - v23 )
      goto LABEL_37;
    goto LABEL_28;
  }
  if ( (get_tinfo_property() & 0xF) != 0xB )
    goto LABEL_126;
  v14 = *(_QWORD *)(a2 + 56);
  v56 = v14 + *(int *)(a2 + 76);
  if ( *(_DWORD *)(a2 + 76) == -1 )
    v56 = *(_QWORD *)(a2 + 56);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) < v56 )
  {
LABEL_126:
    v13 = *(_DWORD *)(a2 + 80);
    goto LABEL_23;
  }
LABEL_17:
  v15 = *(_QWORD *)(a1 + 176);
  if ( v15 == -1 )
  {
LABEL_70:
    *(_QWORD *)(a1 + 176) = v14;
    v19 = *(_DWORD *)(a1 + 196);
    v18 = v14;
    v15 = v14;
    v17 = *(_DWORD *)(v3 + 52);
    goto LABEL_71;
  }
  v16 = *(int *)(a1 + 196);
  v17 = *(_DWORD *)(v3 + 52);
  v18 = v14;
  v19 = *(_DWORD *)(a1 + 196);
  v20 = v14 >= v15 && v16 != 0;
  if ( !v17 )
  {
    if ( !v20 )
    {
      v21 = v14 - v15;
LABEL_73:
      if ( !v19 )
      {
        v25 = 0;
        if ( v21 >= 0 )
          v25 = v21;
        v41 = *(_DWORD *)(a1 + 200) & 0x30001600;
        *(_DWORD *)(a1 + 200) = v41;
        *(_DWORD *)(a1 + 196) = v25;
        v27 = *(_DWORD *)(v3 + 56) | v41;
        *(_DWORD *)(a1 + 200) = v27;
        v13 = *(_DWORD *)(v3 + 56);
        if ( (v13 & 0x20000000) == 0 )
          goto LABEL_35;
LABEL_77:
        v42 = *(_QWORD *)(v3 + 32);
        v43 = *(int *)(v3 + 52);
        if ( (_DWORD)v43 != -1 )
          v42 += v43;
        *(_QWORD *)(a1 + 128) = v42;
        v13 = *(_DWORD *)(v3 + 56);
        goto LABEL_37;
      }
      goto LABEL_106;
    }
    if ( v15 + v16 - 1 < v14 )
    {
      v21 = v14 - v15;
LABEL_106:
      v51 = v15 + v19;
      if ( v19 == -1 )
        v51 = v15;
      v21 += v51 <= v18;
      goto LABEL_31;
    }
    v13 = *(_DWORD *)(v3 + 56);
    v24 = v15;
    if ( (v13 & 0x20000000) != 0 )
    {
LABEL_72:
      v18 += v17;
      v21 = v18 - v24;
      if ( v17 )
        goto LABEL_31;
      goto LABEL_73;
    }
    goto LABEL_24;
  }
  if ( v20 )
  {
    v55 = v14 + v17;
    if ( v15 + v16 - 1 >= v55 - 1 )
    {
      v13 = *(_DWORD *)(v3 + 56);
      if ( (v13 & 0x20000000) != 0 )
      {
LABEL_71:
        v24 = v15;
        if ( v17 == -1 )
          goto LABEL_30;
        goto LABEL_72;
      }
      goto LABEL_24;
    }
    v24 = v15;
    v21 = v55 - v15;
    if ( v17 == -1 )
      goto LABEL_30;
  }
  else
  {
    v24 = v15;
    if ( v17 == -1 )
      goto LABEL_30;
    v21 = v17 + v14 - v15;
  }
LABEL_31:
  v25 = v19;
  if ( v21 >= v19 )
    v25 = v21;
  v26 = *(_DWORD *)(a1 + 200) & 0x30001600;
  *(_DWORD *)(a1 + 200) = v26;
  *(_DWORD *)(a1 + 196) = v25;
  v27 = *(_DWORD *)(v3 + 56) | v26;
  *(_DWORD *)(a1 + 200) = v27;
  v13 = *(_DWORD *)(v3 + 56);
  if ( (v13 & 0x20000000) != 0 )
    goto LABEL_77;
  if ( v25 != -1 )
LABEL_35:
    v15 += v25;
  if ( *(_QWORD *)(a1 + 128) < (signed __int64)v15 && (v27 & 0x20000000) == 0 )
  {
    *(_QWORD *)(a1 + 128) = v15;
    v13 = *(_DWORD *)(v3 + 56);
  }
LABEL_37:
  if ( (v13 & 1) != 0 )
  {
    v28 = *(_DWORD *)(v3 + 48);
    if ( v28 != -1 )
    {
      v29 = *(_DWORD *)(a1 + 192);
      if ( v29 == -1 || v28 < v29 )
      {
        *(_DWORD *)(a1 + 192) = v28;
        v13 = *(_DWORD *)(v3 + 56);
        goto LABEL_47;
      }
    }
  }
  if ( *(_QWORD *)(a1 + 184) == -1 )
    goto LABEL_47;
  if ( (v13 & 0x20) == 0 )
  {
    if ( (v13 & 4) == 0 )
      goto LABEL_56;
    v44 = *(_QWORD *)(a1 + 112);
    v45 = *(int *)(v3 + 52);
    v46 = *(_QWORD *)(a1 + 128);
    if ( *(_QWORD *)(a1 + 120) == v44 )
    {
      if ( v45 < v46 + 1 )
        goto LABEL_56;
    }
    else if ( v45 < v46 - *(_QWORD *)(v44 + 56) )
    {
      goto LABEL_56;
    }
    goto LABEL_47;
  }
  v30 = *(_QWORD *)(v3 + 32);
  v31 = *(_QWORD *)(a1 + 112);
  if ( v31 == *(_QWORD *)(a1 + 120) )
  {
    if ( v30 != -1 )
    {
      if ( (v13 & 4) == 0 )
        goto LABEL_56;
      if ( *(int *)(v3 + 52) < *(_QWORD *)(a1 + 128) + 1LL )
        goto LABEL_52;
      goto LABEL_47;
    }
    v33 = *(_DWORD *)(a1 + 136);
    if ( (v33 & 2) != 0 )
    {
LABEL_116:
      v52 = *(_QWORD *)(v3 + 8);
      if ( v52 > 1 && a1 + 144 != v3 )
      {
        v53 = *(const void **)(a2 + 24);
        v54 = *(void **)(a1 + 144);
        if ( *(_QWORD *)(a1 + 160) < v52 )
        {
          v54 = (void *)qvector_reserve();
          *(_QWORD *)(a1 + 144) = v54;
        }
        *(_QWORD *)(a1 + 152) = v52;
        memmove(v54, v53, v52 - 1);
        *(_BYTE *)(*(_QWORD *)(a1 + 144) + v52 - 1) = 0;
      }
      goto LABEL_56;
    }
  }
  else
  {
    v32 = v31 + 24;
    if ( v30 != *(_QWORD *)(v31 + 56) )
    {
      if ( (v13 & 4) == 0 )
        goto LABEL_54;
      if ( *(int *)(v3 + 52) < *(_QWORD *)(a1 + 128) - *(_QWORD *)(v31 + 56) )
      {
LABEL_52:
        if ( v31 == *(_QWORD *)(a1 + 120) )
        {
          v35 = -1;
LABEL_55:
          if ( v35 != v30 )
            goto LABEL_56;
          goto LABEL_116;
        }
        v32 = v31 + 24;
LABEL_54:
        v35 = *(_QWORD *)(v32 + 32);
        goto LABEL_55;
      }
LABEL_47:
      v33 = *(_DWORD *)(a1 + 136);
      if ( (v33 & 2) != 0 )
        goto LABEL_49;
      goto LABEL_48;
    }
    v33 = *(_DWORD *)(a1 + 136);
    if ( (v33 & 2) != 0 )
      goto LABEL_54;
  }
LABEL_48:
  if ( (v13 & 0x40) == 0 )
  {
    v47 = *(_QWORD *)(v3 + 40);
    if ( v47 != -1 )
    {
      if ( (v33 & 0x10) != 0 )
      {
        v48 = *(_QWORD **)(a1 + 112);
LABEL_96:
        while ( *(_QWORD **)(a1 + 120) != v48 )
        {
          if ( v47 == v48[8] && v48[7] == *(_QWORD *)(a1 + 176) && (v48[10] & 0x40) != 0 )
          {
            if ( *(_QWORD *)(a1 + 184) != -1 )
              goto LABEL_49;
            *(_QWORD *)(a1 + 184) = v47;
            v34 = *(_DWORD *)(v3 + 56) & 0x20;
            goto LABEL_50;
          }
          if ( (*v48 & 2) == 0 )
          {
            v49 = (_QWORD *)v48[2];
            if ( (*(_BYTE *)v49 & 2) != 0 )
            {
              v57 = (_QWORD *)(*v48 & 0xFFFFFFFFFFFFFFFCLL);
              v58 = *v57;
              if ( (*v57 & 2) == 0 )
              {
                while ( (_QWORD *)v57[2] == v48 )
                {
                  v48 = v57;
                  v59 = v58 & 0xFFFFFFFFFFFFFFFCLL;
                  v58 = *(_QWORD *)(v58 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v58 & 2) != 0 )
                  {
                    v48 = (_QWORD *)v59;
                    goto LABEL_96;
                  }
                  v57 = (_QWORD *)v59;
                }
              }
              v48 = v57;
            }
            else
            {
              for ( i = (_QWORD *)v49[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
                v49 = i;
              v48 = v49;
            }
          }
        }
      }
      *(_QWORD *)(a1 + 184) = v47;
      if ( (*(_BYTE *)(v3 + 56) & 0x24) != 0 )
        v33 |= 2u;
      *(_DWORD *)(a1 + 136) = v33 & 0xFFFFFFF7;
      v13 = *(_DWORD *)(v3 + 56);
    }
  }
LABEL_49:
  v34 = v13 & 0x20;
LABEL_50:
  if ( v34 )
  {
    v30 = *(_QWORD *)(v3 + 32);
    v31 = *(_QWORD *)(a1 + 112);
    goto LABEL_52;
  }
LABEL_56:
  if ( sub_224450(a1, v3) )
  {
    if ( *(_BYTE *)(v3 + 24) )
    {
      v60 = 0;
      copy_tinfo_t();
    }
    else
    {
      sub_326800(&v60, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), *(unsigned int *)(v3 + 52));
    }
    copy_tinfo_t();
    clear_tinfo_t();
    v36 = *(_DWORD *)(v3 + 56);
    if ( (v36 & 0x400) == 0 )
      goto LABEL_62;
    *(_DWORD *)(a1 + 200) |= 0x400u;
  }
  v36 = *(_DWORD *)(v3 + 56);
LABEL_62:
  if ( (v36 & 0x40) != 0 )
  {
    v37 = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 136) = v37 | 0x10;
    v38 = *(_QWORD *)(a1 + 184);
    if ( v38 == -1 || v38 == *(_QWORD *)(v3 + 40) )
      *(_DWORD *)(a1 + 136) = v37 | 0x18;
  }
  return v61 - __readfsqword(0x28u);
}

