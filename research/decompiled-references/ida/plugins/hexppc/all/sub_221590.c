__int64 __fastcall sub_221590(__int64 a1, __int64 *a2, __int64 *a3, int a4, int a5, int a6)
{
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdx
  _DWORD *v11; // r15
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r15
  __int64 v20; // rax
  unsigned int v21; // ebx
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  __int64 v28; // [rsp+18h] [rbp-60h]
  __int64 v29; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v30[9]; // [rsp+30h] [rbp-48h] BYREF

  v8 = a6;
  v9 = *(_QWORD *)(a1 + 1496);
  v30[1] = (_QWORD *)__readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 432);
  v11 = (_DWORD *)(v10 + 104LL * a4);
  v12 = v10 + 104LL * a5;
  v13 = sub_1ED1E0(v12, v9, *a3, a6);
  sub_2184D0(&v29, v12 + 80, v13, v8);
  if ( (_BYTE)v29
    || (v23 = sub_1ED1E0((__int64)v11, *(_QWORD *)(a1 + 1496), *a2, v8),
        sub_2184D0(v30, (_DWORD)v11 + 80, v23, v8),
        copy_tinfo_t(),
        clear_tinfo_t(),
        (_BYTE)v29)
    || (LOBYTE(v24) = sub_119040(v8), v21 = v24, (_BYTE)v24) )
  {
    v14 = *(_QWORD *)(a1 + 56);
    if ( v14 == -1 )
      v14 = *(_QWORD *)(a1 + 40);
    v15 = j__qalloc_or_throw();
    *(_QWORD *)(v15 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v15 + 40) = 0;
    *(_QWORD *)(v15 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v15 + 56) = 0;
    *(_QWORD *)(v15 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v15 + 72) = 0;
    sub_32C520(v15, v14);
    v16 = *a2;
    *(_BYTE *)(v15 + 32) = 9;
    v28 = v16;
    v17 = j__qalloc_or_throw();
    *(_QWORD *)v17 = a1;
    *(_QWORD *)(v17 + 8) = v28;
    *(_DWORD *)(v17 + 16) = a4;
    *(_QWORD *)(v15 + 40) = v17;
    *(_DWORD *)(v15 + 68) = v8;
    if ( *v11 == 3
      && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1504) + 200LL))(
           *(_QWORD *)(a1 + 1504),
           (unsigned int)v11[2])
      && sub_119090(v8) )
    {
      v25 = v11[22] - *(_DWORD *)a2;
      *(_DWORD *)v15 = 67;
      *(_DWORD *)(v15 + 4) |= 0x10u;
      *(_DWORD *)(v15 + 36) = v25;
    }
    else
    {
      if ( (int)v8 > (int)v11[22] - *a2 )
      {
        if ( !under_debugger )
          sub_37EEE0(51514);
        BUG();
      }
      v18 = *(_DWORD *)(v15 + 68);
      *(_DWORD *)v15 = 4;
      *(_DWORD *)(v15 + 36) = v18;
    }
    v19 = *a3;
    *(_BYTE *)(v15 + 64) = 9;
    v20 = j__qalloc_or_throw();
    *(_QWORD *)v20 = a1;
    *(_QWORD *)(v20 + 8) = v19;
    *(_DWORD *)(v20 + 16) = a5;
    *(_QWORD *)(v15 + 72) = v20;
    if ( (get_tinfo_property() & 0xF) == 9 )
    {
      *(_DWORD *)(v15 + 4) |= 0x10u;
    }
    else if ( (get_tinfo_property() & 0x2F) == 0xD )
    {
      v30[0] = (_QWORD *)(v15 + 24);
      sub_C4570((__m128i *)(a1 + 1392), (unsigned __int64 *)(v15 + 24), v30);
      copy_tinfo_t();
      *(_BYTE *)(v15 + 33) |= 2u;
      *(_BYTE *)(v15 + 65) |= 2u;
    }
    sub_643E0(a1, v15);
    *a2 += v8;
    v21 = 1;
    *a3 += v8;
  }
  clear_tinfo_t();
  return v21;
}

