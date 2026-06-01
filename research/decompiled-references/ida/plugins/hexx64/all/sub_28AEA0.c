__int64 __fastcall sub_28AEA0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rsi
  __int64 v19; // rdi
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // rsi
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rcx
  _BOOL8 v31; // rsi
  __int64 v32; // r12
  __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 *v37; // rax
  __int64 *v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbp
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r12
  __int64 v45; // [rsp+0h] [rbp-88h]
  _QWORD *v46; // [rsp+8h] [rbp-80h]
  _QWORD v47[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v48[13]; // [rsp+20h] [rbp-68h] BYREF

  v48[5] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 72 )
    return 0;
  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 8) != 2 )
    return 0;
  v5 = *(_QWORD *)(v3 + 32);
  if ( (unsigned int)(*(_DWORD *)(v5 + 8) - 17) > 1 )
    return 0;
  v6 = *(_QWORD *)(v5 + 32);
  if ( !(unsigned __int8)sub_285160(v6, 1, 1)
    && !(unsigned __int8)sub_285160(v6, 66, 1)
    && !(unsigned __int8)sub_285230(v6) )
  {
    return 0;
  }
  v8 = *(_QWORD *)(v3 + 24);
  if ( (unsigned __int8)sub_256590(v8) || (unsigned __int8)sub_256660(v8, a3) || (unsigned int)sub_256A60(v5, v8) )
    return 0;
  sub_283C00(v47, a1, a2, a3);
  v9 = v47[0];
  v48[1] = -4294967226LL;
  v48[2] = 0xFFFFFFFFLL;
  v48[0] = -1;
  v48[3] = 0;
  v10 = *(_QWORD *)v47[1];
  v13 = qalloc_or_throw(48, (__int64)a1, v11, v12);
  *(_QWORD *)(v13 + 16) = -1;
  *(_DWORD *)(v13 + 24) = 70;
  v45 = v13 + 16;
  *(_QWORD *)(v13 + 28) = -1;
  v46 = (_QWORD *)v13;
  sub_25AA70(v13 + 16, (__int64)v48, a3);
  *v46 = v10;
  v14 = *(_QWORD **)(v10 + 8);
  v46[1] = v14;
  *v14 = v46;
  *(_QWORD *)(v10 + 8) = v46;
  ++*(_QWORD *)(v9 + 16);
  sub_255050((__int64)v48, a3);
  v18 = *(_QWORD **)(v5 + 24);
  if ( *(_DWORD *)(v5 + 8) == 17 )
    v18 = sub_244460(*(_QWORD *)(a1[9] + 112LL), (__int64)v18, v15, v16, v17, a3);
  v19 = *(_QWORD *)(sub_286930(v45, (__int64)v18, v15, v16) + 64);
  v20 = *(__int64 **)(v5 + 32);
  *(_QWORD *)(v5 + 24) = 0;
  v23 = sub_2413C0(v19, *v20, v21, v22, a3);
  v27 = *(_QWORD **)(v5 + 32);
  v28 = (__int64)v23;
  if ( *(_DWORD *)(v5 + 8) == 17 )
    v27 = sub_244460(*(_QWORD *)(a1[9] + 112LL), (__int64)v27, v24, v25, v26, a3);
  v29 = sub_286930(v28, (__int64)v27, v24, v25);
  v30 = *(_QWORD *)v5;
  v31 = *(_DWORD *)(v5 + 8) != 17;
  v32 = *(_QWORD *)(v29 + 64);
  *(_QWORD *)(v5 + 32) = 0;
  v33 = sub_240F50(a1[9], v31, a1[8], v30, 0, 0, 1);
  if ( !*(_BYTE *)(*(_QWORD *)(v33 + 24) + 13LL) )
  {
    v48[0] = 8;
    copy_tinfo_t();
    clear_tinfo_t();
  }
  sub_240A20(v5, a1[9], a1[8], *(_DWORD *)(v5 + 8) == 17, 1, 0, a3);
  if ( !*(_BYTE *)(*(_QWORD *)(v5 + 24) + 13LL) )
  {
    v48[0] = 8;
    copy_tinfo_t();
    clear_tinfo_t();
  }
  v36 = *(_QWORD *)v5;
  v37 = sub_2413C0(v32, *(_QWORD *)v5, v34, v35, a3);
  *((_DWORD *)v37 + 2) = 72;
  v38 = v37;
  v41 = j__qalloc_or_throw(64, v36, v39, v40);
  v44 = j__qalloc_or_throw(64, v36, v42, v43);
  *(_QWORD *)v44 = -1;
  *(_DWORD *)(v44 + 8) = 0;
  *(_QWORD *)(v44 + 48) = 0;
  *(_QWORD *)(v44 + 12) = -1;
  *(_DWORD *)(v44 + 56) = 0;
  sub_25AFF0(v44, v8, a3);
  *(_QWORD *)(v41 + 24) = v44;
  *(_QWORD *)v41 = -1;
  *(_DWORD *)(v41 + 8) = 2;
  *(_QWORD *)(v41 + 12) = -1;
  *(_QWORD *)(v41 + 32) = v33;
  *(_QWORD *)(v41 + 40) = 0;
  *(_QWORD *)(v41 + 48) = 0;
  *(_DWORD *)(v41 + 56) = 0;
  v38[3] = v41;
  sub_2441C0(v41, *(_QWORD *)(a1[9] + 112LL), 0, a3);
  return 1;
}

