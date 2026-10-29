__int64 __fastcall sub_97770(__int128 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // r14
  char *v7; // rax
  _DWORD *v8; // rax
  unsigned int v9; // r15d
  int v10; // r8d
  int v11; // r9d
  __int64 v13; // [rsp+0h] [rbp-C0h]
  __int64 v14; // [rsp+0h] [rbp-C0h]
  __int64 v15; // [rsp+8h] [rbp-B8h]
  __int64 v16; // [rsp+8h] [rbp-B8h]
  __int64 *v17; // [rsp+10h] [rbp-B0h]
  int v18; // [rsp+18h] [rbp-A8h]
  __int64 v19; // [rsp+18h] [rbp-A8h]
  __int64 v20; // [rsp+20h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+28h] [rbp-98h] BYREF
  __int64 v22; // [rsp+30h] [rbp-90h] BYREF
  __int64 v23; // [rsp+38h] [rbp-88h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-80h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-70h] BYREF
  __int64 v26; // [rsp+60h] [rbp-60h] BYREF
  __int64 v27; // [rsp+68h] [rbp-58h]
  __int64 v28; // [rsp+70h] [rbp-50h]
  __int128 v29; // [rsp+78h] [rbp-48h]
  unsigned __int64 v30; // [rsp+88h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  v1 = *((_QWORD *)&a1 + 1);
  v2 = sub_11C8E0(*((__int64 *)&a1 + 1), &v20, 14);
  if ( v2
    && (v3 = sub_11C8A0(v2, &v21), v18 = v3, v3)
    && (v4 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL), *(_DWORD *)(v3 + 4), 0), (v4 & (v4 - 1)) == 0)
    && (*((_QWORD *)&a1 + 1) = v20, v22 = v1, v5 = sub_129440(a1, (__int64)&v22, 0), (v6 = v5) != 0)
    && v22 == v5
    && *(_DWORD *)v5 == 14
    && *(_BYTE *)(v5 + 64) == 14
    && sub_125B60((unsigned __int8 *)(*(_QWORD *)(v5 + 72) + 16LL), v20, 0)
    && (v15 = *(_QWORD *)(v6 + 72), (v7 = (char *)sub_11C8A0(v6, &v23)) != nullptr)
    && (v17 = &v26, (unsigned __int8)sub_11FD80(v7, &v26, 1u))
    && v4 == v26
    && *(_BYTE *)v23 == 4
    && (v8 = *(_DWORD **)(v23 + 8), *v8 == 9)
    && (v13 = (__int64)(v8 + 8), v9 = sub_130BC0((const __m128i *)a1, v6, (__int64)(v8 + 8), v1, v21, 0), (_BYTE)v9) )
  {
    *((_QWORD *)&a1 + 1) = &v26;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    sub_123EA0(a1, v13, 1, 0xFFFF0000);
    if ( sub_A9AA0(a1, &v26, *(_QWORD *)(v6 + 8), v1, 1u) )
      goto LABEL_16;
    v27 = 0;
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28);
      v11 = 0;
      v28 = 0;
      *((_QWORD *)&v29 + 1) = 0;
    }
    sub_127FE0(a1, (__int64)&v26, v15, 1u, v10, v11, v13, v15, (int)&v26, v18, v20);
    if ( sub_A9AA0(a1, v17, *(_QWORD *)(v6 + 8), v1, 1u) || sub_A9D90(a1, v17, *(_QWORD *)(v6 + 8), v1, 1u) )
    {
LABEL_16:
      v9 = 0;
    }
    else
    {
      v24[1] = 0;
      v24[0] = 0xFFFFFFFF00000000LL;
      sub_B1520(a1, v1, (__int64)v24, v6, v14, v1, v21, 0);
      *((_QWORD *)&a1 + 1) = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      *(_DWORD *)v1 = 14;
      sub_120A10(v1 + 32, *((__int64 *)&a1 + 1), v4, SHIDWORD(v24[0]), **(_QWORD **)(v19 + 8), 0);
      sub_11CA10((char *)(v1 + 48), (char *)v24);
      sub_B1520(a1, v1, v1 + 64, v6, v16, v1, v1 + 64, 1);
      sub_12B6F0(v6, *((__int64 *)&a1 + 1), 11, -1, 1);
      v25[0] = 0xFFFFFFFF00000000LL;
      v25[1] = 0;
      sub_11CA10((char *)v25, (char *)(*(_QWORD *)(v6 + 72) + 16LL));
      sub_11CA10((char *)(v6 + 64), (char *)v25);
      sub_11CDA0((__int64)v25);
      sub_11CDA0((__int64)v24);
    }
    sub_93B40(v17);
  }
  else
  {
    return 0;
  }
  return v9;
}

