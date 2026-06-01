__int64 __fastcall sub_9380(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // r13
  _QWORD *v4; // rax
  __int64 v6; // r14
  int *v7; // rax
  int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // r14
  int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // rax
  const char *v14; // r12
  unsigned __int8 v15; // al
  char v17[136]; // [rsp+30h] [rbp-C0h] BYREF
  unsigned __int64 v18; // [rsp+B8h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 16);
  v4 = (_QWORD *)getseg();
  if ( !v4 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 344LL))(a2, a3);
  if ( *v4 != *(_QWORD *)(a1 + 232) )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 344LL))(a2, a3);
  if ( (*(_BYTE *)(a2 + 721) & 0x40) == 0 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 344LL))(a2, a3);
  v6 = v3 - get_segm_base();
  if ( v6 <= 61439 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 344LL))(a2, a3);
  get_ea_name();
  if ( (unsigned __int64)(v6 - 65504) > 0x1F )
  {
    if ( !a3 )
    {
      v7 = *(int **)(a1 + 24);
      v8 = *v7;
      *v7 &= ~2u;
      btoa64();
      sub_7D40(a2, 0xFFFFFFFFLL, (__int64)"DEFR %s", v17);
      **(_DWORD **)(a1 + 24) = v8;
      v9 = sub_AC30(a1, v6, 1);
      v10 = v9;
      if ( v9 )
      {
        if ( *(_QWORD *)(v9 + 64) )
        {
          v11 = 0;
          v12 = 0;
          do
          {
            v13 = *(_QWORD *)(v10 + 56) + 48 * v12;
            if ( *(_QWORD *)(v13 + 8) > 1u )
            {
              v14 = *(const char **)v13;
              v15 = getinf();
              sub_7D40(a2, 0, (__int64)"%-*s BIT %s.%d", v15 - 1, v14, nullptr, v11);
            }
            v12 = ++v11;
          }
          while ( (unsigned __int64)v11 < *(_QWORD *)(v10 + 64) );
        }
      }
    }
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 344LL))(a2, a3);
  }
  if ( !a3 )
  {
    *(_DWORD *)(a2 + 144) &= 0xFFFFE7FF;
    sub_7D40(a2, 0, (__int64)&word_E2DE, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), 0);
  }
  return v18 - __readfsqword(0x28u);
}

