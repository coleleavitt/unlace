unsigned __int64 __fastcall sub_6DCB0(__int64 *a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  int v3; // eax
  unsigned __int8 *v4; // rsi
  int v5; // eax
  __int64 *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  __int64 v11; // r13
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int8 *v16; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int8 *v17; // [rsp+10h] [rbp-58h]
  __int64 v18; // [rsp+18h] [rbp-50h]
  char v19; // [rsp+20h] [rbp-48h]
  __int64 *v20; // [rsp+28h] [rbp-40h]
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v20 = a1;
  v19 = 1;
  v18 = 0;
  v16 = a2;
  v17 = a3;
  v3 = sub_196ED0(&v16, a3);
  v4 = v17;
  LODWORD(v18) = v3;
  if ( v16 < v17 )
  {
    while ( 1 )
    {
      v5 = sub_196ED0(&v16, v4);
      if ( v19 == 1 || v5 )
        break;
      v18 = (unsigned int)sub_196ED0(&v16, v17);
      v19 = 1;
LABEL_12:
      v4 = v17;
      if ( v16 >= v17 )
        return v21 - __readfsqword(0x28u);
    }
    v6 = v20;
    HIDWORD(v18) += v5;
    v7 = v20[1];
    v8 = *v20;
    if ( v20[2] < (unsigned __int64)(v7 + 1) )
    {
      v15 = sub_1987B0(v20, v8, v7 + 1, 2192);
      v7 = v6[1];
      *v6 = v15;
      v8 = v15;
    }
    v9 = 2192 * v7;
    v10 = (_QWORD *)(v8 + v9);
    *v10 = 0;
    v10[273] = 0;
    memset(
      (void *)((v8 + v9 + 8) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((_DWORD)v8 + (_DWORD)v9 - (((_DWORD)v8 + (_DWORD)v9 + 8) & 0xFFFFFFF8) + 2192) >> 3));
    ++v6[1];
    *v10 = v18;
    v11 = (__int64)v17;
    if ( v16 >= v17 )
      return v21 - __readfsqword(0x28u);
    v13 = *v16++;
    v14 = v13 << 20;
    v10[1] = v14;
    if ( (v14 & 0xF00000) != 0 )
    {
      if ( !(unsigned __int8)sub_6C720((__int64)(v10 + 2), v14, 0, (unsigned __int64 *)&v16, v11) )
        return v21 - __readfsqword(0x28u);
      v14 = v10[1];
      if ( (v14 & 0xF000000) == 0 )
        goto LABEL_10;
    }
    else if ( (v14 & 0xF000000) == 0 )
    {
LABEL_10:
      if ( v19 )
        v19 = 0;
      goto LABEL_12;
    }
    if ( !(unsigned __int8)sub_6C720((__int64)(v10 + 36), v14, 1, (unsigned __int64 *)&v16, v11) )
      return v21 - __readfsqword(0x28u);
    goto LABEL_10;
  }
  return v21 - __readfsqword(0x28u);
}
