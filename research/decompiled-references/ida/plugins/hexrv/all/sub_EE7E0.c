unsigned __int64 __fastcall sub_EE7E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  _QWORD v16[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]

  v3 = a1 + 152;
  v17 = __readfsqword(0x28u);
  sub_312FC0(a1 + 152, a1 + 112);
  v6 = *(_QWORD *)(a2 + 64);
  v7 = *(int *)(v6 + 120);
  if ( v7 > 0 )
  {
    if ( (*(_BYTE *)(a2 + 26) & 4) != 0 )
      v8 = *(_QWORD *)(a2 + 520);
    else
      v8 = *(_QWORD *)(a2 + 328);
    v9 = *(int *)(a1 + 12);
    v10 = *(_QWORD *)(*(_QWORD *)(a2 + 480) + 24LL);
    v11 = (int)v9 + (int)v7;
    if ( *(_DWORD *)(v10 + 24) == 8 )
      v11 = v9 + v7;
    if ( v11 > v8 )
    {
      v13 = *(_QWORD *)(v6 + 1496);
      v14 = *(_QWORD *)(v6 + 1440);
      v16[1] = v11 - v8;
      v15 = *(_QWORD *)(v13 + 24);
      v16[0] = (v8 + v14) & *(_QWORD *)(v15 + 16);
      ((void (__fastcall *)(__int64, _QWORD *, _QWORD, __int64, __int64, __int64))sub_311AB0)(
        v3,
        v16,
        v16[0],
        v15,
        v10,
        v5);
    }
  }
  return v17 - __readfsqword(0x28u);
}

