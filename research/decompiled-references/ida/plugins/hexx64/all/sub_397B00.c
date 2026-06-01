__int64 __fastcall sub_397B00(__int64 a1, double a2, __m128 a3, __m128i a4, double a5)
{
  unsigned int v6; // ebp
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // r14
  _QWORD *v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r13
  _QWORD *v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // [rsp+10h] [rbp-128h]
  __int64 v23; // [rsp+18h] [rbp-120h]
  __int64 v24; // [rsp+28h] [rbp-110h] BYREF
  __int64 v25; // [rsp+30h] [rbp-108h]
  __int128 v26; // [rsp+38h] [rbp-100h]
  __int64 v27; // [rsp+48h] [rbp-F0h]
  __int64 v28; // [rsp+50h] [rbp-E8h]
  __int64 v29; // [rsp+58h] [rbp-E0h]
  __int128 v30; // [rsp+60h] [rbp-D8h]
  __int64 v31; // [rsp+70h] [rbp-C8h]
  __int128 v32; // [rsp+78h] [rbp-C0h]
  char v33; // [rsp+88h] [rbp-B0h]
  __int64 tinfo_property; // [rsp+90h] [rbp-A8h]
  __int128 v35; // [rsp+98h] [rbp-A0h]
  __int64 v36; // [rsp+A8h] [rbp-90h]
  __int64 v37; // [rsp+B0h] [rbp-88h]
  __int64 v38; // [rsp+B8h] [rbp-80h]
  __int128 v39; // [rsp+C0h] [rbp-78h]
  __int64 v40; // [rsp+D0h] [rbp-68h]
  __int128 v41; // [rsp+D8h] [rbp-60h]
  char v42; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v43; // [rsp+F8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v24 = 0;
  if ( !(unsigned __int8)sub_381D00(
                           *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL),
                           *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL),
                           (__int64)&v24,
                           2,
                           a2,
                           a3) )
    goto LABEL_5;
  v6 = sub_36D390(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v6 )
  {
    tinfo_property = 0;
    tinfo_property = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    v6 = sub_389330(&v24, *(_QWORD *)(a1 + 128), *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), -1, a2, a3);
  }
  else
  {
    a2 = 0.0;
    v25 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v31 = 0;
    v33 = 16;
    v26 = 0;
    v30 = 0;
    v32 = 0;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      v23 = *(_QWORD *)(a1 + 128);
      copy_tinfo_t();
      if ( !(_BYTE)v28 )
        copy_tinfo_t();
      v14 = v33 & 0xF0;
      if ( (v33 & 0xF0) == 0xC0 )
        v14 = HIDWORD(v27);
      if ( v14 <= 0x10 )
        v14 = getinf();
      if ( v14 - 208 <= 0x2F )
      {
        tinfo_property = 0;
        a2 = 0.0;
        v36 = 0;
        v37 = 0;
        v38 = 0;
        v40 = 0;
        v35 = 0;
        v39 = 0;
        v41 = 0;
        if ( (v14 & 0xFFFFFF0F) != 0 )
        {
          HIDWORD(v36) = v14;
          LOBYTE(v14) = -64;
        }
        v42 = v14;
        copy_tinfo_t();
        if ( (unsigned __int8)calc_retloc() )
        {
          v15 = v39;
          *(_QWORD *)&v39 = v30;
          *(_QWORD *)&v30 = v15;
          LODWORD(v15) = v38;
          LODWORD(v38) = v29;
          LODWORD(v29) = v15;
        }
        if ( v40 )
        {
          *(_QWORD *)&v41 = 0;
          qfree(v40);
        }
        cleanup_argloc();
        clear_tinfo_t();
        v16 = tinfo_property;
        if ( tinfo_property )
        {
          v22 = v35;
          if ( (_QWORD)v35 )
          {
            v17 = 0;
            do
            {
              v18 = (_QWORD *)(v16 + 80 * v17);
              clear_tinfo_t();
              v19 = v18[5];
              if ( v19 )
              {
                v18[6] = 0;
                qfree(v19);
              }
              v20 = v18[2];
              if ( v20 )
              {
                v18[3] = 0;
                qfree(v20);
              }
              ++v17;
              cleanup_argloc();
              v16 = tinfo_property;
            }
            while ( v22 != v17 );
          }
          *(_QWORD *)&v35 = 0;
          qfree(v16);
        }
      }
      if ( (unsigned __int8)create_tinfo() )
      {
        LOBYTE(v21) = sub_32CB80(&v24, v23, 0.0, a3);
        v6 = v21;
      }
    }
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31);
    }
    cleanup_argloc();
    clear_tinfo_t();
    v8 = v25;
    if ( v25 )
    {
      v9 = v26;
      if ( (_QWORD)v26 )
      {
        v10 = 0;
        do
        {
          v11 = (_QWORD *)(v8 + 80 * v10);
          clear_tinfo_t();
          v12 = v11[5];
          if ( v12 )
          {
            v11[6] = 0;
            qfree(v12);
          }
          v13 = v11[2];
          if ( v13 )
          {
            v11[3] = 0;
            qfree(v13);
          }
          ++v10;
          cleanup_argloc();
          v8 = v25;
        }
        while ( v9 != v10 );
      }
      *(_QWORD *)&v26 = 0;
      qfree(v8);
      if ( (_BYTE)v6 )
        goto LABEL_5;
LABEL_19:
      sub_2B4E70((__int64)"AUTOHIDE NONE\n"
                          "Sorry, cannot delete return value.\n"
                          "Please edit the function prototype instead");
      goto LABEL_6;
    }
  }
  if ( !(_BYTE)v6 )
    goto LABEL_19;
LABEL_5:
  sub_397700(a1, (char *)&v24, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), 0, 0, a2, *(double *)a3.m128_u64, a4, a5);
  v6 = 1;
LABEL_6:
  clear_tinfo_t();
  return v6;
}

