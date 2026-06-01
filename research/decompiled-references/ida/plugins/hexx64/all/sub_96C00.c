__int64 __fastcall sub_96C00(__int128 a1)
{
  unsigned __int8 *v1; // r14
  int v2; // r12d
  unsigned int *v3; // rbx
  unsigned int v4; // r12d
  __int64 v6; // rax
  __int64 v7; // r15
  unsigned int v8; // eax
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // [rsp+8h] [rbp-80h]
  unsigned int *v12; // [rsp+18h] [rbp-70h] BYREF
  __int64 v13[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+30h] [rbp-58h]
  __int64 v15; // [rsp+38h] [rbp-50h]
  unsigned __int64 v16; // [rsp+48h] [rbp-40h]

  v1 = (unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 48LL);
  v2 = *(_DWORD *)(*((_QWORD *)&a1 + 1) + 36LL);
  v16 = __readfsqword(0x28u);
  v3 = *((unsigned int **)&a1 + 1);
  if ( (unsigned __int8)sub_11FD80((char *)(*((_QWORD *)&a1 + 1) + 48LL), v13, 1u)
    && 8 * v2 - 1 == v13[0]
    && sub_125B60((unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 32LL), *((_QWORD *)&a1 + 1) + 64LL, 0)
    && (*((_QWORD *)&a1 + 1) += 32LL, v12 = v3, v6 = sub_129440(a1, (__int64)&v12, 0), (v7 = v6) != 0)
    && (unsigned int)(*(_DWORD *)v6 - 8) <= 1
    && *(_DWORD *)(v6 + 68) > (signed int)v3[9]
    && (v11 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
        LOBYTE(v8) = sub_1255D0((unsigned __int8 *)(v6 + 64), v11, (__int64)(v3 + 8), 1),
        v4 = v8,
        (_BYTE)v8) )
  {
    sub_127A20((__int64)v13, a1, v7, 1, v9, v10);
    if ( v3 == (unsigned int *)sub_A9D90(a1, v13, *((_QWORD *)v12 + 1), 0, 1u) )
    {
      *(_DWORD *)v7 = 9;
      sub_126010((char *)(v7 + 32), v11, *v3, *((_QWORD *)v3 + 3), v1);
      sub_11D5A0((__int64)v3);
    }
    else
    {
      v4 = 0;
    }
    if ( v14 )
    {
      v15 = 0;
      qfree(v14);
    }
    qfree(v13[0]);
  }
  else
  {
    return 0;
  }
  return v4;
}

