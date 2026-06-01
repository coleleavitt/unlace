__int64 __fastcall sub_97590(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // r13d
  _DWORD *v8; // r15
  _DWORD *v9; // r14
  __int64 v10; // rax
  _DWORD *v11; // r10
  __int64 v12; // r11
  int v13; // eax
  _DWORD *v14; // r9
  __int64 v15; // rsi
  int v16; // [rsp+8h] [rbp-E8h]
  int v17; // [rsp+10h] [rbp-E0h]
  __int64 v18; // [rsp+20h] [rbp-D0h]
  _DWORD *v19; // [rsp+20h] [rbp-D0h]
  int v20; // [rsp+28h] [rbp-C8h]
  __int64 v21; // [rsp+30h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-B8h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-B0h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-A0h] BYREF
  char v25[8]; // [rsp+60h] [rbp-90h] BYREF
  __int128 v26; // [rsp+68h] [rbp-88h]
  _QWORD v27[2]; // [rsp+80h] [rbp-70h] BYREF
  _QWORD v28[2]; // [rsp+90h] [rbp-60h] BYREF
  _QWORD v29[10]; // [rsp+A0h] [rbp-50h] BYREF

  v20 = a2;
  v29[3] = __readfsqword(0x28u);
  if ( !a3 || *a4 != 19 || a4[17] >= *(_DWORD *)(a1 + 88) )
    return 0;
  v8 = a4 + 8;
  v9 = a4 + 12;
  if ( !(unsigned __int8)sub_130600(a2, a3, a4 + 8, a3, a4 + 12, 0) )
  {
    if ( (unsigned __int8)sub_130600(a2, a3, v9, a3, v8, 0)
      && (unsigned __int8)sub_132860(a2, a3, (_DWORD)v9, a3, (_DWORD)v8, 8) )
    {
      *a4 = 4;
      sub_11C450(v8, v9);
      goto LABEL_12;
    }
LABEL_15:
    v21 = a3;
    v22 = a3;
    v5 = a2;
    v18 = sub_128E80(a2, v8, &v21, 1);
    v10 = sub_128E80(a2, v9, &v22, 1);
    LODWORD(v11) = v18;
    v12 = v10;
    LOBYTE(v5) = v10 == 0 || v18 == 0;
    if ( !(_BYTE)v5 )
    {
      v13 = *(_DWORD *)v18;
      if ( *(_DWORD *)v18 == 11 )
      {
        if ( *(_BYTE *)(v18 + 32) != 4 )
          return 0;
        v11 = *(_DWORD **)(v18 + 40);
        v15 = v12;
        v13 = *v11;
        v14 = v11;
      }
      else if ( *(_DWORD *)v12 == 11 )
      {
        if ( *(_BYTE *)(v12 + 32) != 4 )
          return 0;
        v12 = *(_QWORD *)(v12 + 40);
        v15 = v18;
        v14 = (_DWORD *)v12;
      }
      else
      {
        v14 = nullptr;
        v15 = 0;
      }
      if ( v13 == 21 && *(_DWORD *)v12 == 21 )
      {
        v23[1] = 0;
        v23[0] = 0xFFFFFFFF00000000LL;
        v24[0] = 0xFFFFFFFF00000000LL;
        v24[1] = 0;
        v19 = v14;
        if ( v14 )
        {
          v27[0] = 0xFFFFFFFF00000000LL;
          v28[0] = 0xFFFFFFFF00000000LL;
          v29[0] = 0xFFFFFFFF00000000LL;
          v27[1] = 0;
          v28[1] = 0;
          v29[1] = 0;
          v26 = 0;
          sub_124DE0(v25, v15);
          if ( !(unsigned __int8)sub_121BE0(v25, a1, (unsigned int)(2 * HIDWORD(v27[0])), 272, 1)
            || !(unsigned __int8)sub_1255D0(v25, a1, v19, 0) )
          {
            sub_11C7E0(v29);
            sub_11C7E0(v28);
            sub_11C7E0(v27);
            sub_11C7E0(v24);
            goto LABEL_27;
          }
          sub_11C450(v23, v27);
          sub_11C450(v24, v28);
          sub_11C7E0(v29);
          sub_11C7E0(v28);
          sub_11C7E0(v27);
        }
        else
        {
          v16 = v12;
          v17 = (int)v11;
          if ( !(unsigned __int8)sub_A8FC0(v20, v21, (_DWORD)v11, v22, v12, (unsigned int)v23, (__int64)v24, 0)
            && !(unsigned __int8)sub_A8FC0(v20, v22, v16, v21, v17, (unsigned int)v23, (__int64)v24, 0) )
          {
            goto LABEL_26;
          }
        }
        sub_11C450(v8, v23);
        sub_11C450(v9, v24);
        sub_12A590(a4 + 16, a1, (unsigned int)a4[9], 1);
        *a4 = 13;
        v5 = 1;
LABEL_26:
        sub_11C7E0(v24);
LABEL_27:
        sub_11C7E0(v23);
        return v5;
      }
    }
    return 0;
  }
  if ( !(unsigned __int8)sub_132860(a2, a3, (_DWORD)v8, a3, (_DWORD)v9, 8) )
    goto LABEL_15;
  *a4 = 4;
LABEL_12:
  sub_11C7E0(v9);
  v5 = sub_12A590(a4 + 16, *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL), (unsigned int)a4[9], 1);
  if ( !(_BYTE)v5 )
  {
    if ( !under_debugger )
      sub_3835A0(50005);
    BUG();
  }
  return v5;
}

