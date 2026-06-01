__int64 __fastcall sub_14BA90(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r14
  char *v10; // rax
  char *v11; // r15
  int v12; // ecx
  __int64 v13; // rsi
  unsigned __int8 v14; // al
  __int64 v15; // [rsp+0h] [rbp-80h]
  unsigned __int8 *v16; // [rsp+0h] [rbp-80h]
  unsigned __int8 v17; // [rsp+8h] [rbp-78h]
  __int64 v18; // [rsp+18h] [rbp-68h] BYREF
  __int64 v19; // [rsp+20h] [rbp-60h] BYREF
  __int64 v20; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v21[10]; // [rsp+30h] [rbp-50h] BYREF

  v21[3] = __readfsqword(0x28u);
  v5 = sub_117D20(a3, &v18, 11);
  if ( !v5 )
    return 0;
  if ( *(_BYTE *)(v5 + 32) != 4 )
    return 0;
  v7 = *(_DWORD **)(v5 + 40);
  if ( *v7 != 14 )
    return 0;
  v8 = sub_117CE0((__int64)v7, &v19);
  if ( !v8 )
    return 0;
  if ( *(_BYTE *)v19 != 4 )
    return 0;
  if ( **(_DWORD **)(v19 + 8) != 9 )
    return 0;
  v9 = sub_325150(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL), *(unsigned int *)(v8 + 4), 1);
  if ( (v9 & (v9 - 1)) != 0 )
    return 0;
  v15 = *(_QWORD *)(v19 + 8);
  v10 = (char *)sub_117CE0(*(_QWORD *)(v18 + 8), &v20);
  v11 = v10;
  if ( !v10 )
    return 0;
  if ( !(unsigned __int8)sub_11B1C0(v10, v21, 1u) )
    return 0;
  if ( v9 != v21[0] )
    return 0;
  v16 = (unsigned __int8 *)(v15 + 32);
  if ( !(unsigned __int8)sub_12C000(a1, a2, (__int64)v16, a2, v20, 0) )
    return 0;
  sub_11EE80((__int64)v21, v16);
  sub_AC960((__int64)a1, a2, (__int64)v21, a2, (__int64)v21, a2, v20, 0);
  v12 = HIDWORD(v21[0]);
  v13 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  *(_DWORD *)a3 = 14;
  sub_11BE50(a3 + 32, v13, v9, v12, **((_QWORD **)v11 + 1), 0);
  sub_117E50((char *)(a3 + 48), (char *)v21);
  *(_DWORD *)(a3 + 68) = *(_DWORD *)(a3 + 36);
  v14 = sub_126B30(a3, v13, 11, -1, 1);
  if ( !v14 )
  {
    if ( !under_debugger )
      sub_37CFE0(51687);
    BUG();
  }
  v17 = v14;
  *(_DWORD *)(a3 + 68) = HIDWORD(v21[0]);
  sub_1181E0((__int64)v21);
  return v17;
}

