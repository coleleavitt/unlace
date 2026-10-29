__int64 __fastcall sub_BA70(_QWORD *a1)
{
  unsigned int v1; // r12d
  __int64 v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rbp
  _QWORD *v6; // rbx
  char tinfo_property; // al
  __int64 i; // rdi
  unsigned int v9; // eax
  _QWORD *v10; // rax
  char v11; // al
  __int64 tinfo_size; // rax
  __int64 v13; // r13
  __int64 v14; // rbp
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // [rsp+8h] [rbp-70h] BYREF
  _QWORD *v19; // [rsp+10h] [rbp-68h] BYREF
  __int128 v20; // [rsp+18h] [rbp-60h]
  __int128 v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+38h] [rbp-40h]
  int v23; // [rsp+40h] [rbp-38h]
  unsigned __int64 v24; // [rsp+48h] [rbp-30h]

  v1 = 0;
  v24 = __readfsqword(0x28u);
  if ( (get_tinfo_property(*a1, 2) & 0x3F) == 0xD )
  {
    v3 = *a1;
    v23 = 1;
    v19 = nullptr;
    v22 = 0;
    v20 = 0;
    v21 = 0;
    get_tinfo_details(v3, 13, &v19);
    v1 = log2floor((unsigned int)v22);
    v4 = v19;
    v5 = &v19[18 * v20];
    if ( v5 != v19 )
    {
      v6 = v19 + 8;
      tinfo_property = get_tinfo_property(v19[8], 2);
      v18 = 0;
      if ( (tinfo_property & 0xF) != 0xB )
        goto LABEL_12;
LABEL_5:
      v18 = get_tinfo_property(*v6, 11);
      for ( i = v18; ; i = v18 )
      {
        if ( (get_tinfo_property(i, 2) & 0x3F) == 0xD )
        {
          v9 = sub_BA70(&v18);
        }
        else
        {
          tinfo_size = get_tinfo_size(0, v18, 0);
          v9 = log2floor(tinfo_size);
        }
        if ( v1 < v9 )
          v1 = v9;
        clear_tinfo_t(&v18);
        v10 = v6 + 18;
        if ( v5 == v6 + 10 )
          break;
        v6 += 18;
        v11 = get_tinfo_property(*v10, 2);
        v18 = 0;
        if ( (v11 & 0xF) == 0xB )
          goto LABEL_5;
LABEL_12:
        copy_tinfo_t(&v18, v6);
      }
      v4 = v19;
    }
    if ( v4 )
    {
      v13 = v20;
      if ( (_QWORD)v20 )
      {
        v14 = 0;
        do
        {
          v15 = &v4[18 * v14];
          clear_tinfo_t(v15 + 8);
          v16 = v15[5];
          if ( v16 )
          {
            v15[6] = 0;
            qfree(v16);
          }
          v17 = v15[2];
          if ( v17 )
          {
            v15[3] = 0;
            qfree(v17);
          }
          ++v14;
          v4 = v19;
        }
        while ( v13 != v14 );
      }
      *(_QWORD *)&v20 = 0;
      qfree(v4);
    }
  }
  return v1;
}

