__int64 __fastcall sub_27B20(__int64 a1, const char *a2, const char **a3, unsigned __int8 a4)
{
  unsigned int v7; // ebx
  size_t v9; // rax
  size_t v10; // r15
  size_t v11; // rbx
  const char **v12; // rbx
  const char *v13; // rsi
  const char *v14; // rax
  const char *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r9
  char *v18; // rsi
  __int64 v19; // r15
  const char *v20; // r15
  size_t v21; // rax
  __int64 v22; // r8
  size_t v23; // r10
  size_t v24; // r11
  char *v25; // rsi
  size_t v26; // rdx
  __int64 v27; // rax
  __int64 v28; // [rsp+10h] [rbp-78h]
  size_t v29; // [rsp+10h] [rbp-78h]
  __int64 v30; // [rsp+18h] [rbp-70h]
  size_t v31; // [rsp+18h] [rbp-70h]
  __int64 v32; // [rsp+20h] [rbp-68h]
  size_t v33; // [rsp+28h] [rbp-60h]
  char *v34; // [rsp+30h] [rbp-58h]
  __int128 v35; // [rsp+38h] [rbp-50h]

  if ( !(unsigned __int8)sub_412D0(*(_QWORD *)(a1 + 8), 0) )
    return 20;
  if ( !a2 )
    return 7;
  v7 = 19;
  if ( !(unsigned int)sub_26670(a1) )
  {
    *(_BYTE *)a1 = 0;
    v35 = 0;
    v9 = strlen(a2);
    v10 = v9 + 1;
    v11 = v9;
    v34 = (char *)qvector_reserve();
    *(_QWORD *)&v35 = v10;
    memmove(v34, a2, v11);
    v34[v11] = 0;
    if ( !a3 || (v12 = a3, !*a3) )
    {
LABEL_7:
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
      {
        v13 = s1;
        if ( (_QWORD)v35 )
          v13 = v34;
        sub_E960((__int64)"Launching bochs: %s\n", v13);
      }
      if ( *(_QWORD *)(a1 + 112) > 1u )
        *(_QWORD *)(a1 + 128) = qfopen();
      v7 = sub_414B0(*(_QWORD *)(a1 + 8), a2, a3, a4);
      if ( !v7 )
      {
        if ( !(unsigned __int8)qsem_wait() || (unsigned __int8)sub_412D0(*(_QWORD *)(a1 + 8), 0) )
        {
          v7 = 15;
        }
        else
        {
          *(_BYTE *)a1 = 1;
          v27 = sub_27A80(a1);
          v7 = sub_2BB70(a1 + 16, v27, a1 + 728);
          if ( v7 )
          {
            if ( !v34 )
              return v7;
            goto LABEL_20;
          }
          sub_EBD0(
            (__int64)"Detected Bochs v%d.%d.%d\n",
            *(_DWORD *)(a1 + 728),
            *(_DWORD *)(a1 + 732),
            *(_DWORD *)(a1 + 736));
          if ( *(int *)(a1 + 728) > 2
            || *(_DWORD *)(a1 + 728) == 2
            && (*(int *)(a1 + 732) > 8 || *(_DWORD *)(a1 + 732) == 8 && *(int *)(a1 + 736) > 0) )
          {
            sub_EBD0(
              (__int64)"WARNING: Bochs version is higher than supported (%d.%d.%d), please downgrade in case of problems.\n",
              2,
              8,
              0);
          }
          sub_2BC00(a1 + 16, a1 + 728);
          v7 = sub_27480(a1);
          if ( !v7 )
          {
LABEL_19:
            if ( !v34 )
              return v7;
LABEL_20:
            qfree();
            return v7;
          }
          v7 = 17;
        }
      }
      v14 = (const char *)sub_27A80(a1);
      sub_EBD0((__int64)"%s\n", v14);
      v15 = s1;
      if ( (_QWORD)v35 )
        v15 = v34;
      sub_EB00(
        (__int64)"AUTOHIDE NONE\n"
                 "Failed to run Bochs with:\n"
                 "\n"
                 "%s\n"
                 "\n"
                 "Please ensure that Bochs is installed and configured properly.\n"
                 "A frequent mistake is to compile it without --disable-readline.\n"
                 "Bochs output can be checked in the message window",
        v15);
      goto LABEL_19;
    }
    while ( 1 )
    {
      v19 = v35;
      if ( (_QWORD)v35 )
      {
        v16 = v35 + 1;
        v17 = v35;
        v18 = v34;
        v19 = v35 - 1;
        if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v35 + 1) )
          goto LABEL_31;
      }
      else
      {
        v18 = v34;
        v16 = 2;
        v17 = 1;
        if ( *((_QWORD *)&v35 + 1) < 2u )
        {
LABEL_31:
          v30 = v17;
          v28 = v16;
          v34 = (char *)qvector_reserve();
          v17 = v30;
          v18 = v34;
          v16 = v28;
        }
      }
      *(_QWORD *)&v35 = v16;
      v18[v17] = 0;
      v34[v19] = 32;
      v20 = *v12;
      if ( *v12 )
      {
        v21 = strlen(*v12);
        v22 = v35;
        v23 = v21;
        v24 = v21;
        if ( (_QWORD)v35 )
        {
          v22 = v35 - 1;
          v24 = v21 + v35 - 1;
        }
        v25 = v34;
        v26 = v24 + 1;
        if ( *((_QWORD *)&v35 + 1) < v24 + 1 )
        {
          v33 = v21;
          v32 = v22;
          v31 = v24;
          v29 = v24 + 1;
          v34 = (char *)qvector_reserve();
          v23 = v33;
          v25 = v34;
          v22 = v32;
          v24 = v31;
          v26 = v29;
        }
        *(_QWORD *)&v35 = v26;
        v25[v24] = 0;
        memmove(&v34[v22], v20, v23);
      }
      if ( !*++v12 )
        goto LABEL_7;
    }
  }
  return v7;
}

