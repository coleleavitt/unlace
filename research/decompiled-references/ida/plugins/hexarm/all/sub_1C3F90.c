__int64 __fastcall sub_1C3F90(__int64 *a1, _DWORD *a2, __int64 a3, int a4)
{
  int tinfo_property; // ebx
  __int64 v6; // r14
  __int64 v7; // rcx
  int v8; // r15d
  unsigned int v9; // ebx
  int v11; // edx
  __int64 v12; // rcx
  char v13; // al
  int v14; // edx
  int v15; // r8d
  char v16; // al
  char v17; // al
  __int64 v18; // [rsp+8h] [rbp-90h]
  __int64 v19; // [rsp+8h] [rbp-90h]
  int v20; // [rsp+14h] [rbp-84h]
  int v21; // [rsp+14h] [rbp-84h]
  int v22; // [rsp+18h] [rbp-80h]
  __int64 v23; // [rsp+20h] [rbp-78h] BYREF
  signed __int64 v24; // [rsp+28h] [rbp-70h] BYREF
  __int64 v25[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v26; // [rsp+40h] [rbp-58h] BYREF
  __int128 v27; // [rsp+48h] [rbp-50h]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  tinfo_property = a4;
  if ( !sub_1C3E90((__int64)a2, a4) )
  {
    tinfo_property = get_tinfo_property();
    if ( !sub_1C3E90((__int64)a2, tinfo_property) )
      return 0;
  }
  if ( !(unsigned __int8)sub_1C2E40(&v23, &v24, (__int64)a2, tinfo_property) )
    goto LABEL_10;
  v6 = v23;
  if ( v23 < 0 || v23 >= v24 )
    return 0;
  v7 = a1[6];
  if ( v7 == -1 )
    goto LABEL_10;
  v8 = *(_DWORD *)(*(_QWORD *)(*a1 + 112) + 80LL);
  if ( *a2 == 1 )
  {
    v18 = a1[6];
    LODWORD(v25[0]) = 0;
    get_tinfo_size();
    v11 = v25[0];
    v12 = v18;
    if ( ((LODWORD(v25[0]) - 1) & v25[0]) != 0 )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    if ( SLODWORD(v25[0]) > 2 * v8 )
    {
      v22 = LODWORD(v25[0]) - 1;
      v21 = v25[0];
      v17 = getinf_flag();
      v12 = v18;
      v14 = v21;
      v15 = v22;
      if ( v17 )
        goto LABEL_24;
      v11 = 2 * v8;
    }
    v20 = v11;
    v19 = v12;
    if ( v8 <= v11 )
    {
      v16 = getinf_flag();
      v14 = v20;
      v12 = v19;
      v15 = v20 - 1;
      if ( v16 )
        goto LABEL_24;
    }
    else
    {
      v13 = getinf_flag();
      v12 = v19;
      if ( v13 )
      {
        v14 = v20;
        v15 = v20 - 1;
LABEL_24:
        v7 = (v12 + v15) & -v14;
        goto LABEL_8;
      }
    }
    v15 = v8 - 1;
    v14 = v8;
    goto LABEL_24;
  }
LABEL_8:
  if ( v7 != (v6 & -v8) )
    return 0;
  a1[6] = -1;
LABEL_10:
  v27 = 0;
  v25[0] = 0;
  v25[1] = 0;
  v26 = 0;
  sub_1C2BF0((__int64)a2, (__int64)v25, tinfo_property, 0, a3);
  if ( (unsigned __int8)sub_64180(a1 + 1, v25) || (unsigned __int8)sub_318830(a1 + 3, &v26) )
  {
    v9 = 0;
  }
  else
  {
    sub_63C80(a1 + 1, v25);
    sub_317070(a1 + 3, &v26);
    v9 = 1;
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  qfree();
  return v9;
}

