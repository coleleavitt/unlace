__int64 __fastcall sub_93D30(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  _DWORD *v9; // rax
  unsigned int v10; // r15d
  __int64 v12; // rsi
  _DWORD *v13; // [rsp+0h] [rbp-C0h]
  __int64 v14; // [rsp+8h] [rbp-B8h]
  __int64 v15; // [rsp+18h] [rbp-A8h]
  __int64 v16; // [rsp+20h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+28h] [rbp-98h] BYREF
  _DWORD *v18; // [rsp+30h] [rbp-90h] BYREF
  __int64 v19; // [rsp+38h] [rbp-88h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-80h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-70h] BYREF
  __int64 v22; // [rsp+60h] [rbp-60h] BYREF
  __int64 v23; // [rsp+68h] [rbp-58h]
  __int64 v24; // [rsp+70h] [rbp-50h]
  __int128 v25; // [rsp+78h] [rbp-48h]
  unsigned __int64 v26; // [rsp+88h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  v3 = sub_118EA0(a2, &v16, 14);
  if ( v3
    && (v4 = sub_118E60(v3, &v17), (v15 = v4) != 0)
    && (v5 = sub_326890(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL), *(unsigned int *)(v4 + 4), 0), (v5 & (v5 - 1)) == 0)
    && (v18 = a2, v6 = sub_125A00(a1, v16, &v18, 0), (v7 = v6) != 0)
    && v18 == (_DWORD *)v6
    && *(_DWORD *)v6 == 14
    && *(_BYTE *)(v6 + 64) == 14
    && (unsigned __int8)sub_122120(*(_QWORD *)(v6 + 72) + 16LL, v16, 0)
    && (v14 = *(_QWORD *)(v7 + 72), (v8 = sub_118E60(v7, &v19)) != 0)
    && (unsigned __int8)sub_11C340(v8, &v22, 1)
    && v5 == v22
    && *(_BYTE *)v19 == 4
    && (v9 = *(_DWORD **)(v19 + 8), *v9 == 9)
    && (v13 = v9 + 8, v10 = sub_12D180(a1, v7, v9 + 8, a2, v17, 0), (_BYTE)v10) )
  {
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    sub_120460(a1, &v22, v13, 1, 4294901760LL);
    if ( sub_A6060(a1, &v22, *(_QWORD *)(v7 + 8), a2, 1) )
      goto LABEL_16;
    v23 = 0;
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree();
      v24 = 0;
      *((_QWORD *)&v25 + 1) = 0;
    }
    sub_1245A0(a1, &v22, v14, 1);
    if ( sub_A6060(a1, &v22, *(_QWORD *)(v7 + 8), a2, 1) || sub_A6350(a1, &v22, *(_QWORD *)(v7 + 8), a2, 1) )
    {
LABEL_16:
      v10 = 0;
    }
    else
    {
      v20[1] = 0;
      v20[0] = 0xFFFFFFFF00000000LL;
      sub_ADAE0(a1, (_DWORD)a2, (unsigned int)v20, v7, (_DWORD)v13, (_DWORD)a2, v17, 0);
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      *a2 = 14;
      sub_11CFD0(a2 + 8, v12, v5, HIDWORD(v20[0]), **(_QWORD **)(v15 + 8), 0);
      sub_118FD0(a2 + 12, v20);
      sub_ADAE0(a1, (_DWORD)a2, (_DWORD)a2 + 64, v7, v14, (_DWORD)a2, (__int64)(a2 + 16), 1);
      sub_127CB0(v7, v12, 11, 0xFFFFFFFFLL, 1);
      v21[0] = 0xFFFFFFFF00000000LL;
      v21[1] = 0;
      sub_118FD0(v21, *(_QWORD *)(v7 + 72) + 16LL);
      sub_118FD0(v7 + 64, v21);
      sub_119360(v21);
      sub_119360(v20);
    }
    sub_90100((__int64)&v22);
  }
  else
  {
    return 0;
  }
  return v10;
}

