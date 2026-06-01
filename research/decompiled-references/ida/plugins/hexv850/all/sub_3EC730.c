void __fastcall sub_3EC730(__int64 a1, int a2, int a3, double a4)
{
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v7; // rax
  int v8; // edx
  int v9; // esi
  __int64 v10; // rcx
  int v11; // r12d
  int v12; // esi
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // edx
  __int64 v18; // [rsp+10h] [rbp-48h]
  int v19; // [rsp+1Ch] [rbp-3Ch]

  v4 = a2;
  v5 = a3;
  v7 = *(_QWORD *)(a1 + 832);
  v8 = *(unsigned __int16 *)(a1 + 842);
  v9 = *(_DWORD *)(v7 + 84);
  v10 = *(int *)(v7 + 64);
  v11 = *(_DWORD *)(a1 + 844) & 6;
  if ( (unsigned __int16)(*(_WORD *)(a1 + 48) - 207) <= 1u )
  {
    if ( v11 == 4 )
      sub_3E8420(a1, 1u, v8, v4, v10, v5, v9);
    else
      sub_3E8420(a1, 2u, v8, v10, v4, v5, v9);
    v14 = *(_QWORD *)(a1 + 832);
    v15 = *(_QWORD *)(v14 + 584);
    if ( !v15 )
      sub_3E4140(a4);
    v16 = *(int *)(*(_QWORD *)(v14 + 576) + 4 * v15 - 4);
    *(_QWORD *)(v14 + 584) = v15 - 1;
    v19 = v16;
    v18 = v16;
    sub_1D14D0(
      a1,
      3u,
      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
      *(int *)(*(_QWORD *)(a1 + 832) + 80LL),
      0x3BEA45E214ADDC55LL,
      v16,
      v11 == 4);
    v17 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL);
    if ( v11 == 4 )
    {
      sub_3E8420(a1, 0xCu, v17, v5, v18, v18, 0);
      sub_3E8420(
        a1,
        1u,
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) + (int)v4,
        *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
        v18,
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
    }
    else
    {
      sub_3E8420(a1, 0xCu, v17, v4, v18, v18, 0);
      sub_3E8420(
        a1,
        2u,
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
        *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
        v18,
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) + a3,
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
    }
    sub_3E62F0(*(_QWORD *)(a1 + 832), v19);
  }
  else if ( v11 == 4 )
  {
    sub_3E8420(a1, 1u, v8, v4, v10, v5, v9);
  }
  else
  {
    sub_3E8420(a1, 2u, v8, v10, v4, v5, v9);
    v12 = *(unsigned __int16 *)(a1 + 842);
    v13 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
    if ( v12 < v13 )
      sub_3EC660(a1, v12, v13, v5, v5, (~*(_BYTE *)(a1 + 844) & 6) != 0, a4);
  }
}

