__int64 __fastcall sub_2076A0(__int64 a1, __int64 a2, double a3)
{
  _DWORD *v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int8 v8; // al
  unsigned __int8 v9; // [rsp+Fh] [rbp-39h]
  __int64 v10; // [rsp+18h] [rbp-30h] BYREF
  __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v11[1] = __readfsqword(0x28u);
  v4 = *(_DWORD **)(a1 + 32);
  if ( *v4 != 12 )
    return 0;
  if ( (unsigned int)(**(_DWORD **)(a1 + 24) - 1) > 1 )
    return 0;
  v6 = sub_11C8A0((__int64)v4, nullptr);
  if ( !v6 )
    return 0;
  v7 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL), *(_DWORD *)(v6 + 4), 1);
  v10 = v7 & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 24LL) + 16LL);
  if ( v10 != v7 || (get_tinfo_property() & 0xF) != 0xA )
    return 0;
  v11[0] = get_tinfo_property();
  if ( (get_tinfo_property() & 0x3F) != 1
    && (unsigned __int8)sub_A8580(v11, (unsigned __int64 *)&v10, *(_DWORD *)(a2 + 4), 1u)
    && v10
    && *(int *)(a2 + 4) < (unsigned __int64)get_tinfo_size() )
  {
    v8 = sub_AB6D0(*(__m128i **)(a1 + 16), *(unsigned int **)(a1 + 24), a2, 1u, a3);
  }
  else
  {
    v8 = 0;
  }
  v9 = v8;
  clear_tinfo_t();
  return v9;
}

