unsigned __int64 __fastcall sub_E2130(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rax
  int v6; // edx
  bool v7; // zf
  unsigned int v8; // esi
  __int64 *v9; // rcx
  __int64 v11; // r12
  int v12; // ebp
  const char *v13; // r14
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+10h] [rbp-68h] BYREF
  int v17; // [rsp+20h] [rbp-58h]
  int v18; // [rsp+24h] [rbp-54h]
  int v19; // [rsp+28h] [rbp-50h]
  __int16 v20; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD *)(a3 + 24);
  v21 = __readfsqword(0x28u);
  v5 = *a1;
  v16[1] = 0;
  v17 = 0;
  v19 = 0;
  v6 = *(_DWORD *)(v5 + 136);
  v16[0] = v5;
  v7 = *(_QWORD *)(a3 + 80) == 0;
  v20 = 0;
  v18 = v6;
  if ( v7 )
  {
    if ( *(_WORD *)(a3 + 94) )
    {
      v11 = 2;
      v12 = 0;
      v13 = *(const char **)(*(_QWORD *)(v4 + 8) + 16LL * **(__int16 **)(a3 + 8));
      while ( 1 )
      {
        ++v12;
        sub_DFDD0((__int64)v16, *(const char **)v4);
        sub_DFD90((__int64)v16, ".", 1);
        sub_DFDD0((__int64)v16, v13);
        if ( *(unsigned __int16 *)(a3 + 94) <= v12 )
          break;
        v14 = *(__int16 *)(*(_QWORD *)(a3 + 8) + v11);
        v11 += 2;
        v13 = *(const char **)(*(_QWORD *)(v4 + 8) + 16 * v14);
        sub_DFD90((__int64)v16, ", ", 2);
      }
    }
  }
  else
  {
    sub_DBBA0((__int64)v16, "index '%q'", *(_QWORD *)a3);
  }
  v8 = 1555;
  v9 = sub_DC130((__int64)v16);
  if ( (*(_BYTE *)(a3 + 99) & 3) != 2 )
    v8 = 2067;
  sub_E2080(a1, v8, a2, (__int64)v9, -6, 2u);
  return __readfsqword(0x28u) ^ v21;
}
