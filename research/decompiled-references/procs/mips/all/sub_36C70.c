_QWORD *__fastcall sub_36C70(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rsi
  unsigned __int64 tinfo_size; // r13
  char tinfo_property; // al
  char v9; // al
  __int64 v10; // rdi
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // r15
  _QWORD *v17; // r13
  __int64 v18; // rdi
  __int64 v19; // rdi
  unsigned __int64 v20; // rax
  bool v22; // cf
  char v23; // al
  __int64 v24; // rdi
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // r13
  __int64 v29; // rdi
  __int64 v30; // r13
  __int64 v31; // r12
  _QWORD *v32; // rbp
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  char v36; // [rsp+0h] [rbp-98h]
  __int64 v37; // [rsp+8h] [rbp-90h]
  __int64 v38; // [rsp+18h] [rbp-80h] BYREF
  __int64 v39; // [rsp+20h] [rbp-78h] BYREF
  __int128 v40; // [rsp+28h] [rbp-70h]
  __int128 v41; // [rsp+38h] [rbp-60h]
  __int64 v42; // [rsp+48h] [rbp-50h]
  int v43; // [rsp+50h] [rbp-48h]
  unsigned __int64 v44; // [rsp+58h] [rbp-40h]

  v5 = *a3;
  v44 = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size(0, v5, 0);
  tinfo_property = get_tinfo_property(*a3, 2);
  if ( (tinfo_property & 0xFu) <= 0xA || (tinfo_property & 0x3F) == 0x2D )
  {
    v20 = *(_QWORD *)(a2 + 8);
    *a1 = 0;
    if ( v20 < tinfo_size && 2 * v20 != tinfo_size )
      return a1;
LABEL_24:
    copy_tinfo_t(a1, a3);
    return a1;
  }
  v9 = get_tinfo_property(*a3, 2);
  v10 = *a3;
  if ( (v9 & 0x3F) == 0xD )
  {
    v39 = 0;
    v43 = 1;
    v42 = 0;
    v40 = 0;
    v41 = 0;
    if ( (unsigned __int8)get_tinfo_details(v10, 13) && (_QWORD)v40 == 1 )
    {
      v38 = 0;
      copy_tinfo_t(&v38, v39 + 64);
    }
    else
    {
      v38 = 0;
    }
    v14 = v39;
    if ( v39 )
    {
      v15 = v40;
      if ( (_QWORD)v40 )
      {
        v16 = 0;
        do
        {
          v17 = (_QWORD *)(v14 + 144 * v16);
          clear_tinfo_t(v17 + 8);
          v18 = v17[5];
          if ( v18 )
          {
            v17[6] = 0;
            qfree(v18);
          }
          v19 = v17[2];
          if ( v19 )
          {
            v17[3] = 0;
            qfree(v19);
          }
          ++v16;
          v14 = v39;
        }
        while ( v15 != v16 );
      }
      *(_QWORD *)&v40 = 0;
      qfree(v14);
    }
    if ( !(_BYTE)v38 )
    {
      *a1 = 0;
      copy_tinfo_t(a1, &v38);
LABEL_18:
      clear_tinfo_t(&v38);
      return a1;
    }
LABEL_41:
    sub_36C70((_DWORD)a1, a2, (unsigned int)&v38, v11, v12, v13);
    goto LABEL_18;
  }
  v23 = get_tinfo_property(v10, 2);
  v24 = *a3;
  if ( (v23 & 0x3F) != 0x1D )
  {
    if ( (get_tinfo_property(v24, 2) & 0xF) == 0xB )
    {
      v35 = *a3;
      v39 = 0;
      *(_QWORD *)&v40 = 0;
      get_tinfo_details(v35, 11);
      v38 = 0;
      clear_tinfo_t(&v39);
      if ( !(_BYTE)v38 )
      {
        v22 = *(_QWORD *)(a2 + 8) < tinfo_size;
        *a1 = 0;
        if ( !v22 )
          copy_tinfo_t(a1, a3);
        goto LABEL_18;
      }
      goto LABEL_41;
    }
    v22 = *(_QWORD *)(a2 + 8) < tinfo_size;
    *a1 = 0;
    if ( v22 )
      return a1;
    goto LABEL_24;
  }
  v39 = 0;
  v43 = 1;
  v42 = 0;
  v40 = 0;
  v41 = 0;
  if ( (unsigned __int8)get_tinfo_details(v24, 13) )
  {
    v28 = v39;
    v37 = v39 + 144 * v40;
    if ( v39 == v37 )
    {
LABEL_30:
      *a1 = 0;
      copy_tinfo_t(a1, a3);
      goto LABEL_32;
    }
    while ( 1 )
    {
      sub_36C70((unsigned int)&v38, a2, v28 + 64, v25, v26, v27);
      v36 = v38;
      clear_tinfo_t(&v38);
      if ( !v36 )
        break;
      v28 += 144;
      if ( v28 == v37 )
        goto LABEL_30;
    }
  }
  *a1 = 0;
LABEL_32:
  v29 = v39;
  if ( v39 )
  {
    v30 = v40;
    if ( (_QWORD)v40 )
    {
      v31 = 0;
      do
      {
        v32 = (_QWORD *)(v29 + 144 * v31);
        clear_tinfo_t(v32 + 8);
        v33 = v32[5];
        if ( v33 )
        {
          v32[6] = 0;
          qfree(v33);
        }
        v34 = v32[2];
        if ( v34 )
        {
          v32[3] = 0;
          qfree(v34);
        }
        ++v31;
        v29 = v39;
      }
      while ( v30 != v31 );
    }
    *(_QWORD *)&v40 = 0;
    qfree(v29);
  }
  return a1;
}
