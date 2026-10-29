__int64 __fastcall sub_97260(__int128 a1)
{
  __int64 v1; // r13
  char *v2; // r12
  _DWORD *v3; // rbx
  unsigned int v4; // r15d
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rdx
  unsigned __int8 *v9; // [rsp+0h] [rbp-A8h]
  __int64 v10; // [rsp+18h] [rbp-90h]
  _DWORD *v11; // [rsp+28h] [rbp-80h] BYREF
  char v12[16]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v13[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v14; // [rsp+50h] [rbp-58h]
  __int128 v15; // [rsp+58h] [rbp-50h]
  unsigned __int64 v16; // [rsp+68h] [rbp-40h]

  v1 = *((_QWORD *)&a1 + 1) + 64LL;
  v2 = (char *)(*((_QWORD *)&a1 + 1) + 32LL);
  v16 = __readfsqword(0x28u);
  v3 = *((_DWORD **)&a1 + 1);
  if ( sub_125B60((unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 32LL), *((_QWORD *)&a1 + 1) + 64LL, 0)
    && (*((_QWORD *)&a1 + 1) += 32LL, v11 = v3, v6 = sub_129440(a1, (__int64)&v11, 0), (v7 = v6) != 0)
    && *(_DWORD *)v6 == 5
    && *(_BYTE *)(v6 + 32) == 4
    && **(_DWORD **)(v6 + 40) == 9
    && (v9 = (unsigned __int8 *)(v6 + 64),
        (unsigned __int8)sub_1301F0((const __m128i *)a1, (__int64)v3, (__int64)v2, (__int64)v11, v6 + 64))
    && (v10 = (__int64)(v3 + 12),
        v4 = sub_130BC0(
               (const __m128i *)a1,
               (__int64)v11,
               *(_QWORD *)(v7 + 40) + 32LL,
               (__int64)v3,
               (__int64)(v3 + 12),
               0),
        (_BYTE)v4) )
  {
    sub_123A40((__int64)v12, (unsigned __int8 *)(*(_QWORD *)(v7 + 40) + 32LL), v8, (__int64)v12);
    *((_QWORD *)&a1 + 1) = v13;
    v13[0] = 0;
    v13[1] = 0;
    v14 = 0;
    v15 = 0;
    sub_123EA0(a1, (__int64)v12, 1, 0xFFFF0000);
    *((_QWORD *)&a1 + 1) = v13;
    sub_123EA0(a1, (__int64)v9, 1, 0xFFFF0000);
    if ( sub_A9AA0(a1, v13, *(_QWORD *)(v7 + 8), (__int64)v3, 1u) )
    {
      v4 = 0;
    }
    else
    {
      sub_1571F0(a1, v7, (__int64)v12, (__int64)v3, v10, 0);
      *v3 = 5;
      sub_11CA10(v2, v12);
      sub_11CDA0(v10);
      sub_125180(v1, v9);
    }
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14);
    }
    qfree(v13[0]);
    sub_11CDA0((__int64)v12);
  }
  else
  {
    return 0;
  }
  return v4;
}

