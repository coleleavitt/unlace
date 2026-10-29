__int64 __fastcall sub_3BAC0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r13
  unsigned int v3; // ebp
  __int64 v4; // r12
  char *v5; // r14
  char *s1; // [rsp+10h] [rbp-48h] BYREF
  __int128 v8; // [rsp+18h] [rbp-40h]
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  copy_argloc();
  v2 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  s1 = nullptr;
  v3 = sub_36D30((__int64 *)&s1, a2);
  if ( (_BYTE)v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
    if ( (_QWORD)v8 )
    {
      v5 = s1;
      if ( !strcmp(s1, "Ljava/lang/String;") )
      {
LABEL_6:
        get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
        goto LABEL_7;
      }
    }
    else
    {
      v5 = &byte_7FAF1;
    }
    if ( *v5 == 67 || !*(_QWORD *)(v4 + 8) )
      goto LABEL_6;
    sub_3A280((char *)a2, v2, 0);
  }
LABEL_7:
  if ( s1 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return v3;
}

