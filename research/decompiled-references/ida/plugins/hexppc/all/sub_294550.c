__int64 __fastcall sub_294550(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rax
  int v8; // edx
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // [rsp-8h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 17
    || !(unsigned __int8)sub_2814E0(v2, 1, 1)
    && !(unsigned __int8)sub_2814E0(v2, 66, 1)
    && !(unsigned __int8)sub_2815B0(v2) )
  {
    return 0;
  }
  v5 = sub_23DC30(v2);
  v6 = sub_23D2D0(*(_QWORD *)(a1 + 72), 1, 0, -1, 0, 0, 0);
  v7 = *(_QWORD *)v6;
  *(_QWORD *)v6 = *(_QWORD *)v2;
  v8 = *(_DWORD *)(v2 + 8);
  *(_QWORD *)v2 = v7;
  LODWORD(v7) = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = v8;
  v9 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)(v2 + 8) = v7;
  LODWORD(v7) = *(_DWORD *)(v6 + 12);
  *(_DWORD *)(v6 + 12) = v9;
  v10 = *(_QWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 12) = v7;
  v11 = *(_QWORD *)(v6 + 24);
  *(_QWORD *)(v6 + 24) = v10;
  v12 = *(_QWORD *)(v2 + 32);
  *(_QWORD *)(v2 + 24) = v11;
  v13 = *(_QWORD *)(v6 + 32);
  *(_QWORD *)(v6 + 32) = v12;
  v14 = *(_QWORD *)(v2 + 40);
  *(_QWORD *)(v2 + 32) = v13;
  v15 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v6 + 40) = v14;
  v16 = *(_QWORD *)(v2 + 48);
  *(_QWORD *)(v2 + 40) = v15;
  v17 = *(_QWORD *)(v6 + 48);
  *(_QWORD *)(v6 + 48) = v16;
  LODWORD(v16) = *(_DWORD *)(v2 + 56);
  *(_QWORD *)(v2 + 48) = v17;
  LODWORD(v17) = *(_DWORD *)(v6 + 56);
  *(_DWORD *)(v6 + 56) = v16;
  *(_DWORD *)(v2 + 56) = v17;
  v18 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL);
  v21 = sub_2407E0(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v6, v24, v19, v20);
  v22 = sub_23DCA0(v18, (__int64)v21);
  v23 = sub_23D6B0();
  *(_QWORD *)(v22 + 64) = v23;
  *((_DWORD *)sub_23D740((__int64)v23, v5) + 2) = 78;
  *(_DWORD *)(a2 + 8) = 75;
  return 1;
}

