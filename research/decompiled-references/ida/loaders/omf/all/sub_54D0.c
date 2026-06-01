__int64 __fastcall sub_54D0(unsigned __int16 a1)
{
  __int64 v1; // rdi
  const char *v2; // r12
  __int64 v3; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  const char *v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  _WORD v10[32]; // [rsp+0h] [rbp-478h] BYREF
  char s2[1032]; // [rsp+40h] [rbp-438h] BYREF
  unsigned __int64 v12; // [rsp+448h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( !a1 || a1 >= (unsigned __int64)xmmword_14508 )
    sub_52E0("get_omf_extdef");
  v1 = qword_14500 + 59LL * a1;
  v2 = src;
  if ( *(_QWORD *)(v1 + 8) )
    v2 = *(const char **)v1;
  if ( (unsigned __int64)qword_144D0 > 1 )
  {
    v3 = 1;
    while ( 1 )
    {
      netnode_supstr(qword_144D8, v3, s2, 1024, 49);
      if ( !strcmp(v2, s2) )
        break;
      if ( ++v3 >= (unsigned __int64)qword_144D0 )
        goto LABEL_11;
    }
    if ( netnode_supval(qword_144D8, v3, v10, 37, 50) < 0 )
      sub_52E0("extdef");
    return v10[4];
  }
LABEL_11:
  if ( (unsigned __int64)qword_144B8 > 1 )
  {
    v5 = 1;
    while ( 1 )
    {
      v6 = netnode_altval(qword_144C8, v5, 65);
      v7 = "";
      v8 = v6;
      if ( v6 )
      {
        if ( v6 < (unsigned __int64)xmmword_14598 )
        {
          v9 = qword_14590 + 32 * v6;
          v7 = src;
          if ( *(_QWORD *)(v9 + 8) )
            v7 = *(const char **)v9;
        }
      }
      if ( !strcmp(v2, v7) )
        break;
      if ( ++v5 >= (unsigned __int64)qword_144B8 )
        return 0;
    }
    if ( netnode_supval(qword_144C8, v8, v10, 52, 83) <= 0 )
      sub_52E0("find_comdat");
    return v10[4];
  }
  return 0;
}

