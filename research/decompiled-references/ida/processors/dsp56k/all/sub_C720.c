__int64 __fastcall sub_C720(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdx
  __int16 v4; // cx
  __int64 v5; // rax

  v3 = a3 & 3;
  v4 = (unsigned __int8)byte_178E8[v3];
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v4;
  v5 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 248) = v5 + 40;
  *(_BYTE *)(v5 + 41) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = *((unsigned __int8 *)&dword_178EC + v3);
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

