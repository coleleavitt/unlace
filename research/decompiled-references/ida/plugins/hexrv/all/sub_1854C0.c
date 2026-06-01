__int64 __fastcall sub_1854C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v7; // r13
  int v8; // eax
  _DWORD *v9; // rax
  unsigned __int8 *v10; // rsi
  int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned int v15; // r14d
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // r14
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v22; // eax
  int v23; // [rsp+Ch] [rbp-B4h]
  __int64 v24; // [rsp+10h] [rbp-B0h]
  __int64 v25; // [rsp+10h] [rbp-B0h]
  unsigned __int8 *v26; // [rsp+18h] [rbp-A8h]
  int v27; // [rsp+20h] [rbp-A0h]
  _DWORD *v28; // [rsp+28h] [rbp-98h]
  char v30[16]; // [rsp+40h] [rbp-80h] BYREF
  _QWORD v31[2]; // [rsp+50h] [rbp-70h] BYREF
  _QWORD v32[2]; // [rsp+60h] [rbp-60h] BYREF
  __int64 v33; // [rsp+70h] [rbp-50h] BYREF
  int v34; // [rsp+78h] [rbp-48h]
  unsigned __int64 v35; // [rsp+88h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(v4 + 1344);
  v35 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(v5 + 8)
    || (v12 = *(_QWORD *)(a2 + 24), v34 = 0, v33 = v12, (sub_1331B0(v4, (__int64)&v33) & 7) == 0)
    && ((v13 = *(_QWORD *)(a1 + 64), !*(_QWORD *)(*(_QWORD *)(v13 + 1344) + 8LL))
     || (v14 = *(_QWORD *)(a3 + 24), v34 = 0, v33 = v14, (sub_1331B0(v13, (__int64)&v33) & 7) == 0)) )
  {
    sub_11F580((__int64)v30, (unsigned __int8 *)(a3 + 64));
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL);
    v8 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 == 2 )
    {
      if ( (unsigned __int8)(v30[0] - 5) > 1u && v30[0] != 9 )
        goto LABEL_16;
      v11 = *(_DWORD *)(a3 + 68);
      sub_118490(v30, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL));
      v28 = (_DWORD *)a3;
    }
    else
    {
      if ( v8 == 1 )
      {
        v11 = *(_DWORD *)(a3 + 36);
        v10 = nullptr;
      }
      else
      {
        if ( v8 != 12 )
          goto LABEL_16;
        v9 = *(_DWORD **)(a3 + 8);
        if ( !v9 || *v9 != 1 || !sub_1216A0((unsigned __int8 *)(a3 + 64), (__int64)(v9 + 16), 0) )
          goto LABEL_16;
        sub_1188E0((__int64)v30);
        v10 = (unsigned __int8 *)a3;
        v11 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 36LL);
        a3 = *(_QWORD *)(a3 + 8);
      }
      if ( *(_BYTE *)(a3 + 32) != 4 || (v28 = *(_DWORD **)(a3 + 40), *v28 != 2) )
      {
LABEL_16:
        v15 = 0;
LABEL_17:
        sub_1188E0((__int64)v30);
        return v15;
      }
      if ( !v30[0] )
        sub_121E20((__int64)v30, v10);
    }
    v17 = 0;
    if ( *(_BYTE *)(a2 + 64) == 8 )
      v17 = *(unsigned int *)(*(_QWORD *)(a2 + 72) + 284LL);
    v18 = sub_32A730(*(_QWORD *)(a1 + 480), v17);
    if ( v18 != -1 )
    {
      if ( (unsigned int)(v18 - 1) > 1 && v18 != 4 )
      {
        if ( !under_debugger )
          sub_37DDE0(52493);
        BUG();
      }
      v27 = v18;
      v23 = v11 / v18;
      if ( !(v11 % v18) )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 24LL);
        v24 = *(_QWORD *)(a2 + 72);
        v26 = (unsigned __int8 *)(v19 + 160);
        sub_11F580((__int64)&v33, (unsigned __int8 *)(v19 + 160));
        sub_17F6C0(v31, v7, *(_QWORD *)(a2 + 24), v19, (unsigned __int64)&v33, v27, 1);
        sub_1188E0((__int64)&v33);
        LOBYTE(v20) = sub_121110((unsigned __int8 *)v31, v7, (__int64)v30, 8u);
        v15 = v20;
        if ( (_BYTE)v20 )
        {
          v25 = *(_QWORD *)(v24 + 24) + 80LL;
          sub_11F580((__int64)&v33, v26);
          sub_17F6C0(v32, v7, *(_QWORD *)(a2 + 24), v25, (unsigned __int64)&v33, v27, 1);
          sub_1188E0((__int64)&v33);
          LOBYTE(v21) = sub_121110((unsigned __int8 *)v32, v7, (__int64)(v28 + 12), 8u);
          v15 = v21;
          if ( (_BYTE)v21 )
          {
            sub_9E640((__int64)&v33, v7, *(_QWORD *)(a2 + 24), (__int64)v26, v23, 1);
            sub_120CC0((__int64)v26, (unsigned __int8 *)&v33);
            sub_1188E0((__int64)&v33);
            sub_1190E0(a3);
            v22 = *(_DWORD *)(a1 + 24);
            BYTE1(v22) &= ~2u;
            LOBYTE(v22) = v22 | 0x80;
            *(_DWORD *)(a1 + 24) = v22;
          }
          sub_1188E0((__int64)v32);
        }
        sub_1188E0((__int64)v31);
        goto LABEL_17;
      }
    }
    goto LABEL_16;
  }
  return 0;
}

