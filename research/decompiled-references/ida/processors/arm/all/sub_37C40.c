__int64 __fastcall sub_37C40(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned __int16 v4; // cx
  __int64 v6; // rdx
  unsigned int v7; // r12d
  char v9; // dl
  __int64 v10; // rcx
  __int64 v11; // rdi
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  unsigned __int64 *v15; // rax
  unsigned int v16; // eax
  char v17; // al
  __int64 v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // [rsp+0h] [rbp-1B8h] BYREF
  __int128 v21; // [rsp+8h] [rbp-1B0h]
  char v22; // [rsp+18h] [rbp-1A0h]
  __int128 v23; // [rsp+20h] [rbp-198h] BYREF
  __int64 v24; // [rsp+30h] [rbp-188h]
  __int64 v25; // [rsp+38h] [rbp-180h]
  __int64 v26; // [rsp+40h] [rbp-178h]
  char v27; // [rsp+48h] [rbp-170h] BYREF
  _BYTE v28[280]; // [rsp+70h] [rbp-148h] BYREF
  unsigned __int64 v29; // [rsp+188h] [rbp-30h] BYREF

  v4 = *(_WORD *)(a2 + 24);
  v29 = __readfsqword(0x28u);
  if ( v4 > 0x50u )
  {
    v7 = 0;
    if ( (unsigned __int16)(v4 - 470) > 1u )
      return v7;
    goto LABEL_11;
  }
  if ( v4 <= 0x16u )
  {
    v7 = 0;
    if ( (unsigned __int16)(v4 - 3) > 1u )
      return v7;
    goto LABEL_11;
  }
  v6 = 1LL << ((unsigned __int8)v4 - 23);
  if ( (v6 & 0x200000000000101LL) == 0 )
  {
    if ( (v6 & 0x1840000) == 0 )
      return 0;
LABEL_11:
    v9 = *(_BYTE *)(a2 + 41);
    v10 = a2 + 40;
    if ( v9 != 7 )
      goto LABEL_12;
    return sub_37AC0(
             a1,
             a3,
             *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)
           & (16LL * *(_QWORD *)a2 + (*(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFELL)),
             0);
  }
  if ( *(_WORD *)(a2 + 46) != 15 )
    return 0;
  v9 = *(_BYTE *)(a2 + 81);
  v10 = a2 + 80;
  if ( v9 != 7 )
  {
LABEL_12:
    v7 = 0;
    if ( v9 != 1 )
      return v7;
    v20 = 0;
    v22 = 0;
    v21 = 0;
    sub_83660(a1, &v20, a2, v10, 0);
    v11 = (__int64)v20;
    v12 = v20;
    if ( (unsigned __int8)(v22 - 10) > 1u )
    {
      if ( v22 != 4 )
        goto LABEL_19;
    }
    else
    {
      v13 = *v20;
      if ( (_QWORD)v21 != 1 )
      {
        v14 = v20 + 3;
        if ( 24LL * (_QWORD)v21 != 24 )
        {
          while ( v13 == *v14 )
          {
            v14 += 3;
            if ( v14 == &v20[3 * (_QWORD)v21] )
              goto LABEL_28;
          }
          goto LABEL_19;
        }
      }
LABEL_28:
      if ( v13 == -1 )
      {
LABEL_19:
        v7 = 0;
        goto LABEL_26;
      }
      v16 = sub_37AC0(a1, a3, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v13, 0);
      v12 = v20;
      v7 = v16;
      v11 = (__int64)v20;
      if ( v16 )
      {
LABEL_26:
        if ( v11 )
        {
          *(_QWORD *)&v21 = 0;
          qfree(v11);
        }
        return v7;
      }
    }
    v24 = -1;
    v15 = (unsigned __int64 *)&v27;
    v25 = 0;
    v26 = 0;
    v23 = -1;
    do
    {
      *(_WORD *)v15 = 0;
      v15 += 5;
      *((_WORD *)v15 - 19) = 0;
      *((_WORD *)v15 - 18) = 0;
      *((_DWORD *)v15 - 2) = 0;
      *((_WORD *)v15 - 17) = 0;
      *((_OWORD *)v15 - 2) = 0;
      *(v15 - 2) = 0;
    }
    while ( &v29 != v15 );
    v7 = 0;
    v11 = (__int64)v12;
    if ( (_QWORD)v21 != 1 || *((_WORD *)v12 + 8) != 30 )
      goto LABEL_26;
    v7 = decode_insn();
    if ( !v7 )
      goto LABEL_43;
    v17 = sub_82140(a1, &v20, v28, &v23, 1, 0);
    v11 = (__int64)v20;
    v7 = 0;
    if ( !v17 || (unsigned __int8)(v22 - 10) > 1u )
      goto LABEL_26;
    v18 = *v20;
    if ( (_QWORD)v21 == 1 || (v19 = v20 + 3, 24LL * (_QWORD)v21 == 24) )
    {
LABEL_41:
      if ( v18 != -1 )
      {
        v7 = sub_37AC0(a1, a3, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v18, 1);
LABEL_43:
        v11 = (__int64)v20;
        goto LABEL_26;
      }
    }
    else
    {
      while ( *v19 == v18 )
      {
        v19 += 3;
        if ( v19 == &v20[3 * (_QWORD)v21] )
          goto LABEL_41;
      }
    }
    goto LABEL_19;
  }
  return sub_37AC0(
           a1,
           a3,
           *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)
         & (16LL * *(_QWORD *)a2 + (*(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFELL)),
           0);
}
