__int64 __fastcall sub_36D940(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rbx
  int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r15
  _BYTE *v8; // r11
  char tinfo_property; // al
  char v10; // r14
  int v11; // ebx
  __int64 v12; // r15
  bool v13; // zf
  bool v14; // al
  char v15; // al
  unsigned __int8 v16; // [rsp+6h] [rbp-172h]
  bool v17; // [rsp+7h] [rbp-171h]
  _QWORD v18[17]; // [rsp+10h] [rbp-168h] BYREF
  __int64 v19; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-D8h]
  __int64 v21; // [rsp+A8h] [rbp-D0h]
  __int64 v22; // [rsp+B0h] [rbp-C8h]
  __int64 v23; // [rsp+B8h] [rbp-C0h]
  __int64 v24; // [rsp+C0h] [rbp-B8h]
  __int64 v25; // [rsp+C8h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+D0h] [rbp-A8h]
  __int64 v27; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v28; // [rsp+E8h] [rbp-90h]
  __int64 v29; // [rsp+F8h] [rbp-80h]
  __int128 v30; // [rsp+100h] [rbp-78h]
  __int64 v31; // [rsp+110h] [rbp-68h]
  __int64 v32; // [rsp+118h] [rbp-60h]
  __int64 v33; // [rsp+120h] [rbp-58h]
  __int64 v34; // [rsp+128h] [rbp-50h]
  char v35; // [rsp+130h] [rbp-48h]
  unsigned __int64 v36; // [rsp+138h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 72);
  v2 = *(_QWORD *)(a1 + 1504);
  v36 = __readfsqword(0x28u);
  if ( v1 <= 0x10 )
    v1 = getinf();
  if ( !*(_QWORD *)(a1 + 464) )
    return 1;
  v16 = sub_36A720(v2, v1);
  if ( v16 )
    return 1;
  if ( *(_QWORD *)(a1 + 464) )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = *(int *)(*(_QWORD *)(a1 + 456) + 4 * v5);
      v7 = *(_QWORD *)(a1 + 432) + 104 * v6;
      if ( *(_DWORD *)v7 == 1 )
      {
        if ( (v8 = (_BYTE *)(v7 + 80), v1 != 176 && v1 != 256)
          && (tinfo_property = get_tinfo_property(), v8 = (_BYTE *)(v7 + 80), (tinfo_property & 0xF) == 0xB)
          && (v15 = sub_36D5B0(a1, (_QWORD *)(v7 + 80), v4), v8 = (_BYTE *)(v7 + 80), !v15)
          || !sub_1EA670(v7, v2, v8, 0xFFFFFFFF, v1) )
        {
          sub_CE180((_QWORD *)a1, v6);
        }
      }
      v5 = ++v4;
    }
    while ( (unsigned __int64)v4 < *(_QWORD *)(a1 + 464) );
  }
  sub_CCEB0((__int64)v18, *(_QWORD *)(a1 + 1496), 0x10u);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v26 = 0;
  v28 = 0;
  v30 = 0;
  v34 = sub_364F90((__int64)v18, a1, v1);
  v35 = sub_D3FC0(v34, &v19, a1);
  if ( (unsigned int)(*(_DWORD *)v34 - 5) <= 1 )
    goto LABEL_34;
  sub_365180((_QWORD *)a1, v18);
  if ( !*(_DWORD *)(v34 + 4) )
    goto LABEL_34;
  if ( v35 )
  {
    v10 = sub_364C00(a1, (__int64)&v25, v34 + 88);
    v17 = sub_364C00(a1, (__int64)&v27, v34 + 112);
    if ( *(_DWORD *)v34 == 3 )
    {
      v17 = v10;
    }
    else if ( *(_DWORD *)v34 == 4 )
    {
      v10 &= (unsigned __int64)(int)v33 < *(_QWORD *)(v34 + 96);
    }
    v11 = sub_60760(&v19, 0);
    if ( v10 || v17 )
    {
      while ( v11 != (_DWORD)v20 )
      {
        v12 = sub_139080((_QWORD *)a1, v11);
        if ( (unsigned __int8)sub_367D20(v12 + 80, v1) )
        {
          if ( v10 && v17 )
            goto LABEL_35;
          v13 = (get_tinfo_property() & 0xF) == 9;
          v14 = v17;
          if ( !v13 )
            v14 = v10;
          if ( v14 && ((*(_BYTE *)(v12 + 24) & 2) != 0 || !(unsigned __int8)sub_369950(v34, a1, (_DWORD *)v12)) )
            goto LABEL_35;
        }
        v11 = sub_60760(&v19, v11 + 1);
      }
    }
LABEL_34:
    v16 = 1;
  }
LABEL_35:
  sub_194EE0(&v19);
  if ( v18[14] )
  {
    v18[15] = 0;
    qfree();
  }
  if ( v18[11] )
  {
    v18[12] = 0;
    qfree();
  }
  if ( v18[4] )
  {
    v18[5] = 0;
    qfree();
  }
  if ( v18[1] )
  {
    v18[2] = 0;
    qfree();
  }
  return v16;
}

