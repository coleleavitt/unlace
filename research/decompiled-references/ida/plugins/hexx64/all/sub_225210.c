__int64 __fastcall sub_225210(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned int a4,
        int a5,
        int a6,
        double a7)
{
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdx
  _DWORD *v12; // r15
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  unsigned __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // ebx
  int v31; // eax
  unsigned int v32; // eax
  int v33; // eax
  __int64 v36; // [rsp+18h] [rbp-60h]
  __int64 v37; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v38[9]; // [rsp+30h] [rbp-48h] BYREF

  v9 = a6;
  v10 = *(_QWORD *)(a1 + 1496);
  v38[1] = (_QWORD *)__readfsqword(0x28u);
  v11 = *(_QWORD *)(a1 + 432);
  v12 = (_DWORD *)(v11 + 104LL * (int)a4);
  v13 = v11 + 104LL * a5;
  v14 = sub_1F0E60(v13, v10, *a3, a6);
  sub_21C150(&v37, (const void *)(v13 + 80), v14, v9);
  if ( (_BYTE)v37
    || (v31 = sub_1F0E60((__int64)v12, *(_QWORD *)(a1 + 1496), *a2, v9),
        sub_21C150(v38, v12 + 20, v31, v9),
        copy_tinfo_t(),
        clear_tinfo_t(),
        (_BYTE)v37)
    || (LOBYTE(v32) = sub_11CA80(v9), v29 = v32, (_BYTE)v32) )
  {
    v17 = *(_QWORD *)(a1 + 56);
    if ( v17 == -1 )
      v17 = *(_QWORD *)(a1 + 40);
    v18 = j__qalloc_or_throw(80, v17, v15, v16);
    *(_QWORD *)(v18 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v18 + 40) = 0;
    *(_QWORD *)(v18 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v18 + 56) = 0;
    *(_QWORD *)(v18 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v18 + 72) = 0;
    sub_330970(v18, v17);
    v19 = *a2;
    *(_BYTE *)(v18 + 32) = 9;
    v36 = v19;
    v21 = j__qalloc_or_throw(24, v17, v19, v20);
    v22 = a4;
    *(_QWORD *)v21 = a1;
    *(_QWORD *)(v21 + 8) = v36;
    *(_DWORD *)(v21 + 16) = a4;
    *(_QWORD *)(v18 + 40) = v21;
    *(_DWORD *)(v18 + 68) = v9;
    if ( *v12 == 3
      && (v17 = (unsigned int)v12[2],
          (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1504) + 200LL))(
            *(_QWORD *)(a1 + 1504),
            v17))
      && sub_11CAD0(v9) )
    {
      v33 = v12[22] - *(_DWORD *)a2;
      *(_DWORD *)v18 = 67;
      *(_DWORD *)(v18 + 4) |= 0x10u;
      *(_DWORD *)(v18 + 36) = v33;
    }
    else
    {
      v23 = (int)v9;
      if ( (int)v9 > (__int64)((int)v12[22] - *a2) )
      {
        if ( !under_debugger )
          sub_383060(0xC93Au, a7);
        BUG();
      }
      v24 = *(_DWORD *)(v18 + 68);
      *(_DWORD *)v18 = 4;
      *(_DWORD *)(v18 + 36) = v24;
    }
    v25 = *a3;
    *(_BYTE *)(v18 + 64) = 9;
    v26 = j__qalloc_or_throw(24, v17, v23, v22);
    *(_QWORD *)v26 = a1;
    *(_QWORD *)(v26 + 8) = v25;
    *(_DWORD *)(v26 + 16) = a5;
    *(_QWORD *)(v18 + 72) = v26;
    if ( (get_tinfo_property() & 0xF) == 9 )
    {
      *(_DWORD *)(v18 + 4) |= 0x10u;
    }
    else if ( (get_tinfo_property() & 0x2F) == 0xD )
    {
      v38[0] = (_QWORD *)(v18 + 24);
      sub_C7FB0((__m128i *)(a1 + 1392), (unsigned __int64 *)(v18 + 24), v38);
      copy_tinfo_t();
      *(_BYTE *)(v18 + 33) |= 2u;
      *(_BYTE *)(v18 + 65) |= 2u;
    }
    sub_67E20((_QWORD *)a1, v18, v27, v28);
    *a2 += v9;
    v29 = 1;
    *a3 += v9;
  }
  clear_tinfo_t();
  return v29;
}

