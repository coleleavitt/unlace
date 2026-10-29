__int64 __fastcall sub_390200(__int64 a1, double a2)
{
  unsigned int v3; // ebp
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r14
  _QWORD *v8; // r13
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r13
  _QWORD *v13; // r15
  unsigned int v14; // eax
  __int64 v15; // [rsp+10h] [rbp-128h]
  __int64 v16; // [rsp+18h] [rbp-120h]
  __int64 v17; // [rsp+28h] [rbp-110h] BYREF
  __int64 v18; // [rsp+30h] [rbp-108h]
  __int128 v19; // [rsp+38h] [rbp-100h]
  __int64 v20; // [rsp+48h] [rbp-F0h]
  __int64 v21; // [rsp+50h] [rbp-E8h]
  __int64 v22; // [rsp+58h] [rbp-E0h]
  __int128 v23; // [rsp+60h] [rbp-D8h]
  __int64 v24; // [rsp+70h] [rbp-C8h]
  __int128 v25; // [rsp+78h] [rbp-C0h]
  char v26; // [rsp+88h] [rbp-B0h]
  __int64 tinfo_property; // [rsp+90h] [rbp-A8h]
  __int128 v28; // [rsp+98h] [rbp-A0h]
  __int64 v29; // [rsp+A8h] [rbp-90h]
  __int64 v30; // [rsp+B0h] [rbp-88h]
  __int64 v31; // [rsp+B8h] [rbp-80h]
  __int128 v32; // [rsp+C0h] [rbp-78h]
  __int64 v33; // [rsp+D0h] [rbp-68h]
  __int128 v34; // [rsp+D8h] [rbp-60h]
  char v35; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v36; // [rsp+F8h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v17 = 0;
  if ( !(unsigned __int8)sub_37A400(
                           *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL),
                           *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL),
                           (__int64)&v17,
                           2) )
    goto LABEL_5;
  v3 = sub_365B10(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v3 )
  {
    tinfo_property = 0;
    tinfo_property = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    v3 = sub_381A30(&v17, *(_QWORD *)(a1 + 128), *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), -1);
  }
  else
  {
    a2 = 0.0;
    v18 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 16;
    v19 = 0;
    v23 = 0;
    v25 = 0;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      v16 = *(_QWORD *)(a1 + 128);
      copy_tinfo_t();
      if ( !(_BYTE)v21 )
        copy_tinfo_t();
      v9 = v26 & 0xF0;
      if ( (v26 & 0xF0) == 0xC0 )
        v9 = HIDWORD(v20);
      if ( v9 <= 0x10 )
        v9 = getinf();
      if ( v9 - 208 <= 0x2F )
      {
        tinfo_property = 0;
        a2 = 0.0;
        v29 = 0;
        v30 = 0;
        v31 = 0;
        v33 = 0;
        v28 = 0;
        v32 = 0;
        v34 = 0;
        if ( (v9 & 0xFFFFFF0F) != 0 )
        {
          HIDWORD(v29) = v9;
          LOBYTE(v9) = -64;
        }
        v35 = v9;
        copy_tinfo_t();
        if ( (unsigned __int8)calc_retloc() )
        {
          v10 = v32;
          *(_QWORD *)&v32 = v23;
          *(_QWORD *)&v23 = v10;
          LODWORD(v10) = v31;
          LODWORD(v31) = v22;
          LODWORD(v22) = v10;
        }
        if ( v33 )
        {
          *(_QWORD *)&v34 = 0;
          qfree();
        }
        cleanup_argloc();
        clear_tinfo_t();
        v11 = tinfo_property;
        if ( tinfo_property )
        {
          v15 = v28;
          if ( (_QWORD)v28 )
          {
            v12 = 0;
            do
            {
              v13 = (_QWORD *)(v11 + 80 * v12);
              clear_tinfo_t();
              if ( v13[5] )
              {
                v13[6] = 0;
                qfree();
              }
              if ( v13[2] )
              {
                v13[3] = 0;
                qfree();
              }
              ++v12;
              cleanup_argloc();
              v11 = tinfo_property;
            }
            while ( v15 != v12 );
          }
          *(_QWORD *)&v28 = 0;
          qfree();
        }
      }
      if ( (unsigned __int8)create_tinfo() )
      {
        LOBYTE(v14) = sub_325640(&v17, v16);
        v3 = v14;
      }
    }
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree();
    }
    cleanup_argloc();
    clear_tinfo_t();
    v5 = v18;
    if ( v18 )
    {
      v6 = v19;
      if ( (_QWORD)v19 )
      {
        v7 = 0;
        do
        {
          v8 = (_QWORD *)(v5 + 80 * v7);
          clear_tinfo_t();
          if ( v8[5] )
          {
            v8[6] = 0;
            qfree();
          }
          if ( v8[2] )
          {
            v8[3] = 0;
            qfree();
          }
          ++v7;
          cleanup_argloc();
          v5 = v18;
        }
        while ( v6 != v7 );
      }
      *(_QWORD *)&v19 = 0;
      qfree();
      if ( (_BYTE)v3 )
        goto LABEL_5;
LABEL_19:
      sub_2ADAF0((__int64)"AUTOHIDE NONE\n"
                          "Sorry, cannot delete return value.\n"
                          "Please edit the function prototype instead");
      goto LABEL_6;
    }
  }
  if ( !(_BYTE)v3 )
    goto LABEL_19;
LABEL_5:
  sub_38FE00(a1, (const char *)&v17, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), 0, 0, a2);
  v3 = 1;
LABEL_6:
  clear_tinfo_t();
  return v3;
}

