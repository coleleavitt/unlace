__int64 __fastcall sub_5BE00(_WORD *dest, _WORD *a2, _WORD *a3, _WORD *a4)
{
  __int16 v7; // bp
  __int64 v8; // r8
  __int16 v9; // dx
  __int64 v10; // rax
  char *v11; // rdi
  char *v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // cx
  char *v17; // r8
  __int64 v18; // rax
  unsigned __int16 v19; // dx
  unsigned __int16 v20; // cx
  int v21; // r14d
  __int16 v22; // r13
  __int16 v23; // ax
  int v24; // edx
  int v25; // eax
  char *v26; // rdx
  __int16 v27; // ax
  __int64 v28; // rax
  char *v29; // rax
  __int16 v30; // r15
  int v31; // edx
  __int16 v32; // dx
  char *v33; // rax
  int v34; // eax
  int v35; // r8d
  int v36; // edi
  _WORD *v37; // rcx
  unsigned int v38; // esi
  unsigned __int16 *v39; // rdx
  signed __int16 v40; // ax
  __int16 v41; // r10
  __int64 v42; // r10
  __int64 v43; // rax
  char *v44; // r11
  char *v45; // r10
  unsigned __int64 v46; // r9
  unsigned __int16 v47; // dx
  unsigned __int16 v48; // si
  int *v50; // rcx
  int *v51; // rdx
  char *v53; // rax
  int v54; // eax
  __int16 *v55; // r13
  unsigned __int16 v56; // cx
  unsigned __int16 v57; // r15
  int v58; // edx
  int v59; // r14d
  unsigned __int16 v60; // r15
  __int16 v62; // dx
  char *v63; // rax
  unsigned __int16 *v64; // rax
  bool v65; // r15
  int *v66; // r11
  int *v67; // rdx
  unsigned __int16 v68; // si
  unsigned __int16 v69; // r10
  unsigned __int16 v70; // r9
  char *v71; // r8
  char *v72; // r8
  __int64 v75; // [rsp+18h] [rbp-100h]
  int v76; // [rsp+20h] [rbp-F8h]
  size_t n; // [rsp+28h] [rbp-F0h]
  unsigned __int16 v78[84]; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v79; // [rsp+D8h] [rbp-40h]

  v79 = __readfsqword(0x28u);
  memset(dest, 0, 2 * word_241DA2);
  *dest = 1;
  v7 = word_241DA2;
  v8 = 2LL * word_241DA2 - 2;
  if ( *a3 )
    goto LABEL_6;
  v9 = word_241DA2;
  v10 = (__int64)a3 + v8 - 2;
  if ( *(_WORD *)((char *)a3 + v8) )
  {
LABEL_5:
    if ( v9 <= 1 )
      goto LABEL_82;
LABEL_6:
    v11 = (char *)a4 + v8;
    if ( !*a4 )
    {
      v62 = word_241DA2;
      v63 = (char *)a4 + v8;
      while ( 1 )
      {
        v63 -= 2;
        if ( *((_WORD *)v63 + 1) )
          break;
        if ( !--v62 )
          return 4294967294LL;
      }
      if ( v62 > 1 )
        goto LABEL_7;
      return 4294967294LL;
    }
LABEL_7:
    v12 = (char *)a2 + v8;
    v13 = 0;
    v14 = 2 * ~(unsigned __int64)(unsigned __int16)(word_241DA2 - 1);
    while ( 1 )
    {
      v15 = *(_WORD *)&v12[v13];
      v16 = *(_WORD *)&v11[v13];
      if ( v15 < v16 )
        break;
      if ( v16 >= v15 )
      {
        v13 -= 2;
        if ( v13 != v14 )
          continue;
      }
      return 4294967293LL;
    }
    v17 = (char *)a3 + v8;
    v18 = 0;
    while ( 1 )
    {
      v19 = *(_WORD *)&v17[v18];
      v20 = *(_WORD *)&v11[v18];
      if ( v19 < v20 )
        break;
      if ( v20 >= v19 )
      {
        v18 -= 2;
        if ( v18 != v14 )
          continue;
      }
      return 4294967292LL;
    }
    v21 = (int)(sub_5B860((__int64)a4) + 15) >> 4;
    v22 = v21;
    word_241DA2 = v21;
    n = 2 * (__int16)v21;
    __memcpy_chk(&xmmword_241D00, a4, n, 160);
    qword_241B88 = (__int64)&xmmword_241D00;
    v23 = sub_5B860((__int64)&xmmword_241D00);
    v24 = v23 + 30;
    v25 = v23 + 15;
    if ( v25 < 0 )
      v25 = v24;
    word_241B78 = v25 >> 4;
    v75 = 2LL * (__int16)v21 - 2;
    v26 = (char *)&xmmword_241D00 + v75;
    v27 = v21;
    do
    {
      v26 -= 2;
      if ( *((_WORD *)v26 + 1) )
      {
        v28 = 2LL * v27 - 6;
        goto LABEL_21;
      }
      --v27;
    }
    while ( v27 );
    v28 = -6;
LABEL_21:
    v29 = (char *)&xmmword_241D00 + v28;
    v30 = 3;
    v31 = *(_DWORD *)v29;
    LOWORD(v29) = *((_WORD *)v29 + 2);
    word_241DA2 = 3;
    dword_241B90 = v31;
    word_241B94 = (__int16)v29;
    v76 = sub_5B860((__int64)&dword_241B90);
    dword_241B80 = v76 - 32;
    if ( (_WORD)v76 != 32 )
    {
      sub_5B780((__int64)&dword_241B90, v76 - 32);
      v30 = word_241DA2;
    }
    if ( (_WORD)dword_241B90 )
      goto LABEL_28;
    v32 = v30;
    v33 = (char *)&dword_241B90 + 2 * v30 - 2;
    do
    {
      v33 -= 2;
      if ( *((_WORD *)v33 + 1) )
        break;
      --v32;
    }
    while ( v32 );
    if ( v32 > 1 )
    {
LABEL_28:
      __memset_chk(v78, 0, 2 * v30, 160);
      v78[0] = 0;
      __memset_chk(&dword_241B98, 0, 2 * v30, 8);
      LOWORD(dword_241B98) = 0;
      v34 = sub_5B860((__int64)&dword_241B90);
      if ( v34 <= 0 )
      {
        if ( !unk_2439A0 )
          sub_198E10(522);
        BUG();
      }
      v35 = v34 - 1;
      v36 = 1 << (v34 & 0xF);
      v78[((v34 + 15) >> 4) - 1] |= 1 << ((v34 - 1) & 0xF);
      v37 = (_WORD *)&dword_241B98 + (__int16)((v34 + 16) >> 4) - 1;
      do
      {
        if ( v30 )
        {
          LOWORD(v38) = 0;
          v39 = v78;
          do
          {
            v40 = *v39;
            v41 = v38;
            ++v39;
            v38 = (unsigned int)v40 >> 31;
            *(v39 - 1) = v41 | (2 * v40);
          }
          while ( &v78[v30] != v39 );
          v30 = word_241DA2;
        }
        v42 = 2LL * v30 - 2;
        v43 = 0;
        v44 = (char *)v78 + v42;
        v45 = (char *)&dword_241B90 + v42;
        v46 = 2 * ~(unsigned __int64)(unsigned __int16)(v30 - 1);
        while ( 1 )
        {
          v47 = *(_WORD *)&v44[v43];
          v48 = *(_WORD *)&v45[v43];
          if ( v47 < v48 )
            break;
          if ( v48 >= v47 )
          {
            v43 -= 2;
            if ( v46 != v43 )
              continue;
          }
          if ( v30 )
          {
            v64 = v78;
            v65 = 0;
            v66 = (int *)((char *)&dword_241B90 - v46);
            v67 = &dword_241B90;
            do
            {
              v69 = *v64;
              v70 = *(_WORD *)v67;
              v68 = *v64 - *(_WORD *)v67;
              if ( v65 )
              {
                --v68;
                v65 = v70 >= v69;
              }
              else
              {
                v65 = v69 < v70;
              }
              v67 = (int *)((char *)v67 + 2);
              *v64++ = v68;
            }
            while ( v67 != v66 );
          }
          *v37 |= v36;
          v30 = word_241DA2;
          break;
        }
        LOWORD(v36) = (unsigned __int16)v36 >> 1;
        if ( !(_WORD)v36 )
        {
          --v37;
          LOWORD(v36) = 0x8000;
        }
      }
      while ( v35-- != 0 );
      __memset_chk(v78, 0, 2 * v30, 160);
    }
    sub_5B780((__int64)&dword_241B98, 1);
    dword_241B80 = (v76 - 17) % 16 + 1;
    v50 = (int *)((char *)&dword_241B98 + 2 * (unsigned __int16)(word_241DA2 - 1) + 2);
    v51 = &dword_241B98;
    do
    {
      if ( (*(_WORD *)v51)++ != 0xFFFF )
        break;
      v51 = (int *)((char *)v51 + 2);
    }
    while ( v50 != v51 );
    if ( (int)sub_5B860((__int64)&dword_241B98) > 32 )
    {
      sub_5B780((__int64)&dword_241B98, 1);
      dword_241B80 = (v76 - 17) % 16;
    }
    dword_241B7A = dword_241B98;
    word_241DA2 = v21;
    v53 = (char *)a3 + v75;
    while ( 1 )
    {
      v53 -= 2;
      if ( *((_WORD *)v53 + 1) )
        break;
      if ( !--v22 )
        return 0;
    }
    if ( !v22 )
      return 0;
    v54 = 16 * v22;
    v55 = &a3[v22 - 1];
    if ( *v55 < 0 )
    {
      v59 = v54 - 1;
      v60 = 0x4000;
      memcpy(dest, a2, n);
    }
    else
    {
      v56 = 0x8000;
      do
      {
        v57 = v56;
        v56 >>= 1;
        v58 = v54--;
      }
      while ( ((unsigned __int16)*v55 & v56) == 0 );
      v59 = v58 - 2;
      memcpy(dest, a2, n);
      v60 = v57 >> 2;
      if ( !v60 )
      {
        --v55;
        v60 = 0x8000;
      }
      if ( !v59 )
        goto LABEL_78;
    }
    do
    {
      sub_5B900(v78, dest, dest);
      if ( ((unsigned __int16)*v55 & v60) != 0 )
        sub_5B900(dest, v78, a2);
      else
        memcpy(dest, v78, 2 * word_241DA2);
      v60 >>= 1;
      if ( !v60 )
      {
        --v55;
        v60 = 0x8000;
      }
      --v59;
    }
    while ( v59 );
LABEL_78:
    dword_241B98 = 0;
    memset(&unk_241BA0, 0, 0xA0u);
    dword_241B90 = 0;
    qword_241B88 = 0;
    dword_241B80 = 0;
    dword_241B7A = 0;
    word_241B78 = 0;
    word_241BA2[79] = 0;
    word_241DA2 = v7;
    xmmword_241D00 = 0;
    xmmword_241D10 = 0;
    xmmword_241D20 = 0;
    xmmword_241D30 = 0;
    xmmword_241D40 = 0;
    return 0;
  }
  while ( --v9 )
  {
    v10 -= 2;
    if ( *(_WORD *)(v10 + 2) )
      goto LABEL_5;
  }
LABEL_82:
  v71 = (char *)a2 + v8;
  if ( *a2 )
    return 0;
  v72 = v71 - 2;
  if ( *((_WORD *)v72 + 1) )
    return (unsigned int)-(v7 <= 1);
  while ( --v7 )
  {
    v72 -= 2;
    if ( *((_WORD *)v72 + 1) )
      return (unsigned int)-(v7 <= 1);
  }
  return 0xFFFFFFFFLL;
}
