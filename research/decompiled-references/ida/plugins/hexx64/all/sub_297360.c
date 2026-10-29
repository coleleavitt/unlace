__int64 __fastcall sub_297360(__int64 a1, __int64 *a2, __int64 a3, double a4)
{
  __int64 v4; // r14
  __int64 result; // rax
  __int64 *v8; // r12
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // r15
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+8h] [rbp-80h]
  __int64 v28; // [rsp+8h] [rbp-80h]
  unsigned int v29; // [rsp+14h] [rbp-74h]
  __int64 v30; // [rsp+18h] [rbp-70h]
  __int64 v31; // [rsp+20h] [rbp-68h] BYREF
  __int64 v32; // [rsp+28h] [rbp-60h]
  __int64 v33; // [rsp+30h] [rbp-58h]
  __int64 v34; // [rsp+38h] [rbp-50h]
  unsigned __int64 v35; // [rsp+48h] [rbp-40h]

  v4 = a2[3];
  v35 = __readfsqword(0x28u);
  result = 0;
  if ( *(_DWORD *)(v4 + 8) == 1 )
  {
    v8 = *(__int64 **)(*(_QWORD *)(v4 + 64) + 24LL);
    v9 = *(_QWORD *)(v4 + 32);
    v10 = *(_DWORD *)(v9 + 12);
    *(_DWORD *)(v9 + 12) = -1;
    v31 = -1;
    v29 = v10;
    v32 = -4294967226LL;
    v33 = 0xFFFFFFFFLL;
    v34 = 0;
    v30 = *v8;
    v11 = qalloc_or_throw(48, (__int64)a2, a3, *v8);
    *(_QWORD *)(v11 + 16) = -1;
    v12 = v11;
    *(_DWORD *)(v11 + 24) = 70;
    *(_QWORD *)(v11 + 28) = -1;
    v27 = v11 + 16;
    sub_25AA70(v11 + 16, (__int64)&v31, a4);
    *(_QWORD *)v12 = v30;
    v13 = *(__int64 **)(v30 + 8);
    *(_QWORD *)(v12 + 8) = v13;
    *v13 = v12;
    *(_QWORD *)(v30 + 8) = v12;
    ++v8[2];
    sub_255050((__int64)&v31, a4);
    v17 = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), *(_QWORD *)(v4 + 32), v14, v15, v16, a4);
    *(_QWORD *)(v4 + 32) = 0;
    v20 = sub_286930(v27, (__int64)v17, v18, v19);
    v21 = *(_QWORD *)(v12 + 16);
    v22 = *(_QWORD *)(v20 + 64);
    *(_DWORD *)(v12 + 28) = v29;
    *((_DWORD *)sub_2413C0(v22, v21, v29, v23, a4) + 2) = 78;
    v31 = -1;
    v32 = -4294967226LL;
    v33 = 0xFFFFFFFFLL;
    v34 = 0;
    v28 = *v8;
    v24 = qalloc_or_throw(48, v21, *v8, 0xFFFFFFFFLL);
    *(_QWORD *)(v24 + 16) = -1;
    *(_DWORD *)(v24 + 24) = 70;
    *(_QWORD *)(v24 + 28) = -1;
    sub_25AA70(v24 + 16, (__int64)&v31, a4);
    *(_QWORD *)v24 = v28;
    v25 = *(__int64 **)(v28 + 8);
    *(_QWORD *)(v24 + 8) = v25;
    *v25 = v24;
    *(_QWORD *)(v28 + 8) = v24;
    ++v8[2];
    sub_255050((__int64)&v31, a4);
    v26 = **(_QWORD **)(v4 + 24);
    *(_DWORD *)(v24 + 24) = 72;
    *(_QWORD *)(v24 + 16) = v26;
    *(_QWORD *)(v24 + 40) = *(_QWORD *)(v4 + 24);
    *(_QWORD *)(v4 + 24) = 0;
    sub_240A20(
      v4,
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL),
      *(_QWORD *)(a1 + 64),
      1,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 72) + 130LL),
      0,
      a4);
    *a2 = sub_241AB0(*(_QWORD *)(v24 + 40));
    return 1;
  }
  return result;
}

