__int64 __fastcall sub_1691D0(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v4; // rdi
  unsigned __int8 *v5; // r12
  unsigned int *v6; // r13
  int v7; // ebp
  unsigned int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // [rsp+8h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 76) == 4
    && *(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) == 7
    && (v4 = *(_QWORD *)(a1 + 8), *(_DWORD *)(v4 + 352) == 1)
    && sub_331100(v4) == 1
    && (v5 = *(unsigned __int8 **)(a1 + 56),
        v6 = *(unsigned int **)(*(_QWORD *)(a1 + 8) + 56LL),
        sub_1255A0(v5 + 64, (__int64)(v6 + 16), 0))
    && v5[48] != 2
    && *((_BYTE *)v6 + 48) != 2
    && (v7 = sub_32EEE0(*(unsigned int *)v5), v8 = sub_32EEE0(*v6), v7 == v8)
    && sub_1255A0(v5 + 32, (__int64)(v6 + 8), 0)
    && sub_1255A0(v5 + 48, (__int64)(v6 + 12), 0)
    && (v1 = sub_168CB0(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), v5, v9, v10, v11, v12), (_BYTE)v1) )
  {
    v13 = sub_1678B0(*(_QWORD *)(a1 + 64), v6[18]);
    *v6 = v8;
    v16 = v13;
    sub_11CFE0((__int64)v5);
    v14 = *(_DWORD *)(a1 + 24);
    v15 = *(_QWORD *)(a1 + 8);
    BYTE1(v14) &= ~2u;
    LOBYTE(v14) = v14 | 0x80;
    *(_DWORD *)(a1 + 24) = v14;
    sub_13AD00(v15);
    sub_111F90(a1, *(_QWORD *)(a1 + 8), v16);
    sub_669A0(*(_QWORD *)(a1 + 64), 1u, (__int64)"REMOVE_USELESS_JX_JXE");
  }
  else
  {
    return 0;
  }
  return v1;
}

