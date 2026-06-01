__int64 __fastcall sub_8EC20(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v10; // rdi
  __int64 v11; // [rsp+8h] [rbp-80h]
  _BYTE v12[16]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v13[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+30h] [rbp-58h]
  __int128 v15; // [rsp+38h] [rbp-50h]
  unsigned __int64 v16; // [rsp+48h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 76) & 1) != 0 )
    return (**(__int64 (__fastcall ***)(__int64, __int64, __int64))a1)(a1, a2, a2);
  v7 = *(_QWORD *)(a1 + 64);
  if ( v7 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL);
    if ( a3 )
      goto LABEL_4;
LABEL_6:
    if ( (unsigned __int8)sub_126870(v8, (int)a2 + 64, (int)v7 + 64, 0, 0, a6) )
      return (**(__int64 (__fastcall ***)(__int64, __int64, __int64))a1)(a1, a2, a2);
    if ( (*(_BYTE *)(a1 + 76) & 2) != 0
      && !*(_DWORD *)(a1 + 72)
      && !*(_QWORD *)(a1 + 64)
      && *(_DWORD *)(a2 + 68) == 2 * *(_DWORD *)(v7 + 68) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 480LL) + 112LL);
      sub_11D380(v12, v7 + 64);
      if ( (unsigned __int8)sub_12B110(v12, v11, 0) && (unsigned __int8)sub_11F4A0(v12, a2 + 64, 0) )
      {
        v10 = *(_QWORD *)(a1 + 8);
        v13[0] = 0;
        v13[1] = 0;
        v14 = 0;
        v15 = 0;
        sub_121920(v10, v13, v7 + 64, 1);
        if ( !sub_11E600(*(_QWORD *)(a1 + 8), v13, v7, a2, 0, 1) )
        {
          sub_8D480((__int64)v13);
          sub_1166E0(v12);
          return (**(__int64 (__fastcall ***)(__int64, __int64, __int64))a1)(a1, a2, a2);
        }
        if ( v14 )
        {
          *(_QWORD *)&v15 = 0;
          qfree();
        }
        qfree();
      }
      sub_1166E0(v12);
    }
    return 0;
  }
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL);
  if ( !a3 )
    goto LABEL_6;
LABEL_4:
  if ( (unsigned __int8)sub_126870(v8, (int)v7 + 64, (int)a2 + 64, 0, 0, a6) )
    return (**(__int64 (__fastcall ***)(__int64, __int64, __int64))a1)(a1, a2, a2);
  return 0;
}

