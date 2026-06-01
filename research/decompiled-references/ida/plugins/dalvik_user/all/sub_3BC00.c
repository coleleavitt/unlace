__int64 __fastcall sub_3BC00(__int64 a1, __int64 *a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // r12
  char *v6; // rdi
  unsigned int v7; // r15d
  unsigned int v9; // eax
  __int64 v10; // rbp
  _QWORD *v11; // rax
  char *v12; // rbp
  const char *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // [rsp+18h] [rbp-70h] BYREF
  __int64 v16; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+28h] [rbp-60h]
  char *s1; // [rsp+30h] [rbp-58h] BYREF
  __int128 v19; // [rsp+38h] [rbp-50h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 8);
  v20 = __readfsqword(0x28u);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  s1 = nullptr;
  v5 = v4;
  v19 = 0;
  if ( !(unsigned __int8)sub_36D30((__int64 *)&s1, a2) )
    goto LABEL_7;
  if ( !(_QWORD)v19 )
  {
    if ( byte_7FAF1 != 91 )
    {
      if ( byte_7FAF1 != 76 )
        goto LABEL_7;
LABEL_6:
      if ( !*(_QWORD *)(v5 + 8) )
      {
LABEL_7:
        v6 = s1;
        v7 = 0;
        goto LABEL_8;
      }
      v16 = 0;
      v17 = 0;
      v15 = 0;
      copy_tinfo_t();
      if ( (get_tinfo_property() & 0xF) == 0xA )
      {
        if ( !(unsigned __int8)sub_3BAC0((__int64)&v16, &v15) )
          goto LABEL_26;
        v3 = v17;
      }
      if ( (unsigned __int8)sub_36D30((__int64 *)&s1, &v15) )
      {
        v10 = sub_135E0(&s1, &v15);
        v11 = sub_23D40(v10 + 1104, (__int64)&s1);
        if ( v11 == (_QWORD *)(v10 + 1112)
          || (v14 = sub_25060(
                      (_QWORD *)(v10 + 1040),
                      *(_QWORD *)(*(_QWORD *)(v10 + 1080) + 72LL * *((int *)v11 + 14) + 8))) == nullptr )
        {
          v7 = 0;
        }
        else
        {
          v7 = *((_DWORD *)v14 + 2);
        }
        if ( (debug & 0x40000) != 0 )
        {
          v12 = (char *)nptr;
          if ( (_QWORD)v19 )
            v12 = s1;
          v13 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
          sub_111A0((__int64)"DEXSIP: Var %s`%s has %d children\n", v13, v12, v7);
        }
        goto LABEL_25;
      }
LABEL_26:
      v7 = 0;
LABEL_25:
      clear_tinfo_t();
      cleanup_argloc();
      v6 = s1;
      goto LABEL_8;
    }
LABEL_14:
    v9 = sub_379A0(a1, a2);
    v6 = s1;
    v7 = v9;
    goto LABEL_8;
  }
  v6 = s1;
  if ( *s1 == 91 )
    goto LABEL_14;
  v7 = 0;
  if ( *s1 == 76 )
  {
    v6 = s1;
    v7 = strcmp(s1, "Ljava/lang/String;");
    if ( v7 )
      goto LABEL_6;
  }
LABEL_8:
  if ( v6 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  return v7;
}

