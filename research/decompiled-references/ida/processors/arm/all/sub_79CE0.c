__int64 __fastcall sub_79CE0(_DWORD *a1, int *a2, __int64 a3, int a4)
{
  unsigned int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  int v11; // r13d
  int v12; // r14d
  int v13; // r9d
  int v14; // r8d
  __int64 v15; // rsi
  int v16; // r11d
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rdx
  char v20; // cl
  int v21; // r10d
  int v22; // ecx
  int v23; // r9d
  int v24; // ecx
  int v25; // ecx
  int v26; // r12d
  __int16 v27; // r9
  int v28; // r13d
  int v29; // r9d
  int v30; // r8d
  int v31; // r11d
  int v32; // ecx
  char v33; // cl
  int v34; // r9d
  int v35; // edx
  char v36; // cl
  int v37; // r9d
  int v38; // edx
  char v39; // cl
  int v40; // ecx
  int v41; // esi
  int v43; // r13d
  int v44; // r9d
  int v45; // r8d
  int v46; // r11d
  int v47; // ecx
  char v48; // cl
  int v49; // r9d
  int v50; // edx
  char v51; // cl
  int v52; // ecx
  int v53; // r10d
  _DWORD v54[18]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v55; // [rsp+48h] [rbp-30h]

  v55 = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    v8 = sub_77F00(a3, 0);
    v9 = v8;
    if ( v8 - 1 > 3 )
    {
LABEL_74:
      if ( under_debugger )
        goto LABEL_80;
      interr(10458);
      goto LABEL_76;
    }
    v10 = a4 / (int)v8;
    if ( a4 / (int)v9 != 8 )
    {
LABEL_4:
      if ( v10 != 16 )
      {
        if ( v10 != 4 )
        {
          if ( !under_debugger )
            interr(10459);
LABEL_80:
          BUG();
        }
        v11 = *a2;
        v12 = *a2 - v9;
        if ( v12 < 0 )
          return 0;
        v13 = a2[1];
        v14 = v9;
        v15 = 0;
        while ( v14 > v11 )
        {
LABEL_46:
          v15 = (unsigned int)(v15 + 1);
          ++v14;
          if ( (int)v15 > v12 )
            return 0;
        }
        v16 = v15;
        v17 = v15;
        do
        {
          if ( (v13 & (1 << v17)) != 0 )
            goto LABEL_46;
          ++v17;
        }
        while ( v14 != v17 );
        v18 = v9 + v15;
        v19 = 1;
        do
        {
          v20 = v16++;
          v13 |= 1 << v20;
        }
        while ( v16 != v18 );
        a2[1] = v13;
        if ( (_DWORD)v15 == -1 )
          return 0;
        v21 = ((int)v9 + 1) >> 1;
        v22 = (int)v15 / 2;
        if ( v21 + (int)v15 / 2 <= a2[2] )
        {
          v23 = a2[3] | (1 << v22);
          if ( v21 == 2 )
            v23 |= 1 << (v22 + 1);
          v24 = v15 + 3;
          a2[3] = v23;
          if ( (int)v15 >= 0 )
            v24 = v15;
          v25 = v24 >> 2;
          v19 = (unsigned int)(v25 + 1);
          if ( (int)v19 <= a2[4] )
          {
            a2[5] |= 1 << v25;
            v26 = v15 + 93;
            if ( (_DWORD)v15 != -94 )
            {
              if ( (_DWORD)v9 != 1 )
              {
                v27 = 93;
                goto LABEL_41;
              }
LABEL_72:
              cleanup_argloc();
              *a1 = 3;
              a1[2] = v26;
              return 1;
            }
            return 0;
          }
        }
        goto LABEL_73;
      }
      v28 = a2[4];
      if ( v28 - (int)v9 < 0 )
        return 0;
      v29 = a2[5];
      v30 = v9;
      v15 = 0;
      while ( v30 > v28 )
      {
LABEL_48:
        v15 = (unsigned int)(v15 + 1);
        ++v30;
        if ( (int)v15 > v28 - (int)v9 )
          return 0;
      }
      v31 = v15;
      v32 = v15;
      do
      {
        if ( (v29 & (1 << v32)) != 0 )
          goto LABEL_48;
        ++v32;
      }
      while ( v32 != v30 );
      v18 = v15 + v9;
      do
      {
        v33 = v31++;
        v29 |= 1 << v33;
      }
      while ( v31 != v18 );
      a2[5] = v29;
      if ( (_DWORD)v15 == -1 )
        return 0;
      v19 = (unsigned int)(2 * v15 + 2 * v9);
      if ( (int)v19 <= a2[2] )
      {
        v34 = a2[3];
        v35 = 0;
        do
        {
          v36 = v35++ + 2 * v15;
          v34 |= 1 << v36;
        }
        while ( 2 * (int)v9 > v35 );
        a2[3] = v34;
        v19 = (unsigned int)(4 * v15 + 4 * v9);
        if ( (int)v19 <= *a2 )
        {
          v37 = a2[1];
          v38 = 0;
          do
          {
            v39 = v38++ + 4 * v15;
            v37 |= 1 << v39;
          }
          while ( 4 * (int)v9 > v38 );
          a2[1] = v37;
          v26 = v15 + 45;
          if ( (_DWORD)v15 == -46 )
            return 0;
          v27 = 45;
          if ( (_DWORD)v9 == 1 )
            goto LABEL_72;
LABEL_41:
          if ( (unsigned __int64)v18 <= 0x10 )
          {
            v40 = v26;
            v41 = v15 - v26;
            do
            {
              v54[v41 + v40] = v40;
              ++v40;
            }
            while ( v40 != (_DWORD)v9 + v26 );
            sub_79AD0((__int64)a1, (__int64)v54, v26 - v27, v9, (unsigned int)a4, 1, v10);
            return 1;
          }
LABEL_76:
          if ( !under_debugger )
            interr(10460);
          goto LABEL_80;
        }
      }
LABEL_73:
      sub_780A0(v9, v15, v19);
      goto LABEL_74;
    }
  }
  else
  {
    v10 = a4;
    v9 = 1;
    if ( a4 != 8 )
      goto LABEL_4;
  }
  v43 = a2[2];
  if ( v43 - (int)v9 < 0 )
    return 0;
  v44 = a2[3];
  v45 = v9;
  v15 = 0;
  while ( v43 < v45 )
  {
LABEL_68:
    v15 = (unsigned int)(v15 + 1);
    ++v45;
    if ( v43 - (int)v9 < (int)v15 )
      return 0;
  }
  v46 = v15;
  v47 = v15;
  do
  {
    if ( (v44 & (1 << v47)) != 0 )
      goto LABEL_68;
    ++v47;
  }
  while ( v45 != v47 );
  v18 = v15 + v9;
  do
  {
    v48 = v46++;
    v44 |= 1 << v48;
  }
  while ( v18 != v46 );
  a2[3] = v44;
  if ( (_DWORD)v15 == -1 )
    return 0;
  v19 = (unsigned int)(2 * v15 + 2 * v9);
  if ( (int)v19 > *a2 )
    goto LABEL_73;
  v49 = a2[1];
  v50 = 0;
  do
  {
    v51 = v50++ + 2 * v15;
    v49 |= 1 << v51;
  }
  while ( 2 * (int)v9 > v50 );
  a2[1] = v49;
  v19 = (unsigned int)(((int)v9 + 1) >> 1);
  v52 = (int)v15 / 2;
  if ( (int)v19 + (int)v15 / 2 > a2[4] )
    goto LABEL_73;
  v53 = a2[5] | (1 << v52);
  if ( (_DWORD)v19 != 2 )
  {
    a2[5] = v53;
    v26 = v15 + 61;
    if ( (_DWORD)v15 == -62 )
      return 0;
    if ( (_DWORD)v9 == 1 )
      goto LABEL_72;
    goto LABEL_67;
  }
  a2[5] = v53 | (1 << (v52 + 1));
  v26 = v15 + 61;
  if ( (_DWORD)v15 != -62 )
  {
LABEL_67:
    v27 = 61;
    goto LABEL_41;
  }
  return 0;
}
