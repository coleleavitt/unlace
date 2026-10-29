unsigned __int64 __fastcall sub_3B49A0(__int64 *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // [rsp+8h] [rbp-70h] BYREF
  __int64 v8; // [rsp+10h] [rbp-68h]
  __int128 v9; // [rsp+18h] [rbp-60h]
  __int64 idati; // [rsp+30h] [rbp-48h]
  __int64 v11; // [rsp+38h] [rbp-40h]
  __int16 v12; // [rsp+40h] [rbp-38h]
  unsigned __int64 v13; // [rsp+48h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v8 = 0;
  v9 = 0;
  if ( (get_tinfo_property() & 0x100) != 0 )
    get_tinfo_pdata();
  if ( (unsigned __int64)v9 <= 6 || strcmp((const char *)(v8 + v9 - 6), "_vtbl") )
    goto LABEL_5;
  *(_BYTE *)(v8 + v9 - 6) = 0;
  v7 = 0;
  if ( !v8 || (v11 = v8, v12 = 256, idati = get_idati(), !(unsigned __int8)create_tinfo()) )
  {
    clear_tinfo_t();
LABEL_5:
    clear_tinfo_t();
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree();
    }
    return v13 - __readfsqword(0x28u);
  }
  sub_3A98B0(&v7);
  if ( (unsigned int)lexcompare_tinfo() )
  {
    copy_tinfo_t();
    sub_3B43E0(a1, a2, a3, a4, nullptr);
  }
  clear_tinfo_t();
  clear_tinfo_t();
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return v13 - __readfsqword(0x28u);
}

