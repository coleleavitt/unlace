__int64 __fastcall sub_27CE80(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  int tinfo_size; // eax
  unsigned int v6; // r14d
  __int64 v7; // rdx
  unsigned int v8; // ebp
  char v11; // [rsp+Fh] [rbp-A9h]
  _QWORD v12[3]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v13; // [rsp+40h] [rbp-78h]
  __int64 v14; // [rsp+48h] [rbp-70h]
  __int128 v15; // [rsp+50h] [rbp-68h] BYREF
  __int64 v16; // [rsp+60h] [rbp-58h]
  int v17; // [rsp+68h] [rbp-50h]
  __int16 v18; // [rsp+6Ch] [rbp-4Ch]
  unsigned __int64 v19; // [rsp+78h] [rbp-40h]

  v11 = a4;
  v19 = __readfsqword(0x28u);
  v12[0] = 0;
  copy_tinfo_t();
  set_tinfo_property();
  v13 = 0;
  v14 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    v12[2] = 0;
    v12[1] = 0;
    v15 = 0;
    copy_tinfo_t();
    v16 = 0;
    copy_tinfo_t();
    v17 = 0;
    v18 = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    *(_QWORD *)&v15 = v13;
    v13 = 0;
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  clear_tinfo_t();
  tinfo_size = get_tinfo_size();
  v6 = tinfo_size;
  if ( !a4 || (v7 = *(unsigned __int8 *)(a2 + 130), (int)v7 <= tinfo_size) )
  {
    if ( a3 == (unsigned int)get_tinfo_property() )
      goto LABEL_13;
    if ( set_tinfo_property() )
    {
      v8 = sub_241F40(a1, a2, v12);
      goto LABEL_12;
    }
    v11 = 0;
    v7 = v6;
  }
  sub_327180(&v15, *(_QWORD *)(a2 + 112), v7, a3);
  copy_tinfo_t();
  clear_tinfo_t();
  if ( !(unsigned __int8)sub_241F40(a1, a2, v12) )
  {
    if ( v11 )
    {
      sub_240270(a1);
      goto LABEL_8;
    }
LABEL_13:
    v8 = 0;
    goto LABEL_12;
  }
LABEL_8:
  v8 = 1;
LABEL_12:
  clear_tinfo_t();
  return v8;
}

