__int64 __fastcall sub_10AF50(__int64 a1, const char *a2, const char *a3, _QWORD *a4)
{
  const char *v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  const char *v14; // rax
  __int64 v15; // rbp
  __int64 *v16; // rax
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  size_t v21; // r15
  __int64 v22; // rsi
  unsigned int v23; // ebx
  __int64 v24; // rdi
  __int64 v26; // r15
  const char **v27; // rsi
  int v28; // eax
  const char *v29; // rdi
  __int64 *v30; // rax
  __int64 *v31; // rbx
  __int64 v32; // rax
  _QWORD *v33; // rsi
  __int64 v34; // rax
  const char *v35; // rsi
  char *v36; // rax
  unsigned __int8 *v37; // r9
  unsigned int v38; // edx
  __int64 v39; // rcx
  const char *v40; // rax
  unsigned __int8 *v41; // r8
  int v42; // eax
  int v43; // r11d
  int v44; // edx
  unsigned __int8 v45; // al
  int v46; // edi
  __int64 v47; // r10
  char *v48; // rsi
  const char *v49; // rsi
  __int64 v51; // [rsp+0h] [rbp-68h]
  __int64 (__fastcall *v52)(__int64, const char **, _UNKNOWN **); // [rsp+0h] [rbp-68h]
  size_t v53; // [rsp+0h] [rbp-68h]
  unsigned __int8 *v54; // [rsp+0h] [rbp-68h]
  __int64 v55; // [rsp+0h] [rbp-68h]
  size_t v56; // [rsp+8h] [rbp-60h]
  char *s; // [rsp+10h] [rbp-58h]
  unsigned int v58; // [rsp+1Ch] [rbp-4Ch]
  const char *v59[9]; // [rsp+20h] [rbp-48h] BYREF

  v6 = a2;
  v7 = *(_QWORD *)(a1 + 24);
  v59[1] = (const char *)__readfsqword(0x28u);
  if ( v7 )
    xmmword_241500(v7);
  v8 = (__int64)a2;
  v59[0] = nullptr;
  v9 = *(_QWORD *)a1;
  v56 = strlen(a2);
  if ( a4 )
  {
    *a4 = 0;
    if ( (*(_BYTE *)(a1 + 50) & 1) == 0 )
    {
      v22 = 1;
      *a4 = sub_105970("not authorized");
      goto LABEL_18;
    }
  }
  else if ( (*(_BYTE *)(a1 + 50) & 1) == 0 )
  {
    v22 = 1;
    goto LABEL_18;
  }
  v11 = (__int64)a3;
  v14 = "sqlite3_extension_init";
  if ( a3 )
    v14 = a3;
  s = (char *)v14;
  if ( v56 > 0x1000 )
    goto LABEL_22;
  v15 = (*(__int64 (__fastcall **)(__int64, const char *))(v9 + 72))(v9, a2);
  if ( !v15 )
  {
    v16 = sub_105970("%s.%s", a2, "so");
    v17 = (__int64)v16;
    if ( !v16 )
    {
LABEL_28:
      v22 = 7;
      goto LABEL_18;
    }
    a2 = (const char *)v16;
    v8 = (__int64)v16;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v9 + 72))(v9, v16);
    sub_C91C0(v17, (__int64)a2);
    if ( !v15 )
    {
LABEL_22:
      if ( a4 )
      {
        if ( (unsigned int)sub_FEBD0(v8, (__int64)a2) )
        {
          *a4 = 0;
        }
        else
        {
          v35 = (const char *)sub_D1E10(v56 + 300, (__int64)a2);
          v59[0] = v35;
          *a4 = v35;
          if ( v35 )
          {
            sub_E89C0(v56 + 300, (__int64)v35, "unable to open shared library [%.*s]", 4096, v6);
            (*(void (__fastcall **)(__int64, _QWORD, const char *))(v9 + 80))(v9, (unsigned int)(v56 + 299), v59[0]);
            v22 = 1;
            goto LABEL_18;
          }
        }
      }
      v22 = 1;
LABEL_18:
      v23 = sub_D42C0(a1, v22, v10, v11, v12, v13);
      goto LABEL_19;
    }
  }
  v18 = v15;
  v19 = v9;
  v20 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(v9 + 88))(v9, v15, s);
  if ( v20 || a3 )
  {
    v26 = 0;
    goto LABEL_30;
  }
  if ( v6 )
  {
    v19 = (__int64)v6;
    v21 = strlen(v6) & 0x3FFFFFFF;
    v51 = (int)v21 + 30;
  }
  else
  {
    v51 = 30;
    LODWORD(v21) = 0;
  }
  if ( (unsigned int)sub_FEBD0(v19, v15) || (v36 = (char *)sub_D1E10(v51, v15), (s = v36) == nullptr) )
  {
    (*(void (__fastcall **)(__int64, __int64))(v9 + 96))(v9, v15);
    v22 = 7;
    goto LABEL_18;
  }
  v38 = v21 - 1;
  *(_QWORD *)v36 = 0x5F336574696C7173LL;
  v39 = 0;
  if ( (_DWORD)v21 )
  {
    if ( v6[v38] == 47 )
    {
      v39 = (unsigned int)v21;
      v41 = (unsigned __int8 *)&v6[(int)v21];
    }
    else
    {
      v40 = &v6[(int)v21 - 2];
      while ( 1 )
      {
        if ( !v38 )
        {
          v41 = (unsigned __int8 *)v6;
          goto LABEL_59;
        }
        if ( *v40-- == 47 )
          break;
        --v38;
      }
      v39 = v38;
      v41 = (unsigned __int8 *)&v6[v38];
    }
  }
  else
  {
    v41 = (unsigned __int8 *)v6;
  }
LABEL_59:
  if ( v41 )
  {
    v58 = v39;
    v54 = v41;
    v42 = sub_CA590(v41, "lib", 3);
    v41 = v54;
    v39 = v58;
    if ( !v42 )
    {
      v39 = (unsigned int)(v43 + 4);
      v41 = (unsigned __int8 *)&v6[(int)v39];
    }
  }
  v44 = (char)*v41;
  v45 = *v41;
  if ( !*v41 || v44 == 46 )
  {
    v48 = s + 8;
  }
  else
  {
    v46 = 8;
    v47 = 8;
    v41 = (unsigned __int8 *)byte_1BEF00;
    v37 = byte_1BF000;
    do
    {
      v48 = &s[v47];
      if ( (byte_1BEF00[v45] & 2) != 0 )
      {
        v47 = ++v46;
        *v48 = byte_1BF000[v44];
        v48 = &s[v46];
      }
      v39 = (unsigned int)(v39 + 1);
      v44 = v6[(int)v39];
      v45 = v6[(int)v39];
    }
    while ( v44 != 46 && v6[(int)v39] );
  }
  v26 = (__int64)s;
  strcpy(v48, "_init");
  v18 = v15;
  v20 = (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64, unsigned __int8 *, unsigned __int8 *))(v9 + 88))(
          v9,
          v15,
          s,
          v39,
          v41,
          v37);
LABEL_30:
  if ( !v20 )
  {
    if ( a4 )
    {
      v53 = strlen(s);
      if ( (unsigned int)sub_FEBD0((__int64)s, v18) )
      {
        v59[0] = nullptr;
        *a4 = 0;
      }
      else
      {
        v55 = v56 + v53 + 300;
        v49 = (const char *)sub_D1E10(v55, v18);
        v59[0] = v49;
        *a4 = v49;
        if ( v49 )
        {
          sub_E89C0(v55, (__int64)v49, "no entry point [%s] in shared library [%s]", s, v6);
          (*(void (__fastcall **)(__int64, _QWORD, const char *))(v9 + 80))(v9, (unsigned int)(v55 - 1), v59[0]);
        }
      }
    }
    (*(void (__fastcall **)(__int64, __int64))(v9 + 96))(v9, v15);
    sub_C91C0(v26, v15);
    v22 = 1;
    goto LABEL_18;
  }
  v52 = (__int64 (__fastcall *)(__int64, const char **, _UNKNOWN **))v20;
  sub_C91C0(v26, v18);
  v27 = v59;
  v28 = v52(a1, v59, &off_23B460);
  if ( !v28 )
  {
    v31 = sub_DC1C0(a1, 8LL * (*(_DWORD *)(a1 + 228) + 1));
    if ( v31 )
    {
      v32 = *(int *)(a1 + 228);
      v33 = *(_QWORD **)(a1 + 232);
      if ( (int)v32 > 0 )
      {
        memcpy(v31, v33, 8 * v32);
        v33 = *(_QWORD **)(a1 + 232);
      }
      if ( v33 )
        sub_C9250(a1, v33);
      v34 = *(int *)(a1 + 228);
      *(_QWORD *)(a1 + 232) = v31;
      v10 = (unsigned int)(v34 + 1);
      *(_DWORD *)(a1 + 228) = v10;
      v31[v34] = v15;
      goto LABEL_46;
    }
    goto LABEL_28;
  }
  if ( v28 != 256 )
  {
    v29 = v59[0];
    if ( a4 )
    {
      v27 = (const char **)v59[0];
      v30 = sub_105970("error during initialization: %s", v59[0]);
      v29 = v59[0];
      *a4 = v30;
    }
    sub_C91C0((__int64)v29, (__int64)v27);
    (*(void (__fastcall **)(__int64, __int64))(v9 + 96))(v9, v15);
    v22 = 1;
    goto LABEL_18;
  }
LABEL_46:
  v23 = 0;
  v22 = 0;
  if ( *(_BYTE *)(a1 + 103) )
    goto LABEL_18;
LABEL_19:
  v24 = *(_QWORD *)(a1 + 24);
  if ( v24 )
    xmmword_241510(v24, v22, v10);
  return v23;
}
