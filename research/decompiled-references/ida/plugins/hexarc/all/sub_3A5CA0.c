__int64 __fastcall sub_3A5CA0(__int64 a1, __int64 a2, __int64 *a3)
{
  int v3; // eax
  unsigned int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v12; // r15
  int v13; // eax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // rbp
  const char *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // [rsp+4h] [rbp-84h] BYREF
  __int64 v20; // [rsp+8h] [rbp-80h] BYREF
  __int64 v21; // [rsp+10h] [rbp-78h] BYREF
  __int64 v22; // [rsp+18h] [rbp-70h] BYREF
  char v23; // [rsp+20h] [rbp-68h]
  unsigned int v24; // [rsp+24h] [rbp-64h]
  __int64 tinfo_property; // [rsp+30h] [rbp-58h] BYREF
  const char *v26; // [rsp+38h] [rbp-50h]
  __int16 v27; // [rsp+40h] [rbp-48h]
  unsigned __int64 v28; // [rsp+48h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 80);
  v28 = __readfsqword(0x28u);
  v23 = 0;
  v21 = 0;
  v22 = 0;
  v24 = 0;
  if ( v3 == 1 )
  {
    v12 = *(_QWORD *)(a1 + 88);
    v13 = *(_DWORD *)(v12 + 8);
    if ( (unsigned int)(v13 - 59) <= 1 )
    {
      tinfo_property = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
      v21 = *(unsigned int *)(v12 + 32);
      if ( a3 )
      {
        sub_3A27B0((__int64)&tinfo_property, (__int64)&v22, v21);
        sub_3A1B50(a3, &tinfo_property);
        if ( tinfo_property )
        {
          v26 = nullptr;
          qfree();
        }
      }
      goto LABEL_8;
    }
    v14 = (unsigned int)(v13 - 48);
    if ( (unsigned int)v14 <= 0x15 )
    {
      v15 = 2294273;
      if ( _bittest64(&v15, v14) )
      {
        if ( (unsigned __int8)sub_3A1E50(&v21, v12 + 48) )
          goto LABEL_7;
      }
    }
    v16 = sub_384FE0(a1, &v20, (int *)&v19);
    if ( v16 && (unsigned __int8)is_enum() )
    {
      v17 = s1;
      if ( v16[3] )
        v17 = (const char *)v16[2];
      if ( v17 )
      {
        v26 = v17;
        v27 = 256;
        tinfo_property = get_idati();
        if ( (unsigned __int8)create_tinfo() )
        {
          v24 = v19 & 0xF | v24 & 0xFFFFFFF0;
          v18 = sub_323690(v20, v19, 0);
          v21 = v18;
          if ( a3 )
            sub_259F60(a3, (__int64)&v22, *((unsigned __int8 *)v16 + 14), v18, v19, 0);
          goto LABEL_8;
        }
      }
    }
LABEL_13:
    v10 = 0;
    goto LABEL_11;
  }
  if ( (unsigned int)(v3 - 2) > 1 )
    goto LABEL_13;
  if ( v3 == 2 )
  {
    tinfo_property = 0;
    copy_tinfo_t();
  }
  else
  {
    sub_365EA0(&tinfo_property, *(_QWORD *)(a1 + 24), 0);
  }
  if ( !(unsigned __int8)sub_3A1E50(&v21, &tinfo_property) )
  {
    clear_tinfo_t();
    goto LABEL_13;
  }
  clear_tinfo_t();
LABEL_7:
  if ( a3 && (v22 & 0x100) != 0 )
    get_tinfo_pdata();
LABEL_8:
  if ( a2 )
  {
    sub_3A1A70(&v22);
    v5 = v24;
    v24 = *(_DWORD *)(a2 + 20);
    v6 = *(_QWORD *)a2;
    *(_DWORD *)(a2 + 20) = v5;
    v7 = v21;
    v21 = v6;
    v8 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a2 = v7;
    v9 = v22;
    v22 = v8;
    LOBYTE(v8) = *(_BYTE *)(a2 + 16);
    *(_QWORD *)(a2 + 8) = v9;
    LOBYTE(v9) = v23;
    v23 = v8;
    *(_BYTE *)(a2 + 16) = v9;
  }
  v10 = 1;
LABEL_11:
  clear_tinfo_t();
  return v10;
}

