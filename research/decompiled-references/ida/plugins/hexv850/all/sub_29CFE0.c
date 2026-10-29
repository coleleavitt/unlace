unsigned __int64 __fastcall sub_29CFE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int *v6; // rbp
  unsigned int *v7; // rbx
  signed int v8; // edx
  unsigned int *v9; // r13
  signed int v10; // eax
  char tinfo_property; // al
  char v12; // al
  signed int v13; // eax
  signed int v14; // edx
  char v15; // al
  char v16; // al
  int v17; // eax
  char v18; // al
  int v19; // r14d
  int v20; // eax
  signed int v21; // eax
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  int v25; // r14d
  int v26; // eax
  char v27; // al
  int v28; // r14d
  int v29; // eax
  signed int v30; // eax
  int v31; // eax
  char v32; // al
  unsigned int *v33; // rbx
  signed int v34; // eax
  char v35; // al
  char v36; // al
  signed int v37; // eax
  int v38; // edx
  char v39; // al
  char v40; // al
  signed int v41; // eax
  int v42; // r13d
  int v43; // eax
  int v44; // r13d
  int v45; // eax
  char v46; // al
  int v47; // r14d
  int v48; // eax
  __int64 v49; // r15
  __int64 v50; // rax
  int v51; // eax
  int v53; // [rsp+0h] [rbp-B8h]
  __int64 v54; // [rsp+8h] [rbp-B0h]
  __int64 v55; // [rsp+8h] [rbp-B0h]
  __int64 v56; // [rsp+10h] [rbp-A8h]
  unsigned int *v57; // [rsp+10h] [rbp-A8h]
  __int64 v58; // [rsp+18h] [rbp-A0h]
  __int64 v59; // [rsp+20h] [rbp-98h]
  __int64 v60; // [rsp+20h] [rbp-98h]
  unsigned int *v61; // [rsp+28h] [rbp-90h]
  unsigned int v62[4]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v63; // [rsp+40h] [rbp-78h]
  __int64 v64; // [rsp+48h] [rbp-70h]
  unsigned int v65[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v66; // [rsp+60h] [rbp-58h]
  __int64 v67; // [rsp+68h] [rbp-50h]
  __int64 v68; // [rsp+70h] [rbp-48h]
  unsigned __int64 v69; // [rsp+78h] [rbp-40h]

  v58 = a2;
  v59 = a3;
  v69 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( a2 - a1 <= 512 )
    return v69 - __readfsqword(0x28u);
  v61 = v65;
  while ( 1 )
  {
    v4 = v3;
    v5 = v3 >> 6;
    v56 = v4 >> 5;
    if ( !v59 )
      break;
    v60 = v59 - 1;
    v6 = (unsigned int *)(a1 + 32);
    v7 = (unsigned int *)(a1 + 32 * v5);
    v8 = v7[7];
    v9 = (unsigned int *)(v58 - 32);
    v10 = *(_DWORD *)(a1 + 60);
    if ( v10 < v8 )
      goto LABEL_40;
    if ( v10 <= v8 )
    {
      tinfo_property = get_tinfo_property();
      if ( (tinfo_property & 0x3E) != 0
        && ((tinfo_property & 0xFu) <= 8 || (tinfo_property & 0x3F) == 0x2D)
        && (get_tinfo_property() & 0x3F) == 0x2D
        || (v12 = get_tinfo_property(), (v12 & 0x3E) != 0)
        && ((v12 & 0xFu) <= 8 || (v12 & 0x3F) == 0x2D)
        && (get_tinfo_property() & 0x3F) == 0x2D )
      {
        v25 = score_tinfo();
        v26 = score_tinfo();
        if ( v25 <= v26 )
        {
          if ( v25 < v26 )
            goto LABEL_39;
          goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        v13 = v7[6];
        if ( *(_DWORD *)(a1 + 56) < v13 || *(_DWORD *)(a1 + 56) <= v13 && (int)sub_299330(a1 + 32, (__int64)v7) < 0 )
        {
LABEL_39:
          v8 = v7[7];
LABEL_40:
          if ( *(_DWORD *)(v58 - 4) > v8 )
            goto LABEL_36;
          if ( *(_DWORD *)(v58 - 4) >= v8 )
          {
            v27 = get_tinfo_property();
            if ( (v27 & 0x3E) != 0
              && ((v27 & 0xFu) <= 8 || (v27 & 0x3F) == 0x2D)
              && (get_tinfo_property() & 0x3F) == 0x2D
              || (v46 = get_tinfo_property(), (v46 & 0x3E) != 0)
              && ((v46 & 0xFu) <= 8 || (v46 & 0x3F) == 0x2D)
              && (get_tinfo_property() & 0x3F) == 0x2D )
            {
              v28 = score_tinfo();
              v29 = score_tinfo();
              if ( v28 <= v29 )
              {
                if ( v28 < v29 )
                  goto LABEL_36;
                goto LABEL_47;
              }
            }
            else
            {
LABEL_47:
              v30 = *(_DWORD *)(v58 - 8);
              if ( (int)v7[6] < v30 || (int)v7[6] <= v30 && (int)sub_299330((__int64)v7, (__int64)v9) < 0 )
                goto LABEL_36;
            }
          }
          v31 = sub_2994E0(a1 + 32, (__int64)v9);
          v65[0] = 0;
          v57 = v65;
          if ( v31 < 0 )
          {
            sub_29A3B0((__int64)v65, (unsigned int *)a1);
            v66 = 0;
            copy_tinfo_t();
            v67 = *(_QWORD *)(a1 + 24);
            sub_29A3B0(a1, v9);
            copy_tinfo_t();
            *(_DWORD *)(a1 + 24) = *(_DWORD *)(v58 - 8);
            *(_DWORD *)(a1 + 28) = *(_DWORD *)(v58 - 4);
            sub_29A3B0((__int64)v9, v65);
            copy_tinfo_t();
            *(_QWORD *)(v58 - 8) = v67;
          }
          else
          {
            sub_29A3B0((__int64)v65, (unsigned int *)a1);
            v66 = 0;
            copy_tinfo_t();
            v67 = *(_QWORD *)(a1 + 24);
            sub_29A3B0(a1, (unsigned int *)(a1 + 32));
            copy_tinfo_t();
            *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 56);
            sub_29A3B0(a1 + 32, v65);
            copy_tinfo_t();
            *(_QWORD *)(a1 + 56) = v67;
          }
          clear_tinfo_t();
          sub_299870((__int64)v65);
          goto LABEL_59;
        }
      }
      v10 = *(_DWORD *)(a1 + 60);
    }
    v14 = *(_DWORD *)(v58 - 4);
    if ( v10 < v14 )
      goto LABEL_111;
    if ( v10 > v14 )
      goto LABEL_26;
    v15 = get_tinfo_property();
    if ( (v15 & 0x3E) == 0 || (v15 & 0xFu) > 8 && (v15 & 0x3F) != 0x2D || (get_tinfo_property() & 0x3F) != 0x2D )
    {
      v16 = get_tinfo_property();
      if ( (v16 & 0x3E) == 0 || (v16 & 0xFu) > 8 && (v16 & 0x3F) != 0x2D )
        goto LABEL_22;
      if ( (get_tinfo_property() & 0x3F) != 0x2D )
        goto LABEL_22;
    }
    v47 = score_tinfo();
    v48 = score_tinfo();
    if ( v47 <= v48 )
    {
      if ( v47 < v48 )
        goto LABEL_111;
LABEL_22:
      v17 = *(_DWORD *)(v58 - 8);
      if ( *(_DWORD *)(a1 + 56) < v17 || *(_DWORD *)(a1 + 56) <= v17 && (int)sub_299330(a1 + 32, (__int64)v9) < 0 )
      {
LABEL_111:
        v65[0] = 0;
        v57 = v61;
        sub_29A3B0((__int64)v61, (unsigned int *)a1);
        v66 = 0;
        copy_tinfo_t();
        v67 = *(_QWORD *)(a1 + 24);
        sub_29A3B0(a1, (unsigned int *)(a1 + 32));
        copy_tinfo_t();
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 56);
        sub_29A3B0(a1 + 32, v61);
        copy_tinfo_t();
        *(_QWORD *)(a1 + 56) = v67;
        clear_tinfo_t();
        sub_299870((__int64)v61);
        goto LABEL_59;
      }
    }
    v14 = *(_DWORD *)(v58 - 4);
LABEL_26:
    if ( (int)v7[7] >= v14 )
    {
      if ( (int)v7[7] > v14 )
        goto LABEL_36;
      if ( (v18 = get_tinfo_property(), (v18 & 0x3E) == 0)
        || (v18 & 0xFu) > 8 && (v18 & 0x3F) != 0x2D
        || (get_tinfo_property() & 0x3F) != 0x2D )
      {
        v32 = get_tinfo_property();
        if ( (v32 & 0x3E) == 0 || (v32 & 0xFu) > 8 && (v32 & 0x3F) != 0x2D )
          goto LABEL_134;
        if ( (get_tinfo_property() & 0x3F) != 0x2D )
          goto LABEL_134;
      }
      v19 = score_tinfo();
      v20 = score_tinfo();
      if ( v19 > v20 )
        goto LABEL_36;
      if ( v19 >= v20 )
      {
LABEL_134:
        v21 = *(_DWORD *)(v58 - 8);
        if ( (int)v7[6] >= v21 && ((int)v7[6] > v21 || (int)sub_299330((__int64)v7, (__int64)v9) >= 0) )
        {
LABEL_36:
          v65[0] = 0;
          v57 = v65;
          sub_29A3B0((__int64)v65, (unsigned int *)a1);
          v66 = 0;
          copy_tinfo_t();
          v67 = *(_QWORD *)(a1 + 24);
          sub_29A3B0(a1, v7);
          copy_tinfo_t();
          *(_DWORD *)(a1 + 24) = v7[6];
          *(_DWORD *)(a1 + 28) = v7[7];
          sub_29A3B0((__int64)v7, v65);
          copy_tinfo_t();
          *((_QWORD *)v7 + 3) = v67;
          clear_tinfo_t();
          sub_299870((__int64)v65);
          goto LABEL_59;
        }
      }
    }
    v65[0] = 0;
    v57 = v65;
    sub_29A3B0((__int64)v65, (unsigned int *)a1);
    v66 = 0;
    copy_tinfo_t();
    v67 = *(_QWORD *)(a1 + 24);
    sub_29A3B0(a1, v9);
    copy_tinfo_t();
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(v58 - 8);
    *(_DWORD *)(a1 + 28) = *(_DWORD *)(v58 - 4);
    sub_29A3B0((__int64)v9, v65);
    copy_tinfo_t();
    *(_QWORD *)(v58 - 8) = v67;
    clear_tinfo_t();
    sub_299870((__int64)v65);
LABEL_59:
    v33 = (unsigned int *)v58;
    while ( 2 )
    {
      v34 = *(_DWORD *)(a1 + 28);
      while ( 1 )
      {
        if ( (int)v6[7] < v34 )
          goto LABEL_70;
        if ( (int)v6[7] > v34 )
          goto LABEL_73;
        v35 = get_tinfo_property();
        if ( (v35 & 0x3E) == 0 || (v35 & 0xFu) > 8 && (v35 & 0x3F) != 0x2D || (get_tinfo_property() & 0x3F) != 0x2D )
        {
          v36 = get_tinfo_property();
          if ( (v36 & 0x3E) == 0 || (v36 & 0xFu) > 8 && (v36 & 0x3F) != 0x2D )
            goto LABEL_67;
          if ( (get_tinfo_property() & 0x3F) != 0x2D )
            goto LABEL_67;
        }
        v44 = score_tinfo();
        v45 = score_tinfo();
        if ( v44 > v45 )
          break;
        if ( v44 < v45 )
        {
LABEL_95:
          v34 = *(_DWORD *)(a1 + 28);
          goto LABEL_70;
        }
LABEL_67:
        v37 = *(_DWORD *)(a1 + 24);
        if ( (int)v6[6] < v37 )
          goto LABEL_95;
        if ( (int)v6[6] > v37 )
          goto LABEL_84;
        v38 = sub_299330((__int64)v6, a1);
        v34 = *(_DWORD *)(a1 + 28);
        if ( v38 >= 0 )
        {
          do
LABEL_73:
            v33 -= 8;
          while ( (int)v33[7] > v34 );
          if ( (int)v33[7] < v34 )
            goto LABEL_86;
          goto LABEL_75;
        }
LABEL_70:
        v6 += 8;
      }
      while ( 1 )
      {
LABEL_84:
        v33 -= 8;
        v34 = *(_DWORD *)(a1 + 28);
        if ( (int)v33[7] > v34 )
          goto LABEL_73;
        if ( (int)v33[7] < v34 )
          break;
LABEL_75:
        v39 = get_tinfo_property();
        if ( (v39 & 0x3E) == 0 || (v39 & 0xFu) > 8 && (v39 & 0x3F) != 0x2D || (get_tinfo_property() & 0x3F) != 0x2D )
        {
          v40 = get_tinfo_property();
          if ( (v40 & 0x3E) == 0 || (v40 & 0xFu) > 8 && (v40 & 0x3F) != 0x2D )
            goto LABEL_83;
          if ( (get_tinfo_property() & 0x3F) != 0x2D )
            goto LABEL_83;
        }
        v42 = score_tinfo();
        v43 = score_tinfo();
        if ( v42 > v43 )
          break;
        if ( v42 >= v43 )
        {
LABEL_83:
          v41 = v33[6];
          if ( *(_DWORD *)(a1 + 24) >= v41 && (*(_DWORD *)(a1 + 24) > v41 || (int)sub_299330(a1, (__int64)v33) >= 0) )
            break;
        }
      }
LABEL_86:
      if ( v6 < v33 )
      {
        v65[0] = 0;
        sub_29A3B0((__int64)v57, v6);
        v66 = 0;
        copy_tinfo_t();
        v67 = *((_QWORD *)v6 + 3);
        sub_29A3B0((__int64)v6, v33);
        v54 = (__int64)(v33 + 4);
        copy_tinfo_t();
        v6[6] = v33[6];
        v6[7] = v33[7];
        sub_29A3B0((__int64)v33, v57);
        copy_tinfo_t();
        v6 += 8;
        *((_QWORD *)v33 + 3) = v67;
        clear_tinfo_t();
        sub_299870((__int64)v57);
        continue;
      }
      break;
    }
    sub_29CFE0(
      (_DWORD)v6,
      v58,
      v60,
      v22,
      v23,
      v24,
      v53,
      v54,
      (_DWORD)v57,
      v58,
      v60,
      (_DWORD)v61,
      v62[0],
      v62[2],
      v63,
      v64,
      v65[0],
      v65[2],
      v66,
      v67,
      v68);
    v3 = (__int64)v6 - a1;
    if ( (__int64)v6 - a1 <= 512 )
      return v69 - __readfsqword(0x28u);
    v58 = (__int64)v6;
  }
  v55 = v5 - 1;
  v49 = a1 + 32 * (v5 - 1);
  while ( 1 )
  {
    v62[0] = 0;
    sub_29A3B0((__int64)v62, (unsigned int *)v49);
    v63 = 0;
    copy_tinfo_t();
    v50 = *(_QWORD *)(v49 + 24);
    v65[0] = 0;
    v64 = v50;
    sub_29A3B0((__int64)v65, v62);
    v66 = 0;
    copy_tinfo_t();
    v67 = v64;
    sub_29B8F0(a1, v55, v56, (__int64)v65);
    v49 -= 32;
    clear_tinfo_t();
    sub_299870((__int64)v65);
    if ( !v55 )
      break;
    --v55;
    clear_tinfo_t();
    sub_299870((__int64)v62);
  }
  clear_tinfo_t();
  sub_299870((__int64)v62);
  while ( v58 - a1 > 32 )
  {
    v62[0] = 0;
    sub_29A3B0((__int64)v62, (unsigned int *)(v58 - 32));
    v58 -= 32;
    v63 = 0;
    copy_tinfo_t();
    v64 = *(_QWORD *)(v58 + 24);
    sub_29A3B0(v58, (unsigned int *)a1);
    copy_tinfo_t();
    v51 = *(_DWORD *)(a1 + 24);
    v65[0] = 0;
    *(_DWORD *)(v58 + 24) = v51;
    *(_DWORD *)(v58 + 28) = *(_DWORD *)(a1 + 28);
    sub_29A3B0((__int64)v65, v62);
    v66 = 0;
    copy_tinfo_t();
    v67 = v64;
    sub_29B8F0(a1, 0, (v58 - a1) >> 5, (__int64)v65);
    clear_tinfo_t();
    sub_299870((__int64)v65);
    clear_tinfo_t();
    sub_299870((__int64)v62);
  }
  return v69 - __readfsqword(0x28u);
}

