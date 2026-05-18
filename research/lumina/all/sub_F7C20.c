__int64 __fastcall sub_F7C20(
        __int64 a1,
        unsigned __int8 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int64 *a5,
        double a6)
{
  unsigned __int8 *v6; // r14
  int v10; // ecx
  __int64 *v11; // rax
  unsigned int v12; // r13d
  __int64 v14; // r13
  char *v15; // rsi
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int16 v23; // dx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rdi
  __int64 *v28; // rax
  _QWORD *v29; // rax
  unsigned __int8 v30; // al
  int v31; // ecx
  int v32; // r8d
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rax
  bool v37; // zf
  const char *v38; // rax
  __int64 v39; // rbx
  int v40; // edx
  __int64 v41; // rbp
  __int64 *v42; // rax
  __int64 v43; // r9
  bool v44; // [rsp+4h] [rbp-54h]
  int v45; // [rsp+4h] [rbp-54h]
  const char *v46; // [rsp+8h] [rbp-50h]
  __int64 v47[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = a2;
  v10 = *a2;
  v47[1] = __readfsqword(0x28u);
  v47[0] = 0;
  if ( v10 != 174 )
    goto LABEL_3;
  do
  {
    do
    {
      v6 = *((unsigned __int8 **)v6 + 2);
      v10 = *v6;
    }
    while ( v10 == 174 );
LABEL_3:
    ;
  }
  while ( v10 == 181 );
  if ( v10 == 176 )
    v10 = v6[2];
  if ( v10 != 36 )
  {
    if ( v10 == 173 )
    {
      v6 = *((unsigned __int8 **)v6 + 2);
      v10 = *v6;
      if ( (*v6 & 0xFD) != 0x99 )
      {
        v12 = sub_F7C20(a1, v6, a3, a4, v47);
        v11 = (__int64 *)v47[0];
        if ( !v12 )
        {
          if ( v47[0] )
          {
            sub_CB5F0(v47[0]);
            if ( (*(_BYTE *)(v47[0] + 20) & 8) != 0 )
            {
              a6 = -*(double *)v47[0];
              *(double *)v47[0] = a6;
              v27 = v47[0];
            }
            else
            {
              v24 = 0;
              if ( *(_QWORD *)v47[0] == 0x8000000000000000LL )
              {
                *(_QWORD *)v47[0] = 0x43E0000000000000LL;
                v27 = v47[0];
                *(_WORD *)(v47[0] + 20) = *(_WORD *)(v47[0] + 20) & 0xF240 | 8;
              }
              else
              {
                *(_QWORD *)v47[0] = -*(_QWORD *)v47[0];
                v27 = v47[0];
              }
            }
            sub_EF100(v27, a4, a3, v24, v25, v26, a6);
            v11 = (__int64 *)v47[0];
          }
          goto LABEL_13;
        }
        goto LABEL_53;
      }
      v44 = (v10 & 0xFFFFFFFD) == 153;
      if ( (v10 & 0xFFFFFFFD) != 0x99 )
        goto LABEL_11;
      v14 = -1;
      v46 = "-";
    }
    else
    {
      v44 = (v10 & 0xFFFFFFFD) == 153;
      if ( v10 != 117 && (v10 & 0xFFFFFFFD) != 0x99 )
      {
        if ( v10 != 121 )
        {
LABEL_11:
          if ( v10 != 154 )
          {
            v11 = nullptr;
            v12 = 0;
            if ( v10 == 170 )
            {
              v11 = sub_DC1C0(a1, 0x38u);
              if ( v11 )
              {
                v11[3] = a1;
                v47[0] = (__int64)v11;
                *((_WORD *)v11 + 10) = 4;
                *v11 = *(_BYTE *)(*((_QWORD *)v6 + 1) + 4LL) == 0;
                v11 = (__int64 *)v47[0];
              }
            }
            goto LABEL_13;
          }
          v15 = (char *)&word_38;
          v28 = sub_DC1C0(a1, 0x38u);
          if ( v28 )
          {
            v28[3] = a1;
            v47[0] = (__int64)v28;
            *((_WORD *)v28 + 10) = 1;
            v36 = *((_QWORD *)v6 + 1);
            v37 = v36 == -2;
            v38 = (const char *)(v36 + 2);
            v39 = (__int64)v38;
            if ( v37 )
            {
              v41 = 0;
              v40 = -1;
            }
            else
            {
              v40 = (strlen(v38) & 0x3FFFFFFF) - 1;
              v41 = v40 / 2;
            }
            v12 = 0;
            v42 = sub_DD010(a1, v39, v40);
            sub_F11D0(v47[0], v42, v41, 0, sub_D42A0, v43);
            v11 = (__int64 *)v47[0];
            goto LABEL_13;
          }
          goto LABEL_41;
        }
        v15 = (char *)&word_38;
        v11 = sub_DC1C0(a1, 0x38u);
        if ( v11 )
        {
          v11[3] = a1;
          *((_WORD *)v11 + 10) = 1;
LABEL_53:
          v12 = 0;
LABEL_13:
          *a5 = (__int64)v11;
          return v12;
        }
LABEL_41:
        v47[0] = 0;
        goto LABEL_42;
      }
      v14 = 1;
      v46 = "";
    }
    v15 = (char *)&word_38;
    v16 = sub_DC1C0(a1, 0x38u);
    if ( v16 )
    {
      LODWORD(v19) = 1;
      v16[3] = a1;
      v47[0] = (__int64)v16;
      *((_WORD *)v16 + 10) = 1;
      if ( (v6[5] & 4) != 0 )
      {
        v21 = *((int *)v6 + 2);
        *((_WORD *)v16 + 10) = 4;
        *v16 = v21 * v14;
        v22 = v47[0];
      }
      else
      {
        v15 = "%s%s";
        v29 = (_QWORD *)sub_E8280(a1, "%s%s", v46, *((const char **)v6 + 1));
        if ( !v29 )
        {
LABEL_42:
          if ( !*(_BYTE *)(a1 + 103) && !*(_BYTE *)(a1 + 104) )
            sub_DBE60(a1);
          v12 = 7;
          sub_C9940(v47[0], (__int64)v15, v17, v18, v19, v20);
          return v12;
        }
        v22 = v47[0];
        if ( v47[0] )
        {
          sub_F11D0(v47[0], v29, -1, 1, sub_D42A0, v20);
          v22 = v47[0];
        }
      }
      if ( a4 == 65 && v44 )
        sub_EF100(v22, 67, 1u, v18, v19, v20, a6);
      else
        sub_EF100(v22, a4, 1u, v18, v19, v20, a6);
      v11 = (__int64 *)v47[0];
      v23 = *(_WORD *)(v47[0] + 20);
      if ( (v23 & 0x2C) != 0 )
        *(_WORD *)(v47[0] + 20) = v23 & 0xFFFD;
      v12 = 0;
      if ( a3 != 1 )
      {
        if ( (*((_BYTE *)v11 + 20) & 2) != 0 )
        {
          if ( *((_BYTE *)v11 + 22) != a3 )
          {
            v12 = sub_E03B0((__int64)v11, a3);
            v11 = (__int64 *)v47[0];
          }
        }
        else
        {
          *((_BYTE *)v11 + 22) = a3;
        }
      }
      goto LABEL_13;
    }
    goto LABEL_41;
  }
  v30 = sub_C6620(*((unsigned __int8 **)v6 + 1), 0);
  v45 = v30;
  v12 = sub_F7C20(a1, *((_QWORD *)v6 + 2), a3, v30, a5);
  if ( *a5 )
  {
    sub_F10A0(*a5, v45, 1u, v31, v32, v45, a6);
    sub_EF100(*a5, a4, 1u, v33, v34, v35, a6);
  }
  return v12;
}
