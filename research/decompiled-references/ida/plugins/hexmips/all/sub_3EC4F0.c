__int64 __fastcall sub_3EC4F0(__int64 a1, unsigned __int8 *a2, __int64 a3, int dtype_size, unsigned int a5)
{
  unsigned __int8 v8; // al
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int16 v12; // ax
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rsi
  __int64 v16; // [rsp+8h] [rbp-68h] BYREF
  _QWORD v17[2]; // [rsp+10h] [rbp-60h] BYREF
  _DWORD v18[6]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-38h]

  v16 = a3;
  v19 = __readfsqword(0x28u);
  v17[0] = 0xFFFFFFFF00000000LL;
  v8 = a2[1];
  v17[1] = 0;
  if ( v8 != 5 )
  {
LABEL_2:
    if ( v8 != 4 )
    {
LABEL_3:
      sub_11C810((__int64)v17, *(_QWORD *)(a1 + 832), v16, dtype_size, *(_QWORD *)(a1 + 40), *a2);
      goto LABEL_4;
    }
    goto LABEL_14;
  }
  v10 = a2[5];
  if ( (unsigned __int8)v10 > 0x12u || (v11 = 294968, !_bittest64(&v11, v10)) )
  {
LABEL_11:
    v12 = *(_WORD *)(a1 + 48);
    if ( v12 == 135 )
    {
      v13 = 1;
LABEL_15:
      v14 = sub_11C9F0(
              (__int64)v17,
              *(_QWORD *)(a1 + 800),
              *(_QWORD *)(a1 + 40),
              a2,
              v16,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
              v13,
              -1);
      v15 = *(_QWORD *)(a1 + 832);
      if ( *(_DWORD *)(v15 + 84) < dtype_size )
      {
        if ( v14 )
          sub_11C5E0((char *)v17, v15, 9, *(_QWORD *)(a1 + 40), dtype_size);
        else
          sub_118BA0((__int64)v17);
      }
LABEL_18:
      if ( LOBYTE(v17[0]) )
        goto LABEL_4;
      goto LABEL_3;
    }
    if ( v12 > 0x87u )
    {
      v13 = 0;
      if ( v12 != 204 )
        goto LABEL_18;
      goto LABEL_15;
    }
    if ( ((v12 - 31) & 0xFFFD) != 0 )
      goto LABEL_18;
LABEL_14:
    v13 = 4;
    goto LABEL_15;
  }
  dtype_size = get_dtype_size();
  if ( !(unsigned __int8)sub_119160((__int64)v17, *(_QWORD *)(a1 + 832), (__int64)&v16, dtype_size) )
  {
    a5 = -1;
    goto LABEL_5;
  }
  if ( !LOBYTE(v17[0]) )
  {
    v8 = a2[1];
    if ( v8 != 5 )
      goto LABEL_2;
    goto LABEL_11;
  }
LABEL_4:
  v18[0] = 1;
  v18[2] = a5;
  v18[1] = dtype_size;
  sub_3EB6F0((_QWORD *)a1, 4, (unsigned __int8 *)v17, nullptr, (unsigned __int8 *)v18);
  sub_118BA0((__int64)v18);
LABEL_5:
  sub_118BA0((__int64)v17);
  return a5;
}

