__int64 __fastcall sub_1C2460(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  unsigned int tinfo_details; // r12d
  __int64 v8; // r9
  unsigned __int64 v9; // r15
  _QWORD *v10; // r14
  _QWORD *v11; // r9
  char tinfo_property; // al
  unsigned __int64 v14; // rbx
  _QWORD *v15; // [rsp+0h] [rbp-88h]
  unsigned __int64 v16; // [rsp+8h] [rbp-80h]
  __int64 v17; // [rsp+10h] [rbp-78h] BYREF
  __int128 v18; // [rsp+18h] [rbp-70h]
  __int128 v19; // [rsp+28h] [rbp-60h]
  __int64 v20; // [rsp+38h] [rbp-50h]
  int v21; // [rsp+40h] [rbp-48h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0x2F) != 0xD )
  {
    v14 = (unsigned __int64)(a3 + 7) >> 3;
    sub_5DC10((__int64 *)(a1 + 16), a4);
    sub_5DC10((__int64 *)(a1 + 16), a4 + v14);
    v17 = a4;
    *(_QWORD *)&v18 = v14;
    sub_310850(a1 + 32, &v17);
    return 1;
  }
  v17 = 0;
  v20 = 0;
  v21 = 1;
  v18 = 0;
  v19 = 0;
  tinfo_details = get_tinfo_details();
  if ( (_BYTE)tinfo_details )
  {
    v8 = v17;
    if ( (_QWORD)v18 )
    {
      v9 = 0;
      v10 = nullptr;
      v16 = v18 - 1;
      while ( 1 )
      {
        v11 = (_QWORD *)(144 * v9 + v8);
        if ( !v10 )
          v10 = v11;
        if ( v9 >= v16 )
          break;
LABEL_8:
        v15 = v11;
        tinfo_property = get_tinfo_property();
        v11 = v15;
        if ( (tinfo_property & 0xF) != 0xE )
          break;
        if ( ++v9 == (_QWORD)v18 )
          return tinfo_details;
        v8 = v17;
      }
      while ( (unsigned __int8)sub_1C2460(a1, v10 + 8, v11[1] + *v11 - *v10, a4 + (*v10 >> 3), v6, v11) )
      {
        if ( (_QWORD)v18 == ++v9 )
          return tinfo_details;
        v10 = (_QWORD *)(v17 + 144 * v9);
        v11 = v10;
        if ( v9 < v16 )
          goto LABEL_8;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}

