__int64 __fastcall sub_EFB0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rax
  __int16 v9; // dx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // edx
  __int64 v15; // rdx
  int v16; // eax
  __int16 v17; // r9
  __int64 v18; // rdx
  char v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // r8d
  __int64 v25; // rax
  __int16 v26; // r9
  char v27; // dl
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // edx
  __int64 v37; // rax
  int v38; // ebx
  __int64 v39; // rax
  __int64 v40; // rdx
  char v41; // r9
  char v42; // al
  char v43; // r9
  __int64 v44; // rax
  int v45; // r8d
  __int64 v46; // rax
  __int64 v47; // rdx
  int v48; // ebx
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int16 v53; // dx
  __int64 v54; // rax
  int v55; // ebx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int16 v60; // ax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int16 v65; // dx
  __int16 v66; // dx
  int v67; // [rsp+Ch] [rbp-Ch]

  v3 = (unsigned int)a3;
  if ( a3 == 0x2000 )
    return sub_E490(a1, a2, 0, 0x2000u);
  if ( (a3 & 0xE000) != 0x2000 )
  {
    v4 = a3 >> 10;
    if ( a3 >> 10 != 8 )
    {
      if ( (a3 & 0xC000) == 0x4000 )
      {
        v36 = a3 >> 8;
        if ( (BYTE1(v3) & 0x37u) > 3 )
        {
LABEL_40:
          v37 = *(int *)(a1 + 264);
          *(_DWORD *)(a1 + 264) = v37 + 1;
          v38 = v36 & 7 | ((int)v3 >> 9) & 0x18;
          v39 = a1 + 80 * v37 + 272;
          *(_QWORD *)(a1 + 248) = v39;
          *(_BYTE *)(v39 + 4) = 8;
          *(_BYTE *)(v39 + 44) = 8;
          **(_BYTE **)(a1 + 248) = 1;
          *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
          if ( (v3 & 0x80u) != 0LL )
          {
            v63 = *(_QWORD *)(a1 + 248);
            if ( (v3 & 0x800) != 0 )
              *(_BYTE *)(v63 + 33) |= 0x20u;
            else
              *(_BYTE *)(v63 + 33) |= 0x10u;
            sub_E200(a1, a2, v3 & 0x7F);
            v64 = *(_QWORD *)(a1 + 248);
            *(_QWORD *)(a1 + 248) = v64 + 40;
            if ( v38 > 3 )
            {
              *(_BYTE *)(v64 + 41) = 1;
              if ( v38 > 15 )
                v65 = (v38 & 7) + 8 * (v38 > 23) + 18;
              else
                v65 = *((unsigned __int8 *)&qword_17908 + v38 - 4);
              *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v65;
            }
          }
          else
          {
            if ( v38 > 3 )
            {
              *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
              if ( v38 > 15 )
                v66 = (v36 & 7) + 8 * ((v36 & 7 | ((int)v3 >> 9) & 0x18) > 23) + 18;
              else
                v66 = *((unsigned __int8 *)&qword_17908 + v38 - 4);
              *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v66;
            }
            v40 = *(_QWORD *)(a1 + 248);
            *(_QWORD *)(a1 + 248) = v40 + 40;
            v41 = *(_BYTE *)(v40 + 73);
            v42 = v41 | 0x10;
            v43 = v41 | 0x20;
            if ( (v3 & 0x800) != 0 )
              v42 = v43;
            *(_BYTE *)(v40 + 73) = v42;
            sub_E200(a1, a2, v3 & 0x7F);
          }
          return 1;
        }
      }
      if ( (v3 & 0xF000) == 0x1000 )
      {
        v31 = *(int *)(a1 + 264);
        *(_DWORD *)(a1 + 264) = v31 + 1;
        v32 = a1 + 80 * v31 + 272;
        *(_QWORD *)(a1 + 248) = v32;
        *(_BYTE *)(v32 + 4) = 8;
        *(_BYTE *)(v32 + 44) = 8;
        **(_BYTE **)(a1 + 248) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
        if ( (v3 & 0x40) != 0 )
        {
          *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
          *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = (v4 & 2) == 0 ? 6 : 10;
          v33 = *(_QWORD *)(a1 + 248);
          *(_QWORD *)(a1 + 248) = v33 + 40;
          *(_BYTE *)(v33 + 41) = 1;
          *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = (v4 & 1) + 1;
          v34 = *(int *)(a1 + 264);
          *(_DWORD *)(a1 + 264) = v34 + 1;
          v35 = a1 + 80 * v34 + 272;
          *(_QWORD *)(a1 + 248) = v35;
          *(_BYTE *)(v35 + 4) = 8;
          *(_BYTE *)(v35 + 44) = 8;
          **(_BYTE **)(a1 + 248) = 1;
          *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
          sub_E610(a1, a2, v3);
        }
        else
        {
          v67 = v3;
          sub_E610(a1, a2, v3);
          v50 = *(int *)(a1 + 264);
          *(_DWORD *)(a1 + 264) = v50 + 1;
          v51 = a1 + 80 * v50 + 272;
          *(_QWORD *)(a1 + 248) = v51;
          *(_BYTE *)(v51 + 4) = 8;
          *(_BYTE *)(v51 + 44) = 8;
          **(_BYTE **)(a1 + 248) = 1;
          *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
          *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
          *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = (v67 & 0x200) == 0 ? 6 : 10;
          v52 = *(_QWORD *)(a1 + 248);
          *(_QWORD *)(a1 + 248) = v52 + 40;
          *(_BYTE *)(v52 + 41) = 1;
          *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = ((v67 >> 8) & 1) + 4;
        }
        return 1;
      }
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  if ( (a3 & 0x1C00) != 0 )
  {
    v13 = 1;
    return sub_E490(a1, a2, v13, v3);
  }
  v4 = a3 >> 10;
  if ( a3 >> 10 == 8 )
  {
LABEL_9:
    if ( (a3 & 0x380) != 0 )
    {
      if ( (a3 & 0x1C) != 0 )
      {
        v13 = 2;
        return sub_E490(a1, a2, v13, v3);
      }
      if ( a3 >> 5 != 258 )
      {
        v13 = 4;
        if ( (int)v3 >> 4 != 514 )
          return 0;
        return sub_E490(a1, a2, v13, v3);
      }
    }
    else if ( a3 >> 5 != 258 )
    {
      v13 = 4;
      if ( (int)v3 >> 4 != 514 )
      {
        v13 = 5;
        if ( (int)v3 >> 4 != 515 )
          return 0;
      }
      return sub_E490(a1, a2, v13, v3);
    }
    v13 = 3;
    return sub_E490(a1, a2, v13, v3);
  }
  if ( (a3 & 0xC000) != 0x4000 )
    goto LABEL_17;
  v36 = a3 >> 8;
  if ( (BYTE1(v3) & 0x37u) > 3 )
    goto LABEL_40;
LABEL_6:
  if ( (v3 & 0xFE40) != 0x800 )
  {
LABEL_17:
    if ( (v3 & 0xF400) == 0x4000 )
    {
      v44 = *(int *)(a1 + 264);
      v45 = v3 & 0x7F;
      *(_DWORD *)(a1 + 264) = v44 + 1;
      v46 = a1 + 80 * v44 + 272;
      *(_QWORD *)(a1 + 248) = v46;
      *(_BYTE *)(v46 + 4) = 8;
      *(_BYTE *)(v46 + 44) = 8;
      **(_BYTE **)(a1 + 248) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
      v47 = *(_QWORD *)(a1 + 248);
      v48 = ((int)v3 >> 8) & 3 | ((int)v3 >> 9) & 4;
      if ( (v3 & 0x80) != 0 )
      {
        *(_BYTE *)(v47 + 33) |= 0x80u;
        sub_E200(a1, a2, v45);
        v49 = *(_QWORD *)(a1 + 248);
        *(_QWORD *)(a1 + 248) = v49 + 40;
        *(_BYTE *)(v49 + 41) = 1;
        *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = *((unsigned __int8 *)&qword_17900 + v48);
      }
      else
      {
        *(_BYTE *)(v47 + 1) = 1;
        *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = *((unsigned __int8 *)&qword_17900
                                                  + (((int)v3 >> 8) & 3 | ((int)v3 >> 9) & 4u));
        v62 = *(_QWORD *)(a1 + 248);
        *(_QWORD *)(a1 + 248) = v62 + 40;
        *(_BYTE *)(v62 + 73) |= 0x80u;
        sub_E200(a1, a2, v45);
      }
      return 1;
    }
    if ( (v3 & 0x8000) != 0 )
    {
      v15 = *(int *)(a1 + 264);
      v16 = v4 & 3;
      v17 = v3 & 7;
      *(_DWORD *)(a1 + 264) = v15 + 1;
      v18 = a1 + 80 * v15 + 272;
      *(_QWORD *)(a1 + 248) = v18;
      *(_BYTE *)(v18 + 4) = 8;
      *(_BYTE *)(v18 + 44) = 8;
      **(_BYTE **)(a1 + 248) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
      v19 = byte_178E0[(v3 >> 3) & 3];
      v20 = *(_QWORD *)(a1 + 248);
      if ( (v3 & 0x80u) == 0LL )
      {
        *(_BYTE *)(v20 + 1) = 1;
        v53 = 6;
        if ( v16 != 2 )
        {
          v53 = 10;
          if ( v16 != 3 )
            v53 = (v16 == 1) + 1;
        }
        *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v53;
        v54 = *(_QWORD *)(a1 + 248);
        *(_QWORD *)(a1 + 248) = v54 + 40;
        *(_BYTE *)(v54 + 73) |= 0x10u;
        *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
        *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v17;
        *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = v19;
      }
      else
      {
        *(_BYTE *)(v20 + 33) |= 0x10u;
        *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
        *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v17;
        *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = v19;
        v21 = *(_QWORD *)(a1 + 248);
        *(_QWORD *)(a1 + 248) = v21 + 40;
        *(_BYTE *)(v21 + 41) = 1;
        v22 = *(_QWORD *)(a1 + 248);
        if ( v16 == 2 )
        {
          *(_WORD *)(v22 + 6) = 6;
        }
        else if ( v16 == 3 )
        {
          *(_WORD *)(v22 + 6) = 10;
        }
        else
        {
          *(_WORD *)(v22 + 6) = (v16 == 1) + 1;
        }
      }
      v23 = *(int *)(a1 + 264);
      v24 = ((int)v3 >> 8) & 3;
      *(_DWORD *)(a1 + 264) = v23 + 1;
      v25 = a1 + 80 * v23 + 272;
      *(_QWORD *)(a1 + 248) = v25;
      *(_BYTE *)(v25 + 4) = 8;
      *(_BYTE *)(v25 + 44) = 8;
      **(_BYTE **)(a1 + 248) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
      v26 = ~(_BYTE)v3 & 4 | ((int)v3 >> 5) & 3;
      v27 = byte_178E0[(~(_BYTE)v3 & 4 | ((int)v3 >> 5) & 3 | ((int)v3 >> 9) & 0x18) >> 3];
      v28 = *(_QWORD *)(a1 + 248);
      if ( (v3 & 0x4000) != 0 )
      {
        *(_BYTE *)(v28 + 33) |= 0x20u;
        *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
        *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v26;
        *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = v27;
        v29 = *(_QWORD *)(a1 + 248);
        *(_QWORD *)(a1 + 248) = v29 + 40;
        *(_BYTE *)(v29 + 41) = 1;
        v30 = *(_QWORD *)(a1 + 248);
        if ( v24 == 2 )
        {
          *(_WORD *)(v30 + 6) = 6;
        }
        else if ( v24 == 3 )
        {
          *(_WORD *)(v30 + 6) = 10;
        }
        else
        {
          *(_WORD *)(v30 + 6) = (v24 == 1) + 4;
        }
      }
      else
      {
        *(_BYTE *)(v28 + 1) = 1;
        v60 = 6;
        if ( v24 != 2 )
        {
          v60 = 10;
          if ( v24 != 3 )
            v60 = (v24 == 1) + 4;
        }
        *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v60;
        v61 = *(_QWORD *)(a1 + 248);
        *(_QWORD *)(a1 + 248) = v61 + 40;
        *(_BYTE *)(v61 + 73) |= 0x20u;
        *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
        *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v26;
        *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = v27;
      }
      return 1;
    }
    return 0;
  }
  v5 = *(int *)(a1 + 264);
  *(_DWORD *)(a1 + 264) = v5 + 1;
  v6 = a1 + 80 * v5 + 272;
  v7 = v3 & 0x100;
  *(_QWORD *)(a1 + 248) = v6;
  *(_BYTE *)(v6 + 4) = 8;
  *(_BYTE *)(v6 + 44) = 8;
  **(_BYTE **)(a1 + 248) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  if ( (v3 & 0x80u) == 0LL )
  {
    v55 = v7 == 0 ? 6 : 10;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v7 == 0 ? 6 : 10;
    v56 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v56 + 40;
    *(_BYTE *)(v56 + 73) |= 0x10u;
    sub_E200(a1, a2, v3 & 0x3F | 0x40);
    v57 = *(int *)(a1 + 264);
    *(_DWORD *)(a1 + 264) = v57 + 1;
    v58 = a1 + 80 * v57 + 272;
    *(_QWORD *)(a1 + 248) = v58;
    *(_BYTE *)(v58 + 4) = 8;
    *(_BYTE *)(v58 + 44) = 8;
    **(_BYTE **)(a1 + 248) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = 1;
    v59 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v59 + 40;
    *(_BYTE *)(v59 + 41) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v55;
  }
  else
  {
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = 4;
    v8 = *(_QWORD *)(a1 + 248);
    v9 = v7 == 0 ? 6 : 10;
    *(_QWORD *)(a1 + 248) = v8 + 40;
    *(_BYTE *)(v8 + 41) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v9;
    v10 = *(int *)(a1 + 264);
    *(_DWORD *)(a1 + 264) = v10 + 1;
    v11 = a1 + 80 * v10 + 272;
    *(_QWORD *)(a1 + 248) = v11;
    *(_BYTE *)(v11 + 4) = 8;
    *(_BYTE *)(v11 + 44) = 8;
    **(_BYTE **)(a1 + 248) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v9;
    v12 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v12 + 40;
    *(_BYTE *)(v12 + 73) |= 0x20u;
    sub_E200(a1, a2, v3 & 0x3F | 0x40);
  }
  return 1;
}

