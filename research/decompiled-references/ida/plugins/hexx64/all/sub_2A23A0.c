unsigned __int64 __fastcall sub_2A23A0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int *v7; // rbp
  unsigned int *v8; // rbx
  signed int v9; // edx
  unsigned int *v10; // r13
  signed int v11; // eax
  char tinfo_property; // al
  char v13; // al
  signed int v14; // eax
  signed int v15; // edx
  char v16; // al
  char v17; // al
  int v18; // eax
  char v19; // al
  int v20; // r14d
  int v21; // eax
  signed int v22; // eax
  int v23; // r14d
  int v24; // eax
  char v25; // al
  int v26; // r14d
  int v27; // eax
  signed int v28; // eax
  int v29; // eax
  char v30; // al
  unsigned int *v31; // rbx
  signed int v32; // eax
  char v33; // al
  char v34; // al
  signed int v35; // eax
  int v36; // edx
  char v37; // al
  char v38; // al
  signed int v39; // eax
  int v40; // r13d
  int v41; // eax
  int v42; // r13d
  int v43; // eax
  char v44; // al
  int v45; // r14d
  int v46; // eax
  __int64 v47; // r15
  __int64 v48; // rax
  int v49; // eax
  __int64 v51; // [rsp+8h] [rbp-B0h]
  __int64 v52; // [rsp+10h] [rbp-A8h]
  __int64 v53; // [rsp+18h] [rbp-A0h]
  unsigned int v55[4]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v56; // [rsp+40h] [rbp-78h]
  __int64 v57; // [rsp+48h] [rbp-70h]
  unsigned int v58[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v59; // [rsp+60h] [rbp-58h]
  __int64 v60; // [rsp+68h] [rbp-50h]
  unsigned __int64 v61; // [rsp+78h] [rbp-40h]

  v53 = a2;
  v61 = __readfsqword(0x28u);
  v4 = a2 - a1;
  if ( a2 - a1 <= 512 )
    return v61 - __readfsqword(0x28u);
  while ( 1 )
  {
    v5 = v4;
    v6 = v4 >> 6;
    v52 = v5 >> 5;
    if ( !a3 )
      break;
    --a3;
    v7 = (unsigned int *)(a1 + 32);
    v8 = (unsigned int *)(a1 + 32 * v6);
    v9 = v8[7];
    v10 = (unsigned int *)(v53 - 32);
    v11 = *(_DWORD *)(a1 + 60);
    if ( v11 < v9 )
      goto LABEL_39;
    if ( v11 <= v9 )
    {
      tinfo_property = get_tinfo_property();
      if ( (tinfo_property & 0x3E) != 0
        && ((tinfo_property & 0xFu) <= 8 || (tinfo_property & 0x3F) == 0x2D)
        && (get_tinfo_property() & 0x3F) == 0x2D
        || (v13 = get_tinfo_property(), (v13 & 0x3E) != 0)
        && ((v13 & 0xFu) <= 8 || (v13 & 0x3F) == 0x2D)
        && (get_tinfo_property() & 0x3F) == 0x2D )
      {
        v23 = score_tinfo();
        v24 = score_tinfo();
        if ( v23 <= v24 )
        {
          if ( v23 < v24 )
            goto LABEL_38;
          goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        v14 = v8[6];
        if ( *(_DWORD *)(a1 + 56) < v14 || *(_DWORD *)(a1 + 56) <= v14 && (int)sub_29E6F0(a1 + 32, (__int64)v8, a4) < 0 )
        {
LABEL_38:
          v9 = v8[7];
LABEL_39:
          if ( *(_DWORD *)(v53 - 4) > v9 )
            goto LABEL_35;
          if ( *(_DWORD *)(v53 - 4) >= v9 )
          {
            v25 = get_tinfo_property();
            if ( (v25 & 0x3E) != 0
              && ((v25 & 0xFu) <= 8 || (v25 & 0x3F) == 0x2D)
              && (get_tinfo_property() & 0x3F) == 0x2D
              || (v44 = get_tinfo_property(), (v44 & 0x3E) != 0)
              && ((v44 & 0xFu) <= 8 || (v44 & 0x3F) == 0x2D)
              && (get_tinfo_property() & 0x3F) == 0x2D )
            {
              v26 = score_tinfo();
              v27 = score_tinfo();
              if ( v26 <= v27 )
              {
                if ( v26 < v27 )
                  goto LABEL_35;
                goto LABEL_46;
              }
            }
            else
            {
LABEL_46:
              v28 = *(_DWORD *)(v53 - 8);
              if ( (int)v8[6] < v28 || (int)v8[6] <= v28 && (int)sub_29E6F0((__int64)v8, (__int64)v10, a4) < 0 )
                goto LABEL_35;
            }
          }
          v29 = sub_29E8A0(a1 + 32, (__int64)v10, a4);
          v58[0] = 0;
          if ( v29 < 0 )
          {
            sub_29F770((__int64)v58, (unsigned int *)a1, a4);
            v59 = 0;
            copy_tinfo_t();
            v60 = *(_QWORD *)(a1 + 24);
            sub_29F770(a1, v10, a4);
            copy_tinfo_t();
            *(_DWORD *)(a1 + 24) = *(_DWORD *)(v53 - 8);
            *(_DWORD *)(a1 + 28) = *(_DWORD *)(v53 - 4);
            sub_29F770((__int64)v10, v58, a4);
            copy_tinfo_t();
            *(_QWORD *)(v53 - 8) = v60;
          }
          else
          {
            sub_29F770((__int64)v58, (unsigned int *)a1, a4);
            v59 = 0;
            copy_tinfo_t();
            v60 = *(_QWORD *)(a1 + 24);
            sub_29F770(a1, (unsigned int *)(a1 + 32), a4);
            copy_tinfo_t();
            *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 56);
            sub_29F770(a1 + 32, v58, a4);
            copy_tinfo_t();
            *(_QWORD *)(a1 + 56) = v60;
          }
          clear_tinfo_t();
          sub_29EC30((__int64)v58, a4);
          goto LABEL_58;
        }
      }
      v11 = *(_DWORD *)(a1 + 60);
    }
    v15 = *(_DWORD *)(v53 - 4);
    if ( v11 < v15 )
      goto LABEL_110;
    if ( v11 > v15 )
      goto LABEL_25;
    v16 = get_tinfo_property();
    if ( (v16 & 0x3E) == 0 || (v16 & 0xFu) > 8 && (v16 & 0x3F) != 0x2D || (get_tinfo_property() & 0x3F) != 0x2D )
    {
      v17 = get_tinfo_property();
      if ( (v17 & 0x3E) == 0 || (v17 & 0xFu) > 8 && (v17 & 0x3F) != 0x2D )
        goto LABEL_21;
      if ( (get_tinfo_property() & 0x3F) != 0x2D )
        goto LABEL_21;
    }
    v45 = score_tinfo();
    v46 = score_tinfo();
    if ( v45 <= v46 )
    {
      if ( v45 < v46 )
        goto LABEL_110;
LABEL_21:
      v18 = *(_DWORD *)(v53 - 8);
      if ( *(_DWORD *)(a1 + 56) < v18 || *(_DWORD *)(a1 + 56) <= v18 && (int)sub_29E6F0(a1 + 32, (__int64)v10, a4) < 0 )
      {
LABEL_110:
        v58[0] = 0;
        sub_29F770((__int64)v58, (unsigned int *)a1, a4);
        v59 = 0;
        copy_tinfo_t();
        v60 = *(_QWORD *)(a1 + 24);
        sub_29F770(a1, (unsigned int *)(a1 + 32), a4);
        copy_tinfo_t();
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 56);
        sub_29F770(a1 + 32, v58, a4);
        copy_tinfo_t();
        *(_QWORD *)(a1 + 56) = v60;
        clear_tinfo_t();
        sub_29EC30((__int64)v58, a4);
        goto LABEL_58;
      }
    }
    v15 = *(_DWORD *)(v53 - 4);
LABEL_25:
    if ( (int)v8[7] >= v15 )
    {
      if ( (int)v8[7] > v15 )
        goto LABEL_35;
      if ( (v19 = get_tinfo_property(), (v19 & 0x3E) == 0)
        || (v19 & 0xFu) > 8 && (v19 & 0x3F) != 0x2D
        || (get_tinfo_property() & 0x3F) != 0x2D )
      {
        v30 = get_tinfo_property();
        if ( (v30 & 0x3E) == 0 || (v30 & 0xFu) > 8 && (v30 & 0x3F) != 0x2D )
          goto LABEL_133;
        if ( (get_tinfo_property() & 0x3F) != 0x2D )
          goto LABEL_133;
      }
      v20 = score_tinfo();
      v21 = score_tinfo();
      if ( v20 > v21 )
        goto LABEL_35;
      if ( v20 >= v21 )
      {
LABEL_133:
        v22 = *(_DWORD *)(v53 - 8);
        if ( (int)v8[6] >= v22 && ((int)v8[6] > v22 || (int)sub_29E6F0((__int64)v8, (__int64)v10, a4) >= 0) )
        {
LABEL_35:
          v58[0] = 0;
          sub_29F770((__int64)v58, (unsigned int *)a1, a4);
          v59 = 0;
          copy_tinfo_t();
          v60 = *(_QWORD *)(a1 + 24);
          sub_29F770(a1, v8, a4);
          copy_tinfo_t();
          *(_DWORD *)(a1 + 24) = v8[6];
          *(_DWORD *)(a1 + 28) = v8[7];
          sub_29F770((__int64)v8, v58, a4);
          copy_tinfo_t();
          *((_QWORD *)v8 + 3) = v60;
          clear_tinfo_t();
          sub_29EC30((__int64)v58, a4);
          goto LABEL_58;
        }
      }
    }
    v58[0] = 0;
    sub_29F770((__int64)v58, (unsigned int *)a1, a4);
    v59 = 0;
    copy_tinfo_t();
    v60 = *(_QWORD *)(a1 + 24);
    sub_29F770(a1, v10, a4);
    copy_tinfo_t();
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(v53 - 8);
    *(_DWORD *)(a1 + 28) = *(_DWORD *)(v53 - 4);
    sub_29F770((__int64)v10, v58, a4);
    copy_tinfo_t();
    *(_QWORD *)(v53 - 8) = v60;
    clear_tinfo_t();
    sub_29EC30((__int64)v58, a4);
LABEL_58:
    v31 = (unsigned int *)v53;
    while ( 2 )
    {
      v32 = *(_DWORD *)(a1 + 28);
      while ( 1 )
      {
        if ( (int)v7[7] < v32 )
          goto LABEL_69;
        if ( (int)v7[7] > v32 )
          goto LABEL_72;
        v33 = get_tinfo_property();
        if ( (v33 & 0x3E) == 0 || (v33 & 0xFu) > 8 && (v33 & 0x3F) != 0x2D || (get_tinfo_property() & 0x3F) != 0x2D )
        {
          v34 = get_tinfo_property();
          if ( (v34 & 0x3E) == 0 || (v34 & 0xFu) > 8 && (v34 & 0x3F) != 0x2D )
            goto LABEL_66;
          if ( (get_tinfo_property() & 0x3F) != 0x2D )
            goto LABEL_66;
        }
        v42 = score_tinfo();
        v43 = score_tinfo();
        if ( v42 > v43 )
          break;
        if ( v42 < v43 )
        {
LABEL_94:
          v32 = *(_DWORD *)(a1 + 28);
          goto LABEL_69;
        }
LABEL_66:
        v35 = *(_DWORD *)(a1 + 24);
        if ( (int)v7[6] < v35 )
          goto LABEL_94;
        if ( (int)v7[6] > v35 )
          goto LABEL_83;
        v36 = sub_29E6F0((__int64)v7, a1, a4);
        v32 = *(_DWORD *)(a1 + 28);
        if ( v36 >= 0 )
        {
          do
LABEL_72:
            v31 -= 8;
          while ( (int)v31[7] > v32 );
          if ( (int)v31[7] < v32 )
            goto LABEL_85;
          goto LABEL_74;
        }
LABEL_69:
        v7 += 8;
      }
      while ( 1 )
      {
LABEL_83:
        v31 -= 8;
        v32 = *(_DWORD *)(a1 + 28);
        if ( (int)v31[7] > v32 )
          goto LABEL_72;
        if ( (int)v31[7] < v32 )
          break;
LABEL_74:
        v37 = get_tinfo_property();
        if ( (v37 & 0x3E) == 0 || (v37 & 0xFu) > 8 && (v37 & 0x3F) != 0x2D || (get_tinfo_property() & 0x3F) != 0x2D )
        {
          v38 = get_tinfo_property();
          if ( (v38 & 0x3E) == 0 || (v38 & 0xFu) > 8 && (v38 & 0x3F) != 0x2D )
            goto LABEL_82;
          if ( (get_tinfo_property() & 0x3F) != 0x2D )
            goto LABEL_82;
        }
        v40 = score_tinfo();
        v41 = score_tinfo();
        if ( v40 > v41 )
          break;
        if ( v40 >= v41 )
        {
LABEL_82:
          v39 = v31[6];
          if ( *(_DWORD *)(a1 + 24) >= v39 && (*(_DWORD *)(a1 + 24) > v39 || (int)sub_29E6F0(a1, (__int64)v31, a4) >= 0) )
            break;
        }
      }
LABEL_85:
      if ( v7 < v31 )
      {
        v58[0] = 0;
        sub_29F770((__int64)v58, v7, a4);
        v59 = 0;
        copy_tinfo_t();
        v60 = *((_QWORD *)v7 + 3);
        sub_29F770((__int64)v7, v31, a4);
        copy_tinfo_t();
        v7[6] = v31[6];
        v7[7] = v31[7];
        sub_29F770((__int64)v31, v58, a4);
        copy_tinfo_t();
        v7 += 8;
        *((_QWORD *)v31 + 3) = v60;
        clear_tinfo_t();
        sub_29EC30((__int64)v58, a4);
        continue;
      }
      break;
    }
    sub_2A23A0((__int64)v7, v53, a3);
    v4 = (__int64)v7 - a1;
    if ( (__int64)v7 - a1 <= 512 )
      return v61 - __readfsqword(0x28u);
    v53 = (__int64)v7;
  }
  v51 = v6 - 1;
  v47 = a1 + 32 * (v6 - 1);
  while ( 1 )
  {
    v55[0] = 0;
    sub_29F770((__int64)v55, (unsigned int *)v47, a4);
    v56 = 0;
    copy_tinfo_t();
    v48 = *(_QWORD *)(v47 + 24);
    v58[0] = 0;
    v57 = v48;
    sub_29F770((__int64)v58, v55, a4);
    v59 = 0;
    copy_tinfo_t();
    v60 = v57;
    sub_2A0CB0(a1, v51, v52, (__int64)v58, a4);
    v47 -= 32;
    clear_tinfo_t();
    sub_29EC30((__int64)v58, a4);
    if ( !v51 )
      break;
    --v51;
    clear_tinfo_t();
    sub_29EC30((__int64)v55, a4);
  }
  clear_tinfo_t();
  sub_29EC30((__int64)v55, a4);
  while ( v53 - a1 > 32 )
  {
    v55[0] = 0;
    sub_29F770((__int64)v55, (unsigned int *)(v53 - 32), a4);
    v53 -= 32;
    v56 = 0;
    copy_tinfo_t();
    v57 = *(_QWORD *)(v53 + 24);
    sub_29F770(v53, (unsigned int *)a1, a4);
    copy_tinfo_t();
    v49 = *(_DWORD *)(a1 + 24);
    v58[0] = 0;
    *(_DWORD *)(v53 + 24) = v49;
    *(_DWORD *)(v53 + 28) = *(_DWORD *)(a1 + 28);
    sub_29F770((__int64)v58, v55, a4);
    v59 = 0;
    copy_tinfo_t();
    v60 = v57;
    sub_2A0CB0(a1, 0, (v53 - a1) >> 5, (__int64)v58, a4);
    clear_tinfo_t();
    sub_29EC30((__int64)v58, a4);
    clear_tinfo_t();
    sub_29EC30((__int64)v55, a4);
  }
  return v61 - __readfsqword(0x28u);
}

