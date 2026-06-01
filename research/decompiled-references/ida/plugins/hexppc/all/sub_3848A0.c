__int64 __fastcall sub_3848A0(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, _BYTE *a7)
{
  unsigned int v7; // ebx
  char *i; // rcx
  int v9; // edx
  char v10; // al
  char *v11; // r8
  char *v13; // rbx
  __int64 v14; // rdx
  size_t v15; // r8
  __int64 v16; // r9
  const void *v17; // rsi
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // r9
  char *dest; // [rsp+0h] [rbp-C0h]
  void *desta; // [rsp+0h] [rbp-C0h]
  __int64 v24; // [rsp+8h] [rbp-B8h]
  __int64 v25; // [rsp+8h] [rbp-B8h]
  __int64 v26; // [rsp+8h] [rbp-B8h]
  char *v27; // [rsp+10h] [rbp-B0h]
  __int64 v28; // [rsp+10h] [rbp-B0h]
  unsigned __int64 v29; // [rsp+10h] [rbp-B0h]
  __int64 v30; // [rsp+10h] [rbp-B0h]
  char *s1; // [rsp+40h] [rbp-80h] BYREF
  __int128 v34; // [rsp+48h] [rbp-78h]
  __int128 v35; // [rsp+60h] [rbp-60h]
  __int64 v36; // [rsp+70h] [rbp-50h]
  int v37; // [rsp+78h] [rbp-48h]
  __int16 v38; // [rsp+7Ch] [rbp-44h]
  unsigned __int64 v39; // [rsp+88h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  s1 = nullptr;
  v34 = 0;
  print_tinfo();
  if ( a7 && *a7 )
  {
    v13 = s1;
    if ( (_QWORD)v34 )
    {
      v14 = v34 + 9;
      v15 = v34 - 1;
      v16 = v34 + 8;
      if ( *((_QWORD *)&v34 + 1) >= (unsigned __int64)(v34 + 9) )
        goto LABEL_24;
    }
    else
    {
      if ( *((_QWORD *)&v34 + 1) > 9u )
      {
        *(_QWORD *)&v34 = 10;
        s1[9] = 0;
LABEL_28:
        v13[8] = 32;
        *(_QWORD *)v13 = 0x646573756E755F5FLL;
        goto LABEL_3;
      }
      v15 = 0;
      v14 = 10;
      v16 = 9;
    }
    desta = (void *)v15;
    v25 = v16;
    v28 = v14;
    s1 = (char *)qvector_reserve();
    v15 = (size_t)desta;
    v13 = s1;
    v16 = v25;
    v14 = v28;
LABEL_24:
    *(_QWORD *)&v34 = v14;
    v13[v16] = 0;
    v13 = s1;
    if ( v15 )
      memmove(s1 + 9, s1, v15);
    goto LABEL_28;
  }
LABEL_3:
  v7 = sub_384340((__int64)&s1, 6u, (__int64)"Please enter the type declaration");
  if ( !(_BYTE)v7 )
  {
LABEL_16:
    v7 = 0;
    goto LABEL_17;
  }
  if ( (unsigned __int64)v34 <= 1 )
  {
    if ( a1 )
      clear_tinfo_t();
  }
  else
  {
    if ( a7 )
    {
      for ( i = s1; *i == 32; ++i )
        ;
      dest = s1;
      v24 = v34;
      v27 = i;
      v9 = strncmp(i, "__unused ", 9u);
      v10 = 0;
      v11 = dest;
      if ( !v9 )
      {
        v17 = v27 + 9;
        v18 = v27 + 9 - dest;
        if ( v18 )
        {
          v19 = v24 - 1;
          v20 = 1;
          v21 = 0;
          if ( v18 < v24 - 1 )
          {
            v30 = v19 - v18;
            memmove(dest, v17, v19 - v18);
            v21 = v30;
            v11 = s1;
            v20 = v30 + 1;
          }
          if ( *((_QWORD *)&v34 + 1) < v20 )
          {
            v26 = v21;
            v29 = v20;
            s1 = (char *)qvector_reserve();
            v21 = v26;
            v11 = s1;
            v20 = v29;
          }
          *(_QWORD *)&v34 = v20;
          v11[v21] = 0;
        }
        v10 = v7;
      }
      *a7 = v10;
    }
    get_tinfo_property();
    if ( !(unsigned __int8)parse_decl() )
      goto LABEL_16;
    if ( !a6 && (get_tinfo_property() & 0xF) == 0xC )
    {
      v35 = 0;
      copy_tinfo_t();
      v36 = 0;
      copy_tinfo_t();
      v37 = 0;
      v38 = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
    }
    if ( !sub_328840(a1, a3) )
    {
      sub_2B11F0((__int64)"AUTOHIDE NONE\nSorry, the entered type is unacceptable");
      goto LABEL_16;
    }
  }
LABEL_17:
  if ( s1 )
  {
    *(_QWORD *)&v34 = 0;
    qfree();
  }
  return v7;
}

