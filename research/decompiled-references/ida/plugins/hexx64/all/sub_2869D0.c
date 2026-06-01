__int64 __fastcall sub_2869D0(_QWORD *a1, __int64 *a2, double a3)
{
  __int64 v3; // r14
  _QWORD *v4; // rax
  int v7; // edx
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // r15
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // r12
  __int64 v27; // r13
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rbp
  _DWORD *v35; // rax
  unsigned int v36; // eax
  __int64 v37; // [rsp+0h] [rbp-88h]
  __int64 v38; // [rsp+8h] [rbp-80h]
  _QWORD v39[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v40[13]; // [rsp+20h] [rbp-68h] BYREF

  v40[5] = __readfsqword(0x28u);
  v3 = a2[3];
  if ( *(_DWORD *)(v3 + 8) != 17 )
    return 0;
  v4 = *(_QWORD **)(*(_QWORD *)(v3 + 64) + 24LL);
  if ( !v4[2] )
    return 0;
  v7 = 1;
  if ( (unsigned int)(*(_DWORD *)(*v4 + 24LL) - 78) > 3 )
    v7 = *(_DWORD *)(a1[9] + 644LL);
  if ( !(unsigned __int8)sub_285160(v3, 1, v7)
    && !(unsigned __int8)sub_285160(v3, 66, 1)
    && !(unsigned __int8)sub_285230(v3) )
  {
    return 0;
  }
  sub_283C00(v39, a1, (__int64)a2, a3);
  v40[0] = -1;
  v40[3] = 0;
  v37 = v39[0];
  v40[1] = -4294967226LL;
  v40[2] = 0xFFFFFFFFLL;
  v8 = *(_QWORD *)v39[1];
  v11 = qalloc_or_throw(48, (__int64)a1, v9, v10);
  *(_QWORD *)(v11 + 16) = -1;
  v12 = (_QWORD *)v11;
  *(_DWORD *)(v11 + 24) = 70;
  v38 = v11 + 16;
  *(_QWORD *)(v11 + 28) = -1;
  sub_25AA70(v11 + 16, (__int64)v40, a3);
  *v12 = v8;
  v13 = *(_QWORD **)(v8 + 8);
  v12[1] = v13;
  *v13 = v12;
  *(_QWORD *)(v8 + 8) = v12;
  ++*(_QWORD *)(v37 + 16);
  sub_255050((__int64)v40, a3);
  sub_286930(v38, *(_QWORD *)(v3 + 32), v14, v15);
  v16 = v12[5];
  v17 = *(_QWORD *)(v16 + 64);
  *(_QWORD *)(v16 + 64) = *(_QWORD *)(v3 + 64);
  v18 = *(_QWORD *)(v3 + 72);
  *(_QWORD *)(v3 + 64) = v17;
  v19 = v12[5];
  v20 = *(_QWORD *)(v19 + 72);
  *(_QWORD *)(v19 + 72) = v18;
  *(_QWORD *)(v3 + 32) = 0;
  *(_QWORD *)(v3 + 72) = v20;
  sub_255850((__int64 *)v3, *(_QWORD *)(v3 + 24), a3);
  v21 = *(_QWORD *)(v3 + 64);
  v22 = sub_2418B0(v3);
  v26 = sub_2413C0(v21, v22, v23, v24, a3);
  v27 = **(_QWORD **)(*(_QWORD *)(v12[5] + 64LL) + 24LL);
  v28 = *(_DWORD *)(v27 + 24);
  v29 = (unsigned int)(v28 - 78);
  if ( (unsigned int)v29 <= 3 )
  {
    *((_DWORD *)v26 + 2) = v28;
    if ( v28 == 81 )
    {
      v35 = (_DWORD *)j__qalloc_or_throw(4, v22, v29, v25);
      *v35 = **(_DWORD **)(v27 + 40);
      v26[3] = (__int64)v35;
    }
    else if ( v28 == 80 )
    {
      v32 = j__qalloc_or_throw(64, v22, v29, v25);
      v33 = *(_QWORD *)(v27 + 40);
      v34 = v32;
      *(_QWORD *)v32 = -1;
      *(_DWORD *)(v32 + 8) = 0;
      *(_QWORD *)(v32 + 48) = 0;
      *(_QWORD *)(v32 + 12) = -1;
      *(_DWORD *)(v32 + 56) = 0;
      sub_25AFF0(v32, v33, a3);
      v26[3] = v34;
    }
  }
  else
  {
    v30 = *(unsigned int *)(v27 + 28);
    if ( (_DWORD)v30 == -1 )
    {
      v36 = sub_23FAB0(a1[8], *(_QWORD *)(v27 + 16), 1);
      *(_DWORD *)(v27 + 28) = v36;
      v30 = v36;
    }
    sub_241390((__int64)v26, v30, v29, v25);
  }
  *a2 = *v26;
  return 1;
}

