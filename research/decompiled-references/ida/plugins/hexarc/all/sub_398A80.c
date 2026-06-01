__int64 __fastcall sub_398A80(__int64 a1, __m128 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // eax
  unsigned int v4; // eax
  __int64 v6; // [rsp-10h] [rbp-28h]

  sub_383B90(a1, 0);
  if ( *(_DWORD *)(a1 + 80) != 1 )
    return 0;
  v2 = sub_37D1F0(*(_QWORD *)(a1 + 88));
  if ( !v2 )
    return 0;
  v3 = sub_3B9590(*(_QWORD *)(a1 + 128));
  v4 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, const char *, _QWORD, _QWORD, __int64 (__fastcall *)(__int64, __int64, __int64 *), __int64))callui)(
         205,
         0,
         0,
         "Select a structure",
         0,
         v3,
         sub_37CF80,
         v2);
  if ( !v4 )
    return 0;
  sub_3B95A0(*(_QWORD *)(a1 + 128), v4, v6);
  create_numbered_type_name();
  *(_BYTE *)(v2 + 13) |= 1u;
  *(_QWORD *)(v2 + 40) = *(_QWORD *)(v2 + 40) & 0xFF000000F00FFFFFLL | 0xAAAAAA0AA00000LL;
  sub_398480(a1, v2, 0, a2);
  return 1;
}

