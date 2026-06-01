__int64 __fastcall sub_5C400(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 *v3; // rax
  __int64 v5; // r14
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // r13d
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // [rsp-200h] [rbp-208h] BYREF
  __int64 v17; // [rsp-1F8h] [rbp-200h]
  __int64 v18; // [rsp-1F0h] [rbp-1F8h]
  __int64 v19; // [rsp-1E8h] [rbp-1F0h]
  __int64 v20; // [rsp-1E0h] [rbp-1E8h]
  __int128 v21; // [rsp-1D8h] [rbp-1E0h]
  __int64 v22; // [rsp-1C0h] [rbp-1C8h] BYREF
  __int128 v23; // [rsp-1B8h] [rbp-1C0h]
  __int128 v24; // [rsp-1A0h] [rbp-1A8h] BYREF
  __int64 v25; // [rsp-190h] [rbp-198h]
  __int64 v26; // [rsp-188h] [rbp-190h]
  __int64 v27; // [rsp-180h] [rbp-188h]
  __int64 v28; // [rsp-178h] [rbp-180h] BYREF
  _BYTE v29[280]; // [rsp-150h] [rbp-158h] BYREF
  unsigned __int64 v30; // [rsp-38h] [rbp-40h] BYREF

  v3 = (unsigned __int64 *)&v28;
  v30 = __readfsqword(0x28u);
  v24 = -1;
  v25 = -1;
  v26 = 0;
  v27 = 0;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 5;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *(v3 - 2) = 0;
  }
  while ( &v30 != v3 );
  if ( !(unsigned int)decode_insn() )
    return (unsigned int)-1;
  v5 = a3[1];
  v6 = 0;
  v20 = 0;
  v21 = 0;
  if ( (_DWORD)v5 )
  {
    v20 = qvector_reserve();
    memset((void *)(v20 + 4 * v21), 0, 4 * ((int)v5 - (_QWORD)v21));
    *(_QWORD *)&v21 = (int)v5;
    if ( (int)v5 > 0 )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        v14 = *(unsigned __int16 *)(*a3 + v12 + 8);
        v12 += 80;
        *(_DWORD *)(v20 + v13) = v14;
        v13 += 4;
      }
      while ( v13 != 4LL * (unsigned int)(v5 - 1) + 4 );
    }
    v6 = v20;
  }
  v7 = sub_73130(a1, &v24, v6, (unsigned int)v5);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v22 = 0;
    v10 = 80LL * v7;
    v23 = 0;
    v16 = 0;
    copy_tinfo_t();
    v11 = *(_QWORD *)(*a3 + v10 + 16);
    v17 = v11;
    if ( (unsigned __int16)v26 <= 0x66u )
    {
      if ( (unsigned __int16)v26 > 0x64u )
      {
        sub_5B980(a1, (__int64)&v24, (__int64)v29, (__int64)&v16, v11, (__int64)&v22, nullptr);
        goto LABEL_15;
      }
      if ( (_WORD)v26 == 92 )
      {
        if ( (get_tinfo_property() & 0x2F) == 0xD && v29[1] == 2 )
        {
          v18 = 0;
          tinfo_get_innermost_udm();
          if ( (get_tinfo_property() & 0xF) == 0xA )
          {
            v15 = v16;
            v16 = v18;
            v18 = v15;
            remove_tinfo_pointer();
          }
          else
          {
            v19 = 0;
            copy_tinfo_t();
            clear_tinfo_t();
          }
          clear_tinfo_t();
        }
        else
        {
          remove_tinfo_pointer();
        }
LABEL_15:
        clear_tinfo_t();
        if ( v22 )
        {
          *(_QWORD *)&v23 = 0;
          qfree();
        }
        goto LABEL_6;
      }
      if ( (unsigned __int16)v26 <= 0x5Cu )
      {
        if ( (unsigned __int16)v26 > 0x12u )
        {
          if ( (_WORD)v26 == 46 )
            goto LABEL_30;
        }
        else if ( (unsigned __int16)v26 > 0xFu )
        {
          goto LABEL_30;
        }
      }
LABEL_21:
      if ( (unsigned __int8)sub_6C2B0(&v24, 2) )
        sub_5B980(a1, (__int64)&v24, (__int64)v29, (__int64)&v16, v17, (__int64)&v22, nullptr);
      goto LABEL_15;
    }
    if ( (_WORD)v26 != 400 )
    {
      if ( (unsigned __int16)v26 > 0x190u )
      {
        if ( (_WORD)v26 == 588 )
          goto LABEL_30;
        goto LABEL_21;
      }
      if ( (unsigned __int16)(v26 - 136) > 3u )
        goto LABEL_21;
    }
LABEL_30:
    v8 |= 0x80000000;
    goto LABEL_15;
  }
LABEL_6:
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  return v8;
}

