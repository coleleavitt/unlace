__int64 __fastcall sub_292950(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-60h]
  __int64 v22; // [rsp+10h] [rbp-58h]
  __int128 v23; // [rsp+18h] [rbp-50h]
  __int64 v24; // [rsp+28h] [rbp-40h]
  __int64 v25; // [rsp+30h] [rbp-38h]
  int v26; // [rsp+38h] [rbp-30h]
  unsigned __int64 v27; // [rsp+48h] [rbp-20h]

  v27 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 48 )
    return 0;
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 52 )
    return 0;
  v4 = *(_QWORD *)(v2 + 24);
  if ( *(_DWORD *)(v4 + 8) != 58 )
    return 0;
  v5 = *(_QWORD *)(v4 + 32);
  if ( *(_DWORD *)(v5 + 8) != 61 )
    return 0;
  if ( sub_255DF0(*(__int64 **)(v5 + 24)) )
    return 0;
  v6 = *(_QWORD *)(v4 + 24);
  if ( *(_DWORD *)(v6 + 8) != 52 )
    return 0;
  v24 = 0;
  v21 = 0xFFFFFFFF00000000LL;
  v23 = 0;
  v25 = 0;
  v26 = 0;
  v22 = 0xFFFFFFFFLL;
  v7 = *(_DWORD *)(v6 + 8);
  v20 = -1;
  v8 = *(_QWORD *)v6;
  *(_QWORD *)v6 = -1;
  v20 = v8;
  *(_DWORD *)(v6 + 8) = v21;
  LODWORD(v21) = v7;
  v9 = *(_DWORD *)(v6 + 12);
  *(_DWORD *)(v6 + 12) = HIDWORD(v21);
  HIDWORD(v21) = v9;
  v10 = *(_QWORD *)(v6 + 24);
  *(_QWORD *)(v6 + 24) = v23;
  *(_QWORD *)&v23 = v10;
  v11 = *(_QWORD *)(v6 + 32);
  *(_QWORD *)(v6 + 32) = *((_QWORD *)&v23 + 1);
  *((_QWORD *)&v23 + 1) = v11;
  v12 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v6 + 40) = v24;
  v24 = v12;
  v13 = *(_QWORD *)(v6 + 48);
  *(_QWORD *)(v6 + 48) = v25;
  v25 = v13;
  LODWORD(v13) = *(_DWORD *)(v6 + 56);
  *(_DWORD *)(v6 + 56) = v26;
  v14 = *(_QWORD *)(a2 + 24);
  v26 = v13;
  v15 = *(_QWORD *)v14;
  *(_QWORD *)v14 = v8;
  LODWORD(v8) = *(_DWORD *)(v14 + 8);
  v20 = v15;
  *(_DWORD *)(v14 + 8) = v21;
  LODWORD(v21) = v8;
  LODWORD(v8) = *(_DWORD *)(v14 + 12);
  *(_DWORD *)(v14 + 12) = HIDWORD(v21);
  HIDWORD(v21) = v8;
  v16 = *(_QWORD *)(v14 + 24);
  *(_QWORD *)(v14 + 24) = v23;
  *(_QWORD *)&v23 = v16;
  v17 = *(_QWORD *)(v14 + 32);
  *(_QWORD *)(v14 + 32) = *((_QWORD *)&v23 + 1);
  *((_QWORD *)&v23 + 1) = v17;
  v18 = *(_QWORD *)(v14 + 40);
  *(_QWORD *)(v14 + 40) = v24;
  v24 = v18;
  v19 = *(_QWORD *)(v14 + 48);
  *(_QWORD *)(v14 + 48) = v25;
  v25 = v19;
  LODWORD(v19) = *(_DWORD *)(v14 + 56);
  *(_DWORD *)(v14 + 56) = v26;
  v26 = v19;
  sub_2559F0((__int64)&v20);
  clear_tinfo_t();
  return 1;
}

