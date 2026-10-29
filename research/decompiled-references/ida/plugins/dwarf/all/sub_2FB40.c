__int64 __fastcall sub_2FB40(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, const __m128i *a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  const __m128i *v10; // rbp
  __int64 v11; // r15
  __int64 idati; // rax
  unsigned int v14; // ecx
  __int64 v15; // [rsp+10h] [rbp-88h] BYREF
  __int64 v16; // [rsp+18h] [rbp-80h] BYREF
  int v17; // [rsp+20h] [rbp-78h] BYREF
  __int64 v18; // [rsp+28h] [rbp-70h]
  __int64 v19; // [rsp+30h] [rbp-68h]
  _QWORD v20[2]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v21; // [rsp+50h] [rbp-48h]
  unsigned __int64 v22; // [rsp+58h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 232);
  v22 = __readfsqword(0x28u);
  if ( (v6 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v6 == -1 )
  {
    if ( under_debugger )
      BUG();
    a1 = 30478;
    interr(30478);
  }
  v8 = a4;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 144LL);
  v17 = 0;
  v10 = a5;
  v11 = a6;
  v18 = -1;
  v19 = *(unsigned int *)(v9 + 192);
  if ( !(unsigned __int8)sub_554E0(&v15, &v17, a5, 0) || (v17 & 0xFFFFFFFD) == 1 )
    return 0;
  if ( *(_DWORD *)v15 != 1 )
  {
    if ( *(_DWORD *)v15 == 2 )
    {
      idati = *(_QWORD *)(v15 + 8);
      v14 = *(_DWORD *)(v15 + 16);
      v16 = 0;
      v21 = 257;
      v20[1] = v14;
      if ( !idati )
        idati = get_idati();
      v20[0] = idati;
      if ( (unsigned __int8)create_tinfo(&v16, 61, 189, v20) && (get_tinfo_property(v16, 2) & 0xF) == 0xC )
      {
        clear_tinfo_t(&v16);
        return sub_2F9C0(a1, a2, a3, v8, v10, v11);
      }
      clear_tinfo_t(&v16);
    }
    return 0;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v15 + 8) + 272LL) != 3 )
    return 0;
  return sub_2F9C0(a1, a2, a3, v8, v10, v11);
}

