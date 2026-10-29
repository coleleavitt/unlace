__int64 __fastcall sub_21D60(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  int _32bit; // eax
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 *v8; // r14
  __int64 v9; // r12
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // r13
  unsigned int v14; // ebp
  __int64 v15; // rcx
  int v19; // [rsp+Ch] [rbp-8Ch]
  __int64 v20; // [rsp+10h] [rbp-88h]
  __int64 v21; // [rsp+20h] [rbp-78h] BYREF
  __int128 v22; // [rsp+28h] [rbp-70h]
  __int128 v23; // [rsp+38h] [rbp-60h] BYREF
  int v24; // [rsp+48h] [rbp-50h]
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 16);
  v25 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
  {
    create_data();
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 304LL))(
      *(_QWORD *)(a1 + 8),
      a2,
      *(unsigned int *)(a1 + 24),
      a3,
      a4);
    _32bit = get_32bit();
    if ( _32bit >= -1 )
      goto LABEL_3;
  }
  else
  {
    _32bit = get_32bit();
    if ( _32bit >= -1 )
      goto LABEL_3;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) |= 0x20uLL;
  if ( (_32bit & 0x40000000) != 0 )
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) |= 0x40uLL;
LABEL_3:
  v6 = 12;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(__int64 **)(a1 + 8);
  v19 = *(_DWORD *)(a1 + 24);
  if ( (*(_BYTE *)(v7 + 8) & 0x20) == 0 )
    v6 = v8[24];
  v9 = a2 + v8[23];
  v10 = get_32bit();
  v11 = v8[1];
  v12 = *(_DWORD *)(v11 + 2208);
  if ( v12 && v12 < v10 )
  {
    if ( *(_BYTE *)(v11 + 2216) )
      sub_EC40();
    v14 = -1;
  }
  else
  {
    v13 = 0;
    v20 = v10;
    if ( v10 )
    {
      while ( 1 )
      {
        v21 = 0;
        v22 = 0;
        v24 = v19;
        v23 = 0;
        v15 = *(_QWORD *)(v7 + 8);
        if ( (v15 & 2) != 0 )
        {
          sub_15900(v8, (__int64)&v21, v9, v15, *(_QWORD *)(v7 + 24));
          v15 = *(_QWORD *)(v7 + 8);
        }
        if ( (v15 & 4) != 0 )
        {
          sub_21C40(v8, (__int64)&v23, v9, *(_QWORD *)(v7 + 16), v15);
          v15 = *(_QWORD *)(v7 + 8);
        }
        if ( (v15 & 8) != 0 )
          sub_159E0(v8, (_QWORD *)&v23 + 1, v9, v15);
        if ( *(_DWORD *)(v8[2] + 4) == 13 && (*(_BYTE *)(v7 + 8) & 0x10) == 0 )
          *((_QWORD *)&v23 + 1) &= ~1uLL;
        v14 = (**(__int64 (__fastcall ***)(__int64, __int64, __int64 *))v7)(v7, v9, &v21);
        clear_tinfo_t();
        if ( v21 )
        {
          *(_QWORD *)&v22 = 0;
          qfree();
        }
        if ( v14 )
          break;
        ++v13;
        v9 += v6;
        if ( v13 == v20 )
          goto LABEL_22;
      }
    }
    else
    {
LABEL_22:
      v14 = 0;
    }
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) &= 0xFFFFFFFFFFFFFF9FLL;
  return v14;
}
