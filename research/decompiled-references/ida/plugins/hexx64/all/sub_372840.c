__int64 __fastcall sub_372840(__int64 a1, double a2, __m128 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rbx
  int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r15
  _BYTE *v10; // r11
  char tinfo_property; // al
  char v12; // al
  char v13; // r14
  int v14; // ebx
  unsigned __int64 v15; // r15
  bool v16; // zf
  bool v17; // al
  char v18; // al
  unsigned __int8 v19; // [rsp+6h] [rbp-172h]
  bool v20; // [rsp+7h] [rbp-171h]
  __int64 v21; // [rsp+10h] [rbp-168h] BYREF
  __int64 v22; // [rsp+18h] [rbp-160h]
  __int64 v23; // [rsp+20h] [rbp-158h]
  __int64 v24; // [rsp+30h] [rbp-148h]
  __int64 v25; // [rsp+38h] [rbp-140h]
  __int64 v26; // [rsp+68h] [rbp-110h]
  __int64 v27; // [rsp+70h] [rbp-108h]
  __int64 v28; // [rsp+80h] [rbp-F8h]
  __int64 v29; // [rsp+88h] [rbp-F0h]
  __int64 v30; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-D8h]
  __int64 v32; // [rsp+A8h] [rbp-D0h]
  __int64 v33; // [rsp+B0h] [rbp-C8h]
  __int64 v34; // [rsp+B8h] [rbp-C0h]
  __int64 v35; // [rsp+C0h] [rbp-B8h]
  __int64 v36; // [rsp+C8h] [rbp-B0h] BYREF
  __int128 v37; // [rsp+D0h] [rbp-A8h]
  __int64 v38; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v39; // [rsp+E8h] [rbp-90h]
  __int64 v40; // [rsp+F8h] [rbp-80h]
  __int128 v41; // [rsp+100h] [rbp-78h]
  __int64 v42; // [rsp+110h] [rbp-68h]
  __int64 v43; // [rsp+118h] [rbp-60h]
  __int64 v44; // [rsp+120h] [rbp-58h]
  __int64 v45; // [rsp+128h] [rbp-50h]
  char v46; // [rsp+130h] [rbp-48h]
  unsigned __int64 v47; // [rsp+138h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 72);
  v4 = *(_QWORD *)(a1 + 1504);
  v47 = __readfsqword(0x28u);
  if ( v3 <= 0x10 )
    v3 = getinf();
  if ( !*(_QWORD *)(a1 + 464) )
    return 1;
  v19 = sub_36F620(v4, v3, a2);
  if ( v19 )
    return 1;
  if ( *(_QWORD *)(a1 + 464) )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *(int *)(*(_QWORD *)(a1 + 456) + 4 * v7);
      v9 = *(_QWORD *)(a1 + 432) + 104 * v8;
      if ( *(_DWORD *)v9 == 1 )
      {
        if ( (v10 = (_BYTE *)(v9 + 80), v3 != 176 && v3 != 256)
          && (tinfo_property = get_tinfo_property(), v10 = (_BYTE *)(v9 + 80), (tinfo_property & 0xF) == 0xB)
          && (v18 = sub_3724B0(a1, (_QWORD *)(v9 + 80), v6), v10 = (_BYTE *)(v9 + 80), !v18)
          || (sub_1EEEF0(v9, v4, v10, 0xFFFFFFFF, v3, a2), !v12) )
        {
          sub_D2380((_QWORD *)a1, v8, a2);
        }
      }
      v7 = ++v6;
    }
    while ( (unsigned __int64)v6 < *(_QWORD *)(a1 + 464) );
  }
  sub_D10B0((__int64)&v21, *(_QWORD *)(a1 + 1496), 0x10u);
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v45 = sub_369E90((__int64)&v21, a1, v3);
  v46 = sub_D81C0(v45, &v30, a1, (__m128)0LL, a3);
  if ( (unsigned int)(*(_DWORD *)v45 - 5) <= 1 )
    goto LABEL_34;
  sub_36A080((_QWORD *)a1, &v21, 0.0);
  if ( !*(_DWORD *)(v45 + 4) )
    goto LABEL_34;
  if ( v46 )
  {
    v13 = sub_369B00(a1, (__int64)&v36, v45 + 88, 0.0);
    v20 = sub_369B00(a1, (__int64)&v38, v45 + 112, 0.0);
    if ( *(_DWORD *)v45 == 3 )
    {
      v20 = v13;
    }
    else if ( *(_DWORD *)v45 == 4 )
    {
      v13 &= (unsigned __int64)(int)v44 < *(_QWORD *)(v45 + 96);
    }
    v14 = sub_64960(&v30, 0);
    if ( v13 || v20 )
    {
      while ( v14 != (_DWORD)v31 )
      {
        v15 = sub_13D280((_QWORD *)a1, v14, 0.0);
        if ( (unsigned __int8)sub_36CC20(v15 + 80, v3) )
        {
          if ( v13 && v20 )
            goto LABEL_35;
          v16 = (get_tinfo_property() & 0xF) == 9;
          v17 = v20;
          if ( !v16 )
            v17 = v13;
          if ( v17 && ((*(_BYTE *)(v15 + 24) & 2) != 0 || !(unsigned __int8)sub_36E850(v45, a1, (_DWORD *)v15, 0.0)) )
            goto LABEL_35;
        }
        v14 = sub_64960(&v30, v14 + 1);
      }
    }
LABEL_34:
    v19 = 1;
  }
LABEL_35:
  sub_1990E0(&v30);
  if ( v28 )
  {
    v29 = 0;
    qfree(v28);
  }
  if ( v26 )
  {
    v27 = 0;
    qfree(v26);
  }
  if ( v24 )
  {
    v25 = 0;
    qfree(v24);
  }
  if ( v22 )
  {
    v23 = 0;
    qfree(v22);
  }
  return v19;
}

