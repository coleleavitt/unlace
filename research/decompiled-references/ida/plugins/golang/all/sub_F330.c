__int64 __fastcall sub_F330(__int64 *a1, __int64 **a2)
{
  __int64 v2; // rbp
  __int64 *v3; // r12
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v7; // [rsp+8h] [rbp-B8h] BYREF
  __int128 v8; // [rsp+10h] [rbp-B0h]
  __int64 idati; // [rsp+28h] [rbp-98h]
  const char *v10; // [rsp+30h] [rbp-90h]
  __int16 v11; // [rsp+38h] [rbp-88h]
  __int64 v12; // [rsp+48h] [rbp-78h]
  __int128 v13; // [rsp+50h] [rbp-70h]
  __int64 v14; // [rsp+60h] [rbp-60h]
  __int128 v15; // [rsp+68h] [rbp-58h]
  unsigned __int64 v16; // [rsp+80h] [rbp-40h]

  v2 = *a1;
  v3 = *a2;
  v16 = __readfsqword(0x28u);
  v13 = 0;
  v4 = *(_QWORD *)(v2 + 64);
  v15 = 0;
  v12 = 0;
  v14 = 0;
  if ( !(_BYTE)v4 )
  {
    v10 = "FUNCDATA_UnsafePoints";
    v11 = 256;
    idati = get_idati();
    if ( !(unsigned __int8)create_tinfo() )
    {
      v7 = 0;
      v8 = 0;
      sub_CCD0(&v7);
      parse_decls();
      v11 = 256;
      v10 = "FUNCDATA_UnsafePoints";
      idati = get_idati();
      create_tinfo();
      if ( v7 )
      {
        *(_QWORD *)&v8 = 0;
        qfree();
      }
    }
    copy_tinfo_t();
    clear_tinfo_t();
  }
  if ( get_tinfo_property4() == -1 )
  {
    v5 = 0;
  }
  else
  {
    sub_CCD0(v3);
    v5 = 1;
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v5;
}
