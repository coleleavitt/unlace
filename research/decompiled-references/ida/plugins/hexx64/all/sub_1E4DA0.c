__int64 __fastcall sub_1E4DA0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  char v7; // [rsp+8h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v2 = *a2;
  v3 = *((_DWORD *)a2 + 2);
  v8 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 16);
  v7 = 5;
  v6 = v2 - *(_QWORD *)(v4 + 1440);
  return (unsigned __int8)sub_1E4990(*(unsigned __int64 ***)(a1 + 24), (__int64 **)(a1 + 32), &v6, v3) ^ 1u;
}

