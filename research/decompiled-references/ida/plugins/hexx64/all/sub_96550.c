__int64 __fastcall sub_96550(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v5; // rax
  __int64 v6; // r14
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r12
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // r13
  unsigned int v15; // eax
  int v16; // r8d
  int v17; // r9d
  __int64 *v18; // [rsp+0h] [rbp-C8h]
  __int64 v19; // [rsp+8h] [rbp-C0h]
  int v20; // [rsp+8h] [rbp-C0h]
  __int64 v21; // [rsp+8h] [rbp-C0h]
  int v22; // [rsp+10h] [rbp-B8h]
  int v23; // [rsp+18h] [rbp-B0h]
  __int64 *v24; // [rsp+18h] [rbp-B0h]
  __int64 v25[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v26[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v27; // [rsp+40h] [rbp-88h]
  __int128 v28; // [rsp+48h] [rbp-80h]
  _QWORD v29[3]; // [rsp+60h] [rbp-68h] BYREF
  __int128 v30; // [rsp+78h] [rbp-50h]
  unsigned __int64 v31; // [rsp+88h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 68) == 8
    && (v5 = sub_11C8A0(a2, nullptr), (v6 = v5) != 0)
    && (v7 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(_DWORD *)(v5 + 4), 1), !HIDWORD(v7))
    && (v10 = sub_32ABC0(v7, 4, 1), v10 < 0) )
  {
    v18 = v25;
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    sub_123A40((__int64)v25, (unsigned __int8 *)(a2 + 64), v8, v9);
    v2 = sub_127850((unsigned __int64)v25, v19, 4u, 0);
    if ( (_BYTE)v2 )
    {
      v26[0] = 0;
      v26[1] = 0;
      v27 = 0;
      v28 = 0;
      sub_127FE0(a1, (__int64)v26, a2 + 64, 0, v11, v12, (int)v25, v19, (int)v26, v23, v25[0]);
      v13 = sub_A9AA0(a1, v26, *(_QWORD *)(a2 + 8), 0, 1u);
      v14 = v13;
      if ( v13
        && *(_DWORD *)v13 == 13
        && (unsigned __int8)sub_11FD80((char *)(v13 + 48), v29, 1u)
        && v29[0] == 1
        && sub_125B60((unsigned __int8 *)(v14 + 32), (__int64)v18, 0)
        && (LOBYTE(v15) = sub_125B60((unsigned __int8 *)(v14 + 64), (__int64)v18, 0), v2 = v15, (_BYTE)v15) )
      {
        memset(v29, 0, sizeof(v29));
        v30 = 0;
        sub_127FE0(a1, (__int64)v29, (__int64)v18, 0, v16, v17, (int)v18, v20, v22, (int)v29, v25[0]);
        if ( sub_A9D90(a1, v24, *(_QWORD *)(a2 + 8), v14, 1u) )
        {
          v2 = 0;
        }
        else
        {
          sub_11D5A0(v14);
          sub_120B00(v6, v21, v10);
          *(_DWORD *)a2 = 13;
        }
        sub_93B40(v24);
      }
      else
      {
        v2 = 0;
      }
      if ( v27 )
      {
        *(_QWORD *)&v28 = 0;
        qfree(v27);
      }
      qfree(v26[0]);
    }
    sub_11CDA0((__int64)v18);
  }
  else
  {
    return 0;
  }
  return v2;
}

