__int64 __fastcall sub_90820(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 v5; // rbx
  int v6; // r12d
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  int v11; // [rsp+10h] [rbp-90h] BYREF
  __int128 v12; // [rsp+18h] [rbp-88h]
  _QWORD v13[2]; // [rsp+30h] [rbp-70h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-60h] BYREF
  _QWORD v15[10]; // [rsp+50h] [rbp-50h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v15[3] = __readfsqword(0x28u);
  v6 = a4;
  v13[0] = 0xFFFFFFFF00000000LL;
  v13[1] = 0;
  v14[0] = 0xFFFFFFFF00000000LL;
  v14[1] = 0;
  v15[0] = 0xFFFFFFFF00000000LL;
  v15[1] = 0;
  v12 = 0;
  sub_121960(&v11, a4);
  v11 = 12;
  HIDWORD(v15[0]) = HIDWORD(v13[0]);
  sub_158230((unsigned int)&v11, v5, 0, 0, 0, 0, 0);
  v7 = *a2;
LABEL_2:
  while ( 1 )
  {
    v7 = *(_QWORD *)(v7 + 16);
    if ( !v7 )
      break;
    while ( *(_DWORD *)v7 == v11 )
    {
      if ( (unsigned __int8)sub_8FC30(a1, v7, v7, a3, v6, &v11) )
      {
        v8 = v7;
LABEL_20:
        *a2 = v7;
        goto LABEL_21;
      }
      if ( *(_DWORD *)v7 != 9
        || *(_BYTE *)(v7 + 32) != 4
        || !(unsigned __int8)sub_8FC30(a1, v7, *(_QWORD *)(v7 + 40), a3, v6, &v11) )
      {
        goto LABEL_2;
      }
      v8 = *(_QWORD *)(v7 + 40);
      if ( v8 )
        goto LABEL_20;
      v7 = *(_QWORD *)(v7 + 16);
      if ( !v7 )
        goto LABEL_10;
    }
  }
LABEL_10:
  v8 = *a2;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v8 + 8);
    if ( !v8 )
      break;
    if ( *(_DWORD *)v8 == v11 )
    {
      if ( (unsigned __int8)sub_8FC30(a1, v8, v8, a3, v6, &v11) )
      {
        v9 = v8;
LABEL_23:
        *a2 = v8;
        v8 = v9;
        break;
      }
      if ( *(_DWORD *)v8 == 9 && *(_BYTE *)(v8 + 32) == 4 )
      {
        if ( (unsigned __int8)sub_8FC30(a1, v8, *(_QWORD *)(v8 + 40), a3, v6, &v11) )
        {
          v9 = *(_QWORD *)(v8 + 40);
          if ( v9 )
            goto LABEL_23;
        }
      }
    }
  }
LABEL_21:
  sub_119360(v15);
  sub_119360(v14);
  sub_119360(v13);
  return v8;
}

