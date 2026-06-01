_QWORD *__fastcall sub_246440(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r15
  _QWORD *v8; // rbx
  _QWORD v10[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 216);
  v10[1] = __readfsqword(0x28u);
  v3 = qalloc_or_throw();
  *(_OWORD *)(v3 + 8) = 0;
  *(_QWORD *)v3 = 0;
  *(_QWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  v4 = qvector_reserve();
  v5 = *(_QWORD *)(v3 + 8);
  *(_QWORD *)v3 = v4;
  v6 = v4 + 72 * v5;
  *(_OWORD *)(v6 + 24) = 0;
  *(_QWORD *)v6 = -1;
  *(_DWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 12) = -1;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = 0;
  *(_DWORD *)(v6 + 56) = 0;
  *(_BYTE *)(v6 + 60) = 0;
  *(_QWORD *)(v6 + 64) = 0;
  ++*(_QWORD *)(v3 + 8);
  v7 = sub_3312A0(*(_QWORD *)(a1 + 8));
  sub_240DE0(v6, v2, a1, v7, *(_DWORD *)(*(_QWORD *)(v2 + 112) + 84LL), 2u);
  copy_tinfo_t();
  v10[0] = 1;
  v8 = (_QWORD *)sub_F1080((__int64)v10, v3, (__int64)"JUMPOUT");
  clear_tinfo_t();
  *(_DWORD *)(v8[3] + 56LL) |= 0x80u;
  *v8 = a2;
  return v8;
}

