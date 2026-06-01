__int64 __fastcall sub_286620(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rsi
  __int64 v16; // rdi
  __int64 *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rsi
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rcx
  _BOOL8 v26; // rsi
  __int64 v27; // r12
  __int64 v28; // r13
  _QWORD *v29; // rax
  _QWORD *v30; // r14
  __int64 v31; // rbp
  __int64 v32; // r12
  __int64 v33; // [rsp+0h] [rbp-88h]
  _QWORD *v34; // [rsp+8h] [rbp-80h]
  _QWORD v35[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v36[13]; // [rsp+20h] [rbp-68h] BYREF

  v36[5] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 72 )
    return 0;
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 2 )
    return 0;
  v4 = *(_QWORD *)(v2 + 32);
  if ( (unsigned int)(*(_DWORD *)(v4 + 8) - 17) > 1 )
    return 0;
  v5 = *(_QWORD *)(v4 + 32);
  if ( !(unsigned __int8)sub_2808E0(v5, 1, 1)
    && !(unsigned __int8)sub_2808E0(v5, 66, 1)
    && !(unsigned __int8)sub_2809B0(v5) )
  {
    return 0;
  }
  v7 = *(_QWORD *)(v2 + 24);
  if ( (unsigned __int8)sub_251D10(v7) || (unsigned __int8)sub_251DE0(v7) || (unsigned int)sub_2521E0(v4, v7) )
    return 0;
  sub_27F380(v35, a1, a2);
  v8 = v35[0];
  v36[1] = -4294967226LL;
  v36[2] = 0xFFFFFFFFLL;
  v36[0] = -1;
  v36[3] = 0;
  v9 = *(_QWORD *)v35[1];
  v10 = qalloc_or_throw();
  *(_QWORD *)(v10 + 16) = -1;
  *(_DWORD *)(v10 + 24) = 70;
  v33 = v10 + 16;
  *(_QWORD *)(v10 + 28) = -1;
  v34 = (_QWORD *)v10;
  sub_2561F0(v10 + 16, (__int64)v36);
  *v34 = v9;
  v11 = *(_QWORD **)(v9 + 8);
  v34[1] = v11;
  *v11 = v34;
  *(_QWORD *)(v9 + 8) = v34;
  ++*(_QWORD *)(v8 + 16);
  sub_2507D0((__int64)v36);
  v15 = *(_QWORD **)(v4 + 24);
  if ( *(_DWORD *)(v4 + 8) == 17 )
    v15 = sub_23FBE0(*(_QWORD *)(a1[9] + 112LL), (__int64)v15, v12, v13, v14);
  v16 = *(_QWORD *)(sub_2820B0(v33, (__int64)v15) + 64);
  v17 = *(__int64 **)(v4 + 32);
  *(_QWORD *)(v4 + 24) = 0;
  v18 = sub_23CB40(v16, *v17);
  v22 = *(_QWORD **)(v4 + 32);
  v23 = (__int64)v18;
  if ( *(_DWORD *)(v4 + 8) == 17 )
    v22 = sub_23FBE0(*(_QWORD *)(a1[9] + 112LL), (__int64)v22, v19, v20, v21);
  v24 = sub_2820B0(v23, (__int64)v22);
  v25 = *(_QWORD *)v4;
  v26 = *(_DWORD *)(v4 + 8) != 17;
  v27 = *(_QWORD *)(v24 + 64);
  *(_QWORD *)(v4 + 32) = 0;
  v28 = sub_23C6D0(a1[9], v26, a1[8], v25, 0, 0, 1u);
  if ( !*(_BYTE *)(*(_QWORD *)(v28 + 24) + 13LL) )
  {
    v36[0] = 8;
    copy_tinfo_t();
    clear_tinfo_t();
  }
  sub_23C1A0(v4, a1[9], a1[8], *(_DWORD *)(v4 + 8) == 17, 1u, 0);
  if ( !*(_BYTE *)(*(_QWORD *)(v4 + 24) + 13LL) )
  {
    v36[0] = 8;
    copy_tinfo_t();
    clear_tinfo_t();
  }
  v29 = sub_23CB40(v27, *(_QWORD *)v4);
  *((_DWORD *)v29 + 2) = 72;
  v30 = v29;
  v31 = j__qalloc_or_throw();
  v32 = j__qalloc_or_throw();
  *(_QWORD *)v32 = -1;
  *(_DWORD *)(v32 + 8) = 0;
  *(_QWORD *)(v32 + 48) = 0;
  *(_QWORD *)(v32 + 12) = -1;
  *(_DWORD *)(v32 + 56) = 0;
  sub_256770(v32, v7);
  *(_QWORD *)(v31 + 24) = v32;
  *(_QWORD *)v31 = -1;
  *(_DWORD *)(v31 + 8) = 2;
  *(_QWORD *)(v31 + 12) = -1;
  *(_QWORD *)(v31 + 32) = v28;
  *(_QWORD *)(v31 + 40) = 0;
  *(_QWORD *)(v31 + 48) = 0;
  *(_DWORD *)(v31 + 56) = 0;
  v30[3] = v31;
  sub_23F940(v31, *(_QWORD *)(a1[9] + 112LL), 0);
  return 1;
}

