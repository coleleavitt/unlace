__int64 __fastcall sub_169790(__int64 a1, double a2)
{
  unsigned int v2; // ebp
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // r13
  int v8; // ebp
  int v9; // r14d
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // [rsp+8h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 76) == 4
    && *(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) == 7
    && (v5 = *(_QWORD *)(a1 + 8), *(_DWORD *)(v5 + 352) == 1)
    && sub_330DE0(v5) == 1
    && (v6 = *(_QWORD *)(a1 + 56),
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
        sub_125B60((unsigned __int8 *)(v6 + 64), v7 + 64, 0, a2))
    && *(_BYTE *)(v6 + 48) != 2
    && *(_BYTE *)(v7 + 48) != 2
    && (v8 = sub_32EBC0(*(_DWORD *)v6), v9 = sub_32EBC0(*(_DWORD *)v7), v8 == v9)
    && sub_125B60((unsigned __int8 *)(v6 + 32), v7 + 32, 0, a2)
    && sub_125B60((unsigned __int8 *)(v6 + 48), v7 + 48, 0, a2)
    && (v2 = sub_169270(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), (_BYTE *)v6), (_BYTE)v2) )
  {
    v10 = sub_167E70(*(_QWORD *)(a1 + 64), *(_DWORD *)(v7 + 72), a2);
    *(_DWORD *)v7 = v9;
    v13 = v10;
    sub_11D5A0(v6);
    v11 = *(_DWORD *)(a1 + 24);
    v12 = *(_QWORD *)(a1 + 8);
    BYTE1(v11) &= ~2u;
    LOBYTE(v11) = v11 | 0x80;
    *(_DWORD *)(a1 + 24) = v11;
    sub_13B2C0(v12);
    sub_112550(a1, *(_QWORD *)(a1 + 8), v13);
    sub_66FA0(*(_QWORD *)(a1 + 64), 1);
  }
  else
  {
    return 0;
  }
  return v2;
}

