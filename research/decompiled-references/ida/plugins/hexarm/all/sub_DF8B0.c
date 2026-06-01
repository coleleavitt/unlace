unsigned __int64 __fastcall sub_DF8B0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r13
  unsigned __int64 v5; // r13
  __int64 v6; // rdx
  int v7; // r15d
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v11; // [rsp+0h] [rbp-78h] BYREF
  __int128 v12; // [rsp+8h] [rbp-70h]
  __int64 v13; // [rsp+18h] [rbp-60h]
  char v14; // [rsp+20h] [rbp-58h]
  int v15; // [rsp+28h] [rbp-50h]
  int v16; // [rsp+2Ch] [rbp-4Ch]
  char v17; // [rsp+30h] [rbp-48h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v18 = __readfsqword(0x28u);
  v3 = *(int *)(v2 + 116);
  v4 = *(_QWORD *)(v2 + 136);
  v14 = 5;
  v11 = 0;
  v5 = v4 - v3;
  v6 = *(_QWORD *)(a1 + 336);
  v17 = 1;
  v16 = -1;
  v13 = v6;
  *(_DWORD *)(a1 + 344) = v5 - v6;
  v15 = v5 - v6;
  v12 = 0;
  v7 = v5;
  v8 = sub_103BE0(a2, &v11);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  if ( *a2 != v8 )
  {
    if ( *(_BYTE *)(v8 + 56) != 5 )
      sub_DA630();
    if ( v5 >= *(_QWORD *)(v8 + 48) )
      v7 = *(_QWORD *)(v8 + 48);
    *(_DWORD *)(a1 + 344) = v7 - *(_DWORD *)(a1 + 336);
  }
  sub_1AE070(a2);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 24LL) + 16LL)
     & (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1440LL) + *(_QWORD *)(a1 + 336));
  *(_QWORD *)&v12 = *(int *)(a1 + 344);
  v11 = v9;
  sub_1B5970(&v11);
  return v18 - __readfsqword(0x28u);
}

