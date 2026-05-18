__int64 __fastcall sub_1632B0(
        __int64 a1,
        _BYTE *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        __int64 a5,
        int a6,
        double a7,
        __int64 **a8)
{
  __int64 v9; // rdi
  __int64 *v10; // r14
  bool v11; // zf
  const char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r13
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // r8d
  const char **v23; // rdi
  int v24; // ebp
  unsigned __int8 *i; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  char *v29; // r15
  int v30; // edx
  const char *v31; // rax
  __int64 v32; // rsi
  const char *v33; // rdx
  int v34; // eax
  __int64 *v35; // r15
  __int64 v36; // r8
  unsigned int v37; // r11d
  __int64 v38; // rax
  _DWORD *v39; // rax
  char *v40; // rax
  bool v41; // bp
  __int64 v42; // rdi
  char *v43; // rdx
  char *v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned int v49; // ebx
  __int64 v50; // rdi
  int v52; // edx
  int v53; // edx
  int v54; // edx
  _DWORD *v55; // rax
  __int64 v56; // rdx
  char *v57; // rax
  __int64 *v58; // [rsp+0h] [rbp-238h]
  int v59; // [rsp+Ch] [rbp-22Ch]
  int v60; // [rsp+10h] [rbp-228h]
  _DWORD *v61; // [rsp+10h] [rbp-228h]
  unsigned int v63; // [rsp+20h] [rbp-218h]
  signed int v68; // [rsp+40h] [rbp-1F8h]
  unsigned int v69; // [rsp+44h] [rbp-1F4h]
  char *v70; // [rsp+58h] [rbp-1E0h] BYREF
  __int64 v71; // [rsp+60h] [rbp-1D8h] BYREF
  char *v72; // [rsp+68h] [rbp-1D0h]
  __int64 v73; // [rsp+94h] [rbp-1A4h]
  __int16 v74; // [rsp+180h] [rbp-B8h]
  unsigned __int64 v75; // [rsp+1F8h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  *a8 = nullptr;
  v9 = *(_QWORD *)(a1 + 24);
  v70 = nullptr;
  v69 = a6 != 0;
  if ( v9 )
    xmmword_241500(v9);
  v10 = sub_DC1C0(a1, 0x38u);
  v63 = 0;
  v59 = 0;
  v58 = &v71;
  while ( 1 )
  {
    sub_E3CE0(&v71, a1);
    if ( !v10 )
    {
      v41 = 1;
      if ( !v63 )
      {
        v41 = 0;
        if ( !*(_BYTE *)(a1 + 103) )
        {
LABEL_93:
          v41 = 0;
          v63 = 0;
          *a8 = v10;
        }
      }
      goto LABEL_59;
    }
    if ( v70 )
      sub_C9250(a1, v70);
    v11 = *(_BYTE *)(a1 + 111) == 0;
    v70 = nullptr;
    if ( v11 )
      sub_CC760(a1);
    v12 = nullptr;
    v13 = sub_144100((__int64)&v71, 0, a3, a2, a7);
    v18 = v13;
    if ( !v13 )
      goto LABEL_84;
    v19 = *(_BYTE *)(v13 + 63);
    if ( v19 == 1 )
    {
      v12 = "cannot open virtual table: %s";
      sub_DBD10((__int64)&v71, "cannot open virtual table: %s", (const char *)a3);
      goto LABEL_84;
    }
    if ( *(char *)(v18 + 48) < 0 )
    {
      v12 = "cannot open table without rowid: %s";
      sub_DBD10((__int64)&v71, "cannot open table without rowid: %s", (const char *)a3);
      goto LABEL_84;
    }
    if ( v19 == 2 )
    {
      v12 = "cannot open view: %s";
      sub_DBD10((__int64)&v71, "cannot open view: %s", (const char *)a3);
LABEL_84:
      v57 = v72;
      if ( v72 )
      {
        v12 = v70;
        if ( v70 )
        {
          sub_C9250(a1, v70);
          v57 = v72;
        }
        v11 = *(_BYTE *)(a1 + 111) == 0;
        v70 = v57;
        v72 = nullptr;
        if ( v11 )
LABEL_88:
          sub_CC7E0(a1, (__int64)v12, v14);
LABEL_55:
        v41 = 1;
        v63 = 1;
        goto LABEL_56;
      }
LABEL_54:
      if ( !*(_BYTE *)(a1 + 111) )
        goto LABEL_88;
      goto LABEL_55;
    }
    v10[6] = v18;
    v12 = *(const char **)(v18 + 96);
    v20 = -1048576;
    v21 = *(_QWORD *)(a1 + 32);
    if ( v12 )
      v20 = 32LL * (int)sub_CFB20(a1, (__int64)v12);
    v10[5] = *(_QWORD *)(v21 + v20);
    v22 = *(__int16 *)(v18 + 54);
    if ( v22 > 0 )
    {
      v23 = *(const char ***)(v18 + 8);
      v24 = 0;
      while ( 1 )
      {
        v12 = *v23;
        for ( i = a4; ; ++i )
        {
          v26 = *(unsigned __int8 *)v12;
          v27 = *i;
          if ( (_DWORD)v26 != (_DWORD)v27 )
            break;
          if ( !*v12 )
            goto LABEL_22;
LABEL_19:
          ++v12;
        }
        if ( byte_1BF000[v26] == byte_1BF000[v27] )
          goto LABEL_19;
        ++v24;
        v23 += 2;
        if ( v22 == v24 )
        {
LABEL_50:
          if ( v70 )
            sub_C9250(a1, v70);
          v12 = "no such column: \"%s\"";
          v40 = (char *)sub_E8280(a1, "no such column: \"%s\"", a4);
          goto LABEL_53;
        }
      }
    }
    v24 = 0;
LABEL_22:
    if ( v22 == v24 )
      goto LABEL_50;
    if ( a6 )
    {
      v28 = *(_QWORD *)(v18 + 16);
      if ( (*(_BYTE *)(a1 + 49) & 0x40) == 0 )
      {
        v29 = nullptr;
        if ( !v28 )
          goto LABEL_36;
        goto LABEL_26;
      }
      v12 = *(const char **)(v18 + 72);
      v29 = nullptr;
      if ( v12 )
      {
        do
        {
          v54 = *((_DWORD *)v12 + 10);
          if ( v54 > 0 )
          {
            v55 = v12 + 64;
            v56 = (__int64)&v12[16 * (v54 - 1) + 80];
            do
            {
              if ( *v55 == v24 )
                v29 = "foreign key";
              v55 += 4;
            }
            while ( (_DWORD *)v56 != v55 );
          }
          v12 = *((const char **)v12 + 1);
        }
        while ( v12 );
        goto LABEL_34;
      }
      if ( v28 )
      {
        do
        {
LABEL_26:
          v30 = *(unsigned __int16 *)(v28 + 94);
          if ( (_WORD)v30 )
          {
            v31 = *(const char **)(v28 + 8);
            v32 = (unsigned int)(v30 - 1);
            v33 = v31 + 2;
            v12 = &v31[2 * v32 + 2];
            while ( 1 )
            {
              v34 = *(__int16 *)v31;
              if ( (_WORD)v34 == 0xFFFE || v34 == v24 )
              {
                v29 = "indexed";
                v31 = v33;
                if ( v12 == v33 )
                  break;
              }
              else
              {
                v31 = v33;
                if ( v12 == v33 )
                  break;
              }
              v33 += 2;
            }
          }
          v28 = *(_QWORD *)(v28 + 40);
LABEL_34:
          ;
        }
        while ( v28 );
        if ( v29 )
        {
          if ( v70 )
            sub_C9250(a1, v70);
          v12 = "cannot open %s column for writing";
          v40 = (char *)sub_E8280(a1, "cannot open %s column for writing", v29);
LABEL_53:
          v70 = v40;
          goto LABEL_54;
        }
      }
    }
LABEL_36:
    v35 = sub_E1FB0(&v71);
    v10[3] = (__int64)v35;
    if ( v35 )
    {
      v36 = *(_QWORD *)(v18 + 96);
      v60 = 0;
      v37 = -32768;
      if ( v36 )
      {
        v37 = sub_CFB20(a1, v36);
        v60 = 1 << v37;
      }
      v68 = v37;
      sub_E1770(v35, 2, v37, v69, *(_DWORD *)v36, *(_DWORD *)(v36 + 4));
      v38 = *((int *)v35 + 36);
      if ( (int)v38 > 0 )
        *(_WORD *)(v35[17] + 24 * v38 - 22) = 1;
      v12 = &byte_6;
      v39 = (_DWORD *)sub_E2F10((__int64)v35, 6, byte_1BAA70);
      *((_DWORD *)v35 + 50) |= v60;
      if ( v68 != 1 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(*v35 + 32) + 32LL * v68 + 8);
        if ( *(_BYTE *)(v14 + 17) )
          *((_DWORD *)v35 + 51) |= v60;
      }
      if ( !*(_BYTE *)(a1 + 103) )
      {
        v39[1] = v68;
        v52 = *(_DWORD *)(v18 + 40);
        v12 = (_BYTE *)(&dword_0 + 2);
        v61 = v39;
        v39[3] = v69;
        v39[2] = v52;
        sub_DCC50((__int64)v35, 2, *(_QWORD *)v18, 0, v16, v17);
        if ( !*(_BYTE *)(a1 + 103) )
        {
          if ( a6 )
            *((_BYTE *)v61 + 24) = 113;
          v53 = *(_DWORD *)(v18 + 40);
          v61[9] = v68;
          *((_BYTE *)v61 + 25) = -3;
          v61[8] = v53;
          v61[10] = *(__int16 *)(v18 + 54) + 1;
          v61[20] = *(__int16 *)(v18 + 54);
          v74 = 0;
          v12 = (const char *)&v71;
          v73 = 0x100000001LL;
          sub_F1A70((__int64)v35, (__int64)&v71);
        }
      }
    }
    *((_WORD *)v10 + 4) = v24;
    v10[4] = a1;
    if ( *(_BYTE *)(a1 + 111) )
    {
      if ( *(_BYTE *)(a1 + 103) )
        goto LABEL_70;
    }
    else
    {
      sub_CC7E0(a1, (__int64)v12, v14);
      if ( *(_BYTE *)(a1 + 103) )
      {
LABEL_70:
        v15 = v63;
        v41 = v63 != 0;
        goto LABEL_56;
      }
    }
    v12 = (const char *)a5;
    ++v59;
    v63 = sub_1630E0((__int64)v10, a5, (__int64 *)&v70, a7);
    if ( v59 == 50 || v63 != 17 )
      break;
    sub_D7990((__int64)&v71);
    v63 = 17;
  }
  v14 = v63;
  v41 = v59 == 50 || v63 != 17;
  if ( !v63 )
  {
    if ( !*(_BYTE *)(a1 + 103) )
      goto LABEL_93;
    v41 = 0;
  }
LABEL_56:
  v42 = v10[3];
  if ( v42 )
    sub_11E630(v42, (__int64)v12, v14, v15, v16, v17);
  sub_C9250(a1, v10);
LABEL_59:
  v43 = "%s";
  if ( !v70 )
    v43 = nullptr;
  sub_F63C0(a1, v63, v43);
  v44 = v70;
  if ( v70 )
    sub_C9250(a1, v70);
  sub_D7990((__int64)v58);
  if ( *(_BYTE *)(a1 + 103) || (v49 = 0, v41) )
  {
    v44 = (char *)v63;
    v49 = sub_D42C0(a1, v63, v45, v46, v47, v48);
  }
  v50 = *(_QWORD *)(a1 + 24);
  if ( v50 )
    xmmword_241510(v50, v44, v45);
  return v49;
}
