__int64 __fastcall sub_A27B0(__int128 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  unsigned int v7; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // [rsp+8h] [rbp-60h]
  unsigned __int8 v13[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( a5 == 1
    && (v5 = *((_QWORD *)&a1 + 1)) != 0
    && sub_11E8C0(*((unsigned int **)&a1 + 1))
    && sub_11E8C0((unsigned int *)a2)
    && (*(_DWORD *)(*((_QWORD *)&a1 + 1) + 4LL) & 0x40010) == 0
    && (*(_BYTE *)(*((_QWORD *)&a1 + 1) + 65LL) & 2) == 0
    && !sub_A2650(*(_QWORD *)(a1 + 64), *((__int64 *)&a1 + 1))
    && *(_DWORD *)(a2 + 36) == *(_DWORD *)(a2 + 68) + *(_DWORD *)(*((_QWORD *)&a1 + 1) + 68LL)
    && (unsigned __int8)sub_130BC0(
                          (const __m128i *)a1,
                          *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL),
                          *((_QWORD *)&a1 + 1) + 64LL,
                          *(_QWORD *)(a2 + 8),
                          a2 + 64,
                          1)
    && sub_132370((const __m128i *)a1, *((__int64 *)&a1 + 1), *((__int64 *)&a1 + 1), a2, a2, 0) )
  {
    sub_123A40((__int64)v13, (unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 64LL), v9, v10);
    *((_QWORD *)&a1 + 1) = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL);
    v7 = sub_132E20(a1, (__int64)v13, *(_QWORD *)(a2 + 8), a2 + 64, 8u);
    if ( (_BYTE)v7 )
    {
      if ( v13[0] == 4 )
      {
        v7 = 0;
      }
      else
      {
        v12 = *(_QWORD *)(v5 + 24);
        sub_1253A0(v5, *(_QWORD *)(a2 + 40));
        *(_QWORD *)(v5 + 24) = v12;
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
        if ( (*(_BYTE *)(v11 + 48) & 0x10) != 0 && *(int *)(v5 + 36) > 4 && (unsigned int)(*(_DWORD *)v5 - 22) <= 2 )
          sub_967E0(v5 + 48, v11, v12, 31);
        sub_125180(v5 + 64, v13);
        sub_A1280(v11, v5, *(_DWORD *)(a2 + 4));
        sub_11D5A0(a2);
      }
    }
    sub_11CDA0((__int64)v13);
  }
  else
  {
    return 0;
  }
  return v7;
}

