__int64 __fastcall sub_BACC0(_QWORD *a1)
{
  __int64 v2; // r12
  __int64 v3; // r13
  int v4; // r14d
  unsigned int v5; // r13d
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // [rsp+8h] [rbp-238h]
  __int64 v12; // [rsp+18h] [rbp-228h]
  __int64 v13; // [rsp+28h] [rbp-218h] BYREF
  __int64 v14; // [rsp+30h] [rbp-210h] BYREF
  __int64 v15; // [rsp+38h] [rbp-208h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-200h] BYREF
  __int64 v17; // [rsp+48h] [rbp-1F8h]
  __int64 v18; // [rsp+50h] [rbp-1F0h] BYREF
  __int128 v19; // [rsp+58h] [rbp-1E8h]
  __int128 v20; // [rsp+70h] [rbp-1D0h] BYREF
  __int64 v21; // [rsp+80h] [rbp-1C0h]
  __int128 v22; // [rsp+88h] [rbp-1B8h]
  __int64 v23; // [rsp+98h] [rbp-1A8h]
  __int128 v24; // [rsp+A0h] [rbp-1A0h]
  __int128 v25; // [rsp+B0h] [rbp-190h]
  __int64 v26; // [rsp+E0h] [rbp-160h]
  int v27; // [rsp+E8h] [rbp-158h]
  __int64 v28; // [rsp+F0h] [rbp-150h]
  char v29; // [rsp+F8h] [rbp-148h]
  unsigned __int64 v30; // [rsp+208h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  v12 = a1[4];
  if ( (unsigned int)(*(_DWORD *)v12 - 1) > 1 )
    return 0;
  v2 = v12 + 64;
  if ( *(_DWORD *)v12 == 2 )
    v2 = v12 + 48;
  if ( *(_BYTE *)v2 != 4 )
    goto LABEL_7;
  v3 = *(_QWORD *)(v2 + 8);
  if ( (unsigned int)(*(_DWORD *)v3 - 12) > 1 )
  {
LABEL_6:
    if ( *(_BYTE *)(v3 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v3 + 72) + 284LL) == 14 )
      return 0;
LABEL_7:
    v4 = 0;
    get_flags_ex();
    while ( !(unsigned __int8)is_stroff() )
    {
      if ( ++v4 == 8 )
        return 0;
    }
    if ( !(unsigned int)get_stroff_path() || !v13 )
      return 0;
    v14 = 0;
    v15 = 0;
    if ( (unsigned int)guess_tinfo() == 2 )
    {
      v21 = 0;
      v23 = 0;
      v26 = 1;
      v27 = -1;
      v28 = 0;
      v29 = 0;
      v20 = 0;
      v22 = 0;
      v24 = 0;
      v25 = 0;
      v7 = sub_3262D0(&v20, &v14, v13, 0);
      v8 = a1[1];
      if ( v7 == -1 )
      {
        sub_BA360(v8, *(_QWORD *)(v12 + 24), (__int64)&v15, v13);
      }
      else if ( (unsigned __int8)sub_B3FB0(v8, &v15, 0, 0, (char *)v2, *(_QWORD *)(v8 + 800), 0, 0, a1 + 6)
             && !get_tinfo_property() )
      {
        v18 = 0;
        v19 = 0;
        v5 = sub_B2A40((__int64)&v18, (__int64)&v20, (__int64)&v15, (__int64)&v13);
        if ( (_BYTE)v5 )
        {
          v16 = 0xFFFFFFFF00000000LL;
          v17 = 0;
          v11 = j__qalloc_or_throw();
          v9 = *(_QWORD *)(v12 + 24);
          *(_QWORD *)(v11 + 40) = 0;
          *(_QWORD *)(v11 + 56) = 0;
          *(_QWORD *)(v11 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v11 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v11 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v11 + 72) = 0;
          sub_329320(v11, v9);
          v10 = *(_DWORD *)(v2 + 4);
          LOBYTE(v16) = 4;
          *(_DWORD *)(v11 + 68) = v10;
          v17 = v11;
          HIDWORD(v16) = *(_DWORD *)(v2 + 4);
          sub_116350(&v16, v2);
          sub_BA750((__int64)a1, *(_QWORD *)(v2 + 8), (__int64)&v16, &v15, (int)&v14, &v18, v13);
          sub_1166E0(&v16);
          if ( v18 )
          {
            *(_QWORD *)&v19 = 0;
            qfree();
          }
          sub_9B7D0(&v20);
          goto LABEL_16;
        }
        sub_BA360(a1[1], *(_QWORD *)(v12 + 24), (__int64)&v15, v13);
        if ( v18 )
        {
          *(_QWORD *)&v19 = 0;
          qfree();
        }
      }
      clear_tinfo_t();
      if ( v23 )
      {
        *(_QWORD *)&v24 = 0;
        qfree();
      }
      if ( v21 )
      {
        *(_QWORD *)&v22 = 0;
        qfree();
      }
    }
    v5 = 0;
LABEL_16:
    clear_tinfo_t();
    clear_tinfo_t();
    return v5;
  }
  if ( !sub_1161E0(*(_QWORD *)(v2 + 8), 0) )
  {
    if ( *(_BYTE *)(v3 + 32) == 4 )
      v3 = *(_QWORD *)(v3 + 40);
    goto LABEL_6;
  }
  return 0;
}

