__int64 __fastcall sub_167A20(__int128 a1)
{
  _DWORD *v1; // r13
  unsigned int v2; // r15d
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r14
  _DWORD *v7; // rax
  unsigned __int8 *v8; // rax
  unsigned __int8 *v9; // r11
  int v10; // eax
  int v11; // edx
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rax
  char v15; // al
  unsigned __int8 *v16; // r11
  __int64 v17; // r13
  __int64 v18; // [rsp+10h] [rbp-88h]
  unsigned __int8 *v19; // [rsp+18h] [rbp-80h]
  unsigned __int8 *v20; // [rsp+18h] [rbp-80h]
  unsigned __int8 *v21; // [rsp+18h] [rbp-80h]
  unsigned __int8 *v22; // [rsp+20h] [rbp-78h]
  __int64 v23; // [rsp+28h] [rbp-70h]
  _DWORD *v24; // [rsp+30h] [rbp-68h] BYREF
  __int64 v25; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v26[11]; // [rsp+40h] [rbp-58h] BYREF

  v26[3] = __readfsqword(0x28u);
  v1 = *(_DWORD **)(a1 + 56);
  if ( *v1 != 44 )
    return 0;
  v4 = *((_QWORD *)&a1 + 1);
  v5 = sub_11C2E0(*(_QWORD *)(*((_QWORD *)&a1 + 1) + 48LL));
  v6 = v5;
  if ( !v5 )
    return 0;
  if ( *(_DWORD *)v5 != 4 )
    return 0;
  v7 = *(_DWORD **)(v5 + 8);
  if ( v7 )
  {
    if ( *v7 != 55 )
      return 0;
  }
  v2 = sub_1196C0((char *)(v6 + 32), v26, 0);
  if ( !(_BYTE)v2 )
    return 0;
  if ( v26[0] != 1 )
    return 0;
  *((_QWORD *)&a1 + 1) = v6 + 64;
  v24 = v1;
  v8 = (unsigned __int8 *)sub_122D80(a1, (__int64)&v24, 1);
  v9 = v8;
  if ( !v8 )
    return 0;
  v10 = *(_DWORD *)v8;
  if ( (unsigned int)(v10 - 12) > 1 )
    return 0;
  v11 = *((_DWORD *)v9 + 17);
  if ( v11 != *(_DWORD *)(v6 + 68) || v11 != v1[9] )
    return 0;
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( v10 != 13 )
  {
    v19 = v9;
    if ( (unsigned __int8)sub_1196C0((char *)(*(_QWORD *)(a1 + 56) + 48LL), &v25, 1u) )
    {
      if ( sub_11EF10(v19 + 32, v18, (__int64)(v1 + 8), 0) )
      {
        v12 = v25;
        if ( (unsigned __int8)sub_1196C0((char *)v19 + 48, v26, 1u) )
        {
          if ( !(v26[0] + v12) )
            goto LABEL_19;
        }
      }
    }
    return 0;
  }
  v20 = v9;
  v23 = (__int64)(v1 + 8);
  v22 = v9 + 32;
  v15 = sub_11EF10(v9 + 32, v18, (__int64)(v1 + 8), 0);
  v16 = v20;
  if ( !v15 )
  {
    v17 = (__int64)(v1 + 12);
LABEL_23:
    v21 = v16;
    if ( sub_11EF10(v22, v18, v17, 0) && sub_11EF10(v21 + 48, v18, v23, 0) )
      goto LABEL_19;
    return 0;
  }
  v17 = (__int64)(v1 + 12);
  if ( !sub_11EF10(v20 + 48, v18, v17, 0) )
  {
    v16 = v20;
    goto LABEL_23;
  }
LABEL_19:
  sub_11D380((__int64)v26, (unsigned __int8 *)(v6 + 64));
  v13 = *(_QWORD *)(a1 + 64);
  v14 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 72LL);
  if ( (unsigned int)v14 >= *(_DWORD *)(v13 + 64) )
    sub_161430(v26);
  sub_1616E0(a1, v4, *(_QWORD *)(*(_QWORD *)(v13 + 528) + 8 * v14), 32, (__int64)v26, v6);
  sub_1166E0((__int64)v26);
  sub_60A20(*(_QWORD *)(a1 + 64), 1u, (__int64)"RECOGNIZE_SETNZ2");
  return v2;
}

