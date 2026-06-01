__int64 __fastcall sub_E750(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // r13d
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rax
  const char *v17; // rax
  __int64 v18; // rax
  int v20; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v21[4]; // [rsp+24h] [rbp-74h] BYREF
  __int64 v22; // [rsp+28h] [rbp-70h] BYREF
  __m128i v23; // [rsp+30h] [rbp-68h] BYREF
  __int64 v24; // [rsp+40h] [rbp-58h]
  __int128 v25; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v1 = sub_BB20();
  sub_A1D0((__int64)&v23, v1, v2, v3);
  v4 = sub_BB20();
  sub_A0B0((__int64)&v25, v4, v5, v6, v7, v8, (__int128)_mm_load_si128(&v23), v24);
  v9 = sub_BB20();
  sub_A140(v9, (__int64)&v22, (__int64)&v20, (__int64)v21, 0);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v10 = sub_BB20();
  v11 = sub_A380(v10, v22);
  v12 = v20;
  v13 = v11;
  v15 = v14;
  v16 = sub_BB20();
  v17 = (const char *)sub_A3E0(v16, v13, v15);
  sub_67C0((__int64 *)a1, (__int64)"%s:%d", v17, v12);
  v18 = sub_BB20();
  sub_A410(v18, v13, v15);
  return a1;
}

