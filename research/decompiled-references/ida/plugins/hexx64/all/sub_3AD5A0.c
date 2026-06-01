__int64 __fastcall sub_3AD5A0(__int64 a1, __int64 a2, __int64 *a3, double a4)
{
  int v4; // eax
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v13; // r15
  int v14; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rbp
  const char *v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+4h] [rbp-84h] BYREF
  __int64 v21; // [rsp+8h] [rbp-80h] BYREF
  __int64 v22; // [rsp+10h] [rbp-78h]
  __int64 v23; // [rsp+18h] [rbp-70h] BYREF
  char v24; // [rsp+20h] [rbp-68h]
  unsigned int v25; // [rsp+24h] [rbp-64h]
  __int64 tinfo_property; // [rsp+30h] [rbp-58h] BYREF
  const char *v27; // [rsp+38h] [rbp-50h]
  __int16 v28; // [rsp+40h] [rbp-48h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 80);
  v29 = __readfsqword(0x28u);
  v24 = 0;
  v22 = 0;
  v23 = 0;
  v25 = 0;
  if ( v4 != 1 )
  {
    if ( (unsigned int)(v4 - 2) <= 1 )
    {
      if ( v4 == 2 )
      {
        tinfo_property = 0;
        copy_tinfo_t();
      }
      else
      {
        sub_36D720(&tinfo_property, *(_QWORD *)(a1 + 24), 0, a4);
      }
      if ( (unsigned __int8)sub_3A9750() )
      {
        clear_tinfo_t();
        goto LABEL_7;
      }
      clear_tinfo_t();
    }
LABEL_12:
    v11 = 0;
    goto LABEL_10;
  }
  v13 = *(_QWORD *)(a1 + 88);
  v14 = *(_DWORD *)(v13 + 8);
  if ( (unsigned int)(v14 - 59) <= 1 )
  {
    tinfo_property = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    v22 = *(unsigned int *)(v13 + 32);
    if ( a3 )
    {
      sub_3AA0B0((__int64)&tinfo_property, (__int64)&v23, v22);
      sub_3A9450(a3, (__int64)&tinfo_property);
      if ( tinfo_property )
      {
        v27 = nullptr;
        qfree(tinfo_property);
      }
    }
    goto LABEL_7;
  }
  v15 = (unsigned int)(v14 - 48);
  if ( (unsigned int)v15 > 0x15 || (v16 = 2294273, !_bittest64(&v16, v15)) || !(unsigned __int8)sub_3A9750() )
  {
    v17 = sub_38C8E0(a1, &v21, &v20, a4);
    if ( v17 && (unsigned __int8)is_enum() )
    {
      v18 = s1;
      if ( v17[3] )
        v18 = (const char *)v17[2];
      if ( v18 )
      {
        v27 = v18;
        v28 = 256;
        tinfo_property = get_idati();
        if ( (unsigned __int8)create_tinfo() )
        {
          v25 = v20 & 0xF | v25 & 0xFFFFFFF0;
          v19 = sub_32ABC0(v21, v20, 0, a4);
          v22 = v19;
          if ( a3 )
            sub_2612E0(a3, (__int64)&v23, *((unsigned __int8 *)v17 + 14), v19, v20, 0);
          goto LABEL_7;
        }
      }
    }
    goto LABEL_12;
  }
LABEL_7:
  if ( a2 )
  {
    sub_3A9370(&v23);
    v6 = v25;
    v25 = *(_DWORD *)(a2 + 20);
    v7 = *(_QWORD *)a2;
    *(_DWORD *)(a2 + 20) = v6;
    v8 = v22;
    v22 = v7;
    v9 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a2 = v8;
    v10 = v23;
    v23 = v9;
    LOBYTE(v9) = *(_BYTE *)(a2 + 16);
    *(_QWORD *)(a2 + 8) = v10;
    LOBYTE(v10) = v24;
    v24 = v9;
    *(_BYTE *)(a2 + 16) = v10;
  }
  v11 = 1;
LABEL_10:
  clear_tinfo_t();
  return v11;
}

