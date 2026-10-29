__int64 __fastcall sub_2979B0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbp
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // r14
  __int64 v11; // rax
  _QWORD *v12; // r15
  _QWORD *v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // [rsp+0h] [rbp-78h]
  __int64 v28; // [rsp+8h] [rbp-70h]
  _QWORD v29[13]; // [rsp+10h] [rbp-68h] BYREF

  v29[5] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 24);
  if ( (unsigned int)(*(_DWORD *)(v3 + 8) - 17) > 1 )
    return 0;
  v6 = 1;
  if ( !(unsigned __int8)sub_285160(v3, 1, 1) )
  {
    v6 = 66;
    if ( !(unsigned __int8)sub_285160(v3, 66, 1) && !(unsigned __int8)sub_285230(v3) )
      return 0;
  }
  v9 = *(_QWORD *)(v3 + 64);
  v29[0] = -1;
  v10 = *(__int64 **)(v9 + 24);
  v29[3] = 0;
  v29[1] = -4294967226LL;
  v29[2] = 0xFFFFFFFFLL;
  v27 = *v10;
  v11 = qalloc_or_throw(48, v6, v7, v8);
  *(_QWORD *)(v11 + 16) = -1;
  v12 = (_QWORD *)v11;
  *(_DWORD *)(v11 + 24) = 70;
  v28 = v11 + 16;
  *(_QWORD *)(v11 + 28) = -1;
  sub_25AA70(v11 + 16, (__int64)v29, a3);
  *v12 = v27;
  v13 = *(_QWORD **)(v27 + 8);
  v12[1] = v13;
  *v13 = v12;
  *(_QWORD *)(v27 + 8) = v12;
  ++v10[2];
  sub_255050((__int64)v29, a3);
  v14 = sub_241AB0(v3);
  v17 = j__qalloc_or_throw(64, (__int64)v29, v15, v16);
  *(_QWORD *)v17 = -1;
  *(_DWORD *)(v17 + 8) = 0;
  *(_QWORD *)(v17 + 48) = 0;
  *(_QWORD *)(v17 + 12) = -1;
  *(_DWORD *)(v17 + 56) = 0;
  sub_25AFF0(v17, v3, a3);
  v21 = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v17, v18, v19, v20, a3);
  v24 = sub_286930(v28, (__int64)v21, v22, v23);
  *((_DWORD *)sub_2413C0(*(_QWORD *)(v24 + 64), v12[2], v25, v26, a3) + 2) = 78;
  sub_255630(v3, a3);
  if ( *(_DWORD *)(a2 + 8) != 74 )
    sub_240A20(
      v3,
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL),
      *(_QWORD *)(a1 + 64),
      1,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 72) + 130LL),
      0,
      a3);
  *(_QWORD *)a2 = v14;
  return 1;
}

