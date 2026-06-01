__int64 __fastcall sub_55270(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char v5; // al
  __int64 scalar_bt; // rdx
  unsigned __int8 v7; // [rsp+0h] [rbp-88h]
  __int64 v8; // [rsp+10h] [rbp-78h] BYREF
  __int64 v9; // [rsp+18h] [rbp-70h] BYREF
  __int128 v10; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+38h] [rbp-50h]
  __int16 v13; // [rsp+3Ch] [rbp-4Ch]
  unsigned __int64 v14; // [rsp+48h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v10 = 0;
  v8 = 0;
  v9 = 0;
  copy_tinfo_t((char *)&v10 + 8, &v9);
  v11 = 0;
  copy_tinfo_t(&v11, &v8);
  v12 = 0;
  v13 = 0;
  clear_tinfo_t(&v9);
  clear_tinfo_t(&v8);
  copy_tinfo_t(&v10, a2);
  create_tinfo(a1, 10, 10, &v10);
  clear_tinfo_t(&v11);
  clear_tinfo_t((char *)&v10 + 8);
  clear_tinfo_t(&v10);
  if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDLL || a3 == get_tinfo_size(0, *a1, 0) )
    return 1;
  if ( ((a3 - 4) & 0xFFFFFFFFFFFFFFFBLL) != 0 )
  {
    scalar_bt = (unsigned __int8)get_scalar_bt((unsigned int)a3);
    result = 0;
    if ( !(_BYTE)scalar_bt )
      return result;
    *(_QWORD *)&v10 = scalar_bt;
    copy_tinfo_t(a1, &v10);
    clear_tinfo_t(&v10);
    return 1;
  }
  v9 = 0;
  v8 = 0;
  v10 = 0;
  copy_tinfo_t((char *)&v10 + 8, &v8);
  v11 = 0;
  copy_tinfo_t(&v11, &v9);
  v12 = 0;
  v13 = 0;
  clear_tinfo_t(&v8);
  clear_tinfo_t(&v9);
  copy_tinfo_t(&v10, a2);
  v5 = 64;
  if ( a3 == 4 )
    v5 = 32;
  HIBYTE(v13) = v5;
  v7 = create_tinfo(a1, 10, 10, &v10);
  clear_tinfo_t(&v11);
  clear_tinfo_t((char *)&v10 + 8);
  clear_tinfo_t(&v10);
  return v7;
}

