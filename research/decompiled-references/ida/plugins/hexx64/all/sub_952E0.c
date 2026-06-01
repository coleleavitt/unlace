__int64 __fastcall sub_952E0(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdi
  int v15; // [rsp+0h] [rbp-88h]
  unsigned __int64 *v16; // [rsp+8h] [rbp-80h]
  int v17[4]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v18[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v19; // [rsp+30h] [rbp-58h]
  __int128 v20; // [rsp+38h] [rbp-50h]
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 76) & 1) != 0 )
    return (**(__int64 (__fastcall ***)(__int64, __int64, __int64))a1)(a1, a2, a2);
  v7 = *(_QWORD *)(a1 + 64);
  if ( v7 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL);
    if ( a3 )
      goto LABEL_4;
LABEL_6:
    if ( (unsigned __int8)sub_12CF30(v8, a2 + 64, (unsigned __int8 *)(v7 + 64), 0, 0, a6) )
      return (**(__int64 (__fastcall ***)(__int64, __int64, __int64))a1)(a1, a2, a2);
    if ( (*(_BYTE *)(a1 + 76) & 2) != 0 )
    {
      v11 = *(unsigned int *)(a1 + 72);
      if ( !(_DWORD)v11 && !*(_QWORD *)(a1 + 64) && *(_DWORD *)(a2 + 68) == 2 * *(_DWORD *)(v7 + 68) )
      {
        v16 = *(unsigned __int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 480LL) + 112LL);
        sub_123A40((__int64)v17, (unsigned __int8 *)(v7 + 64), v11, v10);
        if ( sub_1317D0((__int64)v17, v16, 0) && sub_125B60((unsigned __int8 *)v17, a2 + 64, 0) )
        {
          v14 = *(_QWORD *)(a1 + 8);
          v18[1] = 0;
          v19 = 0;
          v20 = 0;
          sub_127FE0(v14, (__int64)v18, v7 + 64, 1u, v12, v13, v15, (int)v16, v17[0], v17[2], 0);
          if ( !sub_124CC0(*(_QWORD *)(a1 + 8), v18, v7, a2, 0, 1u) )
          {
            sub_93B40(v18);
            sub_11CDA0((__int64)v17);
            return (**(__int64 (__fastcall ***)(__int64, __int64, __int64))a1)(a1, a2, a2);
          }
          if ( v19 )
          {
            *(_QWORD *)&v20 = 0;
            qfree(v19);
          }
          qfree(v18[0]);
        }
        sub_11CDA0((__int64)v17);
      }
    }
    return 0;
  }
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL);
  if ( !a3 )
    goto LABEL_6;
LABEL_4:
  if ( (unsigned __int8)sub_12CF30(v8, v7 + 64, (unsigned __int8 *)(a2 + 64), 0, 0, a6) )
    return (**(__int64 (__fastcall ***)(__int64, __int64, __int64))a1)(a1, a2, a2);
  return 0;
}

