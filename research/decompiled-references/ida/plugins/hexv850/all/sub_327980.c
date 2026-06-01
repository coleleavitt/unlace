__int64 __fastcall sub_327980(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  bool v6; // zf
  int tinfo_size; // eax
  int v8; // r14d
  bool v10; // r9
  int **v11; // rdx
  int *v12; // rax
  __int64 v13; // rdi
  char v14; // si
  char v15; // r8
  int v16; // edx
  unsigned int v17; // r13d
  int v18; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // r14d
  int v22; // eax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // eax
  _QWORD v27[2]; // [rsp+28h] [rbp-68h] BYREF
  __int128 v28; // [rsp+38h] [rbp-58h]
  __int64 v29; // [rsp+48h] [rbp-48h]
  int v30; // [rsp+50h] [rbp-40h]
  bool v31; // [rsp+54h] [rbp-3Ch]
  unsigned __int64 v32; // [rsp+60h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  v27[0] = 0;
  v27[1] = 0;
  v29 = 0;
  v30 = 16;
  v28 = 0;
  v5 = getinf();
  if ( v5 != 176 )
  {
    if ( v5 != 256 )
    {
LABEL_3:
      v6 = *(_DWORD *)a3 == 2;
      v31 = 1;
      if ( !v6 )
      {
        *(_QWORD *)&v28 = v27;
        goto LABEL_8;
      }
      v10 = 1;
      goto LABEL_18;
    }
    goto LABEL_5;
  }
  if ( (unsigned __int64)getinf() > 0x397 )
    goto LABEL_3;
  if ( !(unsigned __int8)getinf_flag() )
    goto LABEL_5;
  netnode_check();
  v17 = netnode_altval();
  if ( v17 <= 0x74 )
    goto LABEL_5;
  v18 = *(_DWORD *)(get_ph() + 4);
  if ( !v18 )
    goto LABEL_3;
  v19 = (unsigned int)(v18 - 13);
  if ( (unsigned int)v19 > 0x3B || (v20 = 0x800000000000005LL, !_bittest64(&v20, v19)) )
  {
LABEL_5:
    v6 = *(_DWORD *)a3 == 2;
    v31 = 0;
    if ( !v6 )
    {
      *(_QWORD *)&v28 = v27;
      goto LABEL_7;
    }
    v10 = 0;
    goto LABEL_18;
  }
  v10 = v17 != 117;
  v6 = *(_DWORD *)a3 == 2;
  v31 = v17 != 117;
  if ( v6 )
  {
LABEL_18:
    v11 = *(int ***)(a3 + 8);
    v12 = *v11;
    v13 = (__int64)&(*v11)[6 * (_QWORD)v11[1]];
    if ( *v11 != (int *)v13 )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        while ( 1 )
        {
          v16 = *v12;
          if ( (unsigned int)(*v12 - 3) <= 1 )
            break;
          v12 += 6;
          v14 |= v16 == 1;
          if ( (int *)v13 == v12 )
            goto LABEL_23;
        }
        v12 += 6;
        v15 = 1;
      }
      while ( (int *)v13 != v12 );
LABEL_23:
      if ( v15 && v14 )
      {
        if ( *(_BYTE *)(a1 + 148) != 2 )
          goto LABEL_16;
        v25 = getinf();
        if ( v25 != 176 )
          goto LABEL_16;
        if ( (unsigned __int64)getinf() <= 0x397 )
        {
          if ( !(unsigned __int8)getinf_flag() )
            goto LABEL_16;
          netnode_check();
          v21 = netnode_altval();
          if ( v21 <= 0x74 )
            goto LABEL_16;
          v22 = *(_DWORD *)(get_ph() + 4);
          if ( v22 )
          {
            v23 = (unsigned int)(v22 - 13);
            if ( (unsigned int)v23 > 0x3B )
              goto LABEL_16;
            v24 = 0x800000000000005LL;
            if ( !_bittest64(&v24, v23) || v21 == 117 )
              goto LABEL_16;
          }
        }
        v10 = v31;
      }
    }
    *(_QWORD *)&v28 = v27;
    if ( v10 )
      goto LABEL_8;
LABEL_7:
    if ( (unsigned int)(*(_DWORD *)a3 - 3) > 1 )
      goto LABEL_8;
LABEL_16:
    LODWORD(a3) = 0;
    goto LABEL_15;
  }
  *(_QWORD *)&v28 = v27;
  if ( v17 == 117 )
    goto LABEL_7;
LABEL_8:
  tinfo_size = get_tinfo_size();
  v8 = tinfo_size;
  if ( tinfo_size <= 0
    || tinfo_size > 0xFFFF && *(_DWORD *)a3 == 2
    || (get_tinfo_property() & 0xF) == 9 && !sub_117F80(v8)
    || (unsigned int)verify_argloc() )
  {
    goto LABEL_16;
  }
  *((_QWORD *)&v28 + 1) = a2;
  v29 = a3;
  LOBYTE(a3) = (unsigned int)for_all_arglocs() == 0;
LABEL_15:
  qfree();
  qfree();
  return (unsigned int)a3;
}

