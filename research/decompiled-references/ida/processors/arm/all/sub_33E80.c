_BOOL8 __fastcall sub_33E80(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _BOOL4 v6; // r9d
  char v8; // r12
  char v9; // al
  char v10; // r14
  char v11; // dl
  unsigned __int64 v12; // rbx
  bool v13; // r14
  unsigned __int64 *v14; // rax
  char v15; // cl
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  bool v19; // al
  char v20; // al
  char v21; // [rsp+8h] [rbp-1B0h]
  bool v22; // [rsp+8h] [rbp-1B0h]
  char v23; // [rsp+Dh] [rbp-1ABh]
  bool v24; // [rsp+Eh] [rbp-1AAh]
  bool v25; // [rsp+Fh] [rbp-1A9h]
  __int128 v26; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v27; // [rsp+20h] [rbp-198h]
  __int64 v28; // [rsp+28h] [rbp-190h]
  __int64 v29; // [rsp+30h] [rbp-188h]
  char v30; // [rsp+38h] [rbp-180h] BYREF
  unsigned __int64 v31; // [rsp+178h] [rbp-40h] BYREF

  v31 = __readfsqword(0x28u);
  if ( (unsigned int)sub_28410(a1, a3) )
    return 0;
  v8 = 0;
  v9 = a4;
  v10 = a3;
  v11 = a3 & 1;
  v12 = a3 & 0xFFFFFFFFFFFFFFFELL;
  v13 = (v10 & 1) == 0;
  v23 = v11 | v9 ^ 1;
  if ( get_func(v12) )
  {
    if ( *(_DWORD *)(a1 + 212) )
    {
      v24 = (unsigned __int64)(get_sreg(v12, 20) - 1) <= 0xFFFFFFFFFFFFFFFDLL;
      v21 = v24;
    }
    else
    {
      v21 = 1;
      v24 = 1;
    }
    v27 = -1;
    v14 = (unsigned __int64 *)&v30;
    v28 = 0;
    v29 = 0;
    v26 = -1;
    do
    {
      *(_WORD *)v14 = 0;
      v14 += 5;
      *((_WORD *)v14 - 19) = 0;
      *((_WORD *)v14 - 18) = 0;
      *((_DWORD *)v14 - 2) = 0;
      *((_WORD *)v14 - 17) = 0;
      *((_OWORD *)v14 - 2) = 0;
      *(v14 - 2) = 0;
    }
    while ( &v31 != v14 );
    if ( sub_28300(a1, (__int64)&v26, v12, v21, 1)
      && sub_28300(a1, (__int64)&v26, v27 + WORD1(v28), v21, 1)
      && (v19 = sub_28300(a1, (__int64)&v26, v27 + WORD1(v28), v21, 1)) )
    {
      v25 = v19;
      v20 = sub_33A20(a1, v12, (__int64)&v26, v21);
      v6 = v25;
      if ( v20 )
        return v6;
      if ( !v24 )
      {
LABEL_31:
        v22 = v6;
        auto_mark_range();
        return v22;
      }
      if ( !v23 )
        return 0;
      if ( sub_28300(a1, (__int64)&v26, v12, 1, 1) )
      {
        LOBYTE(v6) = v25;
        if ( WORD1(v28) == 2 )
          goto LABEL_31;
      }
    }
    else
    {
      if ( !v24 )
      {
        if ( !v13 )
          return 0;
        v18 = sub_22100(v12);
        v15 = 1;
        if ( v18 == 2 )
        {
          v17 = 0;
          goto LABEL_16;
        }
        goto LABEL_15;
      }
      if ( !v23 )
        return 0;
    }
    v13 = 0;
  }
  else
  {
    if ( v13 && (unsigned int)sub_22100(v12) == 2 )
    {
      v17 = 0;
      goto LABEL_16;
    }
    v15 = v13;
    if ( !v23 )
      goto LABEL_15;
  }
  if ( (unsigned int)sub_22100(v12) == 1 )
  {
    v17 = 1;
    goto LABEL_16;
  }
  v15 = v13;
  v8 = 1;
LABEL_15:
  v16 = sub_33B40(a1, v12, v8, v15);
  v17 = v16;
  if ( v16 != -1 )
  {
LABEL_16:
    sub_25A70(a1, a2, v12, v17);
    auto_mark_range();
    return 1;
  }
  return 0;
}
