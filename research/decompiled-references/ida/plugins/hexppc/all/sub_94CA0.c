__int64 __fastcall sub_94CA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r13d
  unsigned int v4; // r15d
  __int64 v6; // r14
  int v7; // r9d
  _DWORD *v8; // rax
  _DWORD *v9; // r13
  int v10; // r9d
  int v11; // ebp
  int v12; // r9d
  __int64 v13; // [rsp+8h] [rbp-80h]
  __int64 v14; // [rsp+10h] [rbp-78h]
  __int64 v15; // [rsp+18h] [rbp-70h]
  _DWORD *v16; // [rsp+20h] [rbp-68h]
  _DWORD *v17; // [rsp+28h] [rbp-60h]
  unsigned __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+38h] [rbp-50h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 480);
  if ( !*(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL) )
    return 0;
  v3 = *(_DWORD *)(a2 + 68);
  if ( v3 != *(unsigned __int8 *)(v2 + 130) )
    return 0;
  if ( !(unsigned __int8)sub_11C340(a2 + 48, &v18, 1) )
    return 0;
  if ( 8 * v3 - 1 != v18 )
    return 0;
  v6 = *(_QWORD *)(a2 + 16);
  if ( !v6 )
    return 0;
  while ( !*(_DWORD *)v6
       || (unsigned int)(*(_DWORD *)v6 - 29) <= 0xC && (unsigned __int8)sub_122120(v6 + 32, a2 + 32, 0) )
  {
    v6 = *(_QWORD *)(v6 + 16);
    if ( !v6 )
      return 0;
  }
  if ( *(_DWORD *)v6 != 4 )
    return 0;
  v14 = a2 + 32;
  v4 = sub_122120(v6 + 32, a2 + 32, 0);
  if ( !(_BYTE)v4 || *(_QWORD *)(v6 + 24) == *(_QWORD *)(a2 + 24) )
    return 0;
  v15 = v6 + 64;
  v13 = a2 + 64;
  if ( (unsigned __int8)sub_1294F0(*(_QWORD *)(a1 + 64), (int)v6 + 64, (int)a2 + 64, 0, 0, v7) )
  {
    sub_120000(&v18, v15);
    sub_1537B0(a1, *(_QWORD *)(v6 + 8), &v18, *(_QWORD *)(a2 + 8), v13, 1);
    *(_DWORD *)v6 = 8;
    sub_118FD0(v15, &v18);
    *(_DWORD *)(v6 + 4) &= ~0x10u;
    sub_119B60(a2);
    sub_119360(&v18);
    return v4;
  }
  if ( !(unsigned __int8)sub_122120(v6 + 32, v13, 0) )
    return 0;
  v8 = (_DWORD *)sub_11EFC0(*(_QWORD *)(a2 + 8));
  v9 = v8;
  if ( !v8 || *v8 != 4 )
    return 0;
  v17 = v8 + 8;
  if ( !(unsigned __int8)sub_122120(v8 + 8, v15, 0) )
  {
    if ( (unsigned __int8)sub_122120(v17, v14, 0) )
    {
      v16 = v9 + 16;
      if ( (unsigned __int8)sub_1294F0(*(_QWORD *)(a1 + 64), v15, (int)v9 + 64, 0, 0, v12) )
      {
        v18 = 0xFFFFFFFF00000000LL;
        v19 = 0;
        sub_121740(&v18);
        sub_1537B0(a1, *(_QWORD *)(v6 + 8), &v18, *((_QWORD *)v9 + 1), v16, 1);
        v11 = 3;
        goto LABEL_23;
      }
    }
    return 0;
  }
  v16 = v9 + 16;
  if ( !(unsigned __int8)sub_1294F0(*(_QWORD *)(a1 + 64), (int)v9 + 64, v13, 0, 0, v10) )
    return 0;
  v19 = 0;
  v18 = 0xFFFFFFFF00000000LL;
  sub_121740(&v18);
  sub_1537B0(a1, *((_QWORD *)v9 + 1), &v18, *(_QWORD *)(a2 + 8), v13, 1);
  v11 = 2;
LABEL_23:
  *v9 = 8;
  sub_118FD0(v17, v14);
  sub_118FD0(v16, &v18);
  v9[1] &= ~0x10u;
  sub_119B60(a2);
  if ( v11 == 3 )
    sub_119B60(v6);
  sub_119360(&v18);
  return v4;
}

