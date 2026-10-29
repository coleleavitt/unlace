__int64 __fastcall sub_281A80(__int64 a1, __int64 a2, int a3, char a4, double a5)
{
  signed int tinfo_size; // eax
  signed int v7; // r14d
  signed int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebp
  char v14; // [rsp+Fh] [rbp-A9h]
  _QWORD v15[3]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v16; // [rsp+40h] [rbp-78h]
  __int64 v17; // [rsp+48h] [rbp-70h]
  __int128 v18; // [rsp+50h] [rbp-68h] BYREF
  __int64 v19; // [rsp+60h] [rbp-58h]
  int v20; // [rsp+68h] [rbp-50h]
  __int16 v21; // [rsp+6Ch] [rbp-4Ch]
  unsigned __int64 v22; // [rsp+78h] [rbp-40h]

  v14 = a4;
  v22 = __readfsqword(0x28u);
  v15[0] = 0;
  copy_tinfo_t();
  set_tinfo_property();
  v16 = 0;
  v17 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    a5 = 0.0;
    v15[2] = 0;
    v15[1] = 0;
    v18 = 0;
    copy_tinfo_t();
    v19 = 0;
    copy_tinfo_t();
    v20 = 0;
    v21 = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    *(_QWORD *)&v18 = v16;
    v16 = 0;
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  clear_tinfo_t();
  tinfo_size = get_tinfo_size();
  v7 = tinfo_size;
  if ( !a4 || (v8 = *(unsigned __int8 *)(a2 + 130), v8 <= tinfo_size) )
  {
    if ( a3 == (unsigned int)get_tinfo_property() )
      goto LABEL_13;
    if ( set_tinfo_property() )
    {
      v11 = sub_246B40(a1, a2, v15, a5);
      goto LABEL_12;
    }
    v14 = 0;
    v8 = v7;
  }
  sub_32C430((__int64 *)&v18, *(_QWORD *)(a2 + 112), v8, a3);
  copy_tinfo_t();
  clear_tinfo_t();
  if ( !(unsigned __int8)sub_246B40(a1, a2, v15, a5) )
  {
    if ( v14 )
    {
      sub_244E70(a1, (__int64)v15, v9, v10);
      goto LABEL_8;
    }
LABEL_13:
    v11 = 0;
    goto LABEL_12;
  }
LABEL_8:
  v11 = 1;
LABEL_12:
  clear_tinfo_t();
  return v11;
}

