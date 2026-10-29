__int64 __fastcall sub_98DA0(__int128 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int8 v9; // al
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // [rsp-8h] [rbp-B8h]
  unsigned int v14; // [rsp+8h] [rbp-A8h]
  unsigned int v15; // [rsp+8h] [rbp-A8h]
  unsigned int v16; // [rsp+8h] [rbp-A8h]
  _BYTE v17[16]; // [rsp+10h] [rbp-A0h] BYREF
  __int64 v18[2]; // [rsp+20h] [rbp-90h] BYREF
  __int64 v19; // [rsp+30h] [rbp-80h]
  __int128 v20; // [rsp+38h] [rbp-78h]
  __int64 v21[2]; // [rsp+50h] [rbp-60h] BYREF
  __int64 v22; // [rsp+60h] [rbp-50h]
  __int128 v23; // [rsp+68h] [rbp-48h]
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(*((_QWORD *)&a1 + 1) + 16LL) || !*(_BYTE *)a2 )
    return 0;
  v3 = *((_QWORD *)&a1 + 1);
  *((_QWORD *)&a1 + 1) = v18;
  v20 = 0;
  v19 = 0;
  v18[0] = 0;
  v18[1] = 0;
  sub_123EA0(a1, a2, 0, 0xFFFF0000);
  v4 = *(_QWORD *)(v3 + 16);
  v21[0] = 0;
  v21[1] = 0;
  v22 = 0;
  v23 = 0;
  v5 = sub_129150(a1, v18, v4, 0, (__int64)v21, 0, 0);
  v6 = v12;
  if ( !v5
    || (v7 = a2, 2 * *(_DWORD *)(v5 + 68) != *(_DWORD *)(a2 + 4))
    || *(_BYTE *)(v5 + 64) != *(_BYTE *)a2
    && (*(_BYTE *)a2 != 14
     || !sub_125B60((unsigned __int8 *)(v5 + 64), *(_QWORD *)(a2 + 8), 0)
     || *(_DWORD *)v5 != 2
     || (v8 = *(_QWORD *)(a2 + 8), *(_BYTE *)(v8 + 16) != 4)
     || **(_DWORD **)(v8 + 24) != 2) )
  {
LABEL_8:
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree(v22);
    }
    qfree(v21[0]);
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree(v19);
    }
    qfree(v18[0]);
    return 0;
  }
  sub_123A40((__int64)v17, (unsigned __int8 *)a2, v6, v7);
  if ( !(unsigned __int8)sub_1272B0(
                           (unsigned __int64)v17,
                           *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
                           *(_DWORD *)(a2 + 4) / 2,
                           0) )
  {
    sub_11CDA0((__int64)v17);
    goto LABEL_8;
  }
  v9 = sub_125B60((unsigned __int8 *)(v5 + 64), (__int64)v17, 0);
  v14 = (unsigned __int8)sub_AB6D0(a1, (unsigned int *)v5, (int)v5 + 64, 7 - (unsigned int)v9);
  sub_11CDA0((__int64)v17);
  v10 = v14;
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
    v10 = v14;
  }
  v15 = v10;
  qfree(v21[0]);
  v11 = v15;
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
    v11 = v15;
  }
  v16 = v11;
  qfree(v18[0]);
  return v16;
}

