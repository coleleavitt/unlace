__int64 __fastcall sub_2DFC0(__int64 a1, __int64 a2, char a3, unsigned __int8 a4)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+10h] [rbp-78h] BYREF
  __int64 v9; // [rsp+18h] [rbp-70h] BYREF
  __int128 v10; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+38h] [rbp-50h]
  char v13; // [rsp+3Ch] [rbp-4Ch]
  char v14; // [rsp+3Dh] [rbp-4Bh]
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v10 = 0;
  v9 = 0;
  v8 = 0;
  copy_tinfo_t((char *)&v10 + 8, &v8);
  v11 = 0;
  copy_tinfo_t(&v11, &v9);
  v13 = a3;
  v12 = 0;
  v14 = 0;
  clear_tinfo_t(&v8);
  clear_tinfo_t(&v9);
  copy_tinfo_t(&v10, a2);
  v6 = create_tinfo(a1, a4, 10, &v10);
  clear_tinfo_t(&v11);
  clear_tinfo_t((char *)&v10 + 8);
  clear_tinfo_t(&v10);
  return v6;
}
