__int64 __fastcall sub_1C4550(__int64 *a1, _DWORD *a2, __int64 a3, int a4, double a5, __m128 a6)
{
  int tinfo_property; // ebx
  __int64 v8; // r14
  __int64 v9; // rcx
  int v10; // r15d
  unsigned int v11; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rcx
  char v17; // al
  int v18; // edx
  int v19; // r8d
  char v20; // al
  char v21; // al
  __int64 v22; // [rsp+8h] [rbp-90h]
  __int64 v23; // [rsp+8h] [rbp-90h]
  int v24; // [rsp+14h] [rbp-84h]
  int v25; // [rsp+14h] [rbp-84h]
  int v26; // [rsp+18h] [rbp-80h]
  __int64 v27; // [rsp+20h] [rbp-78h] BYREF
  signed __int64 v28; // [rsp+28h] [rbp-70h] BYREF
  __int64 v29[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v30; // [rsp+40h] [rbp-58h] BYREF
  __int128 v31; // [rsp+48h] [rbp-50h]
  unsigned __int64 v32; // [rsp+58h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  tinfo_property = a4;
  if ( !sub_1C4450((__int64)a2, a4) )
  {
    tinfo_property = get_tinfo_property();
    if ( !sub_1C4450((__int64)a2, tinfo_property) )
      return 0;
  }
  if ( !(unsigned __int8)sub_1C3400(&v27, &v28, (__int64)a2, tinfo_property, a5) )
    goto LABEL_10;
  v8 = v27;
  if ( v27 < 0 || v27 >= v28 )
    return 0;
  v9 = a1[6];
  if ( v9 == -1 )
    goto LABEL_10;
  v10 = *(_DWORD *)(*(_QWORD *)(*a1 + 112) + 80LL);
  if ( *a2 == 1 )
  {
    v22 = a1[6];
    LODWORD(v29[0]) = 0;
    get_tinfo_size();
    v15 = v29[0];
    v16 = v22;
    if ( ((LODWORD(v29[0]) - 1) & v29[0]) != 0 )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    if ( SLODWORD(v29[0]) > 2 * v10 )
    {
      v26 = LODWORD(v29[0]) - 1;
      v25 = v29[0];
      v21 = getinf_flag();
      v16 = v22;
      v18 = v25;
      v19 = v26;
      if ( v21 )
        goto LABEL_24;
      v15 = 2 * v10;
    }
    v24 = v15;
    v23 = v16;
    if ( v10 <= v15 )
    {
      v20 = getinf_flag();
      v18 = v24;
      v16 = v23;
      v19 = v24 - 1;
      if ( v20 )
        goto LABEL_24;
    }
    else
    {
      v17 = getinf_flag();
      v16 = v23;
      if ( v17 )
      {
        v18 = v24;
        v19 = v24 - 1;
LABEL_24:
        v9 = (v16 + v19) & -v18;
        goto LABEL_8;
      }
    }
    v19 = v10 - 1;
    v18 = v10;
    goto LABEL_24;
  }
LABEL_8:
  if ( v9 != (v8 & -v10) )
    return 0;
  a1[6] = -1;
LABEL_10:
  v31 = 0;
  v29[0] = 0;
  v29[1] = 0;
  v30 = nullptr;
  sub_1C31B0((__int64)a2, (__int64)v29, tinfo_property, 0, a3, 0.0, a6);
  if ( (unsigned __int8)sub_64780(a1 + 1, v29)
    || (unsigned __int8)sub_318470((unsigned __int64 **)a1 + 3, (__int64)&v30) )
  {
    v11 = 0;
  }
  else
  {
    sub_64280(a1 + 1, v29, 0.0);
    sub_316CB0(a1 + 3, &v30, v13, v14);
    v11 = 1;
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree((__int64)v30);
  }
  qfree(v29[0]);
  return v11;
}

