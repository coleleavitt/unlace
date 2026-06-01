__int64 __fastcall sub_36F1A0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v7; // rax
  __int64 func; // r15
  unsigned int v9; // esi
  __int64 v10; // rdi
  __int64 v11; // r13
  _QWORD *v12; // r15
  __int64 v13; // [rsp+0h] [rbp-108h]
  __int64 v14; // [rsp+0h] [rbp-108h]
  __int64 v15; // [rsp+8h] [rbp-100h]
  _QWORD v16[3]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-D0h]
  __int64 v18; // [rsp+40h] [rbp-C8h]
  __int128 v19; // [rsp+48h] [rbp-C0h]
  __int64 v20; // [rsp+58h] [rbp-B0h]
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+68h] [rbp-A0h]
  __int64 v23; // [rsp+78h] [rbp-90h]
  __int64 v24; // [rsp+80h] [rbp-88h]
  __int64 v25; // [rsp+88h] [rbp-80h]
  __int128 v26; // [rsp+90h] [rbp-78h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  __int128 v28; // [rsp+A8h] [rbp-60h]
  char v29; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v30; // [rsp+C8h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( a2 == *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 120LL) )
    return v30 - __readfsqword(0x28u);
  sub_1414F0(a1);
  if ( (get_aflags() & 0x2000000) != 0 )
  {
    if ( (unsigned __int8)get_tinfo() && (get_tinfo_property() & 0xF) == 0xC )
    {
      v21 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v27 = 0;
      v29 = 16;
      v22 = 0;
      v26 = 0;
      v28 = 0;
      if ( (unsigned __int8)get_tinfo_details() && (_QWORD)v22 )
      {
        v16[1] = a2;
        v16[0] = off_4B9C88;
        v16[2] = &v21;
        v17 = 0;
        func = get_func();
        if ( func )
        {
          v18 = 32;
          v20 = 0;
          v19 = 0;
          v9 = v29 & 0xF0;
          if ( (v29 & 0xF0) == 0xC0 )
            v9 = HIDWORD(v23);
          if ( v9 <= 0x10 )
            getinf();
          get_stkarg_area_info();
          v13 = *(unsigned __int16 *)(func + 40);
          v15 = *(_QWORD *)(func + 32);
          v17 = (int)get_frame_retsize() + *((_QWORD *)&v19 + 1) + v15 + v13;
        }
        sub_2B6F00(*(_QWORD *)(a1 + 112), a2, (__int64)v16);
        if ( v27 )
        {
          *(_QWORD *)&v28 = 0;
          qfree();
        }
        cleanup_argloc();
        clear_tinfo_t();
        v10 = v21;
        if ( v21 )
        {
          v14 = v22;
          if ( (_QWORD)v22 )
          {
            v11 = 0;
            do
            {
              v12 = (_QWORD *)(v10 + 80 * v11);
              clear_tinfo_t();
              if ( v12[5] )
              {
                v12[6] = 0;
                qfree();
              }
              if ( v12[2] )
              {
                v12[3] = 0;
                qfree();
              }
              ++v11;
              cleanup_argloc();
              v10 = v21;
            }
            while ( v14 != v11 );
          }
          *(_QWORD *)&v22 = 0;
          qfree();
        }
        clear_tinfo_t();
        goto LABEL_3;
      }
      cleanup_argloc();
      clear_tinfo_t();
    }
    clear_tinfo_t();
  }
LABEL_3:
  if ( (unsigned __int8)sub_36F0E0(*(_QWORD *)(a1 + 1128), a2) )
  {
    if ( a3 != -1 )
      return sub_1431B0(*(_QWORD *)(a1 + 112), a3, 0);
    v7 = (unsigned __int64 *)get_func();
    if ( v7 )
    {
      a3 = *v7;
      if ( *v7 != -1 )
        return sub_1431B0(*(_QWORD *)(a1 + 112), a3, 0);
    }
  }
  return v30 - __readfsqword(0x28u);
}

